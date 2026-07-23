/*
 * XREFs of sub_1402E96B0 @ 0x1402E96B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402E9768 @ 0x1402E9768 (sub_1402E9768.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 */

__int64 __fastcall sub_1402E96B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2 << 25 >> 16;
  if ( v4 <= 0x7FFFFFFEFFFFLL )
  {
    v8 = sub_140317A10(a2);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v6 = sub_140317A10(&v8);
      if ( (sub_1402E9768(0xFFFFFFFFFFLL, v4, 48 * ((v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL) & 2) == 0 )
      {
        sub_14033DBC0(a2, v5 | 0x8000000000000000uLL);
        sub_1402CF280(*(_QWORD *)(a1 + 168), v4, 1LL, 0);
      }
    }
  }
  return 0LL;
}
