/*
 * XREFs of sub_1800739D0 @ 0x1800739D0
 * Callers:
 *     sub_180064BB0 @ 0x180064BB0 (sub_180064BB0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180015678 @ 0x180015678 (sub_180015678.c)
 *     unknown_libname_6 @ 0x18003A9D4 (unknown_libname_6.c)
 */

void __fastcall sub_1800739D0(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rcx
  _QWORD *v5; // rcx
  __int64 *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx

  v4 = *(__int64 **)(a1 + 40);
  if ( v4 != *(__int64 **)(a1 + 48) )
  {
    while ( !sub_180015678(v4, a2) )
    {
      v4 = v6;
      if ( v6 == *(__int64 **)(a1 + 48) )
        goto LABEL_8;
    }
    unknown_libname_6(v6, *(__int64 **)(a1 + 48), v5);
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) - 8LL);
    if ( v7 )
      sub_180010530(v7);
    *(_QWORD *)(a1 + 48) -= 16LL;
  }
LABEL_8:
  v8 = a2[1];
  if ( v8 )
    sub_180010530(v8);
}
