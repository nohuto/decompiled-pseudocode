/*
 * XREFs of ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x180039710
 * Callers:
 *     ?AcquireReference@CPlaybackNotifier@@QEAA?AV?$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z @ 0x18003A564 (-AcquireReference@CPlaybackNotifier@@QEAA-AV-$shared_ptr@VCPlaybackReference@@@std@@PEBG@Z.c)
 *     ?_Destroy@?$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ @ 0x18004BA40 (-_Destroy@-$_Ref_count_obj2@VCPlaybackReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180027F80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800397F8 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$map@V-$basic.c)
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x1800399D0 (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2CB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPlaybackNotifier::UpdateAudioPlaybackStatus(CPlaybackNotifier *a1, int a2, _WORD *a3)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  void *v7; // rcx
  int v8; // eax
  bool v9; // zf
  int v10; // eax
  unsigned __int64 v11; // [rsp+20h] [rbp-58h] BYREF
  void *v12; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-48h] BYREF
  void *v14[3]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-20h]

  std::wstring::wstring(v14, a3);
  v5 = *(_QWORD *)std::map<std::wstring,ENDPOINT_REF_DATA>::_Try_emplace<std::wstring,>((char *)a1 + 80, v13, v14);
  if ( v15 >= 8 )
  {
    v6 = 2 * v15 + 2;
    v11 = v6;
    v7 = v14[0];
    v12 = v14[0];
    if ( v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v12, &v11);
      v6 = v11;
      v7 = v12;
    }
    operator delete(v7, v6);
  }
  v14[2] = 0LL;
  v15 = 7LL;
  LOWORD(v14[0]) = 0;
  if ( !a2 )
  {
    v9 = ++*(_DWORD *)(v5 + 64) == 1;
LABEL_9:
    if ( v9 )
      CPlaybackNotifier::PublishPlaybackAudioStatus(a1);
    return;
  }
  if ( a2 == 1 )
  {
    v8 = *(_DWORD *)(v5 + 64);
    if ( v8 )
    {
      v10 = v8 - 1;
      v9 = v10 == 0;
      *(_DWORD *)(v5 + 64) = v10;
      goto LABEL_9;
    }
  }
}
