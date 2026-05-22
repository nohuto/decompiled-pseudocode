/*
 * XREFs of ?GetCursor@SystemCursorService2@@UEAA?AV?$shared_ptr@VSystemCursor2@@@std@@_K@Z @ 0x180105800
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB34 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x180103A88 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 */

_QWORD *__fastcall SystemCursorService2::GetCursor(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  v4 = std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
         (float *)(a1 + 48),
         (__int64)v6,
         (unsigned __int8 *)&v7);
  std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(a2, (_QWORD *)(*(_QWORD *)v4 + 24LL));
  return a2;
}
