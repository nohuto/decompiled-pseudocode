/*
 * XREFs of ?SetObject@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@AEAAXPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180444C84
 * Callers:
 *     ??0?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAA@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1804408D4 (--0-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShel_ea_1804408D4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800A024C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?Release@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x18043762C (-Release@-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 */

__int64 __fastcall Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::SetObject(
        __int64 a1,
        _QWORD **a2)
{
  unsigned int (__fastcall *v4)(_QWORD **, GUID *, __int64 *); // rbx
  Platform::Details *v5; // rcx
  struct IUnknown *ObjectContext; // rax
  HRESULT ContextToken; // eax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Release(a1);
  if ( a2 )
  {
    v9 = 0LL;
    v4 = (unsigned int (__fastcall *)(_QWORD **, GUID *, __int64 *))**a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
    if ( v4(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v9) )
    {
      *(_DWORD *)(a1 + 24) = 0;
      ObjectContext = Platform::Details::GetObjectContext(v5);
      Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)(a1 + 8), (__int64)ObjectContext);
      ContextToken = CoGetContextToken((ULONG_PTR *)(a1 + 16));
      if ( ContextToken < 0 )
      {
        __abi_WinRTraiseException(ContextToken);
        __debugbreak();
      }
    }
    else
    {
      *(_DWORD *)(a1 + 24) = 1;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  }
  return __abi_winrt_ptr_assign((__int64 *)a1, (__int64)a2);
}
