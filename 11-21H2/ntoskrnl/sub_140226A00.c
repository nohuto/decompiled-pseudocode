/*
 * XREFs of sub_140226A00 @ 0x140226A00
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 * Callees:
 *     sub_140229640 @ 0x140229640 (sub_140229640.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 */

__int64 sub_140226A00()
{
  __int64 v0; // rax
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r10
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v7; // [rsp+20h] [rbp-68h]
  _OWORD v8[3]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v9; // [rsp+70h] [rbp-18h]

  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  v0 = sub_14027B520();
  v1 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v0 + 174));
  v4 = v2 << 25 >> 16 << 25 >> 16;
  v7 = v4;
  LOBYTE(v4) = 17;
  sub_140330080(v0, v4, 0, v3 << 25 >> 16 << 25 >> 16, v7, 1, 0, (__int64)v8);
  v5 = *(_QWORD *)&v8[0];
  sub_14028CE10(v1, *(_QWORD *)&v8[0]);
  return sub_140229640(v1, v5, 1LL);
}
