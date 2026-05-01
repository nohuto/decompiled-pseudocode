/*
 * XREFs of ??$_Uninitialized_move@PEAV?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@YAPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x1800AE02C
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x1800ADF38 (--$_Emplace_reallocate@AEBV-$shared_ptr@UViewEventRegistration@@@std@@@-$vector@V-$shared_ptr@UV.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x1800AE108 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UViewEventRegistration@@@std@@@std@@@std@@YAXPEAV-$.c)
 */

char *__fastcall std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
        char *a1,
        char *a2,
        char *a3)
{
  char *v4; // r8

  v4 = a1;
  if ( a1 != a2 )
  {
    v4 = (char *)(a1 - a3);
    do
    {
      *(_QWORD *)a3 = 0LL;
      *((_QWORD *)a3 + 1) = 0LL;
      *(_QWORD *)a3 = *(_QWORD *)&a3[(_QWORD)v4];
      *((_QWORD *)a3 + 1) = *(_QWORD *)&a3[(_QWORD)v4 + 8];
      *(_QWORD *)&a3[(_QWORD)v4] = 0LL;
      *(_QWORD *)&a3[(_QWORD)v4 + 8] = 0LL;
      a3 += 16;
    }
    while ( &a3[(_QWORD)v4] != a2 );
  }
  std::_Destroy_range<std::allocator<std::shared_ptr<ViewEventRegistration>>>(a3, a3, v4);
  return a3;
}
