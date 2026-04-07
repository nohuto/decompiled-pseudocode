/*
 * XREFs of ?GetAnimationIds@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@PEAH1@Z @ 0x18000D464
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_OCAUTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D570 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_OCAUTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D62C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D6B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MSARTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MRAUTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D748 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MRAUTest@@@details@wil@@QEAAX_NW4Reportin.c)
 */

__int64 __fastcall CTopLevelWindow3D::GetAnimationIds(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // esi
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // edx
  int v16; // edx

  v4 = 0;
  v6 = a3;
  if ( a2 > 10 )
  {
    v15 = a2 - 11;
    if ( v15 )
    {
      v14 = (unsigned int)(v15 - 1);
      if ( !(_DWORD)v14 )
        goto LABEL_16;
      v14 = (unsigned int)(v14 - 1);
      if ( !(_DWORD)v14 )
        goto LABEL_16;
      v16 = v14 - 1;
      if ( !v16 )
      {
        *a3 = 34;
        *a4 = 2;
        return v4;
      }
      if ( v16 != 1 )
        goto LABEL_24;
      *a3 = 34;
    }
    else
    {
      *a3 = 99;
    }
LABEL_27:
    *a4 = 1;
    return v4;
  }
  if ( a2 == 10 )
  {
    *a3 = 98;
    goto LABEL_27;
  }
  v7 = (unsigned int)(a2 - 1);
  if ( !(_DWORD)v7 )
  {
    LODWORD(v7) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_OCAUTest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_OCAUTest>::GetImpl'::`2'::impl,
      v7);
    *v6 = 100;
    goto LABEL_11;
  }
  v8 = (unsigned int)(v7 - 1);
  if ( !(_DWORD)v8 )
    goto LABEL_15;
  v9 = (unsigned int)(v8 - 1);
  if ( !(_DWORD)v9 )
  {
    LODWORD(v9) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MRAUTest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_MRAUTest>::GetImpl'::`2'::impl,
      v9);
    LOBYTE(v12) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
      v12);
    *v6 = 94;
    goto LABEL_11;
  }
  v8 = (unsigned int)(v9 - 1);
  if ( !(_DWORD)v8 )
  {
LABEL_15:
    LOBYTE(a3) = 3;
    LOBYTE(v8) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MSARTest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_MSARTest>::GetImpl'::`2'::impl,
      v8,
      a3);
LABEL_16:
    LOBYTE(v14) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
      v14);
    *v6 = 105;
    goto LABEL_11;
  }
  v10 = (unsigned int)(v8 - 1);
  if ( !(_DWORD)v10 )
  {
    LODWORD(v10) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MRAUTest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_MRAUTest>::GetImpl'::`2'::impl,
      v10);
    LOBYTE(v13) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
      v13);
    *v6 = 95;
    goto LABEL_11;
  }
  if ( (_DWORD)v10 != 1 )
  {
LABEL_24:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0xEAu);
    return v4;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_OCAUTest>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_OCAUTest>::GetImpl'::`2'::impl,
    v10);
  *v6 = 101;
LABEL_11:
  *a4 = 1;
  return v4;
}
