/*
 * XREFs of ?v_GetAdditionalDataSizeMax@CImmersiveWindowFactoryBase@@EEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x180117530
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801175D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LIACoreNavigationClient@@@details@wil@@QE.c)
 */

__int64 __fastcall CImmersiveWindowFactoryBase::v_GetAdditionalDataSizeMax(
        CImmersiveWindowFactoryBase *this,
        unsigned __int64 a2,
        void *a3,
        __int64 a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  signed int v7; // ebx
  unsigned int v8; // esi
  unsigned int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v14; // ecx
  int v15; // eax

  *a7 = 0;
  v7 = 0;
  v8 = -1;
  v9 = *((_BYTE *)this + 136) != 0 ? 28 : 24;
  if ( *((_BYTE *)this + 144) )
  {
    v14 = *((_BYTE *)this + 136) != 0 ? 32 : 28;
    a2 = v9;
    v15 = -1;
    if ( v9 + 4 >= v9 )
      v15 = v9 + 4;
    v9 = v15;
    v7 = v14 < (unsigned int)a2 ? 0x80070216 : 0;
  }
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LIACoreNavigationClient>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_LIACoreNavigationClient>::GetImpl'::`2'::impl,
    a2);
  if ( v7 >= 0 )
  {
    v10 = v9 + 4;
    v11 = -1;
    if ( v9 + 4 >= v9 )
      v11 = v9 + 4;
    v7 = v10 < v9 ? 0x80070216 : 0;
    if ( v10 >= v9 )
    {
      v12 = v11 + 1;
      if ( v11 + 1 >= v11 )
        v8 = v11 + 1;
      v7 = v12 < v11 ? 0x80070216 : 0;
      if ( v12 >= v11 )
        *a7 = v8;
    }
  }
  return (unsigned int)v7;
}
