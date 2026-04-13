/*
 * XREFs of ?Initialize@?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAAJPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Z @ 0x1800891F8
 * Callers:
 *     ??$?0PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@?$AutoValue@V?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Internal@Collections@Foundation@Windows@@@XWinRT@@QEAA@AEBQEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@PEAJ@Z @ 0x180085344 (--$-0PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@W_ea_180085344.c)
 *     ?ReplaceAll@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x18008A100 (-ReplaceAll@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedCon_ea_18008A100.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$QueryInterface@UIAgileObject@@@IUnknown@@QEAAJPEAPEAUIAgileObject@@@Z @ 0x18007BF68 (--$QueryInterface@UIAgileObject@@@IUnknown@@QEAAJPEAPEAUIAgileObject@@@Z.c)
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x18007EC50 (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@QEAAKXZ @ 0x1800832D0 (-Release@ReferencedGitCookie@-$GitStorageType@UITargetedContentTriggerInternal@Internal@Targeted.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>::Initialize(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64))
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
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  if ( (int)IUnknown::QueryInterface<IAgileObject>(a2, (__int64)&v10) < 0 )
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
        v9 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64), GUID *, volatile signed __int32 *))(*(_QWORD *)qword_1801964B0 + 24LL))(
               qword_1801964B0,
               a2,
               &GUID_bd97ebc7_80e3_4470_a44f_f0d312b031f3,
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
