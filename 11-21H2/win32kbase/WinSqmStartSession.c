/*
 * XREFs of WinSqmStartSession @ 0x1C005B74C
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     WinSqmEventWrite @ 0x1C005B8DC (WinSqmEventWrite.c)
 *     ?RegisterWinSqmProvider@@YAKXZ @ 0x1C005B920 (-RegisterWinSqmProvider@@YAKXZ.c)
 *     ?IsSessionDisabled@@YAHPEBU_GUID@@K@Z @ 0x1C005B9B8 (-IsSessionDisabled@@YAHPEBU_GUID@@K@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 WinSqmStartSession()
{
  PVOID v0; // rdi
  __int64 Pool2; // rbx
  __int128 v2; // xmm0
  ULONG v3; // eax
  __int64 v5; // rax
  int v6; // [rsp+28h] [rbp-E0h] BYREF
  int v7; // [rsp+30h] [rbp-D8h] BYREF
  PVOID BackTrace[20]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD Sid[4]; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F8h] [rbp-10h] BYREF
  void *v11; // [rsp+108h] [rbp+0h]
  __int64 v12; // [rsp+110h] [rbp+8h]
  _DWORD *v13; // [rsp+118h] [rbp+10h]
  ULONG v14; // [rsp+120h] [rbp+18h]
  int v15; // [rsp+124h] [rbp+1Ch]
  int *v16; // [rsp+128h] [rbp+20h]
  __int64 v17; // [rsp+130h] [rbp+28h]
  int *v18; // [rsp+138h] [rbp+30h]
  __int64 v19; // [rsp+140h] [rbp+38h]

  Sid[0] = 257;
  v6 = 0;
  v7 = 401412;
  Sid[1] = 83886080;
  Sid[2] = 18;
  if ( (dword_1C029663C & 2) == 0 && (unsigned int)IsSessionDisabled(&Win32kSQMSession, 0x62004u) )
  {
    dword_1C029663C |= 2u;
    return -1LL;
  }
  v0 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6D715355) != 0x6D715355
    || (v5 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_4:
    Pool2 = ExAllocatePool2(260LL, 40LL);
    goto LABEL_5;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v5) != 1836143445 )
  {
    if ( ++v5 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(260LL, 56LL);
  if ( !Pool2 )
    return -1LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v0,
                             Pool2,
                             BackTrace) )
      goto LABEL_17;
    Pool2 += 16LL;
LABEL_5:
    if ( !Pool2 )
      return -1LL;
    goto LABEL_6;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v0,
                           Pool2,
                           BackTrace) )
  {
LABEL_17:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return -1LL;
  }
LABEL_6:
  v2 = xmmword_1C028F918;
  *(_DWORD *)(Pool2 + 16) = 40;
  *(_OWORD *)Pool2 = v2;
  *(_DWORD *)(Pool2 + 20) = v6;
  *(GUID *)(Pool2 + 24) = Win32kSQMSession;
  if ( RegHandle || !RegisterWinSqmProvider() )
  {
    UserData.Ptr = (ULONGLONG)&Win32kSQMSession;
    v11 = &unk_1C029A528;
    *(_QWORD *)&UserData.Size = 16LL;
    v12 = 4LL;
    v3 = RtlLengthSid(Sid);
    v13 = Sid;
    v14 = v3;
    v15 = 0;
    v16 = &v7;
    v17 = 4LL;
    v18 = &v6;
    v19 = 4LL;
    WinSqmEventWrite(&SQM_START_SESSION, 5u, &UserData);
    return Pool2;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (void *)Pool2);
  return -1LL;
}
