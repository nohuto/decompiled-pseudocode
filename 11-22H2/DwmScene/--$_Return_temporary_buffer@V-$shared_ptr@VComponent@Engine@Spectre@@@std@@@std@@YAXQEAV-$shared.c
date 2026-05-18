/*
 * XREFs of ??$_Return_temporary_buffer@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x18003A9A4
 * Callers:
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@P6A_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@2@0@Z@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@0P6A_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@1@Z@Z @ 0x18003AD68 (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VComponent@Engi.c)
 *     ??1?$_Optimistic_temporary_buffer@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18003B308 (--1-$_Optimistic_temporary_buffer@V-$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@QEAA@XZ.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@@std@@@std@@P6A_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@2@0@Z@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@@std@@@0@0P6A_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@0@1@Z@Z @ 0x180063AAC (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VCamera@Engine@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::_Return_temporary_buffer<std::shared_ptr<Spectre::Engine::Component>>(void *a1)
{
  operator delete(a1);
}
