/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180014880
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180014720 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::CanCastTo(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  int v4; // edx
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v11; // r9
  _QWORD *v12; // r8
  __int64 v13; // r10

  v4 = *a2;
  if ( v4 == 56
    && a2[1] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data2
    && a2[2] == *(_DWORD *)_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4
    && a2[3] == *(_DWORD *)&_uuidof__AUIWeakReferenceSource_Details_Platform__.Data4[4] )
  {
    goto LABEL_20;
  }
  v5 = a1 + 8;
  if ( v4 == -62389853
    && a2[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
    && a2[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
    && a2[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4]
    || (unsigned int)InlineIsEqualGUID(a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831)
    || (unsigned int)InlineIsEqualGUID(v6, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3)
    || (unsigned int)InlineIsEqualGUID(v7, &GUID_f4921d4f_67d4_4ca9_9ec4_0bc577bb904e)
    || (unsigned int)InlineIsEqualGUID(v8, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee)
    || (unsigned int)InlineIsEqualGUID(v9, &GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8) )
  {
    goto LABEL_7;
  }
  a1 = v5 + 8;
  if ( *v11 == -2024199341
    && v11[1] == *(_DWORD *)&GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data2
    && v11[2] == *(_DWORD *)GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data4
    && v11[3] == *(_DWORD *)&GUID_87592b53_3883_4191_b37f_f49f5cb91b5f.Data4[4] )
  {
LABEL_20:
    *a3 = a1;
    return 0LL;
  }
  v5 += 56LL;
  if ( *v11 == 1612740340
    && v11[1] == *(_DWORD *)&GUID_602076f4_9793_429d_a999_f951052e28e9.Data2
    && v11[2] == *(_DWORD *)GUID_602076f4_9793_429d_a999_f951052e28e9.Data4
    && v11[3] == *(_DWORD *)&GUID_602076f4_9793_429d_a999_f951052e28e9.Data4[4] )
  {
LABEL_7:
    *a3 = v5;
    return 0LL;
  }
  if ( !(unsigned int)InlineIsEqualGUID(v11, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa) )
    return 2147500034LL;
  *v12 = v13 + 88;
  return 0LL;
}
