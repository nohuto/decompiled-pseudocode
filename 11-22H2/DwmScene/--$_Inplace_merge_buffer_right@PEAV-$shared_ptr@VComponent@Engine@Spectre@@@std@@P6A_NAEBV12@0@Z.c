/*
 * XREFs of ??$_Inplace_merge_buffer_right@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@00QEAV10@P6A_NAEBV10@2@Z@Z @ 0x18003A5C4
 * Callers:
 *     ??$_Buffered_inplace_merge_unchecked_impl@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@00_J1QEAV10@_JP6A_NAEBV10@4@Z@Z @ 0x180039F18 (--$_Buffered_inplace_merge_unchecked_impl@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_.c)
 * Callees:
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??_G?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z @ 0x1800325D0 (--_G-$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z.c)
 *     ??$_Move_backward_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18003A904 (--$_Move_backward_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEA.c)
 *     ??$_Uninitialized_move_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@PEAV10@QEAV10@0@Z @ 0x18003ACF0 (--$_Uninitialized_move_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Inplace_merge_buffer_right<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int8 (__fastcall *a5)(__int64 *, __int64 *))
{
  __int64 *v5; // rbx
  __int64 v9; // r14
  _QWORD *v10; // r13
  __int64 *v11; // rbp
  __int64 *v12; // rsi
  __int64 result; // rax

  v5 = a4;
  v9 = std::_Uninitialized_move_unchecked<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component> *>(
         a2,
         a3,
         a4);
  v10 = (_QWORD *)(a3 - 16);
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v10, (__int64 *)(a2 - 16));
  v11 = (__int64 *)(v9 - 16);
  v12 = (__int64 *)(a2 - 32);
  do
  {
    while ( 1 )
    {
      v10 -= 2;
      if ( !a5(v11, v12) )
        break;
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v10, v12);
      if ( a1 == v12 )
      {
        std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v10 - 2, v11);
        result = std::_Move_backward_unchecked<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component> *>(
                   v5,
                   v11,
                   v10 - 2);
        while ( v5 != (__int64 *)v9 )
        {
          result = std::shared_ptr<Spectre::Engine::Camera>::`scalar deleting destructor'((__int64)v5);
          v5 += 2;
        }
        return result;
      }
      v12 -= 2;
    }
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v10, v11);
    v11 -= 2;
  }
  while ( v5 != v11 );
  std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v10 - 2, v12);
  std::_Move_backward_unchecked<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component> *>(
    a1,
    v12,
    v10 - 2);
  result = (__int64)std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1, v5);
  while ( v5 != (__int64 *)v9 )
  {
    result = std::shared_ptr<Spectre::Engine::Camera>::`scalar deleting destructor'((__int64)v5);
    v5 += 2;
  }
  return result;
}
