/*
 * XREFs of ??$_Move_backward_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18003A904
 * Callers:
 *     ??$_Buffered_rotate_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@00_J101@Z @ 0x18003A080 (--$_Buffered_rotate_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAPEAV-$sh.c)
 *     ??$_Inplace_merge_buffer_right@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@00QEAV10@P6A_NAEBV10@2@Z@Z @ 0x18003A5C4 (--$_Inplace_merge_buffer_right@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z.c)
 *     ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@0P6A_NAEBV10@1@Z@Z @ 0x18003A764 (--$_Insertion_sort_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@s.c)
 *     ??$_Rotate_one_right@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@00@Z @ 0x18003AA0C (--$_Rotate_one_right@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 * Callees:
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

_QWORD *__fastcall std::_Move_backward_unchecked<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component> *>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 *i; // rdi

  for ( i = a2; i != a1; std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a3, i) )
  {
    i -= 2;
    a3 -= 2;
  }
  return a3;
}
