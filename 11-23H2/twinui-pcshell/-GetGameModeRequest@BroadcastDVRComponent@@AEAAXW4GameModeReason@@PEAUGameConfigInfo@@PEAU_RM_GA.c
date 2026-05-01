/*
 * XREFs of ?GetGameModeRequest@BroadcastDVRComponent@@AEAAXW4GameModeReason@@PEAUGameConfigInfo@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x1803D82CC
 * Callers:
 *     ?EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803D6E6C (-EvaluateAppForGameMode@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUBroadcastDVRActive.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsUsingPowerProfile@BroadcastDVRComponent@@AEAA_NAEBU_GUID@@@Z @ 0x1803D8D80 (-IsUsingPowerProfile@BroadcastDVRComponent@@AEAA_NAEBU_GUID@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803DB044 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAAX_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803DB0C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAAX.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wil@@QEAA?AW4Variant_AutoGameModeProfile@@W4VariantReportingKind@3@_N@Z @ 0x1803DCF50 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameModeProfile@@@details@wi.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@wil@@QEAA?AW4Variant_AutoGamePowerProfile@@W4VariantReportingKind@3@_N@Z @ 0x1803DCF98 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGamePowerProfile@@@details@w.c)
 */

__int64 __fastcall BroadcastDVRComponent::GetGameModeRequest(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r15
  BOOL v8; // r14d
  LSTATUS DWORD; // eax
  unsigned int v10; // ecx
  LSTATUS v11; // eax
  unsigned int v12; // ecx
  LSTATUS v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // esi
  int v16; // edx
  char v17; // r12
  __int64 v18; // rdx
  int v19; // ecx
  const struct _GUID *v20; // rdx
  BroadcastDVRComponent *v21; // rcx
  char Variant; // r15
  bool IsUsingPowerProfile; // al
  __int64 v24; // rax
  DWORD ActiveProcessorCount; // edi
  __int64 v26; // rdx
  char v27; // al
  _WORD *v28; // rdx
  unsigned int i; // r9d
  int v30; // r8d
  __int64 v31; // rcx
  int v32; // eax
  unsigned int *v33; // rax
  unsigned int *v34; // rdx
  unsigned int v35; // r10d
  unsigned int v36; // eax
  unsigned int v37; // ecx
  char v38; // r8
  __int64 v39; // rax
  unsigned int v40; // eax
  unsigned int v41; // eax
  __int64 result; // rax
  unsigned int v43; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v44; // [rsp+44h] [rbp-24h] BYREF
  unsigned int v45; // [rsp+48h] [rbp-20h]
  unsigned int v46; // [rsp+4Ch] [rbp-1Ch]
  unsigned int v47; // [rsp+50h] [rbp-18h]
  __int64 v48; // [rsp+58h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  char v51; // [rsp+B8h] [rbp+50h] BYREF
  int v52; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v53; // [rsp+C8h] [rbp+60h] BYREF

  v7 = a1;
  v8 = *(_BYTE *)(a3 + 5) == 0;
  DWORD = SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", L"GpuGameMemoryBudgetPercentage", &v53);
  v10 = 50;
  if ( DWORD >= 0 )
    v10 = v53;
  v46 = v10;
  v11 = SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", L"GpuDwmMemoryBudgetPercentage", &v53);
  v12 = 30;
  if ( v11 >= 0 )
    v12 = v53;
  v47 = v12;
  v13 = SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", L"GpuYieldPercentage", &v53);
  v14 = 2;
  if ( v13 >= 0 )
    v14 = v53;
  v45 = v14;
  if ( SHRegGetDWORD(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", L"DisallowSystemAllowedCpuSets", &v53) >= 0 )
    v8 = v53 != 0;
  v15 = *(_DWORD *)(a3 + 24);
  v16 = *(_DWORD *)(a4 + 28);
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_BYTE *)(a4 + 36) = 2;
  v17 = 1;
  if ( a2 == 5 )
    v18 = v16 & 0xFFFFFFE0 | 0x10;
  else
    v18 = (16 * v8) | v16 & 0xFFFFFFE7 | (8 * !v8) & 0xFFFFFFEF | 7;
  *(_DWORD *)(a4 + 28) = v18;
  if ( *(_QWORD *)(a3 + 16) == -1LL )
  {
    *(_DWORD *)(a4 + 4) = 0;
    if ( !*(_BYTE *)(a3 + 6) )
    {
      v19 = 0;
      if ( a2 == 4 )
        v19 = 8;
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a4 + 32) & 0xFFFFFFF7 | v19;
    }
    goto LABEL_75;
  }
  if ( *(_BYTE *)(a3 + 6) )
    goto LABEL_28;
  LOBYTE(v18) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGamePowerProfile>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_AutoGamePowerProfile>::GetImpl'::`2'::impl,
    v18,
    4294967287LL);
  Variant = wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGamePowerProfile>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_AutoGamePowerProfile>::GetImpl'::`2'::impl);
  if ( !Variant && a2 == 4 )
    Variant = 2;
  IsUsingPowerProfile = BroadcastDVRComponent::IsUsingPowerProfile(v21, v20);
  switch ( Variant )
  {
    case 0:
      goto LABEL_26;
    case 1:
      *(_DWORD *)(a4 + 32) |= 8u;
      break;
    case 2:
      *(_DWORD *)(a4 + 32) |= 8u;
      v33 = (unsigned int *)(a4 + 16);
      v34 = (unsigned int *)(a4 + 16);
      *(_DWORD *)(a4 + 4) = 0;
LABEL_44:
      v35 = v45;
      *v33 = v45;
      v36 = *(_DWORD *)(a4 + 24);
      goto LABEL_45;
    case 3:
      if ( !IsUsingPowerProfile )
      {
        *(_DWORD *)(a4 + 32) |= 8u;
LABEL_40:
        *(_DWORD *)(a4 + 4) = 0;
        goto LABEL_75;
      }
      break;
    case 4:
LABEL_26:
      *(_DWORD *)(a4 + 32) = *(_DWORD *)(a4 + 32) & 0xFFFFFFF7 | (8 * !IsUsingPowerProfile);
      break;
  }
  v7 = a1;
