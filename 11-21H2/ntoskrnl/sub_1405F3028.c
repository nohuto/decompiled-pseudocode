/*
 * XREFs of sub_1405F3028 @ 0x1405F3028
 * Callers:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_1405F30C0 @ 0x1405F30C0 (sub_1405F30C0.c)
 */

__int64 __fastcall sub_1405F3028(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rbx

  v4 = *(_DWORD *)(a1 + 20) | a3;
  v5 = *(_DWORD *)(a1 + 220);
  if ( v5 && v5 == *((_DWORD *)KeGetCurrentThread() + 308) )
    v4 |= 1u;
  if ( !a2 )
    return -1LL;
  if ( (a2 & 0xF) != 0 )
    return -1LL;
  v6 = sub_1405F30C0(a1, a2, v4, 0LL);
  v7 = v6;
  if ( v6 != -1 && (v4 & 0x10000000) != 0 && RtlCompareMemory((const void *)(v6 + a2), qword_140A38368, 0x10uLL) != 16 )
    return -1LL;
  return v7;
}
