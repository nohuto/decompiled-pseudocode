/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UILauncherTipContextMenu@@UILauncherTipContextMenuSettingChangeListener@@UILauncherTipContextMenuMigration@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1806CC6B8
 * Callers:
 *     ??$MakeAndInitialize@VCLauncherTipContextMenu@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18010B55C (--$MakeAndInitialize@VCLauncherTipContextMenu@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUI.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ILauncherTipContextMenu,ILauncherTipContextMenuSettingChangeListener,ILauncherTipContextMenuMigration>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _QWORD *v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // r10
  unsigned int v6; // edx
  __int64 v8; // r10

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_b8c1db5f_cbb3_48bc_afd9_ce6b880c79ed);
  v6 = 0;
  if ( IsEqualGUID )
  {
    *v3 = v5;
    return 0LL;
  }
  else
  {
    v8 = v5 + 8;
    if ( *v4 == 1549888188
      && v4[1] == *(_DWORD *)&GUID_5c616abc_7341_4100_950b_69f3b00f548c.Data2
      && v4[2] == *(_DWORD *)GUID_5c616abc_7341_4100_950b_69f3b00f548c.Data4
      && v4[3] == *(_DWORD *)&GUID_5c616abc_7341_4100_950b_69f3b00f548c.Data4[4]
      || (v8 += 8LL, *v4 == -1013690902)
      && v4[1] == *(_DWORD *)&GUID_c3944dea_7320_4b6f_871d_3c414eb61070.Data2
      && v4[2] == *(_DWORD *)GUID_c3944dea_7320_4b6f_871d_3c414eb61070.Data4
      && v4[3] == *(_DWORD *)&GUID_c3944dea_7320_4b6f_871d_3c414eb61070.Data4[4] )
    {
      *v3 = v8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v6;
  }
}
