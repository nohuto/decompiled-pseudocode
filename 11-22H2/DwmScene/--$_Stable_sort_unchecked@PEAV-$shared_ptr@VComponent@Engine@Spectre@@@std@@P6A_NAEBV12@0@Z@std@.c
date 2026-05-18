/*
 * XREFs of ??$_Stable_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@0_J01P6A_NAEBV10@2@Z@Z @ 0x18003AA60
 * Callers:
 *     ??$_Stable_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@0_J01P6A_NAEBV10@2@Z@Z @ 0x18003AA60 (--$_Stable_sort_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@P6A_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@2@0@Z@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@0P6A_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@1@Z@Z @ 0x18003AD68 (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VComponent@Engi.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@@std@@@std@@P6A_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@2@0@Z@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@@std@@@0@0P6A_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@0@1@Z@Z @ 0x180063AAC (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VCamera@Engine@.c)
 * Callees:
 *     ??$_Buffered_inplace_merge_unchecked@PEAV?$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VCamera@Engine@Spectre@@@0@00_J1QEAV10@_JP6A_NAEBV10@4@Z@Z @ 0x180039DF8 (--$_Buffered_inplace_merge_unchecked@PEAV-$shared_ptr@VCamera@Engine@Spectre@@@std@@P6A_NAEBV12@.c)
 *     ??$_Buffered_merge_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@0_J0P6A_NAEBV10@2@Z@Z @ 0x180039F74 (--$_Buffered_merge_sort_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@.c)
 *     ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@0P6A_NAEBV10@1@Z@Z @ 0x18003A764 (--$_Insertion_sort_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@s.c)
 *     ??$_Stable_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@0_J01P6A_NAEBV10@2@Z@Z @ 0x18003AA60 (--$_Stable_sort_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@.c)
 */

void __fastcall std::_Stable_sort_unchecked<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 (__fastcall *a6)(__int64, __int64))
{
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rdx

  if ( a3 > 32 )
  {
    v9 = (unsigned __int64)a3 >> 1;
    v10 = a3 - ((unsigned __int64)a3 >> 1);
    v11 = (__int64)&a1[2 * v10];
    if ( v10 > a5 )
    {
      std::_Stable_sort_unchecked<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
        (_DWORD)a1,
        v11,
        v10,
        a4,
        a5,
        (__int64)a6);
      std::_Stable_sort_unchecked<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
        (_DWORD)a1 + 16 * v10,
        (_DWORD)a2,
        v9,
        a4,
        a5,
        (__int64)a6);
    }
    else
    {
      std::_Buffered_merge_sort_unchecked<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
        (__int64)a1,
        v11,
        v10,
        a4,
        (__int64)a6);
      std::_Buffered_merge_sort_unchecked<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
        (__int64)&a1[2 * v10],
        (__int64)a2,
        v9,
        a4,
        (__int64)a6);
    }
    std::_Buffered_inplace_merge_unchecked<std::shared_ptr<Spectre::Engine::Camera> *,bool (*)(std::shared_ptr<Spectre::Engine::Camera> const &,std::shared_ptr<Spectre::Engine::Camera> const &)>(
      (__int64)a1,
      (__int64)&a1[2 * v10],
      (__int64)a2,
      v10,
      v9,
      a4,
      a5,
      a6);
  }
  else
  {
    std::_Insertion_sort_unchecked<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
      a1,
      a2,
      (__int64 (__fastcall *)(__int64 *, __int64 *))a6);
  }
}
