/*
 * XREFs of ?xxxDispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N@Z @ 0x1C0143C6C
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C005C190 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__&DrvSampleDisplayState_ @ 0x1C0143278 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__-D.c)
 *     ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEAU?$AlpcReply@$07@1@@Z @ 0x1C0143340 (--$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU-$AlpcRequest@$07@1@PEAU-$AlpcReply@$07.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall xxxDispBrokerSetDisplayConfig(
        int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        int a3,
        int a4,
        bool a5)
{
  unsigned int v5; // esi
  __int64 result; // rax
  PVOID v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 Pool2; // rdi
  char v11; // r14
  __int64 v12; // r9
  int v13; // ebx
  int v14; // [rsp+20h] [rbp-E0h] BYREF
  unsigned int *v15[5]; // [rsp+28h] [rbp-D8h] BYREF
  PVOID BackTrace[20]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v17[20]; // [rsp+F0h] [rbp-10h] BYREF
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v18; // [rsp+198h] [rbp+98h] BYREF
  int v19; // [rsp+1A0h] [rbp+A0h] BYREF
  int v20; // [rsp+1A8h] [rbp+A8h] BYREF

  v20 = a4;
  v19 = a3;
  v18 = a2;
  v14 = a1;
  v5 = 216 * a1 + 80;
  if ( v5 >= 0x7FFF )
    return 2147483653LL;
  v7 = gpLeakTrackingAllocator;
  v8 = v5;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x44535042) != 0x44535042
    || (v9 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_7:
    Pool2 = ExAllocatePool2(261LL, v5);
    goto LABEL_8;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 1146310722 )
  {
    if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_7;
  }
  v11 = 0;
  if ( v5 < 0x1000uLL || (v5 & 0xFFF) != 0 )
  {
    v11 = 1;
    v8 = v5 + 16LL;
  }
  Pool2 = ExAllocatePool2(261LL, v8);
  if ( !Pool2 )
    return 3221225495LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v11 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            v7,
                            Pool2,
                            BackTrace) )
      goto LABEL_20;
LABEL_19:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 3221225495LL;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v7,
                           Pool2,
                           BackTrace) )
    goto LABEL_19;
  Pool2 += 16LL;
LABEL_8:
  if ( !Pool2 )
    return 3221225495LL;
LABEL_20:
  v15[0] = (unsigned int *)&v14;
  v15[1] = (unsigned int *)&v19;
  v15[2] = (unsigned int *)&v20;
  v15[3] = (unsigned int *)&a5;
  v15[4] = (unsigned int *)&v18;
  InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622___DrvSampleDisplayState_(
    (_WORD *)Pool2,
    v15,
    v5 - 80);
  memset(v17, 0, 0x48uLL);
  v13 = DispBroker::DispBrokerClient::SyncMessage<8>(
          (__int64)DispBroker::DispBrokerClient::s_pSessionBroker,
          Pool2,
          (__int64)v17,
          v12);
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)Pool2);
  result = v17[16];
  if ( v13 < 0 )
    return (unsigned int)v13;
  return result;
}
