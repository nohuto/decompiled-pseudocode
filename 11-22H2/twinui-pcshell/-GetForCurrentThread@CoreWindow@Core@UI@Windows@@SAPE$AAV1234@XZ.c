/*
 * XREFs of ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x18077FB00
 * Callers:
 *     ?OnContainerNavigate@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXI@Z @ 0x180781A60 (-OnContainerNavigate@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXI@Z.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801CDA58 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x18077FC1C (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 */

__int64 __fastcall Windows::UI::Core::CoreWindow::GetForCurrentThread(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi
  _DWORD v9[4]; // [rsp+20h] [rbp-10h] BYREF
  void *v10; // [rsp+40h] [rbp+10h] BYREF
  __int64 v11; // [rsp+48h] [rbp+18h]

  v9[0] = 1294176261;
  v9[1] = 1102134314;
  v9[2] = 1800610448;
  v9[3] = -1315713095;
  v10 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"Windows.UI.Core.CoreWindow",
                                (struct Platform::Guid *)v9,
                                &v10,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
  {
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    __debugbreak();
  }
  v5 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(v10);
  v11 = v5;
  v6 = __abi_winrt_ptr_ctor(v5);
  v11 = v6;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v7 = __abi_winrt_ptr_ctor(v6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v10 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  return v7;
}
