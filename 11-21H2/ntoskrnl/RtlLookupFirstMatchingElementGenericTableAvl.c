/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x1403A0300
 * Callers:
 *     <none>
 * Callees:
 *     sub_140253690 @ 0x140253690 (sub_140253690.c)
 *     sub_1402DF210 @ 0x1402DF210 (sub_1402DF210.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PVOID __stdcall RtlLookupFirstMatchingElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer, PVOID *RestartKey)
{
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  void *v9; // rbp
  _QWORD *v10; // [rsp+50h] [rbp+18h] BYREF

  *RestartKey = 0LL;
  v10 = 0LL;
  if ( (unsigned int)sub_1402DF210((__int64)Table, (__int64)Buffer, &v10) != 1 )
    return 0LL;
  v7 = v10;
  do
  {
    v8 = v7;
    v9 = v7;
    v7 = sub_140253690(v7);
  }
  while ( v7 && (unsigned int)sub_14042A5E0(Table, Buffer) == 2 );
  *RestartKey = v9;
  return v8 + 4;
}
