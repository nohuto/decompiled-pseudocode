/*
 * XREFs of PopWriteBsdPoInfo @ 0x14032B570
 * Callers:
 *     PopBsdFlush @ 0x1407A66B4 (PopBsdFlush.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceBsdWriteTime @ 0x14032B468 (PopDiagTraceBsdWriteTime.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140429BB0 (RtlCompareMemory.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlSetSystemBootStatus @ 0x1407A6740 (RtlSetSystemBootStatus.c)
 *     PopQpcTimeInMs @ 0x140A87B50 (PopQpcTimeInMs.c)
 */

void __fastcall PopWriteBsdPoInfo(RTL_BSD_ITEM_TYPE BootStatusInformationClass)
{
  ULONG v2; // ebx
  __int128 *v3; // rbp
  __int128 *v4; // rsi
  size_t v5; // r14
  NTSTATUS v6; // ebx
  int v7; // eax
  LARGE_INTEGER v8; // [rsp+20h] [rbp-78h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-70h] BYREF
  _BYTE DataBuffer[64]; // [rsp+30h] [rbp-68h] BYREF

  v2 = 64;
  memset(DataBuffer, 0, sizeof(DataBuffer));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( BootStatusInformationClass == RtlBsdPowerTransition )
  {
    v3 = &PopBsdPowerTransition;
    v4 = &PopBsdPowerTransitionOnDisk;
LABEL_3:
    v2 = 32;
    goto LABEL_4;
  }
  if ( BootStatusInformationClass == RtlBsdPowerTransitionExtension )
  {
    v3 = &PopBsdPowerTransitionExtension;
    v4 = &PopBsdPowerTransitionExtensionOnDisk;
    goto LABEL_3;
  }
  if ( BootStatusInformationClass != RtlBsdItemPowerButtonPressInfo )
  {
    v6 = -1073741811;
    goto LABEL_7;
  }
  v3 = &PopBsdPhysicalPowerButtonInfo;
  v4 = &PopBsdPhysicalPowerButtonInfoOnDisk;
LABEL_4:
  v5 = v2;
  if ( RtlCompareMemory(v3, v4, v2) == v2 )
  {
    v6 = -1073741791;
  }
  else
  {
    memmove(DataBuffer, v3, v2);
    PopReleaseRwLock(&PopBsdUpdateLock);
    v6 = RtlSetSystemBootStatus(BootStatusInformationClass, DataBuffer, v2, 0LL);
    PopAcquireRwLockExclusive(&PopBsdUpdateLock);
    if ( v6 >= 0 )
    {
      memmove(v4, DataBuffer, v5);
    }
    else if ( BootStatusInformationClass == RtlBsdItemPowerButtonPressInfo && HIWORD(xmmword_140C6AE00) != 0xFFFF )
    {
      ++HIWORD(xmmword_140C6AE00);
    }
  }
LABEL_7:
  v8 = KeQueryPerformanceCounter(0LL);
  v7 = PopQpcTimeInMs(&PerformanceCounter, &v8);
  PopDiagTraceBsdWriteTime((unsigned int)BootStatusInformationClass, v7, v6);
}
