/*
 * XREFs of ?ShouldUseDarkTheme@ImmersiveContextMenuHelper@@YA_NW4ImmersiveContextMenuOptions@@@Z @ 0x18074DA8C
 * Callers:
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x18074D0C0 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180115270 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180150B4C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 *     ?ShouldAppUseDarkTheme@ImmersiveContextMenuHelper@@YA_NXZ @ 0x18074D9A4 (-ShouldAppUseDarkTheme@ImmersiveContextMenuHelper@@YA_NXZ.c)
 */

char __fastcall ImmersiveContextMenuHelper::ShouldUseDarkTheme(
        ImmersiveContextMenuHelper *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  __int64 v6; // r8
  __int64 v7; // r9
  LSTATUS ValueW; // eax
  signed int v9; // edx
  bool v10; // zf
  char v11; // al
  unsigned int pvData; // [rsp+58h] [rbp+10h] BYREF
  DWORD pdwType; // [rsp+60h] [rbp+18h] BYREF
  DWORD pcbData; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( byte_180992389 )
    return ImmersiveContextMenuHelper::ShouldAppUseDarkTheme(a1);
  if ( ((unsigned __int8)a1 & 8) == 0 )
    return 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
    1u,
    v6,
    v7);
  pdwType = 0;
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
             L"SystemUsesLightTheme",
             0x10000012u,
             &pdwType,
             &pvData,
             &pcbData);
  v9 = ValueW;
  if ( ValueW )
  {
    if ( ValueW == 234 )
    {
      LOWORD(v9) = 13;
    }
    else if ( ValueW <= 0 )
    {
LABEL_15:
      v11 = pvData;
      goto LABEL_16;
    }
    goto LABEL_14;
  }
  LOWORD(v9) = 13;
  if ( pdwType != 4 )
  {
    if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v10 = (_WORD)pvData == 49;
      goto LABEL_7;
    }
    goto LABEL_14;
  }
  v10 = pvData == 1;
  if ( pvData > 1 )
  {
LABEL_14:
    v9 = (unsigned __int16)v9 | 0x80070000;
    goto LABEL_15;
  }
LABEL_7:
  v9 = 0;
  v11 = v10;
LABEL_16:
  if ( v9 >= 0 )
    v4 = v11;
  return v4 ^ 1;
}
