/*
 * XREFs of ?Swap@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXAEAV12@@Z @ 0x180782474
 * Callers:
 *     ??0?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAA@$$QEAV01@@Z @ 0x18077C5CC (--0-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 *     ??4?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAAEAV01@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18077CE4C (--4-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 *     ??4?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAAEAV01@V01@@Z @ 0x18077CE84 (--4-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShel_ea_18077CE84.c)
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18007C2F4 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18077CEBC (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Swap(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rsi
  __int64 *v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = __abi_winrt_ptr_ctor(*(_QWORD *)a1);
  __abi_winrt_ptr_assign((_QWORD *)a1, *(_QWORD *)a2);
  __abi_winrt_ptr_assign((_QWORD *)a2, v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (__int64 *)(a1 + 8);
  v8 = 0LL;
  if ( &v8 != (__int64 *)(a1 + 8) )
  {
    v8 = *v5;
    *v5 = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::operator=(v5, (__int64 *)(a2 + 8));
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)(a2 + 8), &v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = v6;
  LODWORD(v6) = *(_DWORD *)(a1 + 24);
  result = *(unsigned int *)(a2 + 24);
  *(_DWORD *)(a1 + 24) = result;
  *(_DWORD *)(a2 + 24) = v6;
  return result;
}
