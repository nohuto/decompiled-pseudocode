/*
 * XREFs of ?TryResumeGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@_KI@Z @ 0x18016223C
 * Callers:
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x18017DD84 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0L@@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x180156A1C (--$find@X@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServer@$0L@@@V-$_Uh.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180160AD0 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_.c)
 *     ??4?$shared_ptr@VGestureHandler@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180161210 (--4-$shared_ptr@VGestureHandler@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CheckGestureState@GestureHandler@@QEBA_NV?$initializer_list@$$CBW4GestureOperationState@@@std@@@Z @ 0x180164D0C (-CheckGestureState@GestureHandler@@QEBA_NV-$initializer_list@$$CBW4GestureOperationState@@@std@@.c)
 */

_QWORD *__fastcall GestureServices::TryResumeGestureHandler(_QWORD *a1, _QWORD *a2, __int64 a3, int a4)
{
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v13[16]; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+70h] [rbp+20h] BYREF
  char v15; // [rsp+74h] [rbp+24h] BYREF
  __int64 v16; // [rsp+80h] [rbp+30h] BYREF
  int v17; // [rsp+88h] [rbp+38h] BYREF

  v17 = a4;
  v16 = a3;
  std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<11>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<11>::InputObserverClient>>,0>>::find<void>(
    a1 + 33,
    &v11,
    (const unsigned __int8 *)&v16);
  if ( v11 != a1[34]
    && (v6 = (_QWORD *)(v11 + 24), v7 = *(_QWORD *)(v11 + 24), *(_BYTE *)(v7 + 240))
    && (v14 = 3, v12[0] = &v14, v12[1] = &v15, (unsigned __int8)GestureHandler::CheckGestureState(v7, v12)) )
  {
    v8 = std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GestureHandler>>>,0>>::_Try_emplace<unsigned int const &,>(
           a1 + 25,
           (__int64)v13,
           (unsigned __int8 *)&v17);
    std::shared_ptr<GestureHandler>::operator=((_QWORD *)(*(_QWORD *)v8 + 24LL), v6);
    v9 = v6[1];
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v9 )
    {
      *a2 = *v6;
      a2[1] = v9;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
    }
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
