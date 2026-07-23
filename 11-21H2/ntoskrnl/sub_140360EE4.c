/*
 * XREFs of sub_140360EE4 @ 0x140360EE4
 * Callers:
 *     sub_1407E0DC4 @ 0x1407E0DC4 (sub_1407E0DC4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140360EE4(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v3; // r9d
  int v5; // r10d
  unsigned int v7; // r10d
  int v8; // eax
  int v9; // ecx

  v3 = 0;
  *(_QWORD *)a1 = *a2;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 < 0 )
  {
    v7 = v5 & 0x7FFFFFFF;
    *(_DWORD *)(a1 + 4) = v7;
    v8 = *(_DWORD *)a2;
    if ( a3 > *(_DWORD *)a2 )
    {
      *(_DWORD *)a1 = a3;
      v3 = a3 - v8;
      v9 = -1;
      if ( a3 - v8 != -1 && ~v3 >= v7 )
        v9 = v7 + v3;
      *(_DWORD *)(a1 + 4) = v9 & 0x7FFFFFFF;
    }
  }
  return v3;
}
