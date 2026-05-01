/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityService@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x180108B0C
 * Callers:
 *     ?MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180107B64 (-MultitaskingViewVisibilityService_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0MultitaskingViewVisibilityService@@QEAA@XZ @ 0x180109290 (--0MultitaskingViewVisibilityService@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewVisibilityService@@UIMultitaskingViewVisibilityServiceInternal@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017B5A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMu_ea_18017B5A0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewVisibilityService,IMultitaskingViewVisibilityService,>(
        void **a1)
{
  MultitaskingViewVisibilityService *v2; // rax
  MultitaskingViewVisibilityService *v3; // rdi
  _DWORD *v4; // rcx
  _DWORD *v5; // r9
  _DWORD *v6; // rcx
  int CanCastTo; // esi
  __int64 v9; // r8
  const struct _GUID *v10; // r9

  *a1 = 0LL;
  v2 = (MultitaskingViewVisibilityService *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v3 = MultitaskingViewVisibilityService::MultitaskingViewVisibilityService(v2);
  *a1 = 0LL;
  if ( !InlineIsEqualGUID(&GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v4, v5) )
    {
      *a1 = v3;
    }
    else
    {
      if ( !InlineIsEqualGUID(v6, &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58) )
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v9 + 8), v10, a1);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
        if ( CanCastTo < 0 )
          goto LABEL_7;
        goto LABEL_6;
      }
      *a1 = (void *)v9;
    }
    CanCastTo = 0;
LABEL_6:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
    goto LABEL_7;
  }
  *a1 = v3;
  (*(void (__fastcall **)(MultitaskingViewVisibilityService *))(*(_QWORD *)v3 + 8LL))(v3);
  CanCastTo = 0;
LABEL_7:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewVisibilityService,IMultitaskingViewVisibilityServiceInternal,Microsoft::WRL::FtmBase>::Release(v3);
  return (unsigned int)CanCastTo;
}
