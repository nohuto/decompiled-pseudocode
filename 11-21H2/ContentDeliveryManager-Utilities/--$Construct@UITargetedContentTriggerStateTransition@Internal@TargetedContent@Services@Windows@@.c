/*
 * XREFs of ??$Construct@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Z @ 0x180091860
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@_N@Z @ 0x180094818 (-InsertAtInternal@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@Targe_ea_180094818.c)
 *     ?ReplaceAll@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x1800959C0 (-ReplaceAll@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedCon_ea_1800959C0.c)
 *     ?SetAt@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x180096120 (-SetAt@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@_ea_180096120.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x180087880 (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::InterfaceLifetimeTraits::Construct<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(
        __int64 a1,
        __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _DWORD *v6; // rax
  Windows::Internal::Details::Git *v7; // rcx
  _DWORD *v8; // rdi
  int v9; // ebp
  __int64 v10; // rcx
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  if ( a2 )
  {
    v12 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a2)(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v12) < 0 )
    {
      v6 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
      v8 = v6;
      if ( v6 )
      {
        *v6 = 1;
        v6[1] = 0;
        v9 = Windows::Internal::Details::Git::Acquire(v7);
        if ( v9 >= 0 )
          v9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, _DWORD *))(*(_QWORD *)qword_1801AF3F0 + 24LL))(
                 qword_1801AF3F0,
                 a2,
                 &GUID_bd97ebc7_80e3_4470_a44f_f0d312b031f3,
                 v8 + 1);
        if ( v9 < 0 )
        {
          if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
          {
            if ( v8[1] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801AF3F0 + 32LL))(qword_1801AF3F0);
            operator delete(v8);
          }
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
      v10 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return (unsigned int)v9;
    }
    else
    {
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = a2;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v5 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
  }
  return v4;
}
