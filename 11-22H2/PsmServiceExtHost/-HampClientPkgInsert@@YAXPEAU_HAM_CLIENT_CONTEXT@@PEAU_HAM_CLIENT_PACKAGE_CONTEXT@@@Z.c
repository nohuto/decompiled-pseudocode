/*
 * XREFs of ?HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180037854
 * Callers:
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180036FD8 (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 * Callees:
 *     CemRcTableFindOrInsertEx @ 0x180037AB0 (CemRcTableFindOrInsertEx.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1156939067@@@details@wil@@QEAA_NXZ @ 0x18004EFB0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1156939067@@@details@wil@@QEAA_NX.c)
 *     ?HampClientPkgReference@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU1@@Z @ 0x1800812F4 (-HampClientPkgReference@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU1@@Z.c)
 */

void __fastcall HampClientPkgInsert(struct _HAM_CLIENT_CONTEXT *a1, struct _HAM_CLIENT_PACKAGE_CONTEXT *a2)
{
  int v3; // edi

  v3 = (int)a1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_1156939067>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1156939067>::GetImpl'::`2'::impl) )
    HampClientPkgReference(a2);
  CemRcTableFindOrInsertEx(v3 + 72, (_DWORD)a2 + 48, (unsigned int)HampClientPkgCompareByHandle, (_DWORD)a2);
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_1156939067>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_1156939067>::GetImpl'::`2'::impl) )
    HampClientPkgReference(a2);
}
