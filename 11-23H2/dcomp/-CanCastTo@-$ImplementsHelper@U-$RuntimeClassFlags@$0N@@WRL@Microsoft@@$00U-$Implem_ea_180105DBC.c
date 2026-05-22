/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@VFtmBase@WRL@Microsoft@@UIVisualInteractionSourceStatics@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@@Details@23@UIVisualInteractionSourceStatics2@Interactions@Composition@UI@Windows@@VNil@523@VNil@523@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180105DBC
 * Callers:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UIVisualInteractionSourceStatics@Interactions@Composition@UI@Windows@@@23@UIVisualInteractionSourceStatics2@Interactions@Composition@UI@Windows@@VNil@Details@23@VNil@Details@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801067B4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_1801067B4.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BE44 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics>>,Windows::UI::Composition::Interactions::IVisualInteractionSourceStatics2,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
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
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_369965e1_8645_4f75_ba00_6479cd10c8e6);
    CanCastTo = 0;
    if ( IsEqualGUID )
    {
      v9 = (char *)a1 + 32;
    }
    else
    {
      if ( !InlineIsEqualGUID(v7, &GUID_a979c032_5764_55e0_bc1f_0778786dcfde) )
        return v10;
      v9 = (char *)a1 + 48;
    }
    *v8 = v9;
  }
  return CanCastTo;
}
