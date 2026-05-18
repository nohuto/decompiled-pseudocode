/*
 * XREFs of ??$_Move_unchecked@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18003A954
 * Callers:
 *     ??$_Buffered_rotate_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@00_J101@Z @ 0x18003A080 (--$_Buffered_rotate_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAPEAV-$sh.c)
 *     ??$_Chunked_merge_unchecked@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@QEAV10@0_J_JP6A_NAEBV10@4@Z@Z @ 0x18003A1A8 (--$_Chunked_merge_unchecked@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@P6A_NAEBV12@0@.c)
 *     ??$_Inplace_merge_buffer_left@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00QEAV10@P6A_NAEBV10@2@Z@Z @ 0x18003A4A8 (--$_Inplace_merge_buffer_left@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std.c)
 *     ??$_Merge_move@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@P6A_NAEBV12@0@Z@std@@YAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@PEAV10@QEAV10@10P6A_NAEBV10@2@Z@Z @ 0x18003A85C (--$_Merge_move@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@P6A_NAEBV12@0@Z@std@@YAPEAV.c)
 *     ??$_Rotate_one_left@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00@Z @ 0x18003A9B0 (--$_Rotate_one_left@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@YAXPEAV-$shared_ptr@VCa.c)
 *     ?RemoveComponent@SceneNode@Engine@Spectre@@QEAAXV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z @ 0x18003D11C (-RemoveComponent@SceneNode@Engine@Spectre@@QEAAXV-$shared_ptr@VComponent@Engine@Spectre@@@std@@@.c)
 *     ?RemoveCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z @ 0x180057A70 (-RemoveCamera@Display@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z.c)
 *     ?RemoveEffect@ImageProcessingManager@Engine@Spectre@@QEAAXV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@@Z @ 0x180073950 (-RemoveEffect@ImageProcessingManager@Engine@Spectre@@QEAAXV-$shared_ptr@VImageProcessingEffect@E.c)
 *     ?erase@?$vector@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V?$allocator@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@@std@@@std@@@2@0@Z @ 0x1800E0A98 (-erase@-$vector@V-$shared_ptr@VTween@Tweening@Utils@Spectre@@@std@@V-$allocator@V-$shared_ptr@VT.c)
 * Callees:
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall std::_Move_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 *i; // rdi

  for ( i = a1; i != a2; i += 2 )
  {
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a3, i);
    a3 += 2;
  }
  return a3;
}
