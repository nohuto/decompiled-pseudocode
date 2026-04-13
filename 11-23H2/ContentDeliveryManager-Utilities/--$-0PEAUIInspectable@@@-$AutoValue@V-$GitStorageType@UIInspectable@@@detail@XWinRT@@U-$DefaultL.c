/*
 * XREFs of ??$?0PEAUIInspectable@@@?$AutoValue@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUIInspectable@@PEAJ@Z @ 0x1800C481C
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIInspectable@@_N@Z @ 0x1800CA050 (-InsertAtInternal@-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Inte.c)
 *     ?SetAt@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIInspectable@@@Z @ 0x1800CBE60 (-SetAt@-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collec.c)
 * Callees:
 *     ?Initialize@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAUIInspectable@@@Z @ 0x1800C9F18 (-Initialize@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAUIInspectable@@@Z.c)
 */

__int64 __fastcall XWinRT::AutoValue<XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>>::AutoValue<XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>>(
        __int64 a1,
        _QWORD *a2,
        int *a3)
{
  int v5; // eax

  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  v5 = XWinRT::detail::GitStorageType<IInspectable>::Initialize(a1, *a2);
  *a3 = v5;
  if ( v5 < 0 )
  {
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return a1;
}
