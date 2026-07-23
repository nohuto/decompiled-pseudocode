/*
 * XREFs of sub_140A6A948 @ 0x140A6A948
 * Callers:
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 *     sub_14097A120 @ 0x14097A120 (sub_14097A120.c)
 *     sub_140A6A73C @ 0x140A6A73C (sub_140A6A73C.c)
 * Callees:
 *     sub_140258680 @ 0x140258680 (sub_140258680.c)
 *     sub_1405A9F00 @ 0x1405A9F00 (sub_1405A9F00.c)
 */

void __fastcall sub_140A6A948(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a2 )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(a1 + 96);
      if ( !v3 )
        break;
      *(_QWORD *)(a1 + 96) = sub_140258680(v3);
      sub_1405A9F00(0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4));
    }
  }
  *(_QWORD *)(a1 + 104) = 0LL;
}
