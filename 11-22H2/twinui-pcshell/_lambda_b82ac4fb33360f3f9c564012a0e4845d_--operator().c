/*
 * XREFs of _lambda_b82ac4fb33360f3f9c564012a0e4845d_::operator() @ 0x18064CC94
 * Callers:
 *     ?ShouldShowGripper@TouchEdgeGestureManager@@AEAA_NXZ @ 0x18064D7E8 (-ShouldShowGripper@TouchEdgeGestureManager@@AEAA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180044940 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z @ 0x18016D9D8 (-get@-$static_lazy@VTouchGestureLogging@@@details@wil@@QEAAPEAVTouchGestureLogging@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$GetAsInt32@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAJ@Z @ 0x1803EBC50 (--$GetAsInt32@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropert.c)
 */

// Hidden C++ exception states: #wind=6
bool __fastcall lambda_b82ac4fb33360f3f9c564012a0e4845d_::operator()(IUnknown ***a1)
{
  bool v1; // bl
  HRESULT v2; // eax
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  struct IImmersiveApplication **v6; // r8
  int ApplicationFromView; // eax
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // rcx
  ULONG v12; // [rsp+20h] [rbp-59h]
  bool v13; // [rsp+30h] [rbp-49h] BYREF
  int v14; // [rsp+34h] [rbp-45h] BYREF
  int v15; // [rsp+38h] [rbp-41h] BYREF
  LONG v16; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v17; // [rsp+40h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+48h] [rbp-31h] BYREF
  __int64 v19; // [rsp+50h] [rbp-29h] BYREF
  ApplicationViewHelpers *v20; // [rsp+58h] [rbp-21h] BYREF
  __int64 v21[2]; // [rsp+60h] [rbp-19h] BYREF
  __int128 v22; // [rsp+70h] [rbp-9h] BYREF
  int v23; // [rsp+80h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+90h] [rbp+17h] BYREF
  bool *v25; // [rsp+B0h] [rbp+37h]
  __int64 v26; // [rsp+B8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v1 = 0;
  ppvOut = 0LL;
  v2 = IUnknown_QueryService(
         **a1,
         &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
         &winrt::impl::guid_v<IFullScreenPositioner>,
         &ppvOut);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  v14 = 0;
  v3 = (*(__int64 (__fastcall **)(void *, int *))(*(_QWORD *)ppvOut + 72LL))(ppvOut, &v14);
  v4 = retaddr;
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x142,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
      (const char *)(unsigned int)v3,
      v12);
  if ( v14 )
  {
    v20 = 0LL;
    v5 = (*(__int64 (__fastcall **)(void *, ApplicationViewHelpers **))(*(_QWORD *)ppvOut + 80LL))(ppvOut, &v20);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x146,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
        (const char *)(unsigned int)v5,
        v12);
    v17 = 0LL;
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v20,
                            (struct IApplicationView *)&v17,
                            v6);
    if ( ApplicationFromView < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x148,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
        (const char *)(unsigned int)ApplicationFromView,
        v12);
    v15 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 72LL))(v17, &v15);
    v4 = retaddr;
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x14A,
        (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
        (const char *)(unsigned int)v8,
        v12);
    if ( v15 )
    {
      v19 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v17 + 48LL))(
             v17,
             0LL,
             &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
             &v19);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x14E,
          (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegesturemanager.cpp",
          (const char *)(unsigned int)v9,
          v12);
      v21[0] = v19;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      v16 = 0;
      v22 = PKEY_ImmersiveApplication_FullScreenSystemOverlayMode;
      v23 = 11;
      if ( (int)CPropertyStoreHelperBase<IPropertyStore>::GetAsInt32<_tagpropertykey>(v21, &v22, &v16) >= 0 )
        v1 = v16 == 1;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v21);
      if ( v19 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v19);
    }
    if ( v17 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v17);
    if ( v20 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v20);
  }
  v10 = (_DWORD *)wil::details::static_lazy<TouchGestureLogging>::get(
                    (__int64)v4,
                    (void (__cdecl *)())_lambda_74816e0b9ff772b7cfffc4dc29af72c4_::_lambda_invoker_cdecl_)[1];
  if ( *v10 > 5u )
  {
    v13 = v1;
    v25 = &v13;
    v26 = 1LL;
    tlgWriteTransfer_EventWriteTransfer((__int64)v10, (unsigned __int8 *)dword_180870F13, 0LL, 0LL, 3u, &v24);
  }
  if ( ppvOut )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&ppvOut);
  return v1;
}
