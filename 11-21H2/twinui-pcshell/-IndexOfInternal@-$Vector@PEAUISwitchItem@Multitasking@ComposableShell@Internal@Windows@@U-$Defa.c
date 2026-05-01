/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUISwitchItem@Multitasking@ComposableShell@25@IPEAU67825@PEAIPEAE@Z @ 0x18002AFE0
 * Callers:
 *     ?IndexOf@?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@25@PEAIPEAE@Z @ 0x18002AEF0 (-IndexOf@-$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEqual.c)
 * Callees:
 *     ??$?RUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@0PEA_N@Z @ 0x18002B064 (--$-RUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJP.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Internal::ComposableShell::Multitasking::ISwitchItem *>>::IndexOfInternal(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        _BYTE *a6)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v11; // eax
  char v13; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v13 = 0;
  v7 = 0;
  if ( a3 )
  {
    while ( (int)v6 >= 0 )
    {
      v11 = XWinRT::InterfaceEquals::operator()<Windows::Internal::ComposableShell::Multitasking::ISwitchItem>(
              v6,
              a4,
              *a2,
              &v13);
      v6 = (unsigned int)v11;
      if ( v11 >= 0 && v13 )
      {
        *a6 = 1;
        *a5 = v7;
        return (unsigned int)v6;
      }
      ++v7;
      ++a2;
      if ( v7 >= a3 )
        return (unsigned int)v6;
    }
  }
  return (unsigned int)v6;
}
