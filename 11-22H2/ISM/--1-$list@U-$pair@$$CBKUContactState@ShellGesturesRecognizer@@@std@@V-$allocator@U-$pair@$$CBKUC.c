/*
 * XREFs of ??1?$list@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@V?$allocator@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@@2@@std@@QEAA@XZ @ 0x18017CD18
 * Callers:
 *     _ShellGesturesRecognizer::ShellGesturesRecognizer_::_1_::dtor$17 @ 0x18017CBF6 (_ShellGesturesRecognizer--ShellGesturesRecognizer_--_1_--dtor$17.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUContactState@ShellGesturesRecognizer@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18017B36C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUContactState@ShellGesturesRecognizer@.c)
 */

void __fastcall std::list<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>::~list<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,ShellGesturesRecognizer::ContactState>,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, 0x38uLL);
}
