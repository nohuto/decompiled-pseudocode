/*
 * XREFs of ?Initialize@?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x180306034
 * Callers:
 *     ??$?0PEAUIChainLink@Chaining@Shell@Internal@Windows@@@?$AutoValue@V?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUIChainLink@Chaining@Shell@Internal@Windows@@PEAJ@Z @ 0x18030158C (--$-0PEAUIChainLink@Chaining@Shell@Internal@Windows@@@-$AutoValue@V-$GitStorageType@UIChainLink@.c)
 *     ?ReplaceAll@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIChainLink@Chaining@Shell@25@@Z @ 0x180307490 (-ReplaceAll@-$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U-$DefaultEqualityPredicate.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x1802E163C (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x1802E6DEC (-Release@ReferencedGitCookie@-$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activi.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<Windows::Internal::Shell::Chaining::IChainLink>::Initialize(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // ebx
  volatile signed __int32 *v6; // rax
  Windows::Internal::Details::Git *v7; // rcx
  volatile signed __int32 *v8; // rdi
  int v9; // esi
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  volatile signed __int32 *v11; // [rsp+60h] [rbp+18h]

  v4 = 0;
  if ( !a2 )
    return 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a2)(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v10) < 0 )
  {
    v6 = (volatile signed __int32 *)operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v6;
    v11 = v6;
    if ( v6 )
    {
      *v6 = 1;
      *((_DWORD *)v6 + 1) = 0;
      v9 = Windows::Internal::Details::Git::Acquire(v7);
      if ( v9 >= 0 )
        v9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, volatile signed __int32 *))(*(_QWORD *)qword_1807B4BB8
                                                                                            + 24LL))(
               qword_1807B4BB8,
               a2,
               &GUID_602076f4_9793_429d_a999_f951052e28e9,
               v8 + 1);
      if ( v9 < 0 )
      {
        XWinRT::detail::GitStorageType<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::ReferencedGitCookie::Release(v8);
      }
      else
      {
        *(_QWORD *)a1 = v8;
        *(_BYTE *)(a1 + 8) = 1;
      }
    }
    else
    {
      v9 = -2147024882;
    }
    v4 = v9;
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = a2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  return v4;
}
