/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@0P6A_NAEBV10@1@Z@Z @ 0x18003A764
 * Callers:
 *     ??$_Insertion_sort_isort_max_chunks@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@QEAV10@_JP6A_NAEBV10@3@Z@Z @ 0x18003A700 (--$_Insertion_sort_isort_max_chunks@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV1.c)
 *     ??$_Stable_sort_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@@YAXQEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@0_J01P6A_NAEBV10@2@Z@Z @ 0x18003AA60 (--$_Stable_sort_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@P6A_NAEBV12@0@Z@std@.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@std@@P6A_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@2@0@Z@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VComponent@Engine@Spectre@@@std@@@std@@@std@@@0@0P6A_NAEBV?$shared_ptr@VComponent@Engine@Spectre@@@0@1@Z@Z @ 0x18003AD68 (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VComponent@Engi.c)
 *     ??$stable_sort@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@@std@@@std@@P6A_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@2@0@Z@std@@YAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@std@@@std@@@0@0P6A_NAEBV?$shared_ptr@VCamera@Engine@Spectre@@@0@1@Z@Z @ 0x180063AAC (--$stable_sort@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VCamera@Engine@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Move_backward_unchecked@PEAV?$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@VComponent@Engine@Spectre@@@0@PEAV10@00@Z @ 0x18003A904 (--$_Move_backward_unchecked@PEAV-$shared_ptr@VComponent@Engine@Spectre@@@std@@PEAV12@@std@@YAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Insertion_sort_unchecked<std::shared_ptr<Spectre::Engine::Component> *,bool (*)(std::shared_ptr<Spectre::Engine::Component> const &,std::shared_ptr<Spectre::Engine::Component> const &)>(
        __int64 *a1,
        __int64 *a2,
        __int64 (__fastcall *a3)(__int64 *, __int64 *))
{
  __int64 *i; // rdi
  __int64 *v7; // r14
  __int64 *v8; // rcx
  __int64 *j; // rbx
  char v11; // al
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+28h] [rbp-20h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v7 = i;
      v12 = *i;
      v13 = (std::_Ref_count_base *)i[1];
      *i = 0LL;
      i[1] = 0LL;
      if ( (unsigned __int8)a3(&v12, a1) )
      {
        std::_Move_backward_unchecked<std::shared_ptr<Spectre::Engine::Component> *,std::shared_ptr<Spectre::Engine::Component> *>(
          a1,
          i,
          i + 2);
        v8 = a1;
      }
      else
      {
        for ( j = i; ; v7 = j )
        {
          j -= 2;
          v11 = a3(&v12, j);
          v8 = v7;
          if ( !v11 )
            break;
          std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v7, j);
        }
      }
      std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v8, &v12);
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
    }
  }
  return a2;
}
