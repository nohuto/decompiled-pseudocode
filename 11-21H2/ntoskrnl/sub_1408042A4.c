/*
 * XREFs of sub_1408042A4 @ 0x1408042A4
 * Callers:
 *     sub_14037DAEC @ 0x14037DAEC (sub_14037DAEC.c)
 * Callees:
 *     sub_1402ECEB0 @ 0x1402ECEB0 (sub_1402ECEB0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_140395864 @ 0x140395864 (sub_140395864.c)
 */

__int64 __fastcall sub_1408042A4(unsigned __int64 a1)
{
  ULONG_PTR v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v2 = sub_14030E7C0(a1, 0, &v7);
  v3 = *(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32);
  v4 = *(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32);
  sub_140395864(a1, (v3 << 12) | 0xFFF);
  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  LOBYTE(v7) = 0;
  return sub_1402ECEB0(v2, (int)&v7, v4, v3, v5, 0);
}
