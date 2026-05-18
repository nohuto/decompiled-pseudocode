/*
 * XREFs of ??$_Buffered_inplace_merge_unchecked@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00_J1QEAV10@_JP6A_NAEBV10@4@Z@Z @ 0x180039DF8
 * Callers:
 *     ??$_Buffered_inplace_merge_divide_and_conquer2@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00_J1QEAV10@_JP6A_NAEBV10@4@Z0011@Z @ 0x180039B2C (--$_Buffered_inplace_merge_divide_and_conquer2@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@P6.c)
 *     ??$_Stable_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@0_J01P6A_NAEBV10@2@Z@Z @ 0x18003AA60 (--$_Stable_sort_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@.c)
 * Callees:
 *     ??$_Buffered_inplace_merge_unchecked_impl@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@00_J1QEAV10@_JP6A_NAEBV10@4@Z@Z @ 0x180039F18 (--$_Buffered_inplace_merge_unchecked_impl@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_.c)
 *     ??$_Rotate_one_left@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00@Z @ 0x18003A9B0 (--$_Rotate_one_left@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@YAXPEAV-$shared_ptr@VCa.c)
 *     ??$_Rotate_one_right@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@00@Z @ 0x18003AA0C (--$_Rotate_one_right@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_Buffered_inplace_merge_unchecked<std::shared_ptr<Spectre::Engine::Camera> *,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(__int64, __int64))
{
  __int64 v9; // rsi
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // r14
  bool v16; // zf

  if ( a2 != a3 )
  {
    v9 = a3;
    while ( a1 != a2 )
    {
      if ( a8(a2, a1) )
      {
        v13 = a2 - 16;
        do
        {
          v14 = a5;
          v15 = v9;
          v9 -= 16LL;
          --a5;
          if ( a2 == v9 )
          {
            std::_Rotate_one_right<std::shared_ptr<Spectre::Engine::Component> *>(a1, a2, v15);
            return;
          }
          v16 = a8(v9, v13) == 0;
          v13 = a2 - 16;
        }
        while ( v16 );
        if ( a4 == 1 )
          std::_Rotate_one_left<std::shared_ptr<Spectre::Engine::Camera> *>(a1, a2, v15);
        else
          std::_Buffered_inplace_merge_unchecked_impl<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
            a1,
            a2,
            v15,
            a4,
            v14,
            a6,
            a7,
            (__int64)a8);
        return;
      }
      a1 += 16LL;
      --a4;
    }
  }
}
