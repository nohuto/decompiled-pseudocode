/*
 * XREFs of ??$_Rotate_one_left@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00@Z @ 0x18003A9B0
 * Callers:
 *     ??$_Buffered_inplace_merge_unchecked@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00_J1QEAV10@_JP6A_NAEBV10@4@Z@Z @ 0x180039DF8 (--$_Buffered_inplace_merge_unchecked@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18003A954 (--$_Move_unchecked@PEAV-$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@std@@YA.c)
 */

void __fastcall std::_Rotate_one_left<std::shared_ptr<Spectre::Engine::Camera> *>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v7; // [rsp+28h] [rbp-10h]

  v3 = *a1;
  *a1 = 0LL;
  v6 = v3;
  v4 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  v7 = v4;
  v5 = std::_Move_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *>(
         a2,
         a3,
         a1);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v5, &v6);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
}
