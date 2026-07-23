/*
 * XREFs of sub_140298A10 @ 0x140298A10
 * Callers:
 *     sub_14045ECB0 @ 0x14045ECB0 (sub_14045ECB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140298A10(__int64 a1, _DWORD *a2)
{
  __int64 i; // r8
  int v3; // eax

  for ( i = *(_QWORD *)(a1 + 40); (*(_BYTE *)(i + 8) & 1) != 0; i = *(_QWORD *)(i + 40) )
    ;
  v3 = 0;
  if ( a2 )
  {
    LOBYTE(v3) = *(_QWORD *)(i + 32) != 0LL;
    *a2 = v3;
  }
  return i - 400;
}
