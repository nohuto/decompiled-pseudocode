/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VAppViewDataSourceAdapterBase@@@Details@23@UIWeakReferenceSource@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180080BAC
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourceAdapterBase@@UIAppViewDataSourceAdapter@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180080B0C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VAppViewDataSourc.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<AppViewDataSourceAdapterBase>,IWeakReferenceSource,IAppViewDataSourceAdapter,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  void **v3; // r8
  __int64 v4; // r10
  __int64 v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // r10
  __int64 result; // rax
  __int64 v9; // rcx
  const struct _GUID *v10; // r9
  unsigned int v11; // r11d

  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_727f9e97_76ee_497b_a942_b6371328485c) )
    goto LABEL_6;
  if ( (unsigned int)InlineIsEqualGUID(v2, &GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c) )
  {
    *v6 = v7 + 8;
    result = 0LL;
  }
  else
  {
    result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    if ( !(unsigned int)InlineIsEqualGUID(v5, &_uuidof__AUIWeakReferenceSource_Details_Platform__)
      && !(unsigned int)InlineIsEqualGUID(v9, &GUID_12faaf23_7a01_4f04_95ca_c33c158afdf1) )
    {
      result = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v4 + 8), v10, v3);
      if ( (_DWORD)result == v11 )
        return v11;
      return result;
    }
LABEL_6:
    *v3 = (void *)v4;
    return 0LL;
  }
  return result;
}
