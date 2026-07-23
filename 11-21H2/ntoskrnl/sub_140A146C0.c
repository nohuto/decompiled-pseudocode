/*
 * XREFs of sub_140A146C0 @ 0x140A146C0
 * Callers:
 *     sub_140841858 @ 0x140841858 (sub_140841858.c)
 *     sub_1408436C0 @ 0x1408436C0 (sub_1408436C0.c)
 *     sub_140A11F60 @ 0x140A11F60 (sub_140A11F60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A146C0(unsigned __int64 a1, unsigned __int64 a2)
{
  int v3; // ecx

  v3 = 48;
  while ( (unsigned __int16)(a1 >> v3) == (unsigned __int16)(a2 >> v3) || (unsigned __int16)(a1 >> v3) == 0xFFFF )
  {
    v3 -= 16;
    if ( v3 < 0 )
      return 1LL;
  }
  return 0LL;
}
