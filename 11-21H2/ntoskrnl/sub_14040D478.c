/*
 * XREFs of sub_14040D478 @ 0x14040D478
 * Callers:
 *     sub_14040C590 @ 0x14040C590 (sub_14040C590.c)
 *     sub_14040D2C4 @ 0x14040D2C4 (sub_14040D2C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14040D478(_DWORD *a1, int a2, int a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // edx
  _DWORD *v5; // rcx
  __int64 v6; // rdx

  v3 = a3 ^ *a1;
  v4 = 16 * a2;
  if ( v4 > 1 )
  {
    v5 = a1 + 1;
    v6 = v4 - 1;
    do
    {
      v3 |= *v5++;
      --v6;
    }
    while ( v6 );
  }
  return (unsigned int)~((unsigned __int64)-(__int64)v3 >> 32);
}
