/*
 * XREFs of ??1?$_Optimistic_temporary_buffer@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18003B308
 * Callers:
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@P6A_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@2@0@Z@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@0P6A_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@1@Z@Z @ 0x18003AD68 (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VComponent@Engi.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@@std@@@std@@P6A_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@2@0@Z@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@@std@@@0@0P6A_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@0@1@Z@Z @ 0x180063AAC (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VCamera@Engine@.c)
 *     _std::stable_sort_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_Spectre::Engine::Camera________bool_(__cdecl_)(std::shared_ptr_Spectre::Engine::Camera__const_&_std::shared_ptr_Spectre::Engine::Camera__const_&)__::_1_::dtor$0 @ 0x1800E61E6 (_std--stable_sort_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_Spec.c)
 * Callees:
 *     ??$_Return_temporary_buffer@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@@Z @ 0x18003A9A4 (--$_Return_temporary_buffer@V-$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAXQEAV-$shared.c)
 */

void __fastcall std::_Optimistic_temporary_buffer<std::shared_ptr<Spectre::Engine::Camera>>::~_Optimistic_temporary_buffer<std::shared_ptr<Spectre::Engine::Camera>>(
        __int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) > 0x100uLL )
    std::_Return_temporary_buffer<std::shared_ptr<Spectre::Engine::Component>>(*(void **)a1);
}
