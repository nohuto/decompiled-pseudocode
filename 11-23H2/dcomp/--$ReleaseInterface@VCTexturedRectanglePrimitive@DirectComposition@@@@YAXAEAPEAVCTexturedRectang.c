/*
 * XREFs of ??$ReleaseInterface@VCTexturedRectanglePrimitive@DirectComposition@@@@YAXAEAPEAVCTexturedRectanglePrimitive@DirectComposition@@@Z @ 0x1800EAAD4
 * Callers:
 *     ?EnsureRealization@CCompositionSurface@DirectComposition@@AEAAJXZ @ 0x180013438 (-EnsureRealization@CCompositionSurface@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<DirectComposition::CTexturedRectanglePrimitive>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
