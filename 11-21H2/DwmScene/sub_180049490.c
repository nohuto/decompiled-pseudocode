/*
 * XREFs of sub_180049490 @ 0x180049490
 * Callers:
 *     <none>
 * Callees:
 *     sub_180028544 @ 0x180028544 (sub_180028544.c)
 *     sub_18002B740 @ 0x18002B740 (sub_18002B740.c)
 *     sub_18002BAAC @ 0x18002BAAC (sub_18002BAAC.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_180092300 @ 0x180092300 (sub_180092300.c)
 */

_BYTE *__fastcall sub_180049490(__int64 a1, __int64 *a2)
{
  _BYTE *result; // rax
  __int128 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  result = sub_18002B740(a1, a2);
  if ( *(_QWORD *)(a1 + 120) )
  {
    sub_18002C7C4(*a2 + 24);
    *((_QWORD *)&v5 + 1) = a2[1];
    v6 = *(_QWORD *)(a1 + 120);
    v8 = 0LL;
    if ( *((_QWORD *)&v5 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v5 + 1) + 8LL));
      *((_QWORD *)&v5 + 1) = a2[1];
    }
    *(_QWORD *)&v5 = *a2;
    v8 = v5;
    sub_180092300(v6, &v8);
    v7 = sub_180028544(*a2);
    return sub_18002BAAC(a1, v7);
  }
  return result;
}
