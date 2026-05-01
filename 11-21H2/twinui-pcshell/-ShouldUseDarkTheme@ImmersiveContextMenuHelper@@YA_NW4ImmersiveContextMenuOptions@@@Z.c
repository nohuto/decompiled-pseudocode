/*
 * XREFs of ?ShouldUseDarkTheme@ImmersiveContextMenuHelper@@YA_NW4ImmersiveContextMenuOptions@@@Z @ 0x1805F799C
 * Callers:
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1805F70B8 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119ADC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180162C90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SystemLightTheme@@@details@wil@@QEAAX_NW4.c)
 */

char __fastcall ImmersiveContextMenuHelper::ShouldUseDarkTheme(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // bl
  LSTATUS ValueW; // eax
  signed int v8; // edx
  bool v9; // zf
  char v10; // al
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pdwType; // [rsp+58h] [rbp+10h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  if ( (a1 & 8) == 0 )
    return 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SystemLightTheme>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SystemLightTheme>::GetImpl'::`2'::impl,
    1u,
    v4,
    v5);
  pcbData = 4;
  v6 = 0;
  pdwType = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
             L"SystemUsesLightTheme",
             0x10000012u,
             &pdwType,
             &pvData,
             &pcbData);
  v8 = ValueW;
  if ( ValueW )
  {
    if ( ValueW == 234 )
    {
      LOWORD(v8) = 13;
    }
    else if ( ValueW <= 0 )
    {
LABEL_13:
      v10 = pvData;
      goto LABEL_14;
    }
    goto LABEL_12;
  }
  LOWORD(v8) = 13;
  if ( pdwType != 4 )
  {
    if ( pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
    {
      v9 = (_WORD)pvData == 49;
      goto LABEL_5;
    }
    goto LABEL_12;
  }
  v9 = pvData == 1;
  if ( pvData > 1 )
  {
LABEL_12:
    v8 = (unsigned __int16)v8 | 0x80070000;
    goto LABEL_13;
  }
LABEL_5:
  v8 = 0;
  v10 = v9;
LABEL_14:
  if ( v8 >= 0 )
    v6 = v10;
  return v6 ^ 1;
}
