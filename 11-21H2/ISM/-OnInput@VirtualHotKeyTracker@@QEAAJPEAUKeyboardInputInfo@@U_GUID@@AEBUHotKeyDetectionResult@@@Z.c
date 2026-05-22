/*
 * XREFs of ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801B331C
 * Callers:
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B2720 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EB958 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetKeyboardInputData@KeyboardInputInfo@@QEAA?AU_KEYBOARD_INPUT_DATA@@XZ @ 0x180151C44 (-GetKeyboardInputData@KeyboardInputInfo@@QEAA-AU_KEYBOARD_INPUT_DATA@@XZ.c)
 *     ??$_Assign_cast@AEAUKeyEventData@VirtualHotKeyTracker@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801B2E64 (--$_Assign_cast@AEAUKeyEventData@VirtualHotKeyTracker@@V-$_List_unchecked_const_iterator@V-$_Lis.c)
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@UCompareGuids@VirtualHotKeyTracker@@V?$allocator@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x1801B2F14 (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@V-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allo.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___ @ 0x1801B3040 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_VirtualHotKeyTracker--.c)
 *     ??0?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801B3104 (--0-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allocator@UKeyEventData@VirtualHotKeyTracker@@@.c)
 *     ?_Unchecked_erase@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAPEAU?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801B3A0C (-_Unchecked_erase@-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allocator@UKeyEventData@VirtualH.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualHotKeyTracker::OnInput(
        VirtualHotKeyTracker *this,
        struct KeyboardInputInfo *a2,
        struct _GUID *a3,
        const struct HotKeyDetectionResult *a4)
{
  struct _GUID *v5; // rdi
  __int64 *v6; // r13
  char v7; // si
  __int64 v8; // r9
  __int64 v9; // r11
  __int16 v10; // cx
  __int64 **v11; // rbx
  __int64 *v12; // rax
  _OWORD *v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  __int64 *v16; // rcx
  __int128 v17; // xmm1
  _QWORD *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i **v21; // rsi
  __m128i *i; // rbx
  __m128i v23; // xmm7
  __m128i v24; // xmm6
  unsigned __int64 v25; // xmm0_8
  __int64 *v26; // r13
  __int64 *v27; // r14
  __int64 v28; // r9
  __int64 *v29; // rdi
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 *v32; // rdi
  __int64 v33; // r14
  __m128i *v34; // rax
  __m128i **v35; // rcx
  __int64 *v36; // rdi
  struct _GUID *v37; // r15
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 *v42; // rsi
  __int64 v43; // r9
  __int64 *v44; // rbx
  __int64 v45; // r9
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 *v48; // rbx
  __int64 v49; // rsi
  _OWORD *v50; // rax
  _QWORD *v51; // rcx
  __int64 v52; // rbx
  _QWORD *v53; // rax
  __int64 v54; // r9
  __m128i *v55; // rcx
  _QWORD **v56; // rcx
  _QWORD *v57; // rcx
  _QWORD *v58; // rbx
  __int64 **v59; // rax
  __int64 *j; // rax
  __int64 *k; // rcx
  char v63; // [rsp+28h] [rbp-E0h]
  VirtualHotKeyTracker *v64; // [rsp+30h] [rbp-D8h] BYREF
  struct _GUID *v65; // [rsp+38h] [rbp-D0h]
  __int64 v66; // [rsp+40h] [rbp-C8h]
  __int128 v67; // [rsp+48h] [rbp-C0h]
  struct _GUID *v68; // [rsp+58h] [rbp-B0h]
  _BYTE v69[16]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v70[16]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v71[16]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v72[24]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v73; // [rsp+A8h] [rbp-60h] BYREF
  struct _GUID *v74; // [rsp+B8h] [rbp-50h]
  char v75[16]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v76; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v77; // [rsp+E8h] [rbp-20h]
  __int64 v78; // [rsp+F8h] [rbp-10h] BYREF
  int v79; // [rsp+100h] [rbp-8h]
  __int64 v80; // [rsp+104h] [rbp-4h]
  int v81; // [rsp+10Ch] [rbp+4h]
  struct _GUID v82; // [rsp+110h] [rbp+8h]
  __int64 v83; // [rsp+120h] [rbp+18h]
  __int128 v84; // [rsp+128h] [rbp+20h]
  struct _GUID v85; // [rsp+138h] [rbp+30h] BYREF
  struct _GUID v86; // [rsp+148h] [rbp+40h]
  __m128i v87; // [rsp+158h] [rbp+50h] BYREF

  v5 = a3;
  v65 = a3;
  v6 = (__int64 *)this;
  v64 = this;
  v7 = *((_BYTE *)a2 + 94) & 1;
  v63 = v7;
  HIDWORD(v76) = 0;
  *(_DWORD *)((char *)&v77 + 10) = 0;
  HIWORD(v77) = 0;
  *(_QWORD *)&v77 = *((unsigned int *)a2 + 1);
  *(struct _KEYBOARD_INPUT_DATA *)&v76 = *KeyboardInputInfo::GetKeyboardInputData(
                                            a2,
                                            (struct _KEYBOARD_INPUT_DATA *)&v85);
  WORD4(v77) = *(_WORD *)(v9 + 58);
  v10 = *(_WORD *)(v9 + 60);
  WORD5(v77) = v10;
  v11 = (__int64 **)v6[4];
  v12 = *v11;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( v12 == (__int64 *)v11 )
        goto LABEL_15;
      if ( v10 == *((_WORD *)v12 + 21) )
        break;
      v12 = (__int64 *)*v12;
    }
    if ( v12 == (__int64 *)v11 )
    {
LABEL_15:
      v15 = v12;
      goto LABEL_16;
    }
    v15 = v12;
    while ( 1 )
    {
      v16 = (__int64 *)*v12;
      v12 = v16;
      if ( v16 == (__int64 *)v11 )
        break;
      if ( *(_WORD *)(v9 + 60) != *((_WORD *)v16 + 21) )
      {
        v17 = *((_OWORD *)v16 + 2);
        *((_OWORD *)v15 + 1) = *((_OWORD *)v16 + 1);
        *((_OWORD *)v15 + 2) = v17;
        v15 = (__int64 *)*v15;
      }
    }
LABEL_16:
    std::list<VirtualHotKeyTracker::KeyEventData>::_Unchecked_erase(v6 + 4, v15, v11);
  }
  else
  {
    while ( v12 != (__int64 *)v11 )
    {
      if ( *((_WORD *)v12 + 21) == v10 )
        goto LABEL_17;
      v12 = (__int64 *)*v12;
    }
    if ( v6[5] == 0x555555555555555LL )
LABEL_37:
      std::_Xlength_error("list too long");
    v85 = (struct _GUID)(unsigned __int64)(v6 + 4);
    v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
    v13[1] = v76;
    v13[2] = v77;
    ++v6[5];
    v14 = v11[1];
    *(_QWORD *)v13 = v11;
    *((_QWORD *)v13 + 1) = v14;
    v11[1] = (__int64 *)v13;
    *v14 = (__int64)v13;
    v5 = v65;
  }
LABEL_17:
  if ( *(_QWORD *)a4 )
  {
    if ( v7 )
      goto LABEL_40;
    v18 = (_QWORD *)((char *)a4 + 16);
    v19 = *((_QWORD *)a4 + 2) - *(_QWORD *)&GUID_NULL.Data1;
    if ( !v19 )
      v19 = *((_QWORD *)a4 + 3) - *(_QWORD *)GUID_NULL.Data4;
    if ( !v19 )
      goto LABEL_40;
    v20 = *(_QWORD *)&v5->Data1 - *v18;
    if ( *(_QWORD *)&v5->Data1 == *v18 )
      v20 = *(_QWORD *)v5->Data4 - *((_QWORD *)a4 + 3);
    if ( !v20 )
      goto LABEL_40;
    v21 = (__m128i **)v6[4];
    for ( i = *v21; i != (__m128i *)v21; i = (__m128i *)i->m128i_i64[0] )
    {
      v23 = i[1];
      v24 = i[2];
      v87 = v24;
      v25 = _mm_srli_si128(v24, 8).m128i_u64[0];
      if ( (unsigned __int16)(WORD1(v25) - 160) <= 5u || (unsigned __int16)(WORD1(v25) - 91) <= 1u )
      {
        v26 = v6 + 6;
        v27 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                         v26,
                                         (__int64)v69,
                                         (char *)a4 + 16,
                                         v8)
                          + 48LL);
        v29 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                         v26,
                                         (__int64)v70,
                                         (char *)a4 + 16,
                                         v28)
                          + 48LL);
        do
          v29 = (__int64 *)*v29;
        while ( v29 != v27 && *((_WORD *)v29 + 21) != v87.m128i_i16[5] );
        if ( v29 == *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                               v26,
                                               (__int64)v71,
                                               (char *)a4 + 16,
                                               v30)
                                + 48LL) )
        {
          v31 = std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                  v26,
                  (__int64)v72,
                  (char *)a4 + 16,
                  v8);
          v32 = (__int64 *)(*(_QWORD *)v31 + 48LL);
          v33 = *v32;
          if ( *(_QWORD *)(*(_QWORD *)v31 + 56LL) == 0x555555555555555LL )
            goto LABEL_37;
          v85 = (struct _GUID)(unsigned __int64)(*(_QWORD *)v31 + 48LL);
          v34 = (__m128i *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
          v34[1] = v23;
          v34[2] = v24;
          ++v32[1];
          v35 = *(__m128i ***)(v33 + 8);
          v34->m128i_i64[0] = v33;
          v34->m128i_i64[1] = (__int64)v35;
          *(_QWORD *)v85.Data4 = 0LL;
          *(_QWORD *)(v33 + 8) = v34;
          *v35 = v34;
          v80 = 0LL;
          v84 = 0LL;
          v83 = v24.m128i_i64[0];
          v78 = v23.m128i_i64[0];
          v79 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 8));
          v81 = 2;
          v82 = *(struct _GUID *)v18;
          NtMITSynthesizeKeyboardInput(2LL, &v78, 0LL);
        }
        v6 = (__int64 *)v64;
      }
    }
    if ( *(_QWORD *)a4 )
    {
      v5 = v65;
LABEL_40:
      if ( *((_BYTE *)a4 + 32) )
      {
        v80 = 0LL;
        v84 = 0LL;
        v83 = v77;
        v78 = v76;
        v79 = DWORD2(v76);
        v81 = 2;
        v82 = *v5;
        NtMITSynthesizeKeyboardInput(1LL, &v78, 0LL);
      }
    }
  }
  v36 = *(__int64 **)v6[6];
  v37 = v65;
  while ( !*((_BYTE *)v36 + 25) )
  {
    v86 = (struct _GUID)*((_OWORD *)v36 + 2);
    std::list<VirtualHotKeyTracker::KeyEventData>::list<VirtualHotKeyTracker::KeyEventData>(&v87, (__int64 ***)v36 + 6);
    v85 = v86;
    v39 = *(_QWORD *)&v37->Data1 - *(_QWORD *)&v86.Data1;
    if ( *(_QWORD *)&v37->Data1 == *(_QWORD *)&v86.Data1 )
      v39 = *(_QWORD *)v37->Data4 - *(_QWORD *)v85.Data4;
    if ( v39 )
    {
      if ( v63 )
      {
        v52 = v87.m128i_i64[0];
        *(_QWORD *)&v67 = &v76;
        *((_QWORD *)&v67 + 1) = v6;
        v68 = &v85;
        v73 = v67;
        v74 = &v85;
        v53 = std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___(
                &v64,
                *(__int64 **)v87.m128i_i64[0],
                (__int64 *)v87.m128i_i64[0],
                (__int64)&v73);
        std::list<VirtualHotKeyTracker::KeyEventData>::_Unchecked_erase(&v87, *v53, v52);
        v55 = (__m128i *)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                       v6 + 6,
                                       (__int64)v75,
                                       &v85,
                                       v54)
                        + 48LL);
        if ( v55 != &v87 )
          std::list<VirtualHotKeyTracker::KeyEventData>::_Assign_cast<VirtualHotKeyTracker::KeyEventData &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
            (__int64)v55,
            *(_QWORD *)v87.m128i_i64[0],
            (__int64 *)v87.m128i_i64[0]);
      }
      else if ( *(_QWORD *)a4 )
      {
        v40 = *((_QWORD *)a4 + 2) - *(_QWORD *)&v86.Data1;
        if ( !v40 )
          v40 = *((_QWORD *)a4 + 3) - *(_QWORD *)v86.Data4;
        if ( !v40 )
        {
          v41 = v6[2];
          if ( *(_QWORD *)a4 != v41 || (*(_WORD *)(v41 + 24) & 0x4000) == 0 )
          {
            v42 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                             v6 + 6,
                                             (__int64)v72,
                                             &v85,
                                             v38)
                              + 48LL);
            v44 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                             v6 + 6,
                                             (__int64)v71,
                                             &v85,
                                             v43)
                              + 48LL);
            do
              v44 = (__int64 *)*v44;
            while ( v44 != v42 && WORD5(v77) != *((_WORD *)v44 + 21) );
            if ( v44 == *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                                   v6 + 6,
                                                   (__int64)v70,
                                                   &v85,
                                                   v45)
                                    + 48LL) )
            {
              v47 = std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                      v6 + 6,
                      (__int64)v69,
                      &v85,
                      v46);
              v48 = (__int64 *)(*(_QWORD *)v47 + 48LL);
              v49 = *v48;
              if ( *(_QWORD *)(*(_QWORD *)v47 + 56LL) == 0x555555555555555LL )
                std::_Xlength_error("list too long");
              v65 = (struct _GUID *)(*(_QWORD *)v47 + 48LL);
              v66 = 0LL;
              v50 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
              v50[1] = v76;
              v50[2] = v77;
              ++v48[1];
              v51 = *(_QWORD **)(v49 + 8);
              *(_QWORD *)v50 = v49;
              *((_QWORD *)v50 + 1) = v51;
              v66 = 0LL;
              *(_QWORD *)(v49 + 8) = v50;
              *v51 = v50;
            }
            v80 = 0LL;
            v84 = 0LL;
            v83 = v77;
            v78 = v76;
            v79 = DWORD2(v76);
            v81 = 2;
            v82 = v85;
            NtMITSynthesizeKeyboardInput(2LL, &v78, 0LL);
          }
        }
      }
    }
    v56 = (_QWORD **)v87.m128i_i64[0];
    **(_QWORD **)(v87.m128i_i64[0] + 8) = 0LL;
    v57 = *v56;
    if ( v57 )
    {
      do
      {
        v58 = (_QWORD *)*v57;
        std::_Deallocate<16,0>(v57, 0x30uLL);
        v57 = v58;
      }
      while ( v58 );
    }
    std::_Deallocate<16,0>((void *)v87.m128i_i64[0], 0x30uLL);
    v59 = (__int64 **)v36[2];
    if ( *((_BYTE *)v59 + 25) )
    {
      for ( j = (__int64 *)v36[1]; !*((_BYTE *)j + 25) && v36 == (__int64 *)j[2]; j = (__int64 *)j[1] )
        v36 = j;
      v36 = j;
    }
    else
    {
      v36 = (__int64 *)v36[2];
      for ( k = *v59; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v36 = k;
    }
  }
  std::shared_ptr<SystemCursorShapeBitmap2>::operator=(v6 + 2, a4);
  return 0LL;
}
