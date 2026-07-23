/*
 * XREFs of sub_14064F6D8 @ 0x14064F6D8
 * Callers:
 *     sub_140846F90 @ 0x140846F90 (sub_140846F90.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14064F6D8(__int64 a1, __int64 a2)
{
  void *v2; // rax
  __int64 v3; // r8
  _BYTE *v4; // rdx

  v2 = (void *)(a2 + 24);
  v3 = -1LL;
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 8) = a2 + 24;
  v4 = *(_BYTE **)(a1 + 8);
  do
    ++v3;
  while ( v4[v3] );
  memmove(v2, v4, v3 + 1);
  return 0LL;
}
