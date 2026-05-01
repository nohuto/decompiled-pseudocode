/*
 * XREFs of ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXPE$AAVObject@Platform@@PE$AAVKeyRoutedEventArgs@Input@Xaml@UI@Windows@@@Z @ 0x180779F60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$query@UIAltTabViewHost@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAltTabViewHost@@Uerr_exception_policy@wil@@@1@XZ @ 0x18028BDAC (--$query@UIAltTabViewHost@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802ECA20 (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ @ 0x1802ED05E (--1OnAltKeyUp@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ??$?0_N@OnAltKeyUp@XamlSwitcherTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEA_N@Z @ 0x180778344 (--$-0_N@OnAltKeyUp@XamlSwitcherTelemetry@@AEAA@U-$integral_constant@D$0A@@wistd@@$$QEA_N@Z.c)
 *     ?get@Key@IKeyRoutedEventArgs@Input@Xaml@UI@Windows@@UE$AAA?AW4VirtualKey@System@6@XZ @ 0x18077B390 (-get@Key@IKeyRoutedEventArgs@Input@Xaml@UI@Windows@@UE$AAA-AW4VirtualKey@System@6@XZ.c)
 *     ?get@KeyStatus@IKeyRoutedEventArgs@Input@Xaml@UI@Windows@@UE$AAA?AVCorePhysicalKeyStatus@Core@56@XZ @ 0x18077B3D4 (-get@KeyStatus@IKeyRoutedEventArgs@Input@Xaml@UI@Windows@@UE$AAA-AVCorePhysicalKeyStatus@Core@56.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall XamlAltTabViewController::OnAltKeyUp(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // dl
  int v6; // edx
  _QWORD *v7; // rax
  unsigned __int8 v8[8]; // [rsp+20h] [rbp-178h] BYREF
  __int64 v9[3]; // [rsp+28h] [rbp-170h] BYREF
  __int64 v10[40]; // [rsp+40h] [rbp-158h] BYREF

  if ( (unsigned int)Windows::UI::Xaml::Input::IKeyRoutedEventArgs::Key::get(a3) == 18
    && !*(_BYTE *)(Windows::UI::Xaml::Input::IKeyRoutedEventArgs::KeyStatus::get(a3, v9) + 9) )
  {
    v8[0] = *(_QWORD *)(a1 + 56) != 0LL;
    XamlSwitcherTelemetry::OnAltKeyUp::OnAltKeyUp((__int64)v10, v5, v8);
    if ( !*(_BYTE *)(a1 + 168) )
    {
      if ( *(_QWORD *)(a1 + 56) )
      {
        v7 = wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAltTabViewHost>(
               (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 56),
               v9);
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 64LL))(*v7);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v9);
      }
    }
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v10, v6);
    XamlSwitcherTelemetry::OnAltKeyUp::~OnAltKeyUp((XamlSwitcherTelemetry::OnAltKeyUp *)v10);
  }
}
