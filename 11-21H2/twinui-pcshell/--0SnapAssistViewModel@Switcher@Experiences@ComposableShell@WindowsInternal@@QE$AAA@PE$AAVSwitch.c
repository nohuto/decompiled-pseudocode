/*
 * XREFs of ??0SnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@W4SnapAssistInvokeFlags@1234@@Z @ 0x180600628
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806017E0 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18018E6A4 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?CreateInstance@__ISnapAssistViewModelFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVSnapAssistViewModel@2345@PE$AAVSwitchItemListViewModel@2345@W4SnapAssistInvokeFlags@2345@@Z @ 0x180601760 (-CreateInstance@__ISnapAssistViewModelFactory@Switcher@Experiences@ComposableShell@WindowsIntern.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistViewModel::SnapAssistViewModel(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdi
  _DWORD v11[4]; // [rsp+20h] [rbp-10h] BYREF
  void *v12; // [rsp+40h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+28h]

  v11[0] = -522916957;
  v11[1] = 994124819;
  v11[2] = 705217705;
  v11[3] = -159204675;
  v12 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.SnapAssistViewModel",
                                (struct Platform::Guid *)v11,
                                &v12,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
  {
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    __debugbreak();
  }
  Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistViewModelFactory::CreateInstance(
               v12,
               a2,
               a3);
  v13 = Instance;
  v8 = __abi_winrt_ptr_ctor(Instance);
  v13 = v8;
  if ( Instance )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Instance + 16LL))(Instance);
  v9 = __abi_winrt_ptr_ctor(v8);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v12 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  return v9;
}
