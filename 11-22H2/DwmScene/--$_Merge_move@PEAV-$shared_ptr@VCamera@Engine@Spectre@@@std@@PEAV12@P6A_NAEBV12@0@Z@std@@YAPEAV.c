/*
 * XREFs of ??$_Merge_move@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@P6A_NAEBV12@0@Z@std@@YAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@PEAV10@QEAV10@10P6A_NAEBV10@2@Z@Z @ 0x18003A85C
 * Callers:
 *     ??$_Chunked_merge_unchecked@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@QEAV10@0_J_JP6A_NAEBV10@4@Z@Z @ 0x18003A1A8 (--$_Chunked_merge_unchecked@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@PEAV12@P6A_NAEBV12@0@.c)
 * Callees:
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Merge_move<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera> *,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 *v9; // rdi
  __int64 *v10; // rdx
  __int64 *v11; // rcx

  v9 = a2;
  while ( a5(v9, a1) )
  {
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a4, v9);
    v9 += 2;
    if ( v9 == a3 )
    {
      v10 = a2;
      v11 = a1;
      return std::_Move_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *>(
               v11,
               v10,
               a4 + 2);
    }
LABEL_6:
    a4 += 2;
  }
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a4, a1);
  a1 += 2;
  if ( a1 != a2 )
    goto LABEL_6;
  v10 = a3;
  v11 = v9;
  return std::_Move_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *>(
           v11,
           v10,
           a4 + 2);
}
