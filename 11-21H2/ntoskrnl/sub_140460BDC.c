/*
 * XREFs of sub_140460BDC @ 0x140460BDC
 * Callers:
 *     sub_140636520 @ 0x140636520 (sub_140636520.c)
 *     sub_140883A50 @ 0x140883A50 (sub_140883A50.c)
 * Callees:
 *     sub_140460E30 @ 0x140460E30 (sub_140460E30.c)
 */

__int64 __fastcall sub_140460BDC(__int64 a1)
{
  unsigned __int64 v2; // rbx
  unsigned int v3; // eax
  unsigned int v4; // ecx
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 result; // rax

  v2 = (unsigned int)*(_QWORD *)(a1 + 8);
  v3 = ((unsigned int)v2 >> 13) & 0x3FFFF;
  _BitScanReverse(&v4, v3);
  v5 = (v2 >> 4) & 0x1FF;
  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb() + 4310) + 8LL * (v4 - 2)) + 8LL * (v3 ^ (1 << v4)) + 8);
  result = sub_140460E30(a1, v6 + 8 * (v5 + 10));
  if ( result )
  {
    *(_WORD *)(result + 62) = 0;
    *(_DWORD *)(result + 56) = 0;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8 * v5 + 312));
  }
  return result;
}
