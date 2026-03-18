/*
 * XREFs of PopWriteBsdPoInfo @ 0x14032B2E0
 * Callers:
 *     PopBsdFlush @ 0x1407A64C4 (PopBsdFlush.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceBsdWriteTime @ 0x14032B1D8 (PopDiagTraceBsdWriteTime.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140429820 (RtlCompareMemory.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     memset @ 0x140435A00 (memset.c)
 *     RtlSetSystemBootStatus @ 0x1407A6550 (RtlSetSystemBootStatus.c)
 *     PopQpcTimeInMs @ 0x140A87B50 (PopQpcTimeInMs.c)
 */

void __fastcall PopWriteBsdPoInfo(unsigned int a1)
{
  unsigned int v2; // ebx
  __int128 *v3; // rbp
  __int128 *v4; // rsi
  size_t v5; // r14
  int v6; // ebx
  int v7; // eax
  LARGE_INTEGER v8; // [rsp+20h] [rbp-78h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-70h] BYREF
  _BYTE Src[64]; // [rsp+30h] [rbp-68h] BYREF

  v2 = 64;
  memset(Src, 0, sizeof(Src));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( a1 == 7 )
  {
    v3 = &PopBsdPowerTransition;
    v4 = &PopBsdPowerTransitionOnDisk;
LABEL_3:
    v2 = 32;
    goto LABEL_4;
  }
  if ( a1 == 16 )
  {
    v3 = &PopBsdPowerTransitionExtension;
    v4 = &PopBsdPowerTransitionExtensionOnDisk;
    goto LABEL_3;
  }
  if ( a1 != 14 )
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
    memmove(Src, v3, v2);
    PopReleaseRwLock(&PopBsdUpdateLock);
    v6 = RtlSetSystemBootStatus(a1, Src, v2, 0LL);
    PopAcquireRwLockExclusive(&PopBsdUpdateLock);
    if ( v6 >= 0 )
    {
      memmove(v4, Src, v5);
    }
    else if ( a1 == 14 && HIWORD(xmmword_140C6AEB0) != 0xFFFF )
    {
      ++HIWORD(xmmword_140C6AEB0);
    }
  }
LABEL_7:
  v8 = KeQueryPerformanceCounter(0LL);
  v7 = PopQpcTimeInMs(&PerformanceCounter, &v8);
  PopDiagTraceBsdWriteTime(a1, v7, v6);
}
