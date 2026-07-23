/*
 * XREFs of sub_140A6F124 @ 0x140A6F124
 * Callers:
 *     sub_1402DAB78 @ 0x1402DAB78 (sub_1402DAB78.c)
 *     KdSystemDebugControl @ 0x14095F510 (KdSystemDebugControl.c)
 *     sub_140A6F444 @ 0x140A6F444 (sub_140A6F444.c)
 *     sub_140A6FA44 @ 0x140A6FA44 (sub_140A6FA44.c)
 *     sub_140A6FB80 @ 0x140A6FB80 (sub_140A6FB80.c)
 *     sub_140A6FEC4 @ 0x140A6FEC4 (sub_140A6FEC4.c)
 *     sub_140A70AE0 @ 0x140A70AE0 (sub_140A70AE0.c)
 *     sub_140A70C44 @ 0x140A70C44 (sub_140A70C44.c)
 *     sub_140A7131C @ 0x140A7131C (sub_140A7131C.c)
 *     sub_140A72DF0 @ 0x140A72DF0 (sub_140A72DF0.c)
 *     sub_140A73078 @ 0x140A73078 (sub_140A73078.c)
 *     sub_140A7328C @ 0x140A7328C (sub_140A7328C.c)
 *     sub_140A73514 @ 0x140A73514 (sub_140A73514.c)
 *     sub_140A73D80 @ 0x140A73D80 (sub_140A73D80.c)
 *     sub_140A73F44 @ 0x140A73F44 (sub_140A73F44.c)
 *     KdLogDbgPrint @ 0x140A73FF0 (KdLogDbgPrint.c)
 *     sub_140A74644 @ 0x140A74644 (sub_140A74644.c)
 *     sub_140A74D24 @ 0x140A74D24 (sub_140A74D24.c)
 * Callees:
 *     sub_14028F978 @ 0x14028F978 (sub_14028F978.c)
 */

__int64 __fastcall sub_140A6F124(char *a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, _DWORD *a6)
{
  unsigned int v6; // ebp
  unsigned int v10; // edi
  unsigned int i; // ebx
  unsigned int v13; // edx

  v6 = 8;
  if ( a4 <= 8 )
  {
    v6 = a4;
    if ( !a4 )
      v6 = 4;
  }
  v10 = a3;
  for ( i = 1; v10; v10 -= i )
  {
    if ( i < v6 )
    {
      do
      {
        v13 = 2 * i;
        if ( 2 * i > v10 )
          break;
        if ( ((2 * i - 1) & (unsigned int)a1) != 0 )
          break;
        i *= 2;
      }
      while ( v13 < v6 );
    }
    while ( i > v10 )
      i >>= 1;
    if ( (int)sub_14028F978(a1, a2, i, i, a5) < 0 )
      break;
    a1 += i;
    a2 += i;
  }
  if ( a6 )
    *a6 = a3 - v10;
  return v10 != 0 ? 0xC0000001 : 0;
}
