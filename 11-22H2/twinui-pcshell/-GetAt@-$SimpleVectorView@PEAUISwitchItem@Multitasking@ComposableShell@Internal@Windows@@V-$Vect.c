/*
 * XREFs of ?GetAt@?$SimpleVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUISwitchItem@Multitasking@ComposableShell@25@@Z @ 0x18006DDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Destroy@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18004711C (--$Destroy@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,XWinRT::IntVersionTag,0>::GetAt(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  int v4; // ebx
  _DWORD *v6; // r14
  int v7; // eax

  *a3 = 0LL;
  v4 = *(_DWORD *)(a1 + 48);
  v6 = *(_DWORD **)(a1 + 40);
  if ( v4 < 0 )
  {
    RoOriginateError((unsigned int)v4, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 48LL))(*(_QWORD *)(a1 + 40));
    v4 = v7;
    if ( *(_DWORD *)(a1 + 52) != v6[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v7 < 0 )
      {
        RoTransformError((unsigned int)v7, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(a3);
        *a3 = 0LL;
      }
      return (unsigned int)-2147483636;
    }
  }
  return (unsigned int)v4;
}
