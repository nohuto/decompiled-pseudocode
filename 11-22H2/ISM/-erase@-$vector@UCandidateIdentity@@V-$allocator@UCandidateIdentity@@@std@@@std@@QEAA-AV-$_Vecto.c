/*
 * XREFs of ?erase@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCandidateIdentity@@@std@@@std@@@2@@Z @ 0x1801D7FC4
 * Callers:
 *     ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1801D754C (-HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV-$vector@UCandidateIdentity@@V-$allocator@UCan.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800AC0D0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??_GCandidateIdentity@@QEAAPEAXI@Z @ 0x1801D6E38 (--_GCandidateIdentity@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall std::vector<CandidateIdentity>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 i; // rdi
  _OWORD *v8; // rbp
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  for ( i = a3 + 40; i != v3; i += 40LL )
  {
    v8 = (_OWORD *)(i - 40);
    std::wstring::_Tidy_deallocate(i - 40);
    *v8 = *(_OWORD *)i;
    v8[1] = *(_OWORD *)(i + 16);
    *(_QWORD *)(i + 16) = 0LL;
    *(_QWORD *)(i + 24) = 7LL;
    *(_WORD *)i = 0;
    *(_DWORD *)(i - 8) = *(_DWORD *)(i + 32);
  }
  CandidateIdentity::`scalar deleting destructor'((CandidateIdentity *)(*(_QWORD *)(a1 + 8) - 40LL), 0);
  *(_QWORD *)(a1 + 8) -= 40LL;
  result = a2;
  *a2 = a3;
  return result;
}
