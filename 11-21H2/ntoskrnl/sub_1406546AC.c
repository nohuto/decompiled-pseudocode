/*
 * XREFs of sub_1406546AC @ 0x1406546AC
 * Callers:
 *     sub_140B53724 @ 0x140B53724 (sub_140B53724.c)
 *     sub_140B53A30 @ 0x140B53A30 (sub_140B53A30.c)
 * Callees:
 *     sub_140B55BE0 @ 0x140B55BE0 (sub_140B55BE0.c)
 */

__int64 __fastcall sub_1406546AC(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 result; // rax
  __int16 v7; // cx

  v2 = a2;
  if ( !(unsigned __int8)sub_140B55BE0() || (unsigned int)v2 >= *(_DWORD *)((unsigned int)dword_140C0DAE4 + a1 + 52) )
    return 0LL;
  _mm_lfence();
  v4 = a1 + *(unsigned int *)((unsigned int)dword_140C0DAE4 + a1 + 48);
  v5 = *(unsigned int *)(144 * v2 + v4);
  result = 144 * v2 + v4 + 8;
  v7 = 2 * *(_WORD *)(v5 + a1);
  *(_WORD *)(result + 88) = v7;
  *(_WORD *)(result + 90) = v7;
  *(_QWORD *)(result + 96) = v5 + a1 + 4;
  return result;
}
