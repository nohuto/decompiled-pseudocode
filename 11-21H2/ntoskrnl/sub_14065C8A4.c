/*
 * XREFs of sub_14065C8A4 @ 0x14065C8A4
 * Callers:
 *     sub_14065C7A4 @ 0x14065C7A4 (sub_14065C7A4.c)
 *     sub_140920FCC @ 0x140920FCC (sub_140920FCC.c)
 * Callees:
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_14069F244 @ 0x14069F244 (sub_14069F244.c)
 *     sub_14069F324 @ 0x14069F324 (sub_14069F324.c)
 */

__int64 __fastcall sub_14065C8A4(__int64 a1, unsigned __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 v7; // rbp
  PVOID v8; // rax
  __int64 v9; // rsi

  if ( (__int16)a2 < 2 )
    goto LABEL_2;
  LOWORD(v7) = a2 - 1;
  v8 = Allocate(PagedPool, ((__int64)(__int16)a2 << 7) - 128, 0x38364D43u, a4);
  v9 = 0LL;
  *(_QWORD *)(a1 + 344) = v8;
  if ( v8 )
  {
    v7 = (unsigned __int16)v7;
    do
    {
      sub_14069F244(v9 + *(_QWORD *)(a1 + 344));
      v9 += 128LL;
      --v7;
    }
    while ( v7 );
LABEL_2:
    *(_WORD *)a1 = a2;
    return sub_14069F324(a1 + 8, a2);
  }
  return 3221225626LL;
}
