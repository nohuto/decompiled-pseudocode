/*
 * XREFs of sub_1800CA88C @ 0x1800CA88C
 * Callers:
 *     sub_1800CA310 @ 0x1800CA310 (sub_1800CA310.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CA88C(__int64 a1, __int128 *a2)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  unsigned int v5; // r8d
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 result; // rax

  v3 = *a2;
  v4 = a2[1];
  v5 = (*(_DWORD *)(a1 + 1644) + 1) % 0x14u;
  *(_DWORD *)(a1 + 1644) = v5;
  v6 = 56LL * v5;
  *(_OWORD *)(v6 + a1 + 520) = v3;
  v7 = a2[2];
  *(_OWORD *)(v6 + a1 + 536) = v4;
  *(_QWORD *)&v4 = *((_QWORD *)a2 + 6);
  *(_OWORD *)(v6 + a1 + 552) = v7;
  *(_QWORD *)(v6 + a1 + 568) = v4;
  result = (unsigned int)(*(_DWORD *)(a1 + 1640) + 1);
  if ( (unsigned int)result > 0x14 )
    result = 20LL;
  *(_DWORD *)(a1 + 1640) = result;
  return result;
}
