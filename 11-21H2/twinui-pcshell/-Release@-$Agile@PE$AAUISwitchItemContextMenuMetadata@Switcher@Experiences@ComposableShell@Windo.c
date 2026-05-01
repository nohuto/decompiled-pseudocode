/*
 * XREFs of ?Release@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXXZ @ 0x18043762C
 * Callers:
 *     ??1?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@XZ @ 0x18042E88C (--1-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@X.c)
 *     ?SetObject@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AEAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180438384 (-SetObject@-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform.c)
 *     ?SetObject@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@AEAAXPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180444C84 (-SetObject@-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Win.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

void __fastcall Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Release(
        __int64 a1)
{
  Platform::Details *v2; // rdi
  HRESULT ContextToken; // eax
  struct IUnknown *v4; // r8
  __int64 v5; // rax
  __int64 *v6; // rsi
  struct IUnknown *v7; // rdx
  ULONG_PTR pToken; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(Platform::Details **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    ContextToken = CoGetContextToken(&pToken);
    if ( ContextToken < 0 )
    {
      __abi_WinRTraiseException(ContextToken);
      __debugbreak();
    }
    v5 = *(_QWORD *)(a1 + 16);
    if ( v5 && (v6 = (__int64 *)(a1 + 8), (v7 = *(struct IUnknown **)(a1 + 8)) != 0LL) && v5 != pToken )
    {
      Platform::Details::ReleaseInContextImpl(v2, v7, v4);
    }
    else
    {
      (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)v2 + 16LL))(v2);
      v6 = (__int64 *)(a1 + 8);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v6);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = 2;
  }
}
