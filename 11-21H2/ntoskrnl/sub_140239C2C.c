/*
 * XREFs of sub_140239C2C @ 0x140239C2C
 * Callers:
 *     sub_1402399A8 @ 0x1402399A8 (sub_1402399A8.c)
 *     sub_1405BA498 @ 0x1405BA498 (sub_1405BA498.c)
 * Callees:
 *     sub_140239CA8 @ 0x140239CA8 (sub_140239CA8.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_140274E48 @ 0x140274E48 (sub_140274E48.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 */

__int64 __fastcall sub_140239C2C(__int64 a1, ULONG_PTR a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rax
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  result = sub_140317A10(a2);
  if ( result )
  {
    v5 = sub_140273AF0(a2, &v9);
    v7 = sub_140239CA8(a2);
    if ( v7 == 1 )
    {
      v8 = sub_140317A10(a2);
      sub_140274E48(a1, v8, 1LL);
    }
    LOBYTE(v6) = v9;
    sub_140334790(v5, v6);
    return v7;
  }
  return result;
}
