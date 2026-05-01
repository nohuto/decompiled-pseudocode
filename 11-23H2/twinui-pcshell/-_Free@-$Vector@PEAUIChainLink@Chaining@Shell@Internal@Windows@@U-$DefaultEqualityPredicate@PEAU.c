/*
 * XREFs of ?_Free@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@CAXPEAV?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@I@Z @ 0x18001DD4C
 * Callers:
 *     ?_EraseAll@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAV?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@PEAI@Z @ 0x18001DD14 (-_EraseAll@-$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U-$DefaultEqualityPredicate@.c)
 *     ?Clear@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x1803C0480 (-Clear@-$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U-$DefaultEqualityPredicate@PEAU.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x18039EDDC (-Release@ReferencedGitCookie@-$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activi.c)
 */

void __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>::_Free(
        char *a1,
        unsigned int a2)
{
  char *v3; // rbx
  __int64 v4; // rsi
  void *v5; // rcx

  if ( a1 )
  {
    if ( a2 )
    {
      v3 = a1;
      v4 = a2;
      do
      {
        v5 = *(void **)v3;
        if ( v3[8] )
        {
          XWinRT::detail::GitStorageType<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::ReferencedGitCookie::Release(v5);
        }
        else if ( v5 )
        {
          (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
        }
        *(_QWORD *)v3 = 0LL;
        v3[8] = 0;
        v3 += 16;
        --v4;
      }
      while ( v4 );
    }
    free(a1);
  }
}
