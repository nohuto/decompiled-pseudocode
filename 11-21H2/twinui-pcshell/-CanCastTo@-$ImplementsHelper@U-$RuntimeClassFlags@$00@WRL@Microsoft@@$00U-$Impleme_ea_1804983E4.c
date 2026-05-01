/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoadingFunctions@@VFtmBase@23@@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1804983E4
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoadingFunctions@@VFtmBase@23@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoadingFunctions@@VFtmBase@23@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180497EA4 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$I_ea_180497EA4.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IIconLoadingFunctions,Microsoft::WRL::FtmBase>>,IWeakReferenceSource>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  void **v3; // r8
  const struct _GUID *v4; // r10
  __int64 v5; // r11
  unsigned int v6; // r9d
  unsigned int CanCastTo; // eax
  _DWORD *v8; // r10
  __int64 v9; // r11

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_4e5c2650_fef0_4f4e_ac85_827929037acf);
  v6 = 0;
  if ( IsEqualGUID )
  {
LABEL_8:
    *v3 = (void *)v5;
    return v6;
  }
  CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v5 + 8), v4, v3);
  if ( CanCastTo == -2147467262 )
  {
    v5 = v9 + 48;
    if ( *v8 != 56
      || v8[1] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
      || v8[2] != *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
      || v8[3] != *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
    {
      return (unsigned int)-2147467262;
    }
    goto LABEL_8;
  }
  return CanCastTo;
}
