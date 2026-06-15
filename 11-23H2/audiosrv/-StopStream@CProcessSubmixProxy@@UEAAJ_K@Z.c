/*
 * XREFs of ?StopStream@CProcessSubmixProxy@@UEAAJ_K@Z @ 0x18010A2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z @ 0x180048374 (-UpdateActiveStreamCount@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcessSubmixProxy::StopStream(CProcessSubmixProxy *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5));
  CProcessSubmixProxy::UpdateActiveStreamCount((__int64)this - 8, -1);
  return 0LL;
}
