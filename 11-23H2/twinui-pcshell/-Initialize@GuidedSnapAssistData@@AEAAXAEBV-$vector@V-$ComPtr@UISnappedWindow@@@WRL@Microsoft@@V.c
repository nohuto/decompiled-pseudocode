/*
 * XREFs of ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x180689FF4
 * Callers:
 *     ??$?0AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@1@AEBUCRect@Geometry@@AEAH@?$_Ref_count_obj2@VGuidedSnapAssistData@@@std@@QEAA@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@1@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@1@AEBUCRect@Geometry@@AEAH@Z @ 0x180668944 (--$-0AEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISnappedWin.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x18066E41C (-_Tidy@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USna.c)
 *     ??$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA?A_T$$QEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@Z @ 0x180689DFC (--$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@-$vector@USnapAs.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_55cd249588c11a309203ecd81774c543___ @ 0x180689E38 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windows--Internal-.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_cda502361e0058b7021093fff9ed1a73___ @ 0x180689EF8 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windo_ea_180689EF8.c)
 *     ??4?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180689FA0 (--4-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USnapAss.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GuidedSnapAssistData::Initialize(__int64 a1, __int64 a2, _QWORD *a3, int *a4, char a5)
{
  unsigned int v9; // r14d
  unsigned int v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  __int64 v13; // rbx
  __int64 v14; // r12
  int *v15; // rcx
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rax
  _QWORD *v19; // r14
  _QWORD *v20; // rdi
  char *v21; // rbx
  __int64 v22; // rsi
  int v23; // edi
  int v24; // r14d
  int v25; // r12d
  int v26; // r13d
  __int64 v27; // r9
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // r8d
  __int64 v32; // r8
  __int64 v33; // r9
  HWND v34; // rcx
  __int128 v35; // [rsp+20h] [rbp-81h] BYREF
  __int128 v36; // [rsp+30h] [rbp-71h]
  __int128 v37; // [rsp+40h] [rbp-61h] BYREF
  __int64 v38; // [rsp+50h] [rbp-51h]
  __int128 v39; // [rsp+58h] [rbp-49h] BYREF
  __int128 v40; // [rsp+68h] [rbp-39h]
  _OWORD v41[2]; // [rsp+78h] [rbp-29h] BYREF
  struct tagRECT pvAttribute; // [rsp+98h] [rbp-9h] BYREF
  void *v43[2]; // [rsp+A8h] [rbp+7h] BYREF

  v37 = 0LL;
  v38 = 0LL;
  v9 = 1;
  *(_QWORD *)&v35 = 0LL;
  *(float *)&v10 = (float)(a4[3] - a4[1]);
  v11 = (float)(a4[2] - *a4);
  v12 = (float)a4[1];
  *((float *)&v35 + 2) = (float)*a4;
  *((float *)&v35 + 3) = v12;
  *(float *)&v36 = v11;
  *(_QWORD *)((char *)&v36 + 4) = v10;
  v39 = v35;
  v40 = v36;
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
    (__int64)&v37,
    &v39);
  v13 = a3[3];
  v14 = v13 + a3[4];
  while ( v13 != v14 )
  {
    v15 = *(int **)(a3[1] + 8 * (v13 & (a3[2] - 1LL)));
    v16 = v15[2];
    v17 = v15[3];
    v18 = v9++;
    *(_QWORD *)&v35 = v18;
    *((float *)&v35 + 2) = (float)*v15;
    *((float *)&v35 + 3) = (float)v15[1];
    *(float *)&v36 = (float)(v16 - *v15);
    *((float *)&v36 + 1) = (float)(v17 - v15[1]);
    DWORD2(v36) = 1;
    v39 = v35;
    v40 = v36;
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
      (__int64)&v37,
      &v39);
    ++v13;
  }
  v19 = *(_QWORD **)(a2 + 8);
  v20 = *(_QWORD **)a2;
  v21 = (char *)*((_QWORD *)&v37 + 1);
  v22 = v37;
  while ( v20 != v19 )
  {
    (*(void (__fastcall **)(_QWORD, struct tagRECT *))(*(_QWORD *)*v20 + 56LL))(*v20, &pvAttribute);
    *(_QWORD *)&v35 = &pvAttribute;
    *((_QWORD *)&v35 + 1) = &a5;
    std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_cda502361e0058b7021093fff9ed1a73___(
      v43,
      v22,
      (__int64)v21,
      (__int64)&v35);
    if ( v43[0] != v21 )
    {
      if ( !*((_DWORD *)v43[0] + 6) )
        goto LABEL_11;
      if ( v43[0] != v21 )
      {
        memmove_0(v43[0], (char *)v43[0] + 32, v21 - ((char *)v43[0] + 32));
        *((_QWORD *)&v37 + 1) = v21 - 32;
      }
    }
    *(_QWORD *)&v39 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 80LL))(*v20);
    *((float *)&v39 + 2) = (float)pvAttribute.left;
    *((float *)&v39 + 3) = (float)pvAttribute.top;
    *(float *)&v40 = (float)(pvAttribute.right - pvAttribute.left);
    *((float *)&v40 + 1) = (float)(pvAttribute.bottom - pvAttribute.top);
    DWORD2(v40) = 2;
    v41[0] = v39;
    v41[1] = v40;
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
      (__int64)&v37,
      v41);
    v21 = (char *)*((_QWORD *)&v37 + 1);
    v22 = v37;
LABEL_11:
    ++v20;
  }
  *(_OWORD *)v43 = *(_OWORD *)a4;
  v23 = HIDWORD(v43[1]);
  v24 = (int)v43[1];
  v25 = HIDWORD(v43[0]);
  v26 = (int)v43[0];
  if ( (char *)v22 != v21 )
  {
    v27 = v22 + 12;
    do
    {
      if ( *(_DWORD *)(v27 + 12) != 2 )
      {
        v28 = (int)(float)(*(float *)v27 + *(float *)(v27 + 8));
        v29 = (int)(float)(*(float *)(v27 - 4) + *(float *)(v27 + 4));
        v30 = (int)*(float *)v27;
        v31 = (int)*(float *)(v27 - 4);
        if ( v23 > v28 )
          v28 = v23;
        v23 = v28;
        if ( v24 > v29 )
          v29 = v24;
        v24 = v29;
        if ( v25 < v30 )
          v30 = v25;
        v25 = v30;
        if ( v26 < v31 )
          v31 = v26;
        v26 = v31;
      }
      v27 += 32LL;
    }
    while ( (char *)(v27 - 12) != v21 );
  }
  *(_QWORD *)(a1 + 40) = GetForegroundWindow();
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    1u,
    v32,
    v33);
  v34 = *(HWND *)(a1 + 40);
  if ( v34 )
  {
    pvAttribute = 0LL;
    if ( DwmGetWindowAttribute(v34, 9u, &pvAttribute, 0x10u) < 0 )
      GetWindowRect(*(HWND *)(a1 + 40), &pvAttribute);
    std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_55cd249588c11a309203ecd81774c543___(
      v43,
      v22,
      (__int64)v21,
      &pvAttribute);
    *(_BYTE *)(a1 + 48) = v43[0] != v21;
  }
  *(float *)&pvAttribute.left = (float)v26;
  *(float *)&pvAttribute.top = (float)v25;
  *(float *)&pvAttribute.right = (float)(v24 - v26);
  *(float *)&pvAttribute.bottom = (float)(v23 - v25);
  *(struct tagRECT *)(a1 + 24) = pvAttribute;
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::operator=((_QWORD *)a1, &v37);
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Tidy((__int64)&v37);
}
