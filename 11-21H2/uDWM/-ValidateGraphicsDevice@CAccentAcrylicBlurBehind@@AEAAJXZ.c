/*
 * XREFs of ?ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180055888
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z @ 0x1800552C8 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z.c)
 *     ?OnGraphicsDeviceRecreated@CWindowData@@QEAAJXZ @ 0x180104D90 (-OnGraphicsDeviceRecreated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180010950 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x18003A494 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18003C864 (-CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z.c)
 *     ??4?$ComPtr@UID2D1Device@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Device@@@Z @ 0x18004C69C (--4-$ComPtr@UID2D1Device@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Device@@@Z.c)
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x180055940 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAccentAcrylicBlurBehind::ValidateGraphicsDevice(CAccentAcrylicBlurBehind *this)
{
  __int64 *v2; // rbx
  CGraphicsDeviceManager *v3; // rsi
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // esi
  _QWORD *v8; // r14
  CGraphicsDeviceManager *v9; // rsi
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  void (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rbx
  int v15; // eax
  bool v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v2 = (__int64 *)((char *)this + 304);
  if ( *((_QWORD *)this + 38) )
  {
    v3 = (CGraphicsDeviceManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
    v4 = (int)CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v3) < 0 ? 0LL : *((_QWORD *)v3 + 3);
    if ( *v2 == v4 )
    {
      v16 = 1;
      v5 = CGraphicsDeviceManager::CheckDXGIAdapter(
             *((CGraphicsDeviceManager **)CDesktopManager::s_pDesktopManagerInstance + 6),
             &v16);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x811,
          (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
          (const char *)(unsigned int)v5);
        return v6;
      }
      if ( v16 )
        return 0LL;
    }
  }
  v8 = (_QWORD *)((char *)this + 336);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 42);
  v9 = (CGraphicsDeviceManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  if ( (int)CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(v9) < 0 )
    v10 = 0LL;
  else
    v10 = *((_QWORD *)v9 + 3);
  Microsoft::WRL::ComPtr<ID2D1Device>::operator=(v2, v10);
  if ( !*v2 )
    return 2147500037LL;
  v11 = CAccentAcrylicBlurBehind::EnsureNoiseSurfaceBrush(this);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 41);
    if ( !v13 )
      return 0LL;
    v17 = 0LL;
    v14 = **v13;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    v14(v13, &GUID_bf7f795e_83cc_44bf_a447_3e3c071789ec, &v17);
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Noise", 6u, 5u);
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v17 + 56LL))(v17, v19, *v8);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v19 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x824,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v15);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x81C,
      (int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v11);
  }
  return v12;
}
