/*
 * XREFs of ?SetBufferProperty@CCompositionCubeMapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02349E0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CCompositionCubeMapMarshaler::SetBufferProperty(
        DirectComposition::CCompositionCubeMapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v7; // ebx
  int v8; // r8d
  unsigned int v9; // r15d
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  PVOID v12; // rbp
  __int64 v13; // rax
  __int64 Pool2; // rsi
  char v15; // r12
  __int64 v16; // rdx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-C8h] BYREF
  bool v19; // [rsp+100h] [rbp+18h]

  v7 = 0;
  *a6 = 0;
  v8 = a3 - 1;
  if ( !v8 )
  {
    if ( a5 == 16 )
    {
      v16 = *((unsigned int *)this + 20);
      if ( (unsigned int)v16 < 6 * *((_DWORD *)this + 22) )
      {
        *((_DWORD *)this + 4) |= 0x40u;
        *(_OWORD *)(*((_QWORD *)this + 8) + 24 * v16 + 8) = *(_OWORD *)a4;
        goto LABEL_26;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( v8 != 1 )
    return (unsigned int)-1073741811;
  if ( a5 != 12 )
    return (unsigned int)-1073741811;
  *((_DWORD *)this + 4) |= 0x20u;
  v9 = *a4;
  v10 = a4[1];
  v19 = a4[2] != 0;
  if ( !*a4 || (unsigned int)(v10 - 1) > 0x1E || v9 < 1 << v10 )
    return (unsigned int)-1073741811;
  v11 = 144 * v10;
  if ( !is_mul_ok(v10, 0x90uLL) )
    return (unsigned int)-1073741675;
  v12 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6D634344) != 0x6D634344
    || (v13 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_12:
    Pool2 = ExAllocatePool2(261LL, 144 * v10);
    goto LABEL_13;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v13) != 1835221828 )
  {
    if ( ++v13 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_12;
  }
  v15 = 0;
  if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
  {
    v15 = 1;
    v11 += 16LL;
  }
  Pool2 = ExAllocatePool2(261LL, v11);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v15 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v12,
           Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_25;
    }
LABEL_24:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return (unsigned int)-1073741801;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v12,
          (const void *)Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_24;
  Pool2 += 16LL;
LABEL_13:
  if ( Pool2 )
  {
LABEL_25:
    *((_BYTE *)this + 92) = v19;
    *((_DWORD *)this + 21) = v9;
    *((_DWORD *)this + 18) = 6 * v10;
    *((_DWORD *)this + 22) = v10;
    *((_QWORD *)this + 8) = Pool2;
LABEL_26:
    *a6 = 1;
    return v7;
  }
  return (unsigned int)-1073741801;
}
