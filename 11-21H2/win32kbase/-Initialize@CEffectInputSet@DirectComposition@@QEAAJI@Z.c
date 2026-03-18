/*
 * XREFs of ?Initialize@CEffectInputSet@DirectComposition@@QEAAJI@Z @ 0x1C0216080
 * Callers:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0215C70 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CEffectInputSet::Initialize(
        DirectComposition::CEffectInputSet *this,
        unsigned int a2)
{
  unsigned int v2; // ebx
  _DWORD *Quota; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  PVOID v7; // rdi
  __int64 v8; // rax
  __int64 Pool2; // rbx
  unsigned __int64 v10; // rcx
  PVOID v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdi
  char v14; // bp
  char v15; // r14
  PVOID BackTrace[20]; // [rsp+20h] [rbp-168h] BYREF
  PVOID v18[20]; // [rsp+C0h] [rbp-C8h] BYREF

  v2 = 0;
  *(_DWORD *)this = a2;
  if ( a2 )
  {
    if ( !is_mul_ok(a2, 4uLL) )
      return (unsigned int)-1073741675;
    Quota = (_DWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(this, 260LL, 4LL * a2, 1717977924);
    *((_QWORD *)this + 2) = Quota;
    if ( !Quota )
      return (unsigned int)-1073741801;
    v5 = 0LL;
    if ( *(_DWORD *)this )
    {
      do
        *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v5++) = 2;
      while ( v5 < *(unsigned int *)this );
      Quota = (_DWORD *)*((_QWORD *)this + 2);
    }
    *Quota = 0;
    v6 = 16LL * *(unsigned int *)this;
    if ( !is_mul_ok(*(unsigned int *)this, 0x10uLL) )
      return (unsigned int)-1073741675;
    v7 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6A664344) != 0x6A664344
      || (v8 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_13:
      Pool2 = ExAllocatePool2(261LL, 16LL * *(unsigned int *)this);
      goto LABEL_14;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v8) != 1785086788 )
    {
      if ( ++v8 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_13;
    }
    v14 = 0;
    if ( v6 < 0x1000 || (v6 & 0xFFF) != 0 )
    {
      v14 = 1;
      v6 += 16LL;
    }
    Pool2 = ExAllocatePool2(261LL, v6);
    if ( !Pool2 )
      goto LABEL_27;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v14 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v7,
             (const void *)Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_14;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v7,
                Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
LABEL_14:
      *((_QWORD *)this + 3) = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v10 = 8LL * *(unsigned int *)this;
      if ( is_mul_ok(*(unsigned int *)this, 8uLL) )
      {
        v11 = gpLeakTrackingAllocator;
        v2 = 0;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x69664344) != 0x69664344
          || (v12 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
        {
LABEL_20:
          v13 = ExAllocatePool2(261LL, 8LL * *(unsigned int *)this);
          goto LABEL_21;
        }
        while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1768309572 )
        {
          if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_20;
        }
        v15 = 0;
        if ( v10 < 0x1000 || (v10 & 0xFFF) != 0 )
        {
          v15 = 1;
          v10 += 16LL;
        }
        v13 = ExAllocatePool2(261LL, v10);
        if ( !v13 )
          goto LABEL_38;
        memset(v18, 0, sizeof(v18));
        RtlCaptureStackBackTrace(0, 0x14u, v18, 0LL);
        if ( v15 && (unsigned __int64)(v13 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v11,
                 (const void *)v13,
                 (struct NSInstrumentation::CBackTrace *)v18) )
          {
            v13 += 16LL;
            goto LABEL_21;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v11,
                    v13,
                    (struct NSInstrumentation::CBackTrace *)v18) )
        {
LABEL_21:
          *((_QWORD *)this + 1) = v13;
          if ( v13 )
            return v2;
          return (unsigned int)-1073741801;
        }
        ExFreePoolWithTag((PVOID)v13, 0);
LABEL_38:
        v13 = 0LL;
        goto LABEL_21;
      }
      return (unsigned int)-1073741675;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_27:
    Pool2 = 0LL;
    goto LABEL_14;
  }
  return v2;
}
