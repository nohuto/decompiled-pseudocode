/*
 * XREFs of ?OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180172D10
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUtagPOINTF@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUtagPOINTF@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18016950C (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUtagPOINTF@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ??$emplace@AEAKUPointerCache@ResizeProcessor@@@?$_Hash@V?$_Umap_traits@KUPointerCache@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@ResizeProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUPointerCache@ResizeProcessor@@@Z @ 0x180171328 (--$emplace@AEAKUPointerCache@ResizeProcessor@@@-$_Hash@V-$_Umap_traits@KUPointerCache@ResizeProc.c)
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x180173ABC (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x1801C8F8C (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 */

__int64 __fastcall ResizeProcessor::OnHitTest(
        ResizeProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  unsigned int v7; // r8d
  struct HitTestResult *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  _BYTE v12[16]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  int InputType; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]
  unsigned int v16; // [rsp+68h] [rbp+10h] BYREF

  *(_DWORD *)a4 = 1;
  if ( (*(_DWORD *)a2 & 0x1A) != 0 && (*(_DWORD *)a2 & 0x4000) == 0 )
  {
    if ( (*((_BYTE *)a2 + 32) & 4) != 0 )
    {
      v7 = *((_DWORD *)a2 + 10);
      v8 = (struct HitTestResult *)*((_QWORD *)a3 + 22);
      v16 = v7;
      ResizeProcessor::StartGestureRecognition(this, v8, v7);
      v10 = *(unsigned int *)a2;
      v13 = *(_QWORD *)((char *)a2 + 44);
      v9 = v13;
      InputType = PointerManipulationHelper::GetInputType(v10);
      v15 = *((_QWORD *)a3 + 22);
      std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::PointerCache>>,0>>::emplace<unsigned long &,ResizeProcessor::PointerCache>(
        (float *)this + 22,
        (__int64)v12,
        (unsigned __int8 *)&v16,
        (__int64)&v13);
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,tagPOINTF,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTF>>,0>>::_Try_emplace<unsigned long const &,>(
                               (float *)this + 58,
                               (__int64)v12,
                               (unsigned __int8 *)&v16)
                + 20LL) = v9;
    }
  }
  else
  {
    *(_DWORD *)a4 = 0;
  }
  return 0LL;
}
