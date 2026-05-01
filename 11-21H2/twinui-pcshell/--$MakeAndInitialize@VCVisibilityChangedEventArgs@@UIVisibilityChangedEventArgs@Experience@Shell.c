/*
 * XREFs of ??$MakeAndInitialize@VCVisibilityChangedEventArgs@@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@012@@Z @ 0x180162B94
 * Callers:
 *     _lambda_82ad92f4bbaa298f2056d3bffcd54c39_::operator() @ 0x180191F34 (_lambda_82ad92f4bbaa298f2056d3bffcd54c39_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___::Run @ 0x180195720 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b66f12b602a8ccb9baf4448cdd4fbda7___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180035D20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChange.c)
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ??0CVisibilityChangedEventArgs@@QEAA@XZ @ 0x180162BF8 (--0CVisibilityChangedEventArgs@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18022A46C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18022A46C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVisibilityChangedEventArgs,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,>(
        __int64 *a1)
{
  CVisibilityChangedEventArgs *v2; // rax
  int CanCastTo; // esi
  CVisibilityChangedEventArgs *v5; // rdi
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  __int64 v9; // rdx

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
  *a1 = 0LL;
  v2 = (CVisibilityChangedEventArgs *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v5 = CVisibilityChangedEventArgs::CVisibilityChangedEventArgs(v2);
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_b27335b3_309e_40d6_8ed5_36dda0289f16, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a1 = (__int64)v5;
    (*(void (__fastcall **)(CVisibilityChangedEventArgs *))(*(_QWORD *)v5 + 8LL))(v5);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v7, v8) )
    {
      *a1 = (__int64)v5;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    (char *)v5 + 8,
                    v9,
                    a1);
      if ( CanCastTo < 0 )
        goto LABEL_3;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
  }
LABEL_3:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release((__int64)v5);
  return (unsigned int)CanCastTo;
}
