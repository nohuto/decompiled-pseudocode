/*
 * XREFs of ?UpdateContactState@ShellGesturesRecognizer@@AEAAXPEBUPointerInputInfo@@@Z @ 0x18014EEC8
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180150C00 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18004C898 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800B2754 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ??$emplace@AEBIAEAUContactState@ShellGesturesRecognizer@@@?$_Hash@V?$_Umap_traits@KUContactState@ShellGesturesRecognizer@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@std@@@std@@@std@@_N@1@AEBIAEAUContactState@ShellGesturesRecognizer@@@Z @ 0x18014E944 (--$emplace@AEBIAEAUContactState@ShellGesturesRecognizer@@@-$_Hash@V-$_Umap_traits@KUContactState.c)
 *     ?TimeFromPerfCount@ShellGesturesRecognizer@@QEAA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@_K@Z @ 0x18014EE70 (-TimeFromPerfCount@ShellGesturesRecognizer@@QEAA-AV-$time_point@Usteady_clock@chrono@std@@V-$dur.c)
 */

void __fastcall ShellGesturesRecognizer::UpdateContactState(
        ShellGesturesRecognizer *this,
        const struct PointerInputInfo *a2)
{
  int v2; // eax
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  bool v8; // zf
  __int64 v9; // rcx
  char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // r14
  char *v16; // rsi
  __int64 appended; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // r8
  __int64 *v20; // rax
  _QWORD v21[2]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v22[16]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v23[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v24; // [rsp+48h] [rbp-18h]
  __int64 v25; // [rsp+58h] [rbp-8h]
  __int64 v26; // [rsp+90h] [rbp+30h] BYREF
  __int64 v27; // [rsp+98h] [rbp+38h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF

  v2 = *((_DWORD *)this + 20);
  ++*((_DWORD *)this + 21);
  *((_DWORD *)this + 26) = v2;
  *((_QWORD *)this + 14) = *((_QWORD *)this + 12);
  v5 = ShellGesturesRecognizer::TimeFromPerfCount((__int64)this, &v26, *((_QWORD *)a2 + 50));
  v8 = *((_DWORD *)this + 21) == 1;
  v9 = *v5;
  *((_QWORD *)this + 12) = *v5;
  if ( v8 )
  {
    *((_QWORD *)this + 11) = v9;
    *((_QWORD *)this + 14) = v9;
  }
  *((_DWORD *)this + 20) = 0;
  v10 = (char *)a2 + 320;
  gsl::details::extent_type<-1>::extent_type<-1>(v21, *((unsigned int *)a2 + 79), v6, v7);
  if ( v21[0] == -1LL || a2 == (const struct PointerInputInfo *)-320LL && v21[0] )
  {
    _o_terminate(v12, v11, v13, v14);
    __debugbreak();
    JUMPOUT(0x18014F057LL);
  }
  v15 = &v10[144 * v21[0]];
  if ( v10 != v15 )
  {
    v16 = (char *)a2 + 324;
    do
    {
      if ( (v16[8] & 4) != 0 )
      {
        ++*((_DWORD *)this + 20);
        LODWORD(v26) = *(_DWORD *)v16;
        appended = std::_Fnv1a_append_bytes(v12, (const unsigned __int8 *const)&v26, 4uLL);
        v18 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
                (_QWORD *)this + 15,
                v21,
                &v26,
                appended)[1];
        if ( !v18 )
          v18 = *((_QWORD *)this + 16);
        if ( v18 == *((_QWORD *)this + 16) )
        {
          v19 = *(_QWORD *)(v16 + 76);
          v25 = 0LL;
          v23[0] = *((_DWORD *)v16 + 13);
          v23[1] = *((_DWORD *)v16 + 14);
          v24 = 0LL;
          *((_QWORD *)&v24 + 1) = *ShellGesturesRecognizer::TimeFromPerfCount((__int64)this, &v27, v19);
          v18 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ShellGesturesRecognizer::ContactState,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>,0>>::emplace<unsigned int const &,ShellGesturesRecognizer::ContactState &>(
                             (float *)this + 30,
                             (__int64)v22,
                             (unsigned int *)v16,
                             v23);
        }
        *(_DWORD *)(v18 + 32) = *((_DWORD *)v16 + 13);
        *(_DWORD *)(v18 + 36) = *((_DWORD *)v16 + 14);
        v20 = ShellGesturesRecognizer::TimeFromPerfCount((__int64)this, &v28, *(_QWORD *)(v16 + 76));
        v12 = *v20;
        *(_QWORD *)(v18 + 48) = *v20;
      }
      v16 += 144;
    }
    while ( v16 - 4 != v15 );
  }
}
