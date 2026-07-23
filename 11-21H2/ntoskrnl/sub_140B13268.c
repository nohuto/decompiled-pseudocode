/*
 * XREFs of sub_140B13268 @ 0x140B13268
 * Callers:
 *     sub_140B141E0 @ 0x140B141E0 (sub_140B141E0.c)
 * Callees:
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_140B132D0 @ 0x140B132D0 (sub_140B132D0.c)
 *     sub_140B4E1B0 @ 0x140B4E1B0 (sub_140B4E1B0.c)
 */

char __fastcall sub_140B13268(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // edi
  char result; // al
  char v10; // di
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12[2]; // [rsp+48h] [rbp-20h] BYREF

  v11 = 0xFFFFFFFFLL;
  v7 = BugCheckParameter4;
  *(_OWORD *)v12 = 0LL;
  result = sub_140B132D0(BugCheckParameter3, (__int64)&v11);
  if ( result )
  {
    v10 = sub_140B4E1B0(BugCheckParameter3, v7, (__int64)v12, a5, a6, a7);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v11);
    else
      sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v11);
    return v10;
  }
  return result;
}
