/*
 * XREFs of sub_14055CF10 @ 0x14055CF10
 * Callers:
 *     sub_14055CF88 @ 0x14055CF88 (sub_14055CF88.c)
 * Callees:
 *     sub_140593388 @ 0x140593388 (sub_140593388.c)
 */

__int64 sub_14055CF10()
{
  __int64 v0; // rcx
  __int64 v1; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v4[5]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v5; // [rsp+58h] [rbp-8h]

  v5 = 0LL;
  v0 = *(_QWORD *)(qword_140D00A80 + 8);
  v1 = *(_QWORD *)(v0 + 48);
  LODWORD(v5) = 7;
  v3[0] = v1;
  v3[1] = v0 + 56;
  v4[2] = v3;
  v4[4] = &qword_140D018E8;
  v4[0] = sub_140552F60;
  v4[3] = v0;
  v4[1] = sub_140552800;
  return sub_140593388(v4, 0LL, 3LL);
}
