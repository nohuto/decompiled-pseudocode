/*
 * XREFs of sub_14022FB98 @ 0x14022FB98
 * Callers:
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 * Callees:
 *     sub_14022FC80 @ 0x14022FC80 (sub_14022FC80.c)
 */

__int64 __fastcall sub_14022FB98(__int64 a1, unsigned int a2, __int64 a3)
{
  char v3; // r9
  int v8; // eax
  __int16 v9; // ax
  char v10; // al
  char v11; // cl
  char v12; // al

  v3 = *(_BYTE *)(a1 + 13);
  if ( (v3 & 5) != 4 || (v3 & 2) != 0 )
    return 0LL;
  v8 = *(unsigned __int16 *)(a1 + 10);
  if ( (_WORD)v8 )
  {
    if ( v8 + *(unsigned __int16 *)(a1 + 8) == ((a2 >> 3) & 0x1FF) )
    {
      if ( *(__int64 *)(a3 + 40) < 0 )
      {
        if ( (v3 & 0x10) == 0 )
          goto LABEL_8;
      }
      else if ( (v3 & 0x10) != 0 )
      {
        goto LABEL_8;
      }
    }
    sub_14022FC80(a1);
  }
LABEL_8:
  v9 = *(_WORD *)(a1 + 10);
  if ( v9 )
  {
    *(_WORD *)(a1 + 10) = v9 + 1;
  }
  else
  {
    v10 = *(_BYTE *)(a1 + 13);
    *(_WORD *)(a1 + 10) = 1;
    v11 = v10 & 0xEF;
    *(_WORD *)(a1 + 8) = (a2 >> 3) & 0x1FF;
    v12 = v10 | 0x10;
    if ( *(__int64 *)(a3 + 40) >= 0 )
      v11 = v12;
    *(_BYTE *)(a1 + 13) = v11;
  }
  return 1LL;
}
