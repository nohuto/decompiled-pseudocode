/*
 * XREFs of sub_1405FA610 @ 0x1405FA610
 * Callers:
 *     <none>
 * Callees:
 *     sub_14037EEA8 @ 0x14037EEA8 (sub_14037EEA8.c)
 */

__int64 __fastcall sub_1405FA610(__int64 *a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _DWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h]

  v2 = *a1;
  v5[1] = 0;
  v5[2] = a2 & 0xFFFFFFFC;
  v5[0] = 1;
  v3 = *(_QWORD *)(v2 + 128);
  v6 = 0LL;
  v5[3] = 1;
  return sub_14037EEA8(v3, (__int64)v5);
}
