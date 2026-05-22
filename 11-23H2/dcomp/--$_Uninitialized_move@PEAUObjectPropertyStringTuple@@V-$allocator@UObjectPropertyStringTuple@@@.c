/*
 * XREFs of ??$_Uninitialized_move@PEAUObjectPropertyStringTuple@@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@YAPEAUObjectPropertyStringTuple@@QEAU1@0PEAU1@AEAV?$allocator@UObjectPropertyStringTuple@@@0@@Z @ 0x180046C94
 * Callers:
 *     ?PopulateReferenceListForDebugProperties@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAXAEAV?$vector@UObjectPropertyStringTuple@@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@@Z @ 0x1800468E0 (-PopulateReferenceListForDebugProperties@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAA.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UObjectPropertyStringTuple@@@std@@@std@@YAXPEAUObjectPropertyStringTuple@@QEAU1@AEAV?$allocator@UObjectPropertyStringTuple@@@0@@Z @ 0x180046D78 (--$_Destroy_range@V-$allocator@UObjectPropertyStringTuple@@@std@@@std@@YAXPEAUObjectPropertyStri.c)
 */

char *__fastcall std::_Uninitialized_move<ObjectPropertyStringTuple *>(__int64 *a1, __int64 *a2, char *a3)
{
  __int64 *v4; // r8
  char *v5; // r9
  __int64 v6; // rcx

  if ( a1 != a2 )
  {
    v4 = a1 + 2;
    v5 = (char *)(a3 - (char *)a1);
    do
    {
      *(_QWORD *)a3 = *(v4 - 2);
      a3 += 24;
      *(__int64 *)((char *)v4 + (_QWORD)v5 - 8) = *(v4 - 1);
      v6 = *v4;
      *(v4 - 1) = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4] = v6;
      *v4 = 0LL;
      v4 += 3;
    }
    while ( v4 - 2 != a2 );
  }
  std::_Destroy_range<std::allocator<ObjectPropertyStringTuple>>(a3, a3);
  return a3;
}
