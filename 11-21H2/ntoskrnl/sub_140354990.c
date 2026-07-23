/*
 * XREFs of sub_140354990 @ 0x140354990
 * Callers:
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_1403B1020 @ 0x1403B1020 (sub_1403B1020.c)
 *     sub_1403B6570 @ 0x1403B6570 (sub_1403B6570.c)
 * Callees:
 *     sub_140354C50 @ 0x140354C50 (sub_140354C50.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     sub_1403562C8 @ 0x1403562C8 (sub_1403562C8.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

char __fastcall sub_140354990(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // bl
  int v5; // eax
  __int64 v6; // rdx

  v2 = 0;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 36));
  if ( v5 < 0 )
    sub_1405CAE6C(0x613uLL, BugCheckParameter2, 0LL, 1uLL);
  if ( v5 )
  {
    if ( a2 )
      sub_140355058(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL);
  }
  else
  {
    sub_140354C50(*(_QWORD *)(BugCheckParameter2 + 48));
    if ( !a2 )
      sub_140355058(*(_QWORD *)(BugCheckParameter2 + 48), 0LL, 16LL);
    LOBYTE(v6) = 1;
    return sub_1403562C8(BugCheckParameter2, v6, a2);
  }
  return v2;
}
