/*
 * XREFs of sub_14091B240 @ 0x14091B240
 * Callers:
 *     sub_14091AB6C @ 0x14091AB6C (sub_14091AB6C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14091B240(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // edi
  unsigned int v7; // esi
  __int64 v8; // rcx

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0;
  v7 = *(_DWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 28) <= v7 )
    v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 28);
  if ( v7 )
  {
    if ( (int)sub_14042A5E0(*(_QWORD *)a1, *(unsigned int *)(a1 + 8)) >= 0 )
    {
      *(_DWORD *)(a1 + 12) += v7;
      v8 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 28) += v7;
      *a2 = v8;
      *a3 = v7;
    }
    else
    {
      return (unsigned int)-1073741491;
    }
  }
  else
  {
    return (unsigned int)-1073741807;
  }
  return v3;
}
