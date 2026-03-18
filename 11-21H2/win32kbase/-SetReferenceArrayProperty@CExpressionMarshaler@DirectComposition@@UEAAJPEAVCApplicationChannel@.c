/*
 * XREFs of ?SetReferenceArrayProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00A7A60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C000B2B0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPEAVCWeakReferenceBase@2@@Z @ 0x1C009BA0C (-GetWeakReferenceBase@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@PEAPE.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetReferenceArrayProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int WeakReferenceBase; // edi
  PVOID v9; // rbp
  unsigned __int64 v10; // rdx
  __int64 Pool2; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v14; // rcx
  __int64 v16; // rax
  char v17; // r14
  __int64 v18; // rsi
  __int64 v19; // r14
  char *v20; // rdx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-C8h] BYREF

  WeakReferenceBase = 0;
  *a6 = 0;
  if ( a3 != 20 || !a4 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)this + 25) )
    return (unsigned int)-1073741790;
  v9 = gpLeakTrackingAllocator;
  v10 = 8 * a5;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x72774344) != 0x72774344
    || (v16 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(261LL, v10);
    goto LABEL_6;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v16) != 1920418628 )
  {
    if ( ++v16 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_5;
  }
  v17 = 0;
  if ( v10 < 0x1000 || (v10 & 0xFFF) != 0 )
  {
    v17 = 1;
    v10 += 16LL;
  }
  v18 = ExAllocatePool2(261LL, v10);
  if ( !v18 )
  {
LABEL_29:
    *((_QWORD *)this + 25) = 0LL;
    return (unsigned int)-1073741801;
  }
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v17 && (unsigned __int64)(v18 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v9,
                            v18,
                            BackTrace) )
    {
      Pool2 = v18 + 16;
LABEL_6:
      *((_QWORD *)this + 25) = Pool2;
      if ( Pool2 )
        goto LABEL_7;
      return (unsigned int)-1073741801;
    }
    goto LABEL_28;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v9,
                           v18,
                           BackTrace) )
  {
LABEL_28:
    ExFreePoolWithTag((PVOID)v18, 0);
    goto LABEL_29;
  }
  *((_QWORD *)this + 25) = v18;
LABEL_7:
  v12 = 0LL;
  if ( a5 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      WeakReferenceBase = DirectComposition::CApplicationChannel::GetWeakReferenceBase(
                            a2,
                            a4[v13],
                            (struct DirectComposition::CWeakReferenceBase **)(*((_QWORD *)this + 25) + 8 * v13));
      if ( WeakReferenceBase < 0 )
        break;
      v12 = (unsigned int)(v12 + 1);
      v13 = (unsigned int)v12;
      if ( (unsigned int)v12 >= a5 )
        goto LABEL_11;
    }
    if ( (_DWORD)v12 )
    {
      v19 = 0LL;
      do
      {
        DirectComposition::CApplicationChannel::ReleaseWeakReference(
          a2,
          *(struct DirectComposition::CWeakReferenceBase **)(v19 + *((_QWORD *)this + 25)));
        v19 += 8LL;
        --v12;
      }
      while ( v12 );
    }
    v20 = (char *)*((_QWORD *)this + 25);
    if ( v20 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v20);
    *((_QWORD *)this + 25) = 0LL;
  }
  else
  {
LABEL_11:
    v14 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
    *((_DWORD *)this + 52) = a5;
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x800u;
    NSInstrumentation::CLeakTrackingAllocator::Free(v14, (char *)a4);
  }
  return (unsigned int)WeakReferenceBase;
}
