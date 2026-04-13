/*
 * XREFs of ?Initialize@?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@QEAAJPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180081FA4
 * Callers:
 *     ??$?0PEAUIAppInstallInfoRecord@ContentManagement@@@?$AutoValue@V?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUIAppInstallInfoRecord@ContentManagement@@PEAJ@Z @ 0x180079CC4 (--$-0PEAUIAppInstallInfoRecord@ContentManagement@@@-$AutoValue@V-$GitStorageType@UIAppInstallInf.c)
 *     ?ReplaceAll@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180083720 (-ReplaceAll@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$QueryInterface@UIAgileObject@@@IUnknown@@QEAAJPEAPEAUIAgileObject@@@Z @ 0x18007BF68 (--$QueryInterface@UIAgileObject@@@IUnknown@@QEAAJPEAPEAUIAgileObject@@@Z.c)
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x18007EC50 (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x1800832D0 (-Release@ReferencedGitCookie@-$GitStorageType@UITargetedContentTriggerInternal@Internal@Targeted.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>::Initialize(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64))
{
  unsigned int v4; // ebx
  _DWORD *v6; // rax
  Windows::Internal::Details::Git *v7; // rcx
  _DWORD *v8; // rdi
  int v9; // esi
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  _DWORD *v11; // [rsp+60h] [rbp+18h]

  v4 = 0;
  if ( !a2 )
    return 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  if ( (int)IUnknown::QueryInterface<IAgileObject>(a2, (__int64)&v10) < 0 )
  {
    v6 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v6;
    v11 = v6;
    if ( v6 )
    {
      *v6 = 1;
      v6[1] = 0;
      v9 = Windows::Internal::Details::Git::Acquire(v7);
      if ( v9 >= 0 )
        v9 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64), GUID *, _DWORD *))(*(_QWORD *)qword_1801964B0 + 24LL))(
               qword_1801964B0,
               a2,
               &GUID_82929d2b_e4ba_49a3_af91_dadf7766d476,
               v8 + 1);
      if ( v9 < 0 )
      {
        XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>::ReferencedGitCookie::Release(v8);
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
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*a2)[1])(a2);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return v4;
}
