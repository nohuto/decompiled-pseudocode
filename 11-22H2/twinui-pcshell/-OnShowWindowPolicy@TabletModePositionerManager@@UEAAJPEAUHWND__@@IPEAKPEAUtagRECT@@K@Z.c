/*
 * XREFs of ?OnShowWindowPolicy@TabletModePositionerManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1805B78C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositionerManager::OnShowWindowPolicy(
        TabletModePositionerManager *this,
        HWND a2,
        unsigned int a3,
        unsigned int *a4,
        LPRECT lprc)
{
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, HWND, GUID *, GUID *, __int64 *); // rbx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  *a4 = 0;
  SetRectEmpty(lprc);
  v14 = 0LL;
  v9 = *((_QWORD *)this + 8);
  v10 = *(__int64 (__fastcall **)(__int64, HWND, GUID *, GUID *, __int64 *))(*(_QWORD *)v9 + 88LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  v11 = v10(v9, a2, &GUID_975d55f5_ce62_42c0_868a_eda817f3871e, &GUID_bfb5cdb3_5571_4e1f_9541_a1e9fa66b59a, &v14);
  if ( v11 >= 0 )
    (*(void (__fastcall **)(__int64, HWND, _QWORD, unsigned int *))(*(_QWORD *)v14 + 32LL))(v14, a2, a3, a4);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8D,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
      (const char *)(unsigned int)v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  return 0LL;
}
