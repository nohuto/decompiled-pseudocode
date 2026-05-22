/*
 * XREFs of ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801D1854
 * Callers:
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801D0C40 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801045A4 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetKeyboardInputData@KeyboardInputInfo@@QEAA?AU_KEYBOARD_INPUT_DATA@@XZ @ 0x180170DA0 (-GetKeyboardInputData@KeyboardInputInfo@@QEAA-AU_KEYBOARD_INPUT_DATA@@XZ.c)
 *     ??$_Assign_cast@AEAUKeyEventData@VirtualHotKeyTracker@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801D1394 (--$_Assign_cast@AEAUKeyEventData@VirtualHotKeyTracker@@V-$_List_unchecked_const_iterator@V-$_Lis.c)
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@UCompareGuids@VirtualHotKeyTracker@@V?$allocator@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x1801D1444 (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@V-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allo.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___ @ 0x1801D1570 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_VirtualHotKeyTracker--.c)
 *     ??0?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1801D1634 (--0-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allocator@UKeyEventData@VirtualHotKeyTracker@@@.c)
 *     ?_Unchecked_erase@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAPEAU?$_List_node@UKeyEventData@VirtualHotKeyTracker@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801D1EFC (-_Unchecked_erase@-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allocator@UKeyEventData@VirtualH.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualHotKeyTracker::OnInput(
        VirtualHotKeyTracker *this,
        struct KeyboardInputInfo *a2,
        struct _GUID *a3,
        const struct HotKeyDetectionResult *a4)
{
  struct _GUID *v5; // r14
  __int64 *v6; // r12
  char v7; // di
  __int64 v8; // r11
  __int16 v9; // cx
  __int64 **v10; // rbx
  __int64 *v11; // rax
  _OWORD *v12; // rax
  __int64 *v13; // rcx
  __int64 *v14; // rdx
  __int64 *v15; // rcx
  __int128 v16; // xmm1
  __int64 v17; // r9
  __m128i **v18; // rsi
  __m128i *i; // rbx
  __m128i v20; // xmm7
  __m128i v21; // xmm6
  unsigned __int64 v22; // xmm0_8
  __int64 *v23; // r12
  __int64 *v24; // r14
  __int64 v25; // r9
  __int64 *v26; // rdi
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 *v29; // rdi
  __int64 v30; // r14
  __m128i *v31; // rax
  __m128i **v32; // rcx
  __int64 *v33; // rbx
  struct _GUID *v34; // r15
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 *v37; // rsi
  __int64 v38; // r9
  __int64 *v39; // rdi
  __int64 v40; // r9
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 *v43; // rdi
  __int64 v44; // rsi
  _OWORD *v45; // rax
  _QWORD *v46; // rcx
  __int64 v47; // rdi
  _QWORD *v48; // rax
  __int64 v49; // r9
  __m128i *v50; // rcx
  _QWORD **v51; // rcx
  _QWORD *v52; // rcx
  _QWORD *v53; // rdi
  __int64 **v54; // rax
  __int64 *j; // rax
  __int64 *k; // rcx
  char v58; // [rsp+20h] [rbp-E0h]
  struct _GUID *v59; // [rsp+28h] [rbp-D8h] BYREF
  VirtualHotKeyTracker *v60; // [rsp+30h] [rbp-D0h]
  __int64 v61; // [rsp+38h] [rbp-C8h]
  _QWORD v62[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v63[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v64[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v65[16]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v66[16]; // [rsp+90h] [rbp-70h] BYREF
  char v67[16]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v68; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v69; // [rsp+C0h] [rbp-40h]
  __int64 v70; // [rsp+D0h] [rbp-30h] BYREF
  int v71; // [rsp+D8h] [rbp-28h]
  __int64 v72; // [rsp+DCh] [rbp-24h]
  int v73; // [rsp+E4h] [rbp-1Ch]
  struct _GUID v74; // [rsp+E8h] [rbp-18h]
  __int64 v75; // [rsp+F8h] [rbp-8h]
  __int128 v76; // [rsp+100h] [rbp+0h]
  struct _GUID v77; // [rsp+110h] [rbp+10h] BYREF
  struct _GUID v78; // [rsp+120h] [rbp+20h] BYREF
  __m128i v79; // [rsp+130h] [rbp+30h] BYREF

  v5 = a3;
  v59 = a3;
  v6 = (__int64 *)this;
  v60 = this;
  v7 = *((_BYTE *)a2 + 94) & 1;
  v58 = v7;
  v68 = 0LL;
  v69 = 0LL;
  *(_QWORD *)&v69 = *((unsigned int *)a2 + 1);
  *(struct _KEYBOARD_INPUT_DATA *)&v68 = *KeyboardInputInfo::GetKeyboardInputData(
                                            a2,
                                            (struct _KEYBOARD_INPUT_DATA *)&v77);
  WORD4(v69) = *(_WORD *)(v8 + 58);
  v9 = *(_WORD *)(v8 + 60);
  WORD5(v69) = v9;
  v10 = (__int64 **)v6[4];
  v11 = *v10;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( v11 == (__int64 *)v10 )
      {
        v14 = v11;
        goto LABEL_15;
      }
      if ( v9 == *((_WORD *)v11 + 21) )
        break;
      v11 = (__int64 *)*v11;
    }
    v14 = v11;
    while ( 1 )
    {
      v15 = (__int64 *)*v11;
      v11 = v15;
      if ( v15 == (__int64 *)v10 )
        break;
      if ( *(_WORD *)(v8 + 60) != *((_WORD *)v15 + 21) )
      {
        v16 = *((_OWORD *)v15 + 2);
        *((_OWORD *)v14 + 1) = *((_OWORD *)v15 + 1);
        *((_OWORD *)v14 + 2) = v16;
        v14 = (__int64 *)*v14;
      }
    }
LABEL_15:
    std::list<VirtualHotKeyTracker::KeyEventData>::_Unchecked_erase(v6 + 4, v14, v10);
  }
  else
  {
    while ( v11 != (__int64 *)v10 )
    {
      if ( *((_WORD *)v11 + 21) == v9 )
        goto LABEL_16;
      v11 = (__int64 *)*v11;
    }
    if ( v6[5] == 0x555555555555555LL )
LABEL_32:
      std::_Xlength_error("list too long");
    v77 = (struct _GUID)(unsigned __int64)(v6 + 4);
    v12 = operator new(0x30uLL);
    v12[1] = v68;
    v12[2] = v69;
    ++v6[5];
    v13 = v10[1];
    *(_QWORD *)v12 = v10;
    *((_QWORD *)v12 + 1) = v13;
    v10[1] = (__int64 *)v12;
    *v13 = (__int64)v12;
  }
LABEL_16:
  if ( *(_QWORD *)a4 && !v7 && !IsEqualGUID((_QWORD *)a4 + 2, &GUID_NULL) && !IsEqualGUID(v5, (_QWORD *)a4 + 2) )
  {
    v18 = (__m128i **)v6[4];
    for ( i = *v18; i != (__m128i *)v18; i = (__m128i *)i->m128i_i64[0] )
    {
      v20 = i[1];
      v21 = i[2];
      v79 = v21;
      v22 = _mm_srli_si128(v21, 8).m128i_u64[0];
      if ( (unsigned __int16)(WORD1(v22) - 160) <= 5u || (unsigned __int16)(WORD1(v22) - 91) <= 1u )
      {
        v23 = v6 + 6;
        v24 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                         v23,
                                         (__int64)v63,
                                         (char *)a4 + 16,
                                         v17)
                          + 48LL);
        v26 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                         v23,
                                         (__int64)v64,
                                         (char *)a4 + 16,
                                         v25)
                          + 48LL);
        do
          v26 = (__int64 *)*v26;
        while ( v26 != v24 && *((_WORD *)v26 + 21) != v79.m128i_i16[5] );
        if ( v26 == *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                               v23,
                                               (__int64)v65,
                                               (char *)a4 + 16,
                                               v27)
                                + 48LL) )
        {
          v28 = std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                  v23,
                  (__int64)v66,
                  (char *)a4 + 16,
                  v17);
          v29 = (__int64 *)(*(_QWORD *)v28 + 48LL);
          v30 = *v29;
          if ( *(_QWORD *)(*(_QWORD *)v28 + 56LL) == 0x555555555555555LL )
            goto LABEL_32;
          v77 = (struct _GUID)(unsigned __int64)(*(_QWORD *)v28 + 48LL);
          v31 = (__m128i *)operator new(0x30uLL);
          v31[1] = v20;
          v31[2] = v21;
          ++v29[1];
          v32 = *(__m128i ***)(v30 + 8);
          v31->m128i_i64[0] = v30;
          v31->m128i_i64[1] = (__int64)v32;
          *(_QWORD *)v77.Data4 = 0LL;
          *(_QWORD *)(v30 + 8) = v31;
          *v32 = v31;
          memset_0(&v70, 0, 0x40uLL);
          v75 = v21.m128i_i64[0];
          v70 = v20.m128i_i64[0];
          v71 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 8));
          v73 = 2;
          v74 = (struct _GUID)*((_OWORD *)a4 + 1);
          NtMITSynthesizeKeyboardInput(2LL, &v70, 0LL);
        }
        v6 = (__int64 *)v60;
      }
    }
    v7 = v58;
    v5 = v59;
  }
  if ( *(_QWORD *)a4 && *((_BYTE *)a4 + 32) )
  {
    memset_0(&v70, 0, 0x40uLL);
    v75 = v69;
    v70 = v68;
    v71 = DWORD2(v68);
    v73 = 2;
    v74 = *v5;
    NtMITSynthesizeKeyboardInput(1LL, &v70, 0LL);
  }
  v33 = *(__int64 **)v6[6];
  v34 = v59;
  while ( !*((_BYTE *)v33 + 25) )
  {
    v78 = (struct _GUID)*((_OWORD *)v33 + 2);
    std::list<VirtualHotKeyTracker::KeyEventData>::list<VirtualHotKeyTracker::KeyEventData>(&v79, (__int64 ***)v33 + 6);
    v77 = v78;
    if ( !IsEqualGUID(v34, &v77) )
    {
      if ( v7 )
      {
        v47 = v79.m128i_i64[0];
        v62[0] = &v68;
        v62[1] = v6;
        v62[2] = &v77;
        v48 = std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___(
                &v59,
                *(__int64 **)v79.m128i_i64[0],
                (__int64 *)v79.m128i_i64[0],
                (__int64)v62);
        std::list<VirtualHotKeyTracker::KeyEventData>::_Unchecked_erase(&v79, *v48, v47);
        v50 = (__m128i *)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                       v6 + 6,
                                       (__int64)v67,
                                       &v77,
                                       v49)
                        + 48LL);
        if ( v50 != &v79 )
          std::list<VirtualHotKeyTracker::KeyEventData>::_Assign_cast<VirtualHotKeyTracker::KeyEventData &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
            (__int64)v50,
            *(_QWORD *)v79.m128i_i64[0],
            (__int64 *)v79.m128i_i64[0]);
      }
      else if ( *(_QWORD *)a4 )
      {
        if ( IsEqualGUID((_QWORD *)a4 + 2, &v78) )
        {
          v36 = v6[2];
          if ( *(_QWORD *)a4 != v36 || (*(_WORD *)(v36 + 24) & 0x4000) == 0 )
          {
            v37 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                             v6 + 6,
                                             (__int64)v66,
                                             &v77,
                                             v35)
                              + 48LL);
            v39 = *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                             v6 + 6,
                                             (__int64)v65,
                                             &v77,
                                             v38)
                              + 48LL);
            do
              v39 = (__int64 *)*v39;
            while ( v39 != v37 && WORD5(v69) != *((_WORD *)v39 + 21) );
            if ( v39 == *(__int64 **)(*(_QWORD *)std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                                                   v6 + 6,
                                                   (__int64)v64,
                                                   &v77,
                                                   v40)
                                    + 48LL) )
            {
              v42 = std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
                      v6 + 6,
                      (__int64)v63,
                      &v77,
                      v41);
              v43 = (__int64 *)(*(_QWORD *)v42 + 48LL);
              v44 = *v43;
              if ( *(_QWORD *)(*(_QWORD *)v42 + 56LL) == 0x555555555555555LL )
                std::_Xlength_error("list too long");
              v60 = (VirtualHotKeyTracker *)(*(_QWORD *)v42 + 48LL);
              v61 = 0LL;
              v45 = operator new(0x30uLL);
              v45[1] = v68;
              v45[2] = v69;
              ++v43[1];
              v46 = *(_QWORD **)(v44 + 8);
              *(_QWORD *)v45 = v44;
              *((_QWORD *)v45 + 1) = v46;
              v61 = 0LL;
              *(_QWORD *)(v44 + 8) = v45;
              *v46 = v45;
            }
            v72 = 0LL;
            v76 = 0LL;
            v75 = v69;
            v70 = v68;
            v71 = DWORD2(v68);
            v73 = 2;
            v74 = v77;
            NtMITSynthesizeKeyboardInput(2LL, &v70, 0LL);
          }
        }
      }
    }
    v51 = (_QWORD **)v79.m128i_i64[0];
    **(_QWORD **)(v79.m128i_i64[0] + 8) = 0LL;
    v52 = *v51;
    if ( v52 )
    {
      do
      {
        v53 = (_QWORD *)*v52;
        std::_Deallocate<16,0>(v52, 0x30uLL);
        v52 = v53;
      }
      while ( v53 );
    }
    std::_Deallocate<16,0>((void *)v79.m128i_i64[0], 0x30uLL);
    v54 = (__int64 **)v33[2];
    if ( *((_BYTE *)v54 + 25) )
    {
      for ( j = (__int64 *)v33[1]; !*((_BYTE *)j + 25) && v33 == (__int64 *)j[2]; j = (__int64 *)j[1] )
        v33 = j;
      v33 = j;
    }
    else
    {
      v33 = (__int64 *)v33[2];
      for ( k = *v54; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        v33 = k;
    }
    v7 = v58;
  }
  std::shared_ptr<SystemCursorShapeBitmap2>::operator=(v6 + 2, a4);
  return 0LL;
}
