/*
 * XREFs of sub_14040D09C @ 0x14040D09C
 * Callers:
 *     sub_140400B44 @ 0x140400B44 (sub_140400B44.c)
 * Callees:
 *     sub_14040CE80 @ 0x14040CE80 (sub_14040CE80.c)
 */

__int64 __fastcall sub_14040D09C(__int64 a1)
{
  int v2; // ebx
  int v3; // ecx
  int v4; // r11d
  unsigned int v5; // r9d
  _DWORD *v6; // r10

  v2 = 0;
  v3 = 0;
  v4 = -1;
  v5 = *(_DWORD *)(a1 + 4) << 6 >> 2;
  if ( v5 )
  {
    v6 = (_DWORD *)(a1 + 4 * (v5 + 8LL));
    do
    {
      v2 |= --v5 & v4 & ((unsigned __int64)-(__int64)(unsigned int)*--v6 >> 32);
      v3 |= *v6 & v4 & ((unsigned __int64)-(__int64)(unsigned int)*v6 >> 32);
      v4 &= ~(v4 & ((unsigned __int64)-(__int64)(unsigned int)*v6 >> 32));
    }
    while ( v5 );
  }
  return 32 * v2 + (unsigned int)sub_14040CE80(v3);
}
