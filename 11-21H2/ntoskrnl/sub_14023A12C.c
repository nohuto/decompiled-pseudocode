/*
 * XREFs of sub_14023A12C @ 0x14023A12C
 * Callers:
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402D0490 @ 0x1402D0490 (sub_1402D0490.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 */

__int64 __fastcall sub_14023A12C(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  v8 = 0;
  if ( (result & 0x42) == 0 && (result & 0x800) != 0 )
  {
    v3 = sub_14026DFC0(0LL);
    v4 = sub_1402D0490(v3, a1, &v8);
    v5 = *a1;
    v6 = v4;
    if ( (*a1 & 1) != 0 && (v5 & 0x42) == 0 && (v5 & 0x800) != 0 )
      sub_14033DBC0(a1, v5 | 0x62);
    sub_14020D8D0(v3, v6);
    LOBYTE(v7) = v8;
    return sub_1402B0CE0(v3, v7);
  }
  return result;
}
