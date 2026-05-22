/*
 * XREFs of ?OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180176D20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUtagPOINTF@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUtagPOINTF@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18016950C (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUtagPOINTF@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180177EFC (-StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z.c)
 */

__int64 __fastcall EdgyProcessor::OnHitTest(
        EdgyProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  unsigned int v7; // r8d
  struct tagPOINT v8; // r9
  struct HitTestResult *v9; // rdx
  __int64 v10; // rbx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+20h] BYREF

  *(_DWORD *)a4 = 0;
  if ( !*((_QWORD *)a4 + 1) && (*(_DWORD *)a2 & 0x4088) == 8 && (*((_BYTE *)a2 + 32) & 4) != 0 )
  {
    *(_DWORD *)a4 = 1;
    v7 = *((_DWORD *)a2 + 10);
    v8 = *(struct tagPOINT *)((char *)a2 + 44);
    v9 = (struct HitTestResult *)*((_QWORD *)a3 + 22);
    v13 = v7;
    EdgyProcessor::StartGestureRecognition(this, v9, v7, v8);
    v10 = *(_QWORD *)((char *)a2 + 44);
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,tagPOINTF,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTF>>,0>>::_Try_emplace<unsigned long const &,>(
                             (float *)this + 120,
                             (__int64)v12,
                             (unsigned __int8 *)&v13)
              + 20LL) = v10;
  }
  return 0LL;
}
