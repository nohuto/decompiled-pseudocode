/*
 * XREFs of ??$MakeAndInitialize@VCViewPositionChangedEventArgs@@UIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@AEAURect@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@AEAURect@Foundation@7@@Z @ 0x18004BFA0
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800495FC (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180049C0C (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewPositionChangedEventArgs@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180035950 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewPositionChan.c)
 *     ??0CViewPositionChangedEventArgs@@QEAA@XZ @ 0x18004C070 (--0CViewPositionChangedEventArgs@@QEAA@XZ.c)
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18022A46C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18022A46C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CViewPositionChangedEventArgs,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs,Windows::Foundation::Rect &>(
        CViewPositionChangedEventArgs **a1,
        _OWORD *a2)
{
  CViewPositionChangedEventArgs *v4; // rax
  CViewPositionChangedEventArgs *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rdx
  int CanCastTo; // ebx

  *a1 = 0LL;
  v4 = (CViewPositionChangedEventArgs *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = CViewPositionChangedEventArgs::CViewPositionChangedEventArgs(v4);
  *((_OWORD *)v5 + 4) = *a2;
  *a1 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(
                       &GUID_a125a7cc_7993_4050_9333_9ab63091f258,
                       &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a1 = v5;
    (*(void (__fastcall **)(CViewPositionChangedEventArgs *))(*(_QWORD *)v5 + 8LL))(v5);
    CanCastTo = 0;
    goto LABEL_7;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, v8) )
  {
    *a1 = v5;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                  (char *)v5 + 8,
                  v9,
                  a1);
    if ( CanCastTo < 0 )
      goto LABEL_7;
  }
  (*(void (__fastcall **)(CViewPositionChangedEventArgs *))(*(_QWORD *)*a1 + 8LL))(*a1);
LABEL_7:
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs,Microsoft::WRL::FtmBase>::Release((__int64)v5);
  return (unsigned int)CanCastTo;
}
