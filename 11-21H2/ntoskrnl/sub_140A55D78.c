/*
 * XREFs of sub_140A55D78 @ 0x140A55D78
 * Callers:
 *     sub_140A56780 @ 0x140A56780 (sub_140A56780.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A55D78(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  int v4; // ecx

  result = *(_QWORD *)(a1 + 240);
  v3 = *a2;
  v4 = *(_DWORD *)(result + 2872);
  if ( *a2 )
  {
    result = *(_QWORD *)(result + 2864);
    a2[67] &= result;
    *a2 = result & v3;
    if ( (v4 & 0x10) == 0 )
      *((_DWORD *)a2 + 5) &= ~2u;
    if ( (v4 & 8) == 0 )
      *((_DWORD *)a2 + 5) &= ~1u;
    if ( (v4 & 0x40) == 0 )
      *((_DWORD *)a2 + 5) &= ~4u;
  }
  return result;
}
