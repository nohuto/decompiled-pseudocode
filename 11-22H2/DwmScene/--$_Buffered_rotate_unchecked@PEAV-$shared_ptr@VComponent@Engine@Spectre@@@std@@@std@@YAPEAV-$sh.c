/*
 * XREFs of ??$_Buffered_rotate_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@00_J101@Z @ 0x18003A080
 * Callers:
 *     ??$_Buffered_inplace_merge_divide_and_conquer2@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00_J1QEAV10@_JP6A_NAEBV10@4@Z0011@Z @ 0x180039B2C (--$_Buffered_inplace_merge_divide_and_conquer2@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@P6.c)
 * Callees:
 *     ??_G?$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z @ 0x1800325D0 (--_G-$shared_ptr@VCamera@Engine@Spectre@@@std@@QEAAPEAXI@Z.c)
 *     ??$_Move_backward_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18003A904 (--$_Move_backward_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEA.c)
 *     ??$_Move_unchecked@PEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18003A954 (--$_Move_unchecked@PEAV-$shared_ptr@VImageProcessingEffect@Engine@Spectre@@@std@@PEAV12@@std@@YA.c)
 *     ??$_Uninitialized_move_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@PEAV10@QEAV10@0@Z @ 0x18003ACF0 (--$_Uninitialized_move_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@.c)
 *     ??$reverse@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@YAXQEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@0@Z @ 0x18003AD3C (--$reverse@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@YAXQEAV-$shared_ptr@VCamera@Engi.c)
 */

unsigned __int64 __fastcall std::_Buffered_rotate_unchecked<std::shared_ptr<Spectre::Engine::Component> *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r10
  __int64 v8; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // r10
  __int64 v21; // r10
  __int64 v22; // r11

  v7 = a3;
  v8 = a1;
  if ( a4 )
  {
    if ( !a5 )
      return v8;
    if ( a4 <= a5 && a4 <= a7 )
    {
      v10 = a6;
      v11 = std::_Uninitialized_move_unchecked<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component> *>(
              a1,
              a2,
              a6);
      v8 = std::_Move_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *>(
             v13,
             v12,
             v8);
      std::_Move_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *>(
        a6,
        v11,
        v8);
      while ( v10 != v11 )
      {
        std::shared_ptr<Spectre::Engine::Camera>::`scalar deleting destructor'(v10);
        v10 += 16LL;
      }
      return v8;
    }
    if ( a5 <= a7 )
    {
      v14 = a6;
      v15 = std::_Uninitialized_move_unchecked<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component> *>(
              a2,
              a3,
              a6);
      std::_Move_backward_unchecked<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component> *>(
        v8,
        v17,
        v16);
      v8 = std::_Move_unchecked<std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *,std::shared_ptr<Spectre::Engine::ImageProcessingEffect> *>(
             a6,
             v15,
             v8);
      while ( v14 != v15 )
      {
        std::shared_ptr<Spectre::Engine::Camera>::`scalar deleting destructor'(v14);
        v14 += 16LL;
      }
      return v8;
    }
    if ( a1 != a2 )
    {
      if ( a2 == a3 )
      {
        return a1;
      }
      else
      {
        ((void (*)(void))std::reverse<std::shared_ptr<Spectre::Engine::Camera> *>)();
        std::reverse<std::shared_ptr<Spectre::Engine::Camera> *>(v19, v18);
        std::reverse<std::shared_ptr<Spectre::Engine::Camera> *>(v8, v20);
        return v8 + ((v21 - v22) & 0xFFFFFFFFFFFFFFF0uLL);
      }
    }
  }
  return v7;
}
