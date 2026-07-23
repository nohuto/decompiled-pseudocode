/*
 * XREFs of sub_1408521A4 @ 0x1408521A4
 * Callers:
 *     sub_1408520BC @ 0x1408520BC (sub_1408520BC.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140263730 (KeQueryNodeActiveAffinity.c)
 *     sub_1403D4EC8 @ 0x1403D4EC8 (sub_1403D4EC8.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1408521A4(__int64 a1, int a2, int a3, __int64 a4, USHORT *a5, unsigned int a6)
{
  USHORT *v10; // rbx
  int v11; // eax
  __int64 result; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-28h] BYREF
  USHORT Count; // [rsp+58h] [rbp+10h] BYREF

  Count = 0;
  Affinity = 0LL;
  memset((void *)a1, 0, 0x2E0uLL);
  v10 = a5;
  KeQueryNodeActiveAffinity(*a5, &Affinity, &Count);
  sub_1403D4EC8(a1, Count);
  v11 = a2 ^ *(_DWORD *)(a1 + 716);
  *(_QWORD *)(a1 + 696) = v10;
  *(_DWORD *)(a1 + 716) ^= v11 & 0x7FFFFFFF;
  result = a6;
  *(_DWORD *)(a1 + 720) = a3;
  *(_DWORD *)(a1 + 724) = result;
  *(_QWORD *)(a1 + 688) = a4;
  return result;
}
