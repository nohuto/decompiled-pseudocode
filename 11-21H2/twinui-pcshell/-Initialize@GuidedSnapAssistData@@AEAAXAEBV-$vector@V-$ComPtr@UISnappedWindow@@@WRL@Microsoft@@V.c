/*
 * XREFs of ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x1805B6B18
 * Callers:
 *     ??$?0AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@1@AEBUCRect@Geometry@@AEAH@?$_Ref_count_obj2@VGuidedSnapAssistData@@@std@@QEAA@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@1@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@1@AEBUCRect@Geometry@@AEAH@Z @ 0x18059A43C (--$-0AEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISnappedWin.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXXZ @ 0x18059F038 (-_Tidy@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$allocator@USna.c)
 *     ??$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@$$QEAU234567@@Z @ 0x1805B6A34 (--$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@-$vector@USnapAs.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_860ed2b1985808d5321f1d44f6d1e68b___ @ 0x1805B6A70 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windows--Internal-.c)
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
  int *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // r15
  _QWORD *v18; // rsi
  char *v19; // rbx
  __int64 v20; // r14
  int v21; // r10d
  int v22; // r11d
  int v23; // esi
  int v24; // r15d
  __int64 v25; // r9
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  int v29; // r8d
  __int128 v30; // [rsp+20h] [rbp-91h] BYREF
  __int64 v31; // [rsp+30h] [rbp-81h]
  __int128 v32; // [rsp+40h] [rbp-71h] BYREF
  __int128 v33; // [rsp+50h] [rbp-61h]
  __int128 v34; // [rsp+60h] [rbp-51h] BYREF
  __int128 v35; // [rsp+70h] [rbp-41h]
  _OWORD v36[2]; // [rsp+80h] [rbp-31h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-11h] BYREF
  void *v38[2]; // [rsp+B0h] [rbp-1h] BYREF

  v30 = 0LL;
  v31 = 0LL;
  v9 = 1;
  *(_QWORD *)&v32 = 0LL;
  *(float *)&v10 = (float)(a4[3] - a4[1]);
  v11 = (float)(a4[2] - *a4);
  v12 = (float)a4[1];
  *((float *)&v32 + 2) = (float)*a4;
  *((float *)&v32 + 3) = v12;
  *(float *)&v33 = v11;
  *(_QWORD *)((char *)&v33 + 4) = v10;
  v34 = v32;
  v35 = v33;
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
    (__int64)&v30,
    &v34);
  v13 = a3[3];
  v14 = v13 + a3[4];
  while ( v13 != v14 )
  {
    v15 = *(int **)(a3[1] + 8 * (v13 & (a3[2] - 1LL)));
    v16 = v9++;
    *(_QWORD *)&v32 = v16;
    *((float *)&v32 + 2) = (float)*v15;
    *((float *)&v32 + 3) = (float)v15[1];
    *(float *)&v33 = (float)(v15[2] - *v15);
    *((float *)&v33 + 1) = (float)(v15[3] - v15[1]);
    DWORD2(v33) = 1;
    v34 = v32;
    v35 = v33;
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
      (__int64)&v30,
      &v34);
    ++v13;
  }
  v17 = *(_QWORD **)(a2 + 8);
  v18 = *(_QWORD **)a2;
  v19 = (char *)*((_QWORD *)&v30 + 1);
  v20 = v30;
  while ( v18 != v17 )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v18 + 56LL))(*v18, &v37);
    *(_QWORD *)&v32 = &v37;
    *((_QWORD *)&v32 + 1) = &a5;
    std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_860ed2b1985808d5321f1d44f6d1e68b___(
      v38,
      v20,
      (__int64)v19,
      (__int64)&v32);
    if ( v38[0] != v19 )
    {
      if ( !*((_DWORD *)v38[0] + 6) )
        goto LABEL_11;
      if ( v38[0] != v19 )
      {
        memmove_0(v38[0], (char *)v38[0] + 32, v19 - ((char *)v38[0] + 32));
        *((_QWORD *)&v30 + 1) = v19 - 32;
      }
    }
    *(_QWORD *)&v34 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 80LL))(*v18);
    *((float *)&v34 + 2) = (float)(int)v37;
    *((float *)&v34 + 3) = (float)SDWORD1(v37);
    *(float *)&v35 = (float)(DWORD2(v37) - v37);
    *((float *)&v35 + 1) = (float)(HIDWORD(v37) - DWORD1(v37));
    DWORD2(v35) = 2;
    v36[0] = v34;
    v36[1] = v35;
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
      (__int64)&v30,
      v36);
    v19 = (char *)*((_QWORD *)&v30 + 1);
    v20 = v30;
LABEL_11:
    ++v18;
  }
  *(_OWORD *)v38 = *(_OWORD *)a4;
  v21 = HIDWORD(v38[1]);
  v22 = (int)v38[1];
  v23 = HIDWORD(v38[0]);
  v24 = (int)v38[0];
  if ( (char *)v20 != v19 )
  {
    v25 = v20 + 12;
    do
    {
      if ( *(_DWORD *)(v25 + 12) != 2 )
      {
        v26 = (int)(float)(*(float *)v25 + *(float *)(v25 + 8));
        v27 = (int)(float)(*(float *)(v25 - 4) + *(float *)(v25 + 4));
        v28 = (int)*(float *)v25;
        v29 = (int)*(float *)(v25 - 4);
        if ( v21 > v26 )
          v26 = v21;
        v21 = v26;
        if ( v22 > v27 )
          v27 = v22;
        v22 = v27;
        if ( v23 < v28 )
          v28 = v23;
        v23 = v28;
        if ( v24 < v29 )
          v29 = v24;
        v24 = v29;
      }
      v25 += 32LL;
    }
    while ( (char *)(v25 - 12) != v19 );
  }
  *(float *)&v37 = (float)v24;
  *((float *)&v37 + 1) = (float)v23;
  *((float *)&v37 + 2) = (float)(v22 - v24);
  *((float *)&v37 + 3) = (float)(v21 - v23);
  *(_OWORD *)(a1 + 24) = v37;
  if ( (__int128 *)a1 != &v30 )
  {
    std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Tidy(a1);
    *(_QWORD *)a1 = v20;
    *(_QWORD *)(a1 + 8) = v19;
    *(_QWORD *)(a1 + 16) = v31;
    v30 = 0LL;
    v31 = 0LL;
  }
  *(_QWORD *)(a1 + 40) = GetForegroundWindow();
  std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Tidy((__int64)&v30);
}