LABEL_28:
  if ( a2 != 4 )
  {
    v24 = *(_QWORD *)(a3 + 16);
    if ( v24 || *(_DWORD *)(a3 + 28) || *(_BYTE *)(a3 + 5) )
    {
      *(_QWORD *)(a4 + 8) = v24;
      v41 = *(_DWORD *)(a3 + 28);
      if ( v41 )
      {
        if ( v41 > *(_DWORD *)(a4 + 4) )
          *(_DWORD *)(a4 + 28) |= 0x40u;
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(a3 + 28);
      }
    }
    else
    {
      ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
      LOBYTE(v26) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameModeProfile>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_AutoGameModeProfile>::GetImpl'::`2'::impl,
        v26);
      v27 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameModeProfile>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_AutoGameModeProfile>::GetImpl'::`2'::impl);
      v28 = &unk_1808889A0;
      for ( i = 0; i < 0x23; ++i )
      {
        if ( *((_BYTE *)v28 + 4) == v27 )
        {
          v30 = *(_DWORD *)v28 >> 28;
          if ( v30 != 12 && ((*(_DWORD *)v28 >> 21) & 0x3F) == ActiveProcessorCount )
          {
            *(_QWORD *)(a4 + 8) = (unsigned __int16)*(_DWORD *)v28;
            if ( (v28[1] & 0x1F) != 0 )
            {
              if ( (v28[1] & 0x1Fu) > *(_DWORD *)(a4 + 4) )
                *(_DWORD *)(a4 + 28) |= 0x40u;
              *(_DWORD *)(a4 + 4) = v28[1] & 0x1F;
            }
            if ( ((v30 - 2) & 0xFFFFFFFB) == 0 )
              goto LABEL_68;
            goto LABEL_75;
          }
        }
        v28 += 4;
      }
      v31 = *(_QWORD *)(v7 + 256);
      v43 = 0;
      LOBYTE(v52) = 1;
      v48 = 0LL;
      v44 = 0;
      v51 = 0;
      v32 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *, unsigned int *, int *, char *))(*(_QWORD *)v31 + 88LL))(
              v31,
              &v43,
              &v48,
              &v44,
              &v52,
              &v51);
      if ( v32 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xA40,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(unsigned int)v32);
        goto LABEL_39;
      }
      if ( v51 )
      {
        v39 = v48;
        if ( !v15 )
          v15 = v43;
        if ( v48 )
        {
          if ( v48 != -1 )
          {
            *(_QWORD *)(a4 + 8) = v48;
            goto LABEL_61;
          }
LABEL_62:
          *(_DWORD *)(a4 + 4) = 0;
        }
        else
        {
LABEL_61:
          if ( v39 == -1 )
            goto LABEL_62;
          v40 = v44;
          if ( v44 )
          {
            if ( v44 > *(_DWORD *)(a4 + 4) )
              *(_DWORD *)(a4 + 28) |= 0x40u;
            *(_DWORD *)(a4 + 4) = v40;
          }
        }
        if ( !(_BYTE)v52 )
          goto LABEL_75;
LABEL_68:
        *(_DWORD *)(a4 + 28) = *(_DWORD *)(a4 + 28) & 0xFFFFFFE7 | 8;
        goto LABEL_75;
      }
LABEL_39:
      if ( ActiveProcessorCount == 2 )
        goto LABEL_40;
      *(_DWORD *)(a4 + 28) = *(_DWORD *)(a4 + 28) & 0xFFFFFFE7 | 8;
      if ( ActiveProcessorCount == 4 )
        *(_DWORD *)(a4 + 4) = 2;
    }
  }
LABEL_75:
  v33 = (unsigned int *)(a4 + 16);
  v34 = (unsigned int *)(a4 + 16);
  if ( !v15 )
    goto LABEL_44;
  *v33 = HIBYTE(v15);
  if ( HIBYTE(v15) > 0xAu )
    *v34 = 100 - HIBYTE(v15);
  v35 = v45;
  *(_DWORD *)(a4 + 20) = BYTE2(v15);
  v36 = BYTE1(v15);
  *(_DWORD *)(a4 + 24) = BYTE1(v15);
LABEL_45:
  v37 = *(_DWORD *)(a4 + 20);
  if ( !v37 && !v36 )
  {
    v38 = 1;
LABEL_81:
    v17 = 0;
    goto LABEL_82;
  }
  v38 = 0;
  if ( v37 < 0x64 && v36 < 0x64 )
    goto LABEL_81;
LABEL_82:
  if ( v38 || v17 || v37 + v36 >= 0x64 )
  {
    *(_DWORD *)(a4 + 20) = v46;
    *(_DWORD *)(a4 + 24) = v47;
  }
  result = *v34 - 2;
  if ( (unsigned int)result > 8 )
    *v34 = v35;
  if ( a2 != 3 )
  {
    *(_DWORD *)(a4 + 4) = 0;
    *v34 = 10;
    *(_DWORD *)(a4 + 20) = 50;
    *(_DWORD *)(a4 + 24) = 30;
  }
  return result;
}
