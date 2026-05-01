/*
 * XREFs of ?IsComponentUiHostWindowForeground@ApiPolicyChecker@CallerIdentity@@YAJPEAUHWND__@@@Z @ 0x18073CB58
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180012C88 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::IsComponentUiHostWindowForeground(
        CallerIdentity::ApiPolicyChecker *this,
        HWND a2)
{
  HWND Ancestor; // rsi
  unsigned int v3; // r14d
  __int64 v4; // rbx
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, _QWORD, __int64 *); // rdi
  __int64 v8; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v10[4]; // [rsp+30h] [rbp-40h] BYREF
  HWND hwnd; // [rsp+34h] [rbp-3Ch]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-18h]

  Ancestor = 0LL;
  v3 = (unsigned int)this;
  v9 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Shell.Popups.PopupClient",
    0x2Au,
    0x29u);
  v4 = v13;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v9);
  if ( (int)RoGetActivationFactory(v4, &GUID_b2571928_3f1d_4f6d_8930_fd9f7d5a69fc, &v9) >= 0 )
  {
    v5 = v9;
    v8 = 0LL;
    v6 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 56LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v8);
    if ( v6(v5, v3, &v8) >= 0 && (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v8 + 72LL))(v8, v10) >= 0 )
    {
      if ( (_DWORD)hwnd )
        Ancestor = GetAncestor((HWND)(unsigned int)hwnd, 2u);
      LOBYTE(Ancestor) = GetForegroundWindow() == Ancestor;
    }
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v8);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v9);
  return (_BYTE)Ancestor == 0 ? 0x80070005 : 0;
}
