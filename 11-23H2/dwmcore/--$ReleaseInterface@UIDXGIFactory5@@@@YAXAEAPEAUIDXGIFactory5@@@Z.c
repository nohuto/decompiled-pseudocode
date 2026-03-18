/*
 * XREFs of ??$ReleaseInterface@UIDXGIFactory5@@@@YAXAEAPEAUIDXGIFactory5@@@Z @ 0x180285B6C
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800BF1CC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x180100724 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<IDXGIFactory5>(__int64 *a1)
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
