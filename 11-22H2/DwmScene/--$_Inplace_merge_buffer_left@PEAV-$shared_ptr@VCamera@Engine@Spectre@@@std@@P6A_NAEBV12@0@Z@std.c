/*
 * XREFs of ??$_Inplace_merge_buffer_left@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00QEAV10@P6A_NAEBV10@2@Z@Z @ 0x18003A4A8
 * Callers:
 *     ??$_Buffered_inplace_merge_unchecked_impl@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@00_J1QEAV10@_JP6A_NAEBV10@4@Z@Z @ 0x180039F18 (--$_Buffered_inplace_merge_unchecked_impl@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_.c)
 * Callees:
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??_G?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z @ 0x1800325D0 (--_G-$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18003A954 (--$_Move_unchecked@PEAV-$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@std@@YA.c)
 *     ??$_Uninitialized_move_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@PEAV10@QEAV10@0@Z @ 0x18003ACF0 (--$_Uninitialized_move_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Inplace_merge_buffer_left<std::shared_ptr<Spectre::Engine::Camera> *,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 v5; // rbx
  __int64 v9; // rdi
  __int64 *v10; // r14
  __int64 *v11; // r13
  __int64 *v12; // rdx
  _QWORD *v13; // rbp
  __int64 *v14; // rsi
  __int64 result; // rax
  _QWORD *v16; // rax

  v5 = a4;
  v9 = std::_Uninitialized_move_unchecked<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component> *>(
         a1,
         a2,
         a4);
  v10 = (__int64 *)v5;
  v11 = (__int64 *)(v9 - 16);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1, v12);
  v13 = a1 + 2;
  v14 = (__int64 *)(a2 + 16);
  while ( a5(v14, v10) )
  {
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v13, v14);
    v14 += 2;
    if ( v14 == a3 )
    {
      result = std::_Move_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *>(
                 v10,
                 v9,
                 v13 + 2);
      while ( v5 != v9 )
      {
        result = std::shared_ptr<Spectre::Engine::Camera>::`scalar deleting destructor'(v5);
        v5 += 16LL;
      }
      return result;
    }
LABEL_6:
    v13 += 2;
  }
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v13, v10);
  v10 += 2;
  if ( v10 != v11 )
    goto LABEL_6;
  v16 = (_QWORD *)std::_Move_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *>(
                    v14,
                    a3,
                    v13 + 2);
  result = (__int64)std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v16, v11);
  while ( v5 != v9 )
  {
    result = std::shared_ptr<Spectre::Engine::Camera>::`scalar deleting destructor'(v5);
    v5 += 16LL;
  }
  return result;
}
