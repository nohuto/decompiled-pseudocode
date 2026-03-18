/*
 * XREFs of InitScancodeMap @ 0x1C005FBD0
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0019FB0 (OpenCacheKeyEx.c)
 *     FastGetProfileValue @ 0x1C0060B60 (FastGetProfileValue.c)
 *     RtlLoadStringOrError @ 0x1C00612C0 (RtlLoadStringOrError.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void InitScancodeMap()
{
  const WCHAR *v0; // rdi
  void *i; // rax
  void *v2; // rbx
  NTSTATUS v3; // eax
  ULONG v4; // r14d
  const WCHAR *v5; // rdi
  void *v6; // rbx
  NTSTATUS v7; // eax
  ULONG v8; // edi
  PVOID v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 Pool2; // rbx
  char v13; // si
  PVOID v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  char v18; // r14
  ULONG Length; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+44h] [rbp-BCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BackTrace[20]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 KeyValueInformation; // [rsp+100h] [rbp+0h] BYREF
  _WORD v24[40]; // [rsp+110h] [rbp+10h] BYREF

  if ( gpScancodeMap )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      gpScancodeMap);
    gpScancodeMap = 0LL;
  }
  Length = 0;
  v20 = gdwPolicyFlags;
  v0 = L"Scancode Map";
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  if ( ((unsigned __int64)L"Scancode Map" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v24[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map", v24);
    v0 = v24;
  }
  for ( i = OpenCacheKeyEx(0LL, 8LL, 131097LL, &v20); ; i = OpenCacheKeyEx(0LL, 8LL, 131097LL, &v20) )
  {
    v2 = i;
    if ( !i )
      goto LABEL_10;
    Length = 16;
    RtlInitUnicodeString(&DestinationString, v0);
    v3 = ZwQueryValueKey(v2, &DestinationString, KeyValuePartialInformation, &KeyValueInformation, Length, &Length);
    if ( v3 >= 0 )
    {
      Length = DWORD2(KeyValueInformation);
      memmove(0LL, (char *)&KeyValueInformation + 12, DWORD2(KeyValueInformation));
      ZwClose(v2);
      v4 = Length;
      goto LABEL_9;
    }
    if ( v3 == -2147483643 )
      break;
    if ( !v20 )
    {
      if ( v2 )
        ZwClose(v2);
      goto LABEL_10;
    }
    ZwClose(v2);
  }
  ZwClose(v2);
  v4 = DWORD2(KeyValueInformation);
LABEL_9:
  if ( v4 - 13 > 0xFFF1 )
    goto LABEL_10;
  v9 = gpLeakTrackingAllocator;
  v10 = v4 + 8LL;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6D637355) != 0x6D637355
    || (v11 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_32:
    Pool2 = ExAllocatePool2(260LL, v10);
    goto LABEL_33;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v11) != 1835234133 )
  {
    if ( ++v11 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_32;
  }
  v13 = 0;
  if ( v10 < 0x1000 || (v10 & 0xFFF) != 0 )
  {
    v13 = 1;
    v10 = v4 + 24LL;
  }
  Pool2 = ExAllocatePool2(260LL, v10);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v13 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v9,
                              Pool2,
                              BackTrace) )
      {
        Pool2 += 16LL;
LABEL_33:
        if ( !Pool2 )
          goto LABEL_10;
        goto LABEL_34;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v9,
                                 Pool2,
                                 BackTrace) )
    {
LABEL_34:
      FastGetProfileValue(0LL, 8LL, L"Scancode Map");
      gpScancodeMap = (void *)Pool2;
      goto LABEL_10;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
LABEL_10:
  if ( gpFlexMap )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      gpFlexMap);
    gpFlexMap = 0LL;
    gdwFlexMapSize = 0;
  }
  v20 = gdwPolicyFlags;
  v5 = L"Scancode Map Ex";
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  if ( ((unsigned __int64)L"Scancode Map Ex" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v24[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map Ex", v24);
    v5 = v24;
  }
  while ( 1 )
  {
    v6 = OpenCacheKeyEx(0LL, 8LL, 131097LL, &v20);
    if ( !v6 )
      return;
    Length = 16;
    RtlInitUnicodeString(&DestinationString, v5);
    v7 = ZwQueryValueKey(v6, &DestinationString, KeyValuePartialInformation, &KeyValueInformation, Length, &Length);
    if ( v7 >= 0 )
    {
      Length = DWORD2(KeyValueInformation);
      memmove(0LL, (char *)&KeyValueInformation + 12, DWORD2(KeyValueInformation));
      ZwClose(v6);
      v8 = Length;
      goto LABEL_17;
    }
    if ( v7 == -2147483643 )
      break;
    if ( !v20 )
    {
      ZwClose(v6);
      return;
    }
    ZwClose(v6);
  }
  ZwClose(v6);
  v8 = DWORD2(KeyValueInformation);
LABEL_17:
  if ( v8 >= 0x10 && (v8 & 0xF) == 0 )
  {
    v14 = gpLeakTrackingAllocator;
    v15 = v8;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6D637355) != 0x6D637355
      || (v16 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_52:
      v17 = ExAllocatePool2(260LL, v8);
      goto LABEL_53;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v16) != 1835234133 )
    {
      if ( ++v16 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_52;
    }
    v18 = 0;
    if ( v8 < 0x1000uLL || (v8 & 0xFFF) != 0 )
    {
      v18 = 1;
      v15 = v8 + 16LL;
    }
    v17 = ExAllocatePool2(260LL, v15);
    if ( v17 )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v18 && (unsigned __int64)(v17 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v14,
                                v17,
                                BackTrace) )
        {
          v17 += 16LL;
LABEL_53:
          if ( !v17 )
            return;
          goto LABEL_54;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v14,
                                   v17,
                                   BackTrace) )
      {
LABEL_54:
        FastGetProfileValue(0LL, 8LL, L"Scancode Map Ex");
        gdwFlexMapSize = v8 >> 4;
        gpFlexMap = (void *)v17;
        return;
      }
      ExFreePoolWithTag((PVOID)v17, 0);
    }
  }
}
