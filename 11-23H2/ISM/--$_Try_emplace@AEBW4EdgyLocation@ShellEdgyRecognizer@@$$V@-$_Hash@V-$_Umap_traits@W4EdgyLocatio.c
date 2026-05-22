/*
 * XREFs of ??$_Try_emplace@AEBW4EdgyLocation@ShellEdgyRecognizer@@$$V@?$_Hash@V?$_Umap_traits@W4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@V?$_Uhash_compare@W4EdgyLocation@ShellEdgyRecognizer@@U?$hash@W4EdgyLocation@ShellEdgyRecognizer@@@std@@U?$equal_to@W4EdgyLocation@ShellEdgyRecognizer@@@4@@4@V?$allocator@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@_N@1@AEBW4EdgyLocation@ShellEdgyRecognizer@@@Z @ 0x180012760
 * Callers:
 *     ?RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVDragManagerClientProxy@@@Z @ 0x180061B74 (-RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI.c)
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18016F090 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800998D4 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$h.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAAX_K@Z @ 0x180099978 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@IUAppView@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ??$_Find_last@W4EdgyLocation@ShellEdgyRecognizer@@@?$_Hash@V?$_Umap_traits@W4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@V?$_Uhash_compare@W4EdgyLocation@ShellEdgyRecognizer@@U?$hash@W4EdgyLocation@ShellEdgyRecognizer@@@std@@U?$equal_to@W4EdgyLocation@ShellEdgyRecognizer@@@4@@4@V?$allocator@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBW4EdgyLocation@ShellEdgyRecognizer@@V?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@std@@PEAX@std@@@1@AEBW4EdgyLocation@ShellEdgyRecognizer@@_K@Z @ 0x18016E018 (--$_Find_last@W4EdgyLocation@ShellEdgyRecognizer@@@-$_Hash@V-$_Umap_traits@W4EdgyLocation@ShellE.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Hash<std::_Umap_traits<enum ShellEdgyRecognizer::EdgyLocation,std::vector<ShellGesturesProcessor::GestureRegistration>,std::_Uhash_compare<enum ShellEdgyRecognizer::EdgyLocation,std::hash<enum ShellEdgyRecognizer::EdgyLocation>,std::equal_to<enum ShellEdgyRecognizer::EdgyLocation>>,std::allocator<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>,0>>::_Try_emplace<enum ShellEdgyRecognizer::EdgyLocation const &,>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 *v10; // rbp
  _DWORD *v11; // rbx
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int128 v23; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  do
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v6++) ^ (unsigned __int64)v7);
  while ( v6 < 4 );
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(__int64 **)(v8 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
  v10 = *(__int64 **)(a1 + 8);
  if ( v9 != v10 )
  {
    while ( *a3 != *((_DWORD *)v9 + 4) )
    {
      if ( v9 == *(__int64 **)(v8 + 16 * (v7 & *(_QWORD *)(a1 + 48))) )
      {
        v10 = v9;
        v9 = 0LL;
        goto LABEL_23;
      }
      v9 = (__int64 *)v9[1];
    }
    v10 = (__int64 *)*v9;
LABEL_23:
    if ( v9 )
    {
      *(_QWORD *)a2 = v9;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  if ( *(_QWORD *)(a1 + 16) == 0x555555555555555LL )
    std::_Xlength_error("unordered_map/set too long");
  *(_QWORD *)&v23 = a1 + 8;
  v11 = operator new(0x30uLL);
  *((_QWORD *)&v23 + 1) = v11;
  v11[4] = *a3;
  *((_QWORD *)v11 + 3) = 0LL;
  *((_QWORD *)v11 + 4) = 0LL;
  *((_QWORD *)v11 + 5) = 0LL;
  v12 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v12 < 0 )
    v13 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
        + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
  else
    v13 = (float)(int)v12;
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 < 0 )
  {
    v21 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v14 >> 1);
    v15 = (float)(int)v21 + (float)(int)v21;
  }
  else
  {
    v15 = (float)(int)v14;
  }
  if ( (float)(v13 / v15) > *(float *)a1 )
  {
    v22 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>>,0>>::_Forced_rehash(
      a1,
      v22);
    v23 = *(_OWORD *)((__int64 (__fastcall *)(__int64, __int128 *, _DWORD *, __int64))std::_Hash<std::_Umap_traits<enum ShellEdgyRecognizer::EdgyLocation,std::vector<ShellGesturesProcessor::GestureRegistration>,std::_Uhash_compare<enum ShellEdgyRecognizer::EdgyLocation,std::hash<enum ShellEdgyRecognizer::EdgyLocation>,std::equal_to<enum ShellEdgyRecognizer::EdgyLocation>>,std::allocator<std::pair<enum ShellEdgyRecognizer::EdgyLocation const,std::vector<ShellGesturesProcessor::GestureRegistration>>>,0>>::_Find_last<enum ShellEdgyRecognizer::EdgyLocation>)(
                       a1,
                       &v23,
                       v11 + 4,
                       v7);
    v10 = (__int64 *)v23;
  }
  v16 = (_QWORD *)v10[1];
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)v11 = v10;
  *((_QWORD *)v11 + 1) = v16;
  *v16 = v11;
  v10[1] = (__int64)v11;
  v17 = *(_QWORD *)(a1 + 24);
  v18 = 2 * (v7 & *(_QWORD *)(a1 + 48));
  v19 = *(__int64 **)(v17 + 16 * (v7 & *(_QWORD *)(a1 + 48)));
  if ( v19 == *(__int64 **)(a1 + 8) )
  {
    *(_QWORD *)(v17 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v11;
  }
  else
  {
    if ( v19 == v10 )
    {
      *(_QWORD *)(v17 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v11;
      goto LABEL_14;
    }
    if ( *(_QWORD **)(v17 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8) != v16 )
      goto LABEL_14;
  }
  *(_QWORD *)(v17 + 8 * v18 + 8) = v11;
LABEL_14:
  *(_QWORD *)a2 = v11;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
