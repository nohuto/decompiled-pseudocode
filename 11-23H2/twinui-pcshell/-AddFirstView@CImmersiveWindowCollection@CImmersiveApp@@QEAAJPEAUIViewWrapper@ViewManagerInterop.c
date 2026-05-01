/*
 * XREFs of ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18001E7F0
 * Callers:
 *     ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18001E380 (-_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 * Callees:
 *     ?PrepareApplicationForLaunch@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUITaskWindow@@@Z @ 0x18001DE44 (-PrepareApplicationForLaunch@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x18001E0E8 (-_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z.c)
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x180020094 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ??4?$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z @ 0x1800258FC (--4-$ComPtr@UITaskWindow@@@WRL@Microsoft@@QEAAAEAV012@PEAUITaskWindow@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x180047F28 (-s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::AddFirstView(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct ITaskWindow *a3)
{
  char *v6; // rdi
  __int128 v7; // xmm1
  __m128i v8; // xmm2
  int Instance; // edi
  __int64 v11; // rax
  struct ITaskWindow *v12; // [rsp+40h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-38h] BYREF
  __int128 v14; // [rsp+58h] [rbp-28h]
  __int64 v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+70h] [rbp-10h]

  v12 = 0LL;
  if ( a3 )
  {
    v11 = *((_QWORD *)this + 20);
    LODWORD(v13) = 2;
    *((_QWORD *)&v13 + 1) = 0LL;
    *(_QWORD *)&v14 = (v11 + 112) & -(__int64)(v11 != 0);
    DWORD2(v14) = 0;
    v15 = 0LL;
    Instance = (*(__int64 (__fastcall **)(struct ITaskWindow *, __int128 *))(*(_QWORD *)a3 + 200LL))(a3, &v13);
    if ( Instance < 0 )
      goto LABEL_8;
    Microsoft::WRL::ComPtr<ITaskWindow>::operator=(&v12, a3);
    goto LABEL_6;
  }
  v6 = 0LL;
  if ( *((_DWORD *)this + 4) <= *((_DWORD *)this + 6) && *((_DWORD *)this + 5) <= *((_DWORD *)this + 7) )
  {
    v6 = (char *)this + 16;
    v7 = *(_OWORD *)((char *)this + 92);
    v8 = *(__m128i *)((char *)this + 108);
    v13 = *(_OWORD *)((char *)this + 76);
    v14 = v7;
    v15 = v8.m128i_i64[0];
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(v8, 8));
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  Instance = CTaskWindow::s_CreateInstance(
               0LL,
               a2,
               1LL,
               (*((_QWORD *)this + 20) + 112LL) & -(__int64)(*((_QWORD *)this + 20) != 0LL),
               v6,
               (unsigned __int64)&v13 & -(__int64)(v6 != 0LL));
  if ( Instance >= 0 )
  {
LABEL_6:
    CImmersiveApp::CImmersiveWindowCollection::PrepareApplicationForLaunch(this, v12);
    Instance = CImmersiveApp::CImmersiveWindowCollection::_InsertWindow((CSplashScreen **)this, v12, 0LL);
    if ( Instance >= 0 )
      CImmersiveApp::CImmersiveWindowCollection::PresentWindowInFrame(this, v12);
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  return (unsigned int)Instance;
}
