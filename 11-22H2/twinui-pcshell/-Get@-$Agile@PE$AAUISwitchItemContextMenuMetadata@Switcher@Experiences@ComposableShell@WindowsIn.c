/*
 * XREFs of ?Get@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEBAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x18077F0A4
 * Callers:
 *     ??$Unwrap@UISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@YAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBV?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@@Z @ 0x18077BD78 (--$Unwrap@UISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Get(
        __int64 a1)
{
  HRESULT ContextToken; // eax
  Platform::Details *v3; // rcx
  int ProxyImpl; // eax
  unsigned int (__fastcall *v5)(struct IUnknownVtbl *, GUID *, __int64 *); // rbx
  __int64 v6; // rbx
  struct IUnknown **savedregs; // [rsp+20h] [rbp+0h]
  struct IUnknown v9; // [rsp+40h] [rbp+20h] BYREF
  __int64 v10; // [rsp+48h] [rbp+28h] BYREF
  ULONG_PTR pToken; // [rsp+50h] [rbp+30h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 1 || !*(_QWORD *)a1 )
  {
    v3 = *(Platform::Details **)a1;
    return __abi_winrt_ptr_ctor((__int64)v3);
  }
  ContextToken = CoGetContextToken(&pToken);
  if ( ContextToken < 0 )
  {
    __abi_WinRTraiseException(ContextToken);
    __debugbreak();
  }
  v3 = *(Platform::Details **)a1;
  if ( pToken == *(_QWORD *)(a1 + 16) )
    return __abi_winrt_ptr_ctor((__int64)v3);
  v9.lpVtbl = 0LL;
  ProxyImpl = Platform::Details::GetProxyImpl(
                v3,
                (struct IUnknown *)&_uuidof__AUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__,
                *(const struct _GUID **)(a1 + 8),
                &v9,
                savedregs);
  if ( ProxyImpl < 0 )
  {
    __abi_WinRTraiseException(ProxyImpl);
    __debugbreak();
  }
  if ( *(_DWORD *)(a1 + 24) != 2 )
    goto LABEL_15;
  v10 = 0LL;
  v5 = *(unsigned int (__fastcall **)(struct IUnknownVtbl *, GUID *, __int64 *))v9.lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  if ( v5(v9.lpVtbl, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v10) )
  {
    *(_DWORD *)(a1 + 24) = 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
LABEL_15:
    v6 = __abi_winrt_ptr_ctor((__int64)v9.lpVtbl);
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 8));
  v6 = __abi_winrt_ptr_ctor(*(_QWORD *)a1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
LABEL_11:
  if ( v9.lpVtbl )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v9.lpVtbl->QueryInterface + 2))(v9.lpVtbl);
  return v6;
}
