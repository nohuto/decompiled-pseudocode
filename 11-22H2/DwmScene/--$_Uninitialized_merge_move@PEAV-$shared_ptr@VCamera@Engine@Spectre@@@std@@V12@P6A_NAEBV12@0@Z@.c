/*
 * XREFs of ??$_Uninitialized_merge_move@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@V12@P6A_NAEBV12@0@Z@std@@YAPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@PEAV10@QEAV10@11P6A_NAEBV10@2@Z@Z @ 0x18003ABFC
 * Callers:
 *     ??$_Uninitialized_chunked_merge_unchecked2@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@V12@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@0_JP6A_NAEBV10@3@Z@Z @ 0x18003AB64 (--$_Uninitialized_chunked_merge_unchecked2@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@V12.c)
 * Callees:
 *     ??$_Uninitialized_move_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@PEAV10@QEAV10@0@Z @ 0x18003ACF0 (--$_Uninitialized_move_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Uninitialized_merge_move<std::shared_ptr<Spectre::Engine::Camera> *,std::shared_ptr<Spectre::Engine::Camera>,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned __int8 (__fastcall *a5)(_QWORD *, _QWORD *))
{
  _QWORD *v5; // rbx
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx

  v5 = a4;
  v9 = a2;
  v10 = a4;
  while ( a5(v9, a1) )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    *v5 = *v9;
    v5[1] = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    v5 += 2;
    v9 += 2;
    if ( v9 == a3 )
    {
      v11 = a2;
      v12 = a1;
      return std::_Uninitialized_move_unchecked<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component> *>(
               v12,
               v11,
               v5);
    }
LABEL_6:
    v10 = v5;
  }
  *v10 = 0LL;
  v10[1] = 0LL;
  *v10 = *a1;
  v10[1] = a1[1];
  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = v10 + 2;
  a1 += 2;
  if ( a1 != a2 )
    goto LABEL_6;
  v11 = a3;
  v12 = v9;
  return std::_Uninitialized_move_unchecked<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component> *>(
           v12,
           v11,
           v5);
}
