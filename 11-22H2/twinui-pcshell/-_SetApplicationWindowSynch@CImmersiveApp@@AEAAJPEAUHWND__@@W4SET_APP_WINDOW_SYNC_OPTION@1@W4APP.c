/*
 * XREFs of ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x1803C55C8
 * Callers:
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x1803C3EB0 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1803C58E0 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x1800282C0 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180028808 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1803C40E0 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     WPP_SF_Sdl @ 0x1803C61D0 (WPP_SF_Sdl.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::_SetApplicationWindowSynch(__int64 a1, HWND a2, int a3, int a4)
{
  int v7; // ebx
  bool v8; // r12
  void (__fastcall *v9)(__int64, GUID *, struct IUnknown **); // rbx
  HWND ApplicationWindow; // rax
  unsigned int v11; // ebx
  void *v13; // [rsp+30h] [rbp-49h] BYREF
  struct IUnknown *v14; // [rsp+38h] [rbp-41h] BYREF
  int v15; // [rsp+40h] [rbp-39h]
  __m128i si128; // [rsp+50h] [rbp-29h] BYREF
  int v17; // [rsp+60h] [rbp-19h]
  int v18; // [rsp+64h] [rbp-15h]
  int v19; // [rsp+68h] [rbp-11h]
  HWND v20; // [rsp+70h] [rbp-9h]
  HWND v21; // [rsp+78h] [rbp-1h]
  _BYTE *v22; // [rsp+80h] [rbp+7h]
  bool v23; // [rsp+88h] [rbp+Fh]
  _BYTE v24[16]; // [rsp+90h] [rbp+17h] BYREF

  v15 = 0;
  v7 = *(_DWORD *)(a1 + 576) & 4;
  v8 = v7 != 0;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdl(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)a2, a3, *(_QWORD *)(a1 + 584), *(_DWORD *)(a1 + 592), 1);
  v13 = 0LL;
  if ( v7 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
    v14 = 0LL;
    v15 = 2;
    v9 = *(void (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)(a1 + 48) + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    v9(a1 + 48, &GUID_00000000_0000_0000_c000_000000000046, &v14);
    LOBYTE(v9) = (int)IAMPrivate_QueryObject(
                        v14,
                        &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
                        &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
                        &v13) >= 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    if ( (_BYTE)v9 )
    {
      (*(void (__fastcall **)(__int64, struct IUnknown **, _BYTE *))(*(_QWORD *)(a1 + 112) + 328LL))(
        a1 + 112,
        &v14,
        v24);
      ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288));
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v17 = 0;
      v18 = 6;
      v19 = a4;
      v20 = ApplicationWindow;
      v21 = a2;
      v22 = v24;
      v23 = v8;
      if ( (*(int (__fastcall **)(void *, __m128i *))(*(_QWORD *)v13 + 40LL))(v13, &si128) < 0 )
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
    }
  }
  v11 = CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
          (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 288),
          a2);
  if ( v13 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 48LL))(v13);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v13);
  return v11;
}
