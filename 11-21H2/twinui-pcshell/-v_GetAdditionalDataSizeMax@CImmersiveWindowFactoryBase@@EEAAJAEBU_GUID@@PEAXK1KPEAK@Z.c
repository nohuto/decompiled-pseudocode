/*
 * XREFs of ?v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x1801337C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014B5D4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@details@wil@@QE.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::v_GetAdditionalDataSizeMax(
        CImmersiveWindowFactoryBase *this,
        const struct _GUID *a2,
        void *a3,
        __int64 a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // r8d
  unsigned int v11; // edi
  unsigned int v12; // ecx

  *a7 = 0;
  v7 = *((_BYTE *)this + 136) != 0 ? 28 : 24;
  if ( *((_BYTE *)this + 144) )
    v7 = *((_BYTE *)this + 136) != 0 ? 32 : 28;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LIACoreNavigationClient>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetImpl'::`2'::impl,
    a2,
    a3);
  v8 = v7 + 4;
  v9 = -1;
  v10 = -1;
  if ( v7 + 4 >= v7 )
    v10 = v7 + 4;
  v11 = v8 < v7 ? 0x80070216 : 0;
  if ( v8 >= v7 )
  {
    v12 = v10 + 1;
    if ( v10 + 1 >= v10 )
      v9 = v10 + 1;
    v11 = v12 < v10 ? 0x80070216 : 0;
    if ( v12 >= v10 )
      *a7 = v9;
  }
  return v11;
}
