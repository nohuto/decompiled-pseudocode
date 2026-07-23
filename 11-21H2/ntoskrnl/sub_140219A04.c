/*
 * XREFs of sub_140219A04 @ 0x140219A04
 * Callers:
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 * Callees:
 *     sub_140219B18 @ 0x140219B18 (sub_140219B18.c)
 */

bool __fastcall sub_140219A04(__int64 a1, __int64 a2, int a3, _BYTE *a4)
{
  char v5; // r10
  unsigned int v6; // edi
  _DWORD *v7; // rbx
  unsigned int v8; // r8d
  int v9; // r9d
  __int64 v10; // rdx
  unsigned int v11; // r8d
  unsigned __int8 v12; // r10
  int v13; // r11d
  bool v14; // zf
  int v16; // ecx
  _DWORD *i; // rdx

  *a4 = 0;
  v5 = a1;
  v6 = 0;
  if ( a3 )
  {
    v7 = (_DWORD *)(a2 + 4);
    while ( v7[2] )
    {
      LOBYTE(a1) = v5;
      if ( !(unsigned __int8)sub_140219B18(a1) && v9 != 1 && *v7 > 1u )
        goto LABEL_30;
      ++v6;
      v7 += 10;
      if ( v6 >= v8 )
        goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  LOBYTE(a1) = v5;
  if ( !(unsigned __int8)sub_140219B18(a1)
    && v11 == 2
    && (*(_WORD *)v10 & 0xFFFB) != 0
    && *(_DWORD *)(v10 + 52) == 1
    && *(_BYTE *)(v10 + 44) != (_BYTE)v13 )
  {
    return 0;
  }
  if ( v12 <= 0x8Fu )
  {
    if ( v12 >= 0x8Eu )
      goto LABEL_20;
    if ( v12 < 0x80u )
      return 1;
    if ( v12 <= 0x86u )
      goto LABEL_20;
    if ( v12 == 0x87 )
      goto LABEL_28;
    if ( v12 == 0x88 )
    {
LABEL_20:
      if ( v11 != 2 || *(_DWORD *)(v10 + 12) == 1 )
        return 0;
      if ( v12 != 0x88 && v12 != 0x8F || *(_DWORD *)(v10 + 52) != 1 )
        return 1;
      v14 = *(_BYTE *)(v10 + 44) == (unsigned __int8)v13;
      return !v14;
    }
    if ( v12 > 0x8Cu )
    {
LABEL_28:
      if ( v11 == 1 )
      {
        v16 = *(_DWORD *)(v10 + 12);
        if ( ((v16 - 1) & 0xFFFFFFF9) != 0 || v16 == 7 )
          return 1;
      }
      return 0;
    }
LABEL_52:
    if ( v11 == 1 )
    {
      if ( *(_DWORD *)(v10 + 12) == 1 || *(_WORD *)v10 == 5 )
        return 1;
LABEL_30:
      *a4 = 1;
    }
    return 0;
  }
  if ( v12 <= 0x93u )
    goto LABEL_52;
  if ( v12 <= 0x9Fu )
    return 1;
  if ( v12 <= 0xA1u )
  {
    if ( !v11 )
      return 1;
    for ( i = (_DWORD *)(v10 + 12); *i != 1; i += 10 )
    {
      if ( ++v13 >= v11 )
        return 1;
    }
    return 0;
  }
  if ( v12 != 0xA2 )
  {
    if ( v12 != 0xA3 )
      return 1;
    goto LABEL_20;
  }
  if ( v11 == 2 )
    return 0;
  if ( v11 != 1 )
    return 1;
  v14 = *(_DWORD *)(v10 + 12) == 1;
  return !v14;
}
