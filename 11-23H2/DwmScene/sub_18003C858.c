/*
 * XREFs of sub_18003C858 @ 0x18003C858
 * Callers:
 *     sub_18009B3C0 @ 0x18009B3C0 (sub_18009B3C0.c)
 * Callees:
 *     sub_18003C72C @ 0x18003C72C (sub_18003C72C.c)
 *     sub_18003C958 @ 0x18003C958 (sub_18003C958.c)
 *     sub_18003E330 @ 0x18003E330 (sub_18003E330.c)
 */

__int64 __fastcall sub_18003C858(__int64 a1, __int64 a2)
{
  _OWORD v5[4]; // [rsp+20h] [rbp-48h] BYREF

  sub_18003E330(a1);
  sub_18003C72C(a1, v5);
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  sub_18003C958(v5, a2);
  return a2;
}
