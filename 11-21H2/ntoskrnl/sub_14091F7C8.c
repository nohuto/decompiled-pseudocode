/*
 * XREFs of sub_14091F7C8 @ 0x14091F7C8
 * Callers:
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 * Callees:
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_14079B22C @ 0x14079B22C (sub_14079B22C.c)
 *     sub_14079BD98 @ 0x14079BD98 (sub_14079BD98.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_14091F7C8(ULONG_PTR BugCheckParameter2, _DWORD *a2)
{
  __int64 result; // rax
  ULONG_PTR v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 i; // r14
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  result = sub_1407C97FC(&v9);
  if ( *a2 )
  {
    v5 = (unsigned int)a2[1];
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      v6 = sub_1406BF400(BugCheckParameter2, v5, &v9);
    else
      v6 = sub_1407C9820(BugCheckParameter2, v5, (unsigned int *)&v9);
    v7 = 0LL;
    for ( i = v6; (unsigned int)v7 < *a2; v7 = (unsigned int)(v7 + 1) )
      sub_14079B22C(BugCheckParameter2, *(unsigned int *)(i + 4 * v7));
    result = sub_14079BD98(BugCheckParameter2, (unsigned int)a2[1]);
    if ( i )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        return sub_1406BF450(BugCheckParameter2, &v9);
      else
        return sub_1407C97C0(BugCheckParameter2, (unsigned int *)&v9);
    }
  }
  return result;
}
