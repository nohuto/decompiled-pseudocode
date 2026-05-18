/*
 * XREFs of sub_1800CCE04 @ 0x1800CCE04
 * Callers:
 *     sub_1800CCC14 @ 0x1800CCC14 (sub_1800CCC14.c)
 * Callees:
 *     sub_180020470 @ 0x180020470 (sub_180020470.c)
 */

__int64 __fastcall sub_1800CCE04(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = sub_180020470(a1, (__int64)"{");
  v5 = sub_180020470(v4, (__int64)"Count");
  v6 = sub_180020470(v5, (__int64)"=");
  v7 = std::ostream::operator<<(v6, *a2);
  v8 = sub_180020470(v7, (__int64)",Quality");
  v9 = sub_180020470(v8, (__int64)"=");
  v10 = std::ostream::operator<<(v9, a2[1]);
  v11 = sub_180020470(v10, (__int64)",");
  sub_180020470(v11, (__int64)"}");
  return a1;
}
