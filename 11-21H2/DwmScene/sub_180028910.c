/*
 * XREFs of sub_180028910 @ 0x180028910
 * Callers:
 *     sub_1800DABA0 @ 0x1800DABA0 (sub_1800DABA0.c)
 * Callees:
 *     sub_18007BC8C @ 0x18007BC8C (sub_18007BC8C.c)
 *     sub_18007BD8C @ 0x18007BD8C (sub_18007BD8C.c)
 */

__int64 __fastcall sub_180028910(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  *(_DWORD *)a2 = *(_DWORD *)(a1 + 3888);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 3892);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 3896);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 3900);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 3904);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 3936);
  *(_QWORD *)(a2 + 40) = *(_QWORD *)(a1 + 3952);
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a1 + 3944);
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a1 + 3928);
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 3960);
  *(_QWORD *)(a2 + 72) = *(_QWORD *)(a1 + 3968);
  v3 = sub_18007BD8C();
  *(_DWORD *)(a2 + 20) = sub_18007BC8C(v3, 0LL, 1LL, 1LL);
  *(_DWORD *)(a2 + 24) = sub_18007BC8C(v3, 1LL, 1LL, 1LL);
  result = sub_18007BC8C(v3, 11LL, 1LL, 1LL);
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
