/*
 * XREFs of ?_Free@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@CAXPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@25@I@Z @ 0x180032498
 * Callers:
 *     ?_EraseAll@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@25@PEAI@Z @ 0x180032460 (-_EraseAll@-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$Defaul.c)
 *     ?Clear@?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18048A4C0 (-Clear@-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEqu.c)
 * Callees:
 *     ??$Destroy@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800324F0 (--$Destroy@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@InterfaceLifetimeTra.c)
 */

void __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>>::_Free(
        char *Block,
        unsigned int a2)
{
  char *v3; // rbx
  __int64 v4; // rsi

  if ( Block )
  {
    if ( a2 )
    {
      v3 = Block;
      v4 = a2;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>(v3);
        v3 += 8;
        --v4;
      }
      while ( v4 );
    }
    free(Block);
  }
}
