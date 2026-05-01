/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VAppViewDataSourceAdapterBase@@@Details@23@UIWeakReferenceSource@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18005077C
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800506DC (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourc.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<AppViewDataSourceAdapterBase>,IWeakReferenceSource,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  int IsEqualGUID; // eax
  __int64 v3; // rcx
  void **v4; // r8
  __int64 v5; // r11
  unsigned int v6; // r9d
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r11
  __int64 v11; // rcx
  const struct _GUID *v12; // r10
  unsigned int CanCastTo; // eax

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_727f9e97_76ee_497b_a942_b6371328485c);
  v6 = 0;
  if ( IsEqualGUID )
    goto LABEL_2;
  if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c) )
  {
    *v9 = v10 + 8;
    return v6;
  }
  if ( (unsigned int)InlineIsEqualGUID(v8, &_uuidof__AUIWeakReferenceSource_Details_Platform__)
    || (unsigned int)InlineIsEqualGUID(v11, &GUID_12faaf23_7a01_4f04_95ca_c33c158afdf1) )
  {
LABEL_2:
    *v4 = (void *)v5;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v5 + 8), v12, v4);
    v6 = CanCastTo;
    if ( CanCastTo == -2147467262 )
      return (unsigned int)-2147467262;
  }
  return v6;
}
