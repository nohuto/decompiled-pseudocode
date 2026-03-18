/*
 * XREFs of ??$ReleaseInterface@UIDXGIFactory5@@@@YAXAEAPEAUIDXGIFactory5@@@Z @ 0x18028615C
 * Callers:
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1800CE198 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800D667C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
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
