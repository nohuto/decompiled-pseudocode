/*
 * XREFs of sub_140231830 @ 0x140231830
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140231830(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // ebp
  int v7; // edi
  int v8; // esi
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v14; // ebp
  int v15; // eax

  v4 = 0;
  if ( a4 )
    *a4 = 1;
  v7 = 7;
  v8 = 224;
  v9 = 624;
  while ( 1 )
  {
    v10 = sub_14042A5E0((unsigned int)v9, a2);
    v11 = -65536;
    if ( v7 )
      v11 = -1;
    v12 = v11 & v10;
    if ( v12 )
    {
      if ( v4 )
        break;
      _BitScanReverse(&v14, v12);
      v15 = v12 & ~(1 << v14);
      v4 = v8 + v14;
      if ( !a4 )
        goto LABEL_8;
      if ( v15 )
        break;
    }
    --v7;
    v9 -= 16;
    v8 -= 32;
    if ( v9 < 512 )
      goto LABEL_8;
  }
  *a4 = 0;
LABEL_8:
  if ( !v4 )
    return 4LL;
  *a3 = v4;
  return 3LL;
}
