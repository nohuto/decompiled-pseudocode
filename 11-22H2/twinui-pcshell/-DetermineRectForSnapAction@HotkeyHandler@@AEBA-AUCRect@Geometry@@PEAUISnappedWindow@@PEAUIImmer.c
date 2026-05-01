/*
 * XREFs of ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x180675E58
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x180676370 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x1802D2574 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z @ 0x180670BEC (-DetermineDefaultSnapRegionRect@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SnapRegion@@AEBU23@@Z.c)
 *     ?GetRectForColumn@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x180672948 (-GetRectForColumn@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEB.c)
 *     ?GetRectForColumn@SnapLayoutHelpers@@YA?AUtagRECT@@JAEBUCRect@Geometry@@IK@Z @ 0x180672A08 (-GetRectForColumn@SnapLayoutHelpers@@YA-AUtagRECT@@JAEBUCRect@Geometry@@IK@Z.c)
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@1@@Z @ 0x180672A68 (-GetRectForRegion@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@1@PEAUIImmersiveMo.c)
 *     ?GetRectForRow@SnapLayoutHelpers@@YA?AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@@Z @ 0x180673064 (-GetRectForRow@SnapLayoutHelpers@@YA-AUCRect@Geometry@@W4SpanningLayoutRegion@1@AEBU23@IHKAEBV-$.c)
 *     ?GetRectForRow@SnapLayoutHelpers@@YA?AUtagRECT@@JAEBUCRect@Geometry@@IK@Z @ 0x180673124 (-GetRectForRow@SnapLayoutHelpers@@YA-AUtagRECT@@JAEBUCRect@Geometry@@IK@Z.c)
 *     ?IsSmartFillSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z @ 0x180673D98 (-IsSmartFillSettingEnabled@SnapLayoutHelpers@@YA_NPEAUIImmersiveSettingsCache@@@Z.c)
 *     ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x180676E98 (-SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4Sn.c)
 *     ?ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x180677DC0 (-ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotkeyHandler::DetermineRectForSnapAction(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        SnapRectHelpers *a4,
        int a5,
        const struct Geometry::CRect *a6,
        unsigned int a7)
{
  struct IImmersiveSettingsCache *v11; // rdx
  int RectForRegion; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  struct IImmersiveMonitor *v16; // rdx
  unsigned __int64 v17; // rdx
  __m128i *RectForRow; // rax
  unsigned __int64 v19; // r8
  __m128i v20; // xmm0
  signed int v21; // eax
  int v22; // edx
  _DWORD *v23; // rax
  int v24; // eax
  struct IImmersiveMonitor *v25; // rdx
  int v26; // eax
  struct IImmersiveMonitor *v27; // rdx
  int v28; // eax
  struct IImmersiveMonitor *v29; // rdx
  unsigned __int64 v30; // rdx
  signed int v31; // eax
  int v32; // edx
  int v33; // eax
  struct IImmersiveMonitor *v34; // rdx
  int v35; // eax
  struct IImmersiveMonitor *v36; // rdx
  __m128i *RectForColumn; // rax
  unsigned __int64 v38; // r9
  __m128i v39; // xmm0
  int v41; // [rsp+28h] [rbp-89h]
  _QWORD v42[4]; // [rsp+40h] [rbp-71h] BYREF
  int v43[4]; // [rsp+60h] [rbp-51h] BYREF
  _BYTE v44[16]; // [rsp+70h] [rbp-41h] BYREF
  __int128 v45; // [rsp+80h] [rbp-31h]
  __int128 v46; // [rsp+90h] [rbp-21h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]

  memset(v42, 0, sizeof(v42));
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( a5 > 8 )
  {
    if ( a5 == 9 )
    {
      if ( SnapLayoutHelpers::IsSmartFillSettingEnabled(
             *(SnapLayoutHelpers **)(a1 + 64),
             (struct IImmersiveSettingsCache *)a2) )
      {
        v35 = (*(__int64 (__fastcall **)(_QWORD, SnapRectHelpers *, _QWORD *))(**(_QWORD **)(a1 + 32) + 24LL))(
                *(_QWORD *)(a1 + 32),
                a4,
                v42);
        if ( v35 >= 0 )
        {
          v31 = SnapRectHelpers::ComputeOcclusionErrorThresholdForMonitor(a4, v36);
          v32 = 0;
          goto LABEL_58;
        }
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2B8,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v35);
      }
      RectForColumn = (__m128i *)SnapLayoutHelpers::GetRectForColumn(
                                   (struct tagRECT *)v43,
                                   (struct tagRECT *)(unsigned int)(*(_DWORD *)a6 + 1),
                                   a6,
                                   (const struct Geometry::CRect *)a7);
      v38 = HIDWORD(RectForColumn->m128i_i64[0]);
      v39 = _mm_srli_si128(*RectForColumn, 8);
      *(_DWORD *)a2 = RectForColumn->m128i_i64[0];
      *(_DWORD *)(a2 + 4) = v38;
      *(_DWORD *)(a2 + 8) = _mm_cvtsi128_si32(v39);
      *(_DWORD *)(a2 + 12) = v39.m128i_i32[1];
      goto LABEL_56;
    }
    if ( a5 != 10 )
    {
      if ( a5 != 11 )
      {
        if ( a5 != 12 )
        {
          if ( a5 != 13 )
          {
            if ( a5 != 14 )
              goto LABEL_56;
            if ( !SnapLayoutHelpers::IsSmartFillSettingEnabled(
                    *(SnapLayoutHelpers **)(a1 + 64),
                    (struct IImmersiveSettingsCache *)a2) )
              goto LABEL_26;
            v15 = (*(__int64 (__fastcall **)(_QWORD, SnapRectHelpers *, _QWORD *))(**(_QWORD **)(a1 + 32) + 24LL))(
                    *(_QWORD *)(a1 + 32),
                    a4,
                    v42);
            if ( v15 < 0 )
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x2EF,
                (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
                (const char *)(unsigned int)v15);
LABEL_26:
              v17 = (unsigned int)(*((_DWORD *)a6 + 3) - 1);
LABEL_27:
              RectForRow = (__m128i *)SnapLayoutHelpers::GetRectForRow(
                                        (struct tagRECT *)v43,
                                        (struct tagRECT *)v17,
                                        a6,
                                        (const struct Geometry::CRect *)a7);
LABEL_28:
              v19 = HIDWORD(RectForRow->m128i_i64[0]);
              v20 = _mm_srli_si128(*RectForRow, 8);
              *(_DWORD *)a2 = RectForRow->m128i_i64[0];
              *(_DWORD *)(a2 + 4) = v19;
              *(_DWORD *)(a2 + 8) = _mm_cvtsi128_si32(v20);
              *(_DWORD *)(a2 + 12) = v20.m128i_i32[1];
              goto LABEL_56;
            }
            v21 = SnapRectHelpers::ComputeOcclusionErrorThresholdForMonitor(a4, v16);
            v22 = 2;
            goto LABEL_30;
          }
          if ( !SnapLayoutHelpers::IsSmartFillSettingEnabled(
                  *(SnapLayoutHelpers **)(a1 + 64),
                  (struct IImmersiveSettingsCache *)a2) )
          {
LABEL_34:
            v17 = (unsigned int)((*((_DWORD *)a6 + 1) + *((_DWORD *)a6 + 3)) / 2);
            goto LABEL_27;
          }
          v24 = (*(__int64 (__fastcall **)(_QWORD, SnapRectHelpers *, _QWORD *))(**(_QWORD **)(a1 + 32) + 24LL))(
                  *(_QWORD *)(a1 + 32),
                  a4,
                  v42);
          if ( v24 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x2E4,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
              (const char *)(unsigned int)v24);
            goto LABEL_34;
          }
          v21 = SnapRectHelpers::ComputeOcclusionErrorThresholdForMonitor(a4, v25);
          v22 = 1;
LABEL_30:
          v23 = SnapLayoutHelpers::GetRectForRow(v43, v22, (__int64)a6, (const char *)a7, v21, v41, (__int64)v42);
LABEL_59:
          *(_OWORD *)a2 = *(_OWORD *)v23;
          goto LABEL_56;
        }
        if ( SnapLayoutHelpers::IsSmartFillSettingEnabled(
               *(SnapLayoutHelpers **)(a1 + 64),
               (struct IImmersiveSettingsCache *)a2) )
        {
          v26 = (*(__int64 (__fastcall **)(_QWORD, SnapRectHelpers *, _QWORD *))(**(_QWORD **)(a1 + 32) + 24LL))(
                  *(_QWORD *)(a1 + 32),
                  a4,
                  v42);
          if ( v26 >= 0 )
          {
            v21 = SnapRectHelpers::ComputeOcclusionErrorThresholdForMonitor(a4, v27);
            v22 = 0;
            goto LABEL_30;
          }
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2D9,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
            (const char *)(unsigned int)v26);
        }
        v17 = (unsigned int)(*((_DWORD *)a6 + 1) + 1);
        goto LABEL_27;
      }
      if ( !SnapLayoutHelpers::IsSmartFillSettingEnabled(
              *(SnapLayoutHelpers **)(a1 + 64),
              (struct IImmersiveSettingsCache *)a2) )
        goto LABEL_44;
      v28 = (*(__int64 (__fastcall **)(_QWORD, SnapRectHelpers *, _QWORD *))(**(_QWORD **)(a1 + 32) + 24LL))(
              *(_QWORD *)(a1 + 32),
              a4,
              v42);
      if ( v28 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2CE,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)v28);
LABEL_44:
        v30 = (unsigned int)(*((_DWORD *)a6 + 2) - 1);
LABEL_50:
        RectForRow = (__m128i *)SnapLayoutHelpers::GetRectForColumn(
                                  (struct tagRECT *)v43,
                                  (struct tagRECT *)v30,
                                  a6,
                                  (const struct Geometry::CRect *)a7);
        goto LABEL_28;
      }
      v31 = SnapRectHelpers::ComputeOcclusionErrorThresholdForMonitor(a4, v29);
      v32 = 2;
LABEL_58:
      v23 = SnapLayoutHelpers::GetRectForColumn(v43, v32, (__int64)a6, (const char *)a7, v31, v41, (__int64)v42);
      goto LABEL_59;
    }
    if ( SnapLayoutHelpers::IsSmartFillSettingEnabled(
           *(SnapLayoutHelpers **)(a1 + 64),
           (struct IImmersiveSettingsCache *)a2) )
    {
      v33 = (*(__int64 (__fastcall **)(_QWORD, SnapRectHelpers *, _QWORD *))(**(_QWORD **)(a1 + 32) + 24LL))(
              *(_QWORD *)(a1 + 32),
              a4,
              v42);
      if ( v33 >= 0 )
      {
        v31 = SnapRectHelpers::ComputeOcclusionErrorThresholdForMonitor(a4, v34);
        v32 = 1;
        goto LABEL_58;
      }
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2C3,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
        (const char *)(unsigned int)v33);
    }
    v30 = (unsigned int)((*(_DWORD *)a6 + *((_DWORD *)a6 + 2)) / 2);
    goto LABEL_50;
  }
  if ( a5 == 8 || a5 == 1 || a5 == 2 || a5 == 3 || a5 == 4 || a5 == 5 || (unsigned int)(a5 - 6) <= 1 )
  {
    *(_OWORD *)a2 = *(_OWORD *)SnapLayoutHelpers::DetermineDefaultSnapRegionRect((__int64)v43, a5, (int *)a6);
    if ( SnapLayoutHelpers::IsSmartFillSettingEnabled(*(SnapLayoutHelpers **)(a1 + 64), v11) )
    {
      RectForRegion = (*(__int64 (__fastcall **)(_QWORD, SnapRectHelpers *, _QWORD *))(**(_QWORD **)(a1 + 32) + 24LL))(
                        *(_QWORD *)(a1 + 32),
                        a4,
                        v42);
      v13 = retaddr;
      if ( RectForRegion < 0 )
      {
        v14 = 677LL;
LABEL_16:
        wil::details::in1diag3::_Log_Hr(
          v13,
          (void *)v14,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\hotkeyhandler.cpp",
          (const char *)(unsigned int)RectForRegion);
        goto LABEL_56;
      }
      v45 = 0LL;
      v46 = 0LL;
      *(_OWORD *)v43 = 0LL;
      RectForRegion = SnapLayoutHelpers::GetRectForRegion((RECT *)a2, 0, a4, v42, (struct tagRECT *)v43, (__int64)v44);
      v13 = retaddr;
      if ( RectForRegion < 0 )
      {
        v14 = 688LL;
        goto LABEL_16;
      }
      *(_OWORD *)a2 = *(_OWORD *)v43;
      RectForRegion = CSnapComponentTelemetry::SendSnapFillTypeEvent(v44, (unsigned int)a5, a3);
      v13 = retaddr;
      if ( RectForRegion < 0 )
      {
        v14 = 691LL;
        goto LABEL_16;
      }
    }
  }
LABEL_56:
  CTSimpleArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>>>::RemoveAll((__int64)v42);
  return a2;
}
