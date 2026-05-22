/*
 * XREFs of ?UpdateContactState@ShellGesturesRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x18017B930
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D310 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000F030 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18005A9C4 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800E5E20 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??$emplace@AEBIAEAUContactState@ShellGesturesRecognizer@@@?$_Hash@V?$_Umap_traits@KUContactState@ShellGesturesRecognizer@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@std@@@std@@@std@@_N@1@AEBIAEAUContactState@ShellGesturesRecognizer@@@Z @ 0x18017B3A4 (--$emplace@AEBIAEAUContactState@ShellGesturesRecognizer@@@-$_Hash@V-$_Umap_traits@KUContactState.c)
 *     ?GetPointerInfoTimePoint@QpcTimeConverter@@QEBA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@PEBUtagPOINTER_INFO@@@Z @ 0x18017B808 (-GetPointerInfoTimePoint@QpcTimeConverter@@QEBA-AV-$time_point@Usteady_clock@chrono@std@@V-$dura.c)
 */

void __fastcall ShellGesturesRecognizer::UpdateContactState(
        ShellGesturesRecognizer *this,
        const struct PointerInputInfo *a2)
{
  int v2; // eax
  char *v3; // rsi
  QpcTimeConverter *v4; // r12
  __int64 *PointerInfoTimePoint; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // r14
  char *v17; // rsi
  unsigned __int64 appended; // rax
  __int64 v19; // rbx
  __int64 *v20; // rax
  _QWORD v21[2]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v22[16]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v23[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v24; // [rsp+48h] [rbp-18h]
  __int64 v25; // [rsp+58h] [rbp-8h]
  __int64 v26; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+50h] BYREF

  v2 = *((_DWORD *)this + 20);
  v3 = (char *)a2 + 320;
  ++*((_DWORD *)this + 21);
  v4 = (ShellGesturesRecognizer *)((char *)this + 184);
  *((_DWORD *)this + 26) = v2;
  *((_QWORD *)this + 14) = *((_QWORD *)this + 12);
  PointerInfoTimePoint = QpcTimeConverter::GetPointerInfoTimePoint(
                           (ShellGesturesRecognizer *)((char *)this + 184),
                           &v26,
                           (__int64)a2 + 320);
  v10 = *((_DWORD *)this + 21) == 1;
  v11 = *PointerInfoTimePoint;
  *((_QWORD *)this + 12) = *PointerInfoTimePoint;
  if ( v10 )
  {
    *((_QWORD *)this + 11) = v11;
    *((_QWORD *)this + 14) = v11;
  }
  *((_DWORD *)this + 20) = 0;
  gsl::details::extent_type<-1>::extent_type<-1>(v21, *((unsigned int *)a2 + 79), v8, v9);
  if ( v21[0] == -1LL || !v3 && v21[0] )
  {
    _o_terminate(v13, v12, v14, v15);
    __debugbreak();
    JUMPOUT(0x18017BABFLL);
  }
  v16 = &v3[144 * v21[0]];
  if ( v3 != v16 )
  {
    v17 = v3 + 4;
    do
    {
      if ( (v17[8] & 4) != 0 )
      {
        ++*((_DWORD *)this + 20);
        LODWORD(v26) = *(_DWORD *)v17;
        appended = std::_Fnv1a_append_bytes(v13, (const unsigned __int8 *const)&v26, 4uLL);
        v19 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                (_QWORD *)this + 15,
                v21,
                &v26,
                appended)[1];
        if ( !v19 )
          v19 = *((_QWORD *)this + 16);
        if ( v19 == *((_QWORD *)this + 16) )
        {
          v25 = 0LL;
          v23[0] = *((_DWORD *)v17 + 13);
          v23[1] = *((_DWORD *)v17 + 14);
          v24 = 0LL;
          *((_QWORD *)&v24 + 1) = *QpcTimeConverter::GetPointerInfoTimePoint(v4, &v27, (__int64)(v17 - 4));
          v19 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ShellGesturesRecognizer::ContactState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>,0>>::emplace<unsigned int const &,ShellGesturesRecognizer::ContactState &>(
                             (float *)this + 30,
                             (__int64)v22,
                             (unsigned int *)v17,
                             v23);
        }
        *(_DWORD *)(v19 + 32) = *((_DWORD *)v17 + 13);
        *(_DWORD *)(v19 + 36) = *((_DWORD *)v17 + 14);
        v20 = QpcTimeConverter::GetPointerInfoTimePoint(v4, &v28, (__int64)(v17 - 4));
        v13 = *v20;
        *(_QWORD *)(v19 + 48) = *v20;
      }
      v17 += 144;
    }
    while ( v17 - 4 != v16 );
  }
}
