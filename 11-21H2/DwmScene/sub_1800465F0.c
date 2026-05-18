/*
 * XREFs of sub_1800465F0 @ 0x1800465F0
 * Callers:
 *     sub_1800456DC @ 0x1800456DC (sub_1800456DC.c)
 *     sub_18004576C @ 0x18004576C (sub_18004576C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_1800457FC @ 0x1800457FC (sub_1800457FC.c)
 */

__int64 __fastcall sub_1800465F0(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 *v7; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10[4]; // [rsp+30h] [rbp-20h] BYREF

  v2 = sub_1800129F4(v10, (__int64)&qword_1801F7FF8);
  sub_1800457FC(a1, v9, (char *)v2);
  sub_180010910((__int64)v9);
  v3 = sub_1800129F4(v10, (__int64)&qword_1801F7FD8);
  sub_1800457FC(a1, v9, (char *)v3);
  sub_180010910((__int64)v9);
  v4 = sub_1800129F4(v10, (__int64)&qword_1801F8078);
  sub_1800457FC(a1, v9, (char *)v4);
  sub_180010910((__int64)v9);
  v5 = sub_1800129F4(v10, (__int64)&qword_1801F8058);
  sub_1800457FC(a1, v9, (char *)v5);
  sub_180010910((__int64)v9);
  v6 = sub_1800129F4(v10, (__int64)&qword_1801F8018);
  sub_1800457FC(a1, v9, (char *)v6);
  sub_180010910((__int64)v9);
  v7 = sub_1800129F4(v10, (__int64)&qword_1801F8038);
  sub_1800457FC(a1, v9, (char *)v7);
  return sub_180010910((__int64)v9);
}
