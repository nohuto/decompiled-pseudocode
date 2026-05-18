/*
 * XREFs of sub_18003EF14 @ 0x18003EF14
 * Callers:
 *     sub_18003E0C4 @ 0x18003E0C4 (sub_18003E0C4.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18003EE90 @ 0x18003EE90 (sub_18003EE90.c)
 */

__int64 __fastcall sub_18003EF14(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF

  v3 = *a1;
  v4 = a1[1];
  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = sub_18003EE90(a2, a3, a1);
  v8 = 0LL;
  v7[0] = *v5;
  v7[1] = v5[1];
  *v5 = v3;
  v5[1] = v4;
  sub_180010910((__int64)v7);
  return sub_180010910((__int64)&v8);
}
