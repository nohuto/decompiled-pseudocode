/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteractionTrackerStatics@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@@Details@23@UIInteractionTrackerStatics2@Interactions@Composition@UI@Windows@@VNil@523@VNil@523@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180105D4C
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIInteractionTrackerStatics@Interactions@Composition@UI@Windows@@@23@UIInteractionTrackerStatics2@Interactions@Composition@UI@Windows@@VNil@Details@23@VNil@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180106334 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_180106334.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BE44 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IInteractionTrackerStatics>>,Windows::UI::Composition::Interactions::IInteractionTrackerStatics2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
        Microsoft::WRL::FtmBase *a1,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int CanCastTo; // r9d
  BOOL IsEqualGUID; // eax
  const struct _GUID *v7; // rcx
  _QWORD *v8; // r8
  char *v9; // rax
  unsigned int v10; // r10d

  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(a1, a2, a3);
  if ( CanCastTo == -2147467262 )
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_bba5d7b7_6590_4498_8d6c_eb62b514c92a);
    CanCastTo = 0;
    if ( IsEqualGUID )
    {
      v9 = (char *)a1 + 32;
    }
    else
    {
      if ( !InlineIsEqualGUID(v7, &GUID_35e53720_46b7_5cb0_b505_f3d6884a6163) )
        return v10;
      v9 = (char *)a1 + 48;
    }
    *v8 = v9;
  }
  return CanCastTo;
}
