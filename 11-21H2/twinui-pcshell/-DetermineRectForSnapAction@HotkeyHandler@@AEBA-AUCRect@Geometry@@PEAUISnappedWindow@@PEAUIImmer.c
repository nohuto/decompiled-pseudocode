/*
 * XREFs of ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x1805A9578
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805A9A60 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?IsSmartFillSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180061AF0 (-IsSmartFillSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180319714 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x180595A30 (-SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4Sn.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapLayoutHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x1805A20A0 (-ComputeSnapErrorThresholdForMonitor@SnapLayoutHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x1805A26E0 (-DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z.c)
 *     ?GetRectForColumn@AdvancedSmartFill@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@12@AEBU34@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805A4D44 (-GetRectForColumn@AdvancedSmartFill@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegi.c)
 *     ?GetRectForColumn@AdvancedSmartFill@SnapLayoutHelpers@@YA?AUtagRECT@@JAEBUCRect@Geometry@@IK@Z @ 0x1805A4E04 (-GetRectForColumn@AdvancedSmartFill@SnapLayoutHelpers@@YA-AUtagRECT@@JAEBUCRect@Geometry@@IK@Z.c)
 *     ?GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@2@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@2@@Z @ 0x1805A4E64 (-GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@.c)
 *     ?GetRectForRow@AdvancedSmartFill@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@12@AEBU34@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x1805A5AF8 (-GetRectForRow@AdvancedSmartFill@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegion@.c)
 *     ?GetRectForRow@AdvancedSmartFill@SnapLayoutHelpers@@YA?AUtagRECT@@JAEBUCRect@Geometry@@IK@Z @ 0x1805A5BB8 (-GetRectForRow@AdvancedSmartFill@SnapLayoutHelpers@@YA-AUtagRECT@@JAEBUCRect@Geometry@@IK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotkeyHandler::DetermineRectForSnapAction(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        SnapLayoutHelpers *a4,
        int a5,
        int *a6,
        unsigned int a7)
{
  int v11; // eax
  struct IImmersiveMonitor *v12; // rdx
  unsigned __int64 v13; // rdx
  struct tagRECT *RectForColumn; // rax
  __m128i v15; // xmm0
  __int128 v16; // xmm0
  signed int v17; // eax
  int v18; // edx
  _DWORD *RectForRow; // rax
  int v20; // eax
  struct IImmersiveMonitor *v21; // rdx
  int v22; // eax
  struct IImmersiveMonitor *v23; // rdx
  int v24; // eax
  struct IImmersiveMonitor *v25; // rdx
  unsigned __int64 v26; // rdx
  signed int v27; // eax
  int v28; // edx
  int v29; // eax
  struct IImmersiveMonitor *v30; // rdx
  int v31; // eax
  struct IImmersiveMonitor *v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  struct IImmersiveSettingsCache *v35; // rdx
  int RectForRegion; // eax
  wil::details::in1diag3 *v37; // rcx
  __int64 v38; // rdx
  int v40; // [rsp+28h] [rbp-89h]
  __int64 *v41[4]; // [rsp+40h] [rbp-71h] BYREF
  int v42[4]; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v43[4]; // [rsp+70h] [rbp-41h] BYREF
  __int128 v44; // [rsp+80h] [rbp-31h]
  __int128 v45; // [rsp+90h] [rbp-21h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]

  memset(v41, 0, sizeof(v41));
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( a5 <= 0 )
    goto LABEL_54;
  if ( a5 <= 8 )
  {
    *(_OWORD *)a2 = *(_OWORD *)SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)v42, a5, a6);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
      1u,
      v33,
      v34);
    if ( SnapLayoutHelpers::IsSmartFillSettingEnabled(*(SnapLayoutHelpers **)(a1 + 64), v35) )
    {
      RectForRegion = (*(__int64 (__fastcall **)(_QWORD, SnapLayoutHelpers *, __int64, __int64 **))(**(_QWORD **)(a1 + 32)
                                                                                                  + 24LL))(
                        *(_QWORD *)(a1 + 32),
                        a4,
                        1LL,
                        v41);
      v37 = retaddr;
      if ( RectForRegion >= 0 )
      {
        v44 = 0LL;
        v45 = 0LL;
        *(_OWORD *)v42 = 0LL;
        RectForRegion = SnapLayoutHelpers::AdvancedSmartFill::GetRectForRegion(
                          (RECT *)a2,
                          0,
                          a4,
                          v41,
                          (struct tagRECT *)v42,
                          (__int64)v43);
        v37 = retaddr;
        if ( RectForRegion >= 0 )
        {
          *(_OWORD *)a2 = *(_OWORD *)v42;
          RectForRegion = CSnapComponentTelemetry::SendSnapFillTypeEvent(v43, a5, a3);
          v37 = retaddr;
          if ( RectForRegion >= 0 )
            goto LABEL_54;
          v38 = 753LL;
        }
        else
        {
          v38 = 750LL;
        }
      }
      else
      {
        v38 = 739LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v37,
        (void *)v38,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)(unsigned int)RectForRegion);
      goto LABEL_54;
    }
    goto LABEL_54;
  }
  switch ( a5 )
  {
    case 9:
      if ( SnapLayoutHelpers::IsSmartFillSettingEnabled(
             *(SnapLayoutHelpers **)(a1 + 64),
             (struct IImmersiveSettingsCache *)a2) )
      {
        v31 = (*(__int64 (__fastcall **)(_QWORD, SnapLayoutHelpers *, __int64, __int64 **))(**(_QWORD **)(a1 + 32) + 24LL))(
                *(_QWORD *)(a1 + 32),
                a4,
                1LL,
                v41);
        if ( v31 >= 0 )
        {
          v27 = SnapLayoutHelpers::ComputeSnapErrorThresholdForMonitor(a4, v32);
          v28 = 0;
          goto LABEL_34;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2F7,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v31);
      }
      v26 = (unsigned int)(*a6 + 1);
      goto LABEL_44;
    case 10:
      if ( SnapLayoutHelpers::IsSmartFillSettingEnabled(
             *(SnapLayoutHelpers **)(a1 + 64),
             (struct IImmersiveSettingsCache *)a2) )
      {
        v29 = (*(__int64 (__fastcall **)(_QWORD, SnapLayoutHelpers *, __int64, __int64 **))(**(_QWORD **)(a1 + 32) + 24LL))(
                *(_QWORD *)(a1 + 32),
                a4,
                1LL,
                v41);
        if ( v29 >= 0 )
        {
          v27 = SnapLayoutHelpers::ComputeSnapErrorThresholdForMonitor(a4, v30);
          v28 = 1;
          goto LABEL_34;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x302,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v29);
      }
      v26 = (unsigned int)((*a6 + a6[2]) / 2);
      goto LABEL_44;
    case 11:
      if ( !SnapLayoutHelpers::IsSmartFillSettingEnabled(
              *(SnapLayoutHelpers **)(a1 + 64),
              (struct IImmersiveSettingsCache *)a2) )
      {
LABEL_32:
        v26 = (unsigned int)(a6[2] - 1);
LABEL_44:
        RectForColumn = SnapLayoutHelpers::AdvancedSmartFill::GetRectForColumn(
                          (struct tagRECT *)v42,
                          (struct tagRECT *)v26,
                          (const struct Geometry::CRect *)a6,
                          (const struct Geometry::CRect *)a7);
        goto LABEL_14;
      }
      v24 = (*(__int64 (__fastcall **)(_QWORD, SnapLayoutHelpers *, __int64, __int64 **))(**(_QWORD **)(a1 + 32) + 24LL))(
              *(_QWORD *)(a1 + 32),
              a4,
              1LL,
              v41);
      if ( v24 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x30D,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v24);
        goto LABEL_32;
      }
      v27 = SnapLayoutHelpers::ComputeSnapErrorThresholdForMonitor(a4, v25);
      v28 = 2;
LABEL_34:
      RectForRow = SnapLayoutHelpers::AdvancedSmartFill::GetRectForColumn(
                     v42,
                     v28,
                     (__int64)a6,
                     (const char *)a7,
                     v27,
                     v40,
                     (__int64)v41);
      goto LABEL_18;
    case 12:
      if ( SnapLayoutHelpers::IsSmartFillSettingEnabled(
             *(SnapLayoutHelpers **)(a1 + 64),
             (struct IImmersiveSettingsCache *)a2) )
      {
        v22 = (*(__int64 (__fastcall **)(_QWORD, SnapLayoutHelpers *, __int64, __int64 **))(**(_QWORD **)(a1 + 32) + 24LL))(
                *(_QWORD *)(a1 + 32),
                a4,
                1LL,
                v41);
        if ( v22 >= 0 )
        {
          v17 = SnapLayoutHelpers::ComputeSnapErrorThresholdForMonitor(a4, v23);
          v18 = 0;
          goto LABEL_17;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x318,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v22);
      }
      v13 = (unsigned int)(a6[1] + 1);
      goto LABEL_13;
    case 13:
      if ( !SnapLayoutHelpers::IsSmartFillSettingEnabled(
              *(SnapLayoutHelpers **)(a1 + 64),
              (struct IImmersiveSettingsCache *)a2) )
      {
LABEL_22:
        v13 = (unsigned int)((a6[1] + a6[3]) / 2);
        goto LABEL_13;
      }
      v20 = (*(__int64 (__fastcall **)(_QWORD, SnapLayoutHelpers *, __int64, __int64 **))(**(_QWORD **)(a1 + 32) + 24LL))(
              *(_QWORD *)(a1 + 32),
              a4,
              1LL,
              v41);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x323,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v20);
        goto LABEL_22;
      }
      v17 = SnapLayoutHelpers::ComputeSnapErrorThresholdForMonitor(a4, v21);
      v18 = 1;
LABEL_17:
      RectForRow = SnapLayoutHelpers::AdvancedSmartFill::GetRectForRow(
                     v42,
                     v18,
                     (__int64)a6,
                     (const char *)a7,
                     v17,
                     v40,
                     (__int64)v41);
LABEL_18:
      v16 = *(_OWORD *)RectForRow;
      goto LABEL_15;
    case 14:
      if ( !SnapLayoutHelpers::IsSmartFillSettingEnabled(
              *(SnapLayoutHelpers **)(a1 + 64),
              (struct IImmersiveSettingsCache *)a2) )
      {
LABEL_12:
        v13 = (unsigned int)(a6[3] - 1);
LABEL_13:
        RectForColumn = SnapLayoutHelpers::AdvancedSmartFill::GetRectForRow(
                          (struct tagRECT *)v42,
                          (struct tagRECT *)v13,
                          (const struct Geometry::CRect *)a6,
                          (const struct Geometry::CRect *)a7);
LABEL_14:
        v15 = *(__m128i *)RectForColumn;
        *(_QWORD *)v42 = *(_QWORD *)&RectForColumn->left;
        *(_QWORD *)&v42[2] = _mm_srli_si128(v15, 8).m128i_u64[0];
        v16 = *(_OWORD *)v42;
LABEL_15:
        *(_OWORD *)a2 = v16;
        break;
      }
      v11 = (*(__int64 (__fastcall **)(_QWORD, SnapLayoutHelpers *, __int64, __int64 **))(**(_QWORD **)(a1 + 32) + 24LL))(
              *(_QWORD *)(a1 + 32),
              a4,
              1LL,
              v41);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x32E,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v11);
        goto LABEL_12;
      }
      v17 = SnapLayoutHelpers::ComputeSnapErrorThresholdForMonitor(a4, v12);
      v18 = 2;
      goto LABEL_17;
  }
LABEL_54:
  CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v41);
  return a2;
}
