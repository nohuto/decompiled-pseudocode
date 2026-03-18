/*
 * XREFs of GreSfmCleanupPresentHistory @ 0x1C0086D50
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0059C80 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void GreSfmCleanupPresentHistory()
{
  __int64 Pool2; // rbx
  __int64 v1; // r8
  __int64 v2; // rdi
  PVOID v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdi
  unsigned int v7; // esi
  __int64 v8; // rax
  char v9; // r14
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C8h]
  _DWORD v12[4]; // [rsp+48h] [rbp-C0h] BYREF
  PVOID BackTrace[20]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v14[160]; // [rsp+F8h] [rbp-10h] BYREF

  memset(v14, 0, sizeof(v14));
  v10 = 0LL;
  Pool2 = (__int64)v14;
  v11 = 0LL;
  LOBYTE(v1) = 1;
  if ( (int)((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))qword_1C02966A8)(&v10, 0LL, v1, 0LL) < 0 )
    return;
  v2 = (unsigned int)v10;
  if ( !(_DWORD)v10 )
    return;
  if ( (unsigned int)v10 > 8 )
  {
    if ( !(20 * (_DWORD)v10) )
      return;
    v3 = gpLeakTrackingAllocator;
    v4 = (unsigned int)(20 * v10);
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x706D7447) != 0x706D7447
      || (v8 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_6:
      Pool2 = ExAllocatePool2(260LL, v4);
      goto LABEL_7;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v8) != 1886221383 )
    {
      if ( ++v8 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_6;
    }
    v9 = 0;
    if ( v4 < 0x1000 || ((20 * (_WORD)v10) & 0xFFF) != 0 )
    {
      v9 = 1;
      v4 += 16LL;
    }
    Pool2 = ExAllocatePool2(260LL, v4);
    if ( Pool2 )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( v9 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v3,
                                Pool2,
                                BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_7;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v3,
                                   Pool2,
                                   BackTrace) )
      {
LABEL_7:
        if ( !Pool2 )
          return;
        goto LABEL_8;
      }
      ExFreePoolWithTag((PVOID)Pool2, 0);
    }
    Pool2 = 0LL;
    goto LABEL_7;
  }
LABEL_8:
  memset((void *)Pool2, 0, 20 * v2);
  v11 = Pool2;
  LOBYTE(v5) = 1;
  if ( (int)((__int64 (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))qword_1C02966A8)(&v10, 0LL, v5, 0LL) >= 0
    && (_DWORD)v10
    && (unsigned int)v10 <= (unsigned int)v2 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_DWORD *)(v11 + 20 * v6);
      if ( (int)((__int64 (__fastcall *)(_QWORD))qword_1C02966E8)(v7) >= 0 )
        ((void (__fastcall *)(_QWORD))qword_1C02966D0)(v7);
      v12[0] = *(_DWORD *)(v11 + 20 * v6);
      ((void (__fastcall *)(_DWORD *, _QWORD))qword_1C02966B8)(v12, 0LL);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < (unsigned int)v10 );
  }
  if ( (_BYTE *)Pool2 != v14 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (void *)Pool2);
}
