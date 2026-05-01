/*
 * XREFs of ?TryGetSnapRectForAppView@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@PEAURect@Foundation@Windows@@@Z @ 0x180213068
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180039D90 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?SetPositionOfExistingView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAKPEAUtagRECT@@@Z @ 0x180212F30 (-SetPositionOfExistingView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAKPEAU.c)
 *     ?InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAKPEAUtagRECT@@@Z @ 0x1805B3800 (-InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@.c)
 * Callees:
 *     ?TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18003A55C (-TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180212438 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CDesktopPositioner::TryGetSnapRectForAppView(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct Windows::Foundation::Rect *a4)
{
  bool v7; // si
  unsigned int SnapId; // r15d
  int (__fastcall *v9)(struct IApplicationView *, PCNZWCH *); // rbx
  bool v10; // bl
  bool v11; // al
  __int128 v12; // xmm0
  HSTRING v13; // rcx
  bool v14; // zf
  HSTRING string; // [rsp+20h] [rbp-50h] BYREF
  PCNZWCH sourceString; // [rsp+28h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-40h]
  __int64 v19; // [rsp+38h] [rbp-38h]
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF

  v7 = 0;
  *(_QWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 1) = 0LL;
  SnapId = CDesktopPositioner::TryGetSnapId(this, a2, a3);
  sourceString = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v9 = *(int (__fastcall **)(struct IApplicationView *, PCNZWCH *))(*(_QWORD *)a2 + 136LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  v18 = -1LL;
  v19 = -1LL;
  if ( v9(a2, &sourceString) < 0 )
  {
    if ( SnapId != -1 )
      v7 = (*(int (__fastcall **)(_QWORD, _QWORD, struct Windows::Foundation::Rect *))(**((_QWORD **)this + 45) + 80LL))(
             *((_QWORD *)this + 45),
             SnapId,
             a4) >= 0;
    goto LABEL_16;
  }
  v21 = 0LL;
  v20 = 0LL;
  wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>>(
    &string,
    sourceString);
  v10 = (*(int (__fastcall **)(_QWORD, HSTRING, __int128 *))(**((_QWORD **)this + 45) + 104LL))(
          *((_QWORD *)this + 45),
          string,
          &v20) >= 0;
  v11 = SnapId != -1
     && (*(int (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)this + 45) + 80LL))(
          *((_QWORD *)this + 45),
          SnapId,
          &v21) >= 0;
  if ( v10 )
  {
    v12 = v20;
LABEL_11:
    v13 = string;
    v14 = string == 0LL;
    *(_OWORD *)a4 = v12;
    if ( !v14 )
      WindowsDeleteString(v13);
    v7 = 1;
    goto LABEL_16;
  }
  if ( v11 )
  {
    v12 = v21;
    goto LABEL_11;
  }
  if ( string )
    WindowsDeleteString(string);
LABEL_16:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
  return v7;
}
