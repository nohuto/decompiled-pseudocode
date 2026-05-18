/*
 * XREFs of sub_18004DF24 @ 0x18004DF24
 * Callers:
 *     sub_18005033C @ 0x18005033C (sub_18005033C.c)
 *     sub_18005FECC @ 0x18005FECC (sub_18005FECC.c)
 *     sub_18007C338 @ 0x18007C338 (sub_18007C338.c)
 * Callees:
 *     sub_18004D5EC @ 0x18004D5EC (sub_18004D5EC.c)
 */

__int64 __fastcall sub_18004DF24(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  sub_18004D5EC(a1, (__int64)&v5, a3);
  *(_QWORD *)a2 = v5;
  *(_BYTE *)(a2 + 8) = v6;
  return a2;
}
