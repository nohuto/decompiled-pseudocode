/*
 * XREFs of ??$_Rotate_one_right@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@00@Z @ 0x18003AA0C
 * Callers:
 *     ??$_Buffered_inplace_merge_unchecked@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00_J1QEAV10@_JP6A_NAEBV10@4@Z@Z @ 0x180039DF8 (--$_Buffered_inplace_merge_unchecked@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Move_backward_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18003A904 (--$_Move_backward_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEA.c)
 */

void __fastcall std::_Rotate_one_right<std::shared_ptr<Spectre::Engine::Component> *>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  std::_Ref_count_base *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]

  v3 = *a2;
  *a2 = 0LL;
  v6 = v3;
  v5 = (std::_Ref_count_base *)a2[1];
  a2[1] = 0LL;
  v7 = v5;
  std::_Move_backward_unchecked<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component> *>(
    a1,
    a2,
    a3);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1, &v6);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
}
