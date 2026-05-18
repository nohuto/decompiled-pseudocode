/*
 * XREFs of sub_1800A09BC @ 0x1800A09BC
 * Callers:
 *     sub_1800A1248 @ 0x1800A1248 (sub_1800A1248.c)
 * Callees:
 *     sub_1800A06AC @ 0x1800A06AC (sub_1800A06AC.c)
 */

__int64 __fastcall sub_1800A09BC(__int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  sub_1800A06AC(a1, (__int64)&v5, a3);
  *(_QWORD *)a2 = v5;
  *(_BYTE *)(a2 + 8) = v6;
  return a2;
}
