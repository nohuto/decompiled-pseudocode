/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@UISharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800A5764
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UISharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UISharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800A4090 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtm_ea_1800A4090.c)
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BE44 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002BF8C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs>::CanCastTo(
        Microsoft::WRL::FtmBase *a1,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int CanCastTo; // r9d
  BOOL IsEqualGUID; // eax
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r10
  _QWORD *v9; // r8
  __int64 v10; // r10
  unsigned int v11; // r11d

  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(a1, a2, a3);
  if ( CanCastTo == -2147467262 )
  {
    IsEqualGUID = InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046);
    CanCastTo = 0;
    if ( IsEqualGUID )
    {
      *v7 = v8;
    }
    else if ( InlineIsEqualGUID(v6, &GUID_c8655e42_dd7a_4a88_b31d_b5bf4185f71c) )
    {
      *v9 = v10 + 8;
    }
    else
    {
      return v11;
    }
  }
  return CanCastTo;
}
