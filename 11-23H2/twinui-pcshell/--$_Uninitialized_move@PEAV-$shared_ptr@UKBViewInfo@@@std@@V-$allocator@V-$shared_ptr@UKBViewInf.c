/*
 * XREFs of ??$_Uninitialized_move@PEAV?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@0@@Z @ 0x18050AC04
 * Callers:
 *     ??$_Emplace_reallocate@AEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UKBViewInfo@@@1@QEAV21@AEAV21@@Z @ 0x18050A870 (--$_Emplace_reallocate@AEAV-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::_Uninitialized_move<std::shared_ptr<KBViewInfo> *,std::allocator<std::shared_ptr<KBViewInfo>>>(
        char *a1,
        char *a2,
        char *a3)
{
  signed __int64 v3; // rax

  if ( a1 != a2 )
  {
    v3 = a1 - a3;
    do
    {
      *(_QWORD *)a3 = 0LL;
      *((_QWORD *)a3 + 1) = 0LL;
      *(_QWORD *)a3 = *(_QWORD *)&a3[v3];
      *((_QWORD *)a3 + 1) = *(_QWORD *)&a3[v3 + 8];
      *(_QWORD *)&a3[v3] = 0LL;
      *(_QWORD *)&a3[v3 + 8] = 0LL;
      a3 += 16;
    }
    while ( &a3[v3] != a2 );
  }
  return a3;
}
