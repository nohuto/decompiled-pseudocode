/*
 * XREFs of ??1?$_Uninitialized_backout@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@QEAA@XZ @ 0x18003B32C
 * Callers:
 *     _std::_Uninitialized_chunked_merge_unchecked2_std::shared_ptr_Spectre::Engine::Camera____std::shared_ptr_Spectre::Engine::Camera__bool_(__cdecl_)(std::shared_ptr_Spectre::Engine::Camera__const_&_std::shared_ptr_Spectre::Engine::Camera__const_&)__::_1_::dtor$0 @ 0x1800E61C2 (_std--_Uninitialized_chunked_merge_unchecked2_std--shared_ptr_Spectre--Engine--Camera____std--sh.c)
 *     _std::_Uninitialized_merge_move_std::shared_ptr_Spectre::Engine::Camera____std::shared_ptr_Spectre::Engine::Camera__bool_(__cdecl_)(std::shared_ptr_Spectre::Engine::Camera__const_&_std::shared_ptr_Spectre::Engine::Camera__const_&)__::_1_::dtor$0 @ 0x1800E61D4 (_std--_Uninitialized_merge_move_std--shared_ptr_Spectre--Engine--Camera____std--shared_ptr_Spect.c)
 * Callees:
 *     ??_G?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z @ 0x1800325D0 (--_G-$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall std::_Uninitialized_backout<std::shared_ptr<Spectre::Engine::Camera> *>::~_Uninitialized_backout<std::shared_ptr<Spectre::Engine::Camera> *>(
        __int64 *a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 16LL )
    result = std::shared_ptr<Spectre::Engine::Camera>::`scalar deleting destructor'(i);
  return result;
}
