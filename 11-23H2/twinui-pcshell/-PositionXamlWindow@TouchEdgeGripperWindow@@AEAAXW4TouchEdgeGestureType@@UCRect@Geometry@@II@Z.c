/*
 * XREFs of ?PositionXamlWindow@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@UCRect@Geometry@@II@Z @ 0x18065BAF0
 * Callers:
 *     ??0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@@Z @ 0x180658C9C (--0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV-$function@.c)
 * Callees:
 *     ?IsVisible@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1800732A8 (-IsVisible@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplo.c)
 *     ?IsCloaked@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1800732E0 (-IsCloaked@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplo.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     ?Position@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWindowInformation@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1802E8D84 (-Position@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation@UITaskGroupWin.c)
 *     ??$XamlWindowPositioned@MMMM@TouchEdgeGestureTelemetry@@SAX$$QEAM000@Z @ 0x1806579D8 (--$XamlWindowPositioned@MMMM@TouchEdgeGestureTelemetry@@SAX$$QEAM000@Z.c)
 */

void __fastcall TouchEdgeGripperWindow::PositionXamlWindow(__int64 a1, int a2, int *a3, int a4, int nNumerator)
{
  __int64 **v5; // r13
  int v10; // r15d
  int v11; // r12d
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  LANGID ThreadUILanguage_0; // ax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  __m128i v20; // xmm1
  int v21; // eax
  double v22; // xmm1_8
  double v23; // xmm3_8
  double v24; // xmm2_8
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  double v29; // xmm1_8
  double v30; // xmm3_8
  double v31; // xmm2_8
  int v32; // eax
  int v33; // ecx
  double v34; // xmm1_8
  double v35; // xmm3_8
  double v36; // xmm2_8
  unsigned int v37; // eax
  __m128i v38; // xmm0
  unsigned int v39; // eax
  __m128i v40; // xmm0
  int v41; // eax
  int v42; // eax
  unsigned int v43; // eax
  float v44; // xmm1_4
  __m128i v45; // xmm0
  int v46; // eax
  float v47; // [rsp+20h] [rbp-20h] BYREF
  float v48; // [rsp+24h] [rbp-1Ch] BYREF
  float v49; // [rsp+28h] [rbp-18h] BYREF
  __int128 v50; // [rsp+2Ch] [rbp-14h] BYREF
  int v51; // [rsp+70h] [rbp+30h] BYREF

  v5 = (__int64 **)(a1 + 96);
  if ( *(_QWORD *)(a1 + 96) )
  {
    v10 = MulDiv(212, a4, 96);
    v11 = MulDiv(34, nNumerator, 96);
    v47 = COERCE_FLOAT(MulDiv(226, a4, 96));
    v51 = MulDiv(14, a4, 96);
    v12 = a2 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        v27 = a3[2] - *a3;
        v28 = a3[3];
        v29 = (double)*a3;
        *(_DWORD *)(a1 + 116) = v28;
        v30 = (double)v27 * 0.5;
        v31 = (double)(v10 / 2);
        *(_DWORD *)(a1 + 104) = (int)(v30 - v31 + v29);
        *(_DWORD *)(a1 + 108) = v28 - v11;
        *(_DWORD *)(a1 + 112) = (int)(v31 + v30 + v29);
        goto LABEL_17;
      }
      v14 = v13 - 2;
      if ( v14 )
      {
        v15 = v14 - 4;
        if ( v15 )
        {
          if ( v15 == 8 )
          {
            *(_DWORD *)(a1 + 108) = a3[3] - v11;
            ThreadUILanguage_0 = GetThreadUILanguage_0();
            if ( (unsigned int)IsBiDiLocale(ThreadUILanguage_0) )
              v17 = *a3 + v51;
            else
              v17 = a3[2] - LODWORD(v47);
            *(_DWORD *)(a1 + 104) = v17;
            *(_DWORD *)(a1 + 112) = v17 + v10;
            v18 = a3[3];
            goto LABEL_16;
          }
LABEL_17:
          winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsVisible(v5);
          winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsCloaked(v5);
          v37 = a3[1] + (a3[3] - a3[1]) / 2;
          *(float *)&v50 = (float)(*a3 + (a3[2] - *a3) / 2);
          v38 = _mm_cvtsi32_si128(v37);
          v39 = *(_DWORD *)(a1 + 112) - *(_DWORD *)(a1 + 104);
          DWORD1(v50) = _mm_cvtepi32_ps(v38).m128_u32[0];
          v40 = _mm_cvtsi32_si128(v39);
          v41 = *(_DWORD *)(a1 + 116) - *(_DWORD *)(a1 + 108);
          DWORD2(v50) = _mm_cvtepi32_ps(v40).m128_u32[0];
          *((float *)&v50 + 3) = (float)v41;
          winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
            v5,
            &v50);
          v42 = *(_DWORD *)(a1 + 112) - *(_DWORD *)(a1 + 104);
          *(float *)v40.m128i_i32 = (float)(*(_DWORD *)(a1 + 116) - *(_DWORD *)(a1 + 108));
          v48 = (float)*(int *)(a1 + 108);
          v51 = v40.m128i_i32[0];
          v47 = (float)v42;
          v49 = (float)*(int *)(a1 + 104);
          TouchEdgeGestureTelemetry::XamlWindowPositioned<float,float,float,float>(
            (int *)&v49,
            (int *)&v48,
            (int *)&v47,
            &v51);
          v43 = *(_DWORD *)(a1 + 112) - *(_DWORD *)(a1 + 104);
          v44 = (float)*(int *)(a1 + 108);
          *(float *)&v50 = (float)*(int *)(a1 + 104);
          v45 = _mm_cvtsi32_si128(v43);
          v46 = *(_DWORD *)(a1 + 116) - *(_DWORD *)(a1 + 108);
          *((float *)&v50 + 1) = v44;
          DWORD2(v50) = _mm_cvtepi32_ps(v45).m128_u32[0];
          *((float *)&v50 + 3) = (float)v46;
          winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupWindowInformation<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupWindowInformation>::Position(
            v5,
            &v50);
          return;
        }
        v19 = a3[2];
        v20 = _mm_cvtsi32_si128(a3[1]);
        *(_DWORD *)(a1 + 104) = v19 - v11;
        v21 = a3[3] - a3[1];
        v22 = _mm_cvtepi32_pd(v20).m128d_f64[0];
        *(_DWORD *)(a1 + 112) = v19;
        v23 = (double)v21 * 0.5;
        v24 = (double)(v10 / 2);
        *(_DWORD *)(a1 + 108) = (int)(v23 - v24 + v22);
      }
      else
      {
        v25 = a3[3] - a3[1];
        v26 = *a3;
        v22 = (double)a3[1];
        *(_DWORD *)(a1 + 104) = *a3;
        v23 = (double)v25 * 0.5;
        v24 = (double)(v10 / 2);
        *(_DWORD *)(a1 + 108) = (int)(v23 - v24 + v22);
        *(_DWORD *)(a1 + 112) = v26 + v11;
      }
      v18 = (int)(v24 + v23 + v22);
    }
    else
    {
      v32 = a3[2] - *a3;
      v33 = a3[1];
      v34 = (double)*a3;
      *(_DWORD *)(a1 + 108) = v33;
      v35 = (double)v32 * 0.5;
      v36 = (double)(v10 / 2);
      *(_DWORD *)(a1 + 104) = (int)(v35 - v36 + v34);
      *(_DWORD *)(a1 + 112) = (int)(v36 + v35 + v34);
      v18 = v33 + v11;
    }
LABEL_16:
    *(_DWORD *)(a1 + 116) = v18;
    goto LABEL_17;
  }
}
