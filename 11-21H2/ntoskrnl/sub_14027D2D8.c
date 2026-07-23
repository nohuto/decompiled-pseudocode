/*
 * XREFs of sub_14027D2D8 @ 0x14027D2D8
 * Callers:
 *     sub_14031A5C0 @ 0x14031A5C0 (sub_14031A5C0.c)
 *     sub_14045BCA2 @ 0x14045BCA2 (sub_14045BCA2.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14027D6E0 @ 0x14027D6E0 (sub_14027D6E0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 */

__int64 __fastcall sub_14027D2D8(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  unsigned __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  if ( !a3 )
    sub_1402CF4F0(v3);
  v7 = sub_14027D6E0(v3, a2 << 25 >> 16, &v10);
  if ( v7 == a2 )
  {
    *(_BYTE *)(a1 + 4) &= ~1u;
    result = 1LL;
    *(_QWORD *)(a1 + 48) = a2;
  }
  else
  {
    sub_14020D8D0(v3, v7);
    if ( !a3 )
    {
      LOBYTE(v9) = *(_BYTE *)(a1 + 7);
      sub_1402B0CE0(*(_QWORD *)(a1 + 24), v9);
    }
    return 0LL;
  }
  return result;
}
