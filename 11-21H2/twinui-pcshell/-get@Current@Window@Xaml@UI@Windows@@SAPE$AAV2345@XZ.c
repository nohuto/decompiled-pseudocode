/*
 * XREFs of ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1800F5EA8
 * Callers:
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x1800F5F9C (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell.c)
 *     _lambda_bf3c92b221d60276737ef151eb6f13fc_::operator() @ 0x180428BA8 (_lambda_bf3c92b221d60276737ef151eb6f13fc_--operator().c)
 *     ?ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x180429050 (-ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_1301d951c5e9082c4f199997fa5a5a32__void_::Invoke @ 0x180429270 (Platform--Details--__abi_FunctorCapture__lambda_1301d951c5e9082c4f199997fa5a5a32__void_--Invoke.c)
 *     ??R_lambda_0b0ea29adb38baec39914485464e8775_@@QEBAXXZ @ 0x18042F2C0 (--R_lambda_0b0ea29adb38baec39914485464e8775_@@QEBAXXZ.c)
 *     ??R_lambda_44f2a899e44ce20919ad94180e8373fc_@@QEBAXXZ @ 0x18042F5E4 (--R_lambda_44f2a899e44ce20919ad94180e8373fc_@@QEBAXXZ.c)
 *     _lambda_baaea9c5454d5217874bd274f7881db0_::operator() @ 0x18042FDDC (_lambda_baaea9c5454d5217874bd274f7881db0_--operator().c)
 * Callees:
 *     ?get@Current@IWindowStatics@Xaml@UI@Windows@@UE$AAAPE$AAVWindow@345@XZ @ 0x1800F47E4 (-get@Current@IWindowStatics@Xaml@UI@Windows@@UE$AAAPE$AAVWindow@345@XZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18018E6A4 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::UI::Xaml::Window::Current::get(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi
  _DWORD v9[4]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+10h] BYREF
  __int64 v11; // [rsp+48h] [rbp+18h]

  v9[0] = -1825405943;
  v9[1] = 1257918113;
  v9[2] = 1309465731;
  v9[3] = -1316231053;
  v10 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"Windows.UI.Xaml.Window",
                                v9,
                                (struct Platform::Guid *)&v10,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
  {
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    __debugbreak();
  }
  v5 = Windows::UI::Xaml::IWindowStatics::Current::get(v10);
  v11 = v5;
  v6 = __abi_winrt_ptr_ctor(v5);
  v11 = v6;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v7 = __abi_winrt_ptr_ctor(v6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v7;
}
