/*
 * XREFs of ??0Application@Xaml@UI@Windows@@QE$AAA@XZ @ 0x180063988
 * Callers:
 *     ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x180064220 (--0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvid.c)
 * Callees:
 *     ?CreateInstance@IApplicationFactory@Xaml@UI@Windows@@UE$AAAPE$AAVApplication@234@PE$AAVObject@Platform@@PEAPE$AAV67@@Z @ 0x180063A88 (-CreateInstance@IApplicationFactory@Xaml@UI@Windows@@UE$AAAPE$AAVApplication@234@PE$AAVObject@Pl.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18018E6A4 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::UI::Xaml::Application::Application(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  __int64 v4; // rbx
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rsi
  __int64 v9; // rdi
  _DWORD v10[4]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+30h]

  v10[0] = -1816403103;
  v10[1] = 1323548250;
  v10[2] = 295019444;
  v10[3] = -1988441715;
  v11 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"Windows.UI.Xaml.Application",
                                v10,
                                (struct Platform::Guid *)&v11,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
  {
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  }
  else
  {
    Instance = Windows::UI::Xaml::IApplicationFactory::CreateInstance(v11, a1, (a1 + 48) & -(__int64)(a1 != 0));
    v12 = Instance;
    v4 = __abi_winrt_ptr_ctor(Instance);
    v12 = v4;
    if ( Instance )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)Instance + 16LL))(Instance);
    if ( a1 )
    {
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      return 0LL;
    }
  }
  v9 = __abi_winrt_ptr_ctor(v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v9;
}
