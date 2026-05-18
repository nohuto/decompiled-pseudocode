/*
 * XREFs of sub_1800386C4 @ 0x1800386C4
 * Callers:
 *     sub_18002DC3C @ 0x18002DC3C (sub_18002DC3C.c)
 *     sub_180061DF8 @ 0x180061DF8 (sub_180061DF8.c)
 * Callees:
 *     sub_18002F0F0 @ 0x18002F0F0 (sub_18002F0F0.c)
 *     sub_18002F68C @ 0x18002F68C (sub_18002F68C.c)
 */

_BOOL8 __fastcall sub_1800386C4(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = sub_18002F0F0(a1, (__int64)v6, a2);
  return sub_18002F68C(v4, *(_QWORD *)(v3 + 16), a2);
}
