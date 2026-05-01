/*
 * XREFs of ?OnShowWindowPolicy@TabletModePositionerManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1800D9E20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModePositionerManager::OnShowWindowPolicy(
        TabletModePositionerManager *this,
        HWND a2,
        unsigned int a3,
        unsigned int *a4,
        LPRECT lprc)
{
  int v9; // eax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  *a4 = 0;
  SetRectEmpty(lprc);
  v13 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, HWND, GUID *, GUID *, __int64 *))(**((_QWORD **)this + 8) + 88LL))(
         *((_QWORD *)this + 8),
         a2,
         &GUID_975d55f5_ce62_42c0_868a_eda817f3871e,
         &GUID_bfb5cdb3_5571_4e1f_9541_a1e9fa66b59a,
         &v13);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
      (const char *)(unsigned int)v9);
  else
    (*(void (__fastcall **)(__int64, HWND, _QWORD, unsigned int *))(*(_QWORD *)v13 + 32LL))(v13, a2, a3, a4);
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
