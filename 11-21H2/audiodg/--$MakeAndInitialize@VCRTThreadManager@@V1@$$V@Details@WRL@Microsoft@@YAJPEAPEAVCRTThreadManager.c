/*
 * XREFs of ??$MakeAndInitialize@VCRTThreadManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCRTThreadManager@@@Z @ 0x140028F84
 * Callers:
 *     wil::init_once__lambda_a2a7c58af5182531a41a85456c7819e1___ @ 0x140028EE0 (wil--init_once__lambda_a2a7c58af5182531a41a85456c7819e1___.c)
 * Callees:
 *     ?RuntimeClassInitialize@CRTThreadManager@@QEAAJXZ @ 0x14002904C (-RuntimeClassInitialize@CRTThreadManager@@QEAAJXZ.c)
 *     ??0CRTThreadManager@@QEAA@XZ @ 0x140029164 (--0CRTThreadManager@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CRTThreadManager,CRTThreadManager,>(
        CRTThreadManager **a1)
{
  CRTThreadManager *v2; // rax
  CRTThreadManager *v3; // rbx
  int v4; // esi

  *a1 = 0LL;
  v2 = (CRTThreadManager *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CRTThreadManager::CRTThreadManager(v2);
    v4 = CRTThreadManager::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
    {
      if ( v3 )
        (*(void (__fastcall **)(CRTThreadManager *))(*(_QWORD *)v3 + 8LL))(v3);
      *a1 = v3;
      v4 = 0;
    }
    if ( v3 )
      (*(void (__fastcall **)(CRTThreadManager *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
