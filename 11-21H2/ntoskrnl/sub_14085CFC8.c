/*
 * XREFs of sub_14085CFC8 @ 0x14085CFC8
 * Callers:
 *     sub_14085CF70 @ 0x14085CF70 (sub_14085CF70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14085CFC8(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v4; // r11d
  unsigned int v5; // r10d
  unsigned int v6; // r8d
  __int64 i; // rcx

  v4 = *(_DWORD *)(a1 + 28);
  v5 = 0;
  v6 = 0;
  for ( i = a1 + 48; !_bittest(&v4, v6) || (*(_DWORD *)(i + 8) & 2) == 0 || a2 != *(_QWORD *)i; i += 32LL )
  {
    if ( ++v6 >= 0x10 )
      return v5;
  }
  v5 = 1;
  if ( a4 )
    *a4 = v6;
  return v5;
}
