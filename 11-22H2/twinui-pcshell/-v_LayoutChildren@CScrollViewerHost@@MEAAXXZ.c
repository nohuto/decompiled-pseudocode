/*
 * XREFs of ?v_LayoutChildren@CScrollViewerHost@@MEAAXXZ @ 0x1802E4800
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x18057BBA4 (-_LayoutWithScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 *     ?_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ @ 0x18057BE50 (-_LayoutWithoutScrollButtons@CScrollViewerHost@@AEAAXXZ.c)
 */

void __fastcall CScrollViewerHost::v_LayoutChildren(CScrollViewerHost *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // r8d
  _DWORD v5[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = *v2;
  v4 = *((_DWORD *)this + 15);
  v5[0] = *((_DWORD *)this + 14);
  v5[2] = v5[0] + 1;
  v5[1] = v4;
  v5[3] = v4 + 1;
  (*(void (__fastcall **)(__int64 *, _DWORD *, _QWORD, _QWORD))(v3 + 24))(v2, v5, 0LL, 0LL);
  CScrollViewerHost::_LayoutWithoutScrollButtons(this);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 56) + 64LL))(*((_QWORD *)this + 56)) )
    CScrollViewerHost::_LayoutWithScrollButtons(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 56) + 72LL))(*((_QWORD *)this + 56));
}
