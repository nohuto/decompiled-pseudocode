/*
 * XREFs of sub_1405C2764 @ 0x1405C2764
 * Callers:
 *     sub_1405C1218 @ 0x1405C1218 (sub_1405C1218.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1405C2764(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ecx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8

  v2 = dword_140037160[(*(_DWORD *)(a1 + 48) >> 19) & 3];
  v3 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v2 < 2 )
  {
    v4 = 2 - v2;
    do
    {
      v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v4;
    }
    while ( v4 );
  }
  return v3;
}
