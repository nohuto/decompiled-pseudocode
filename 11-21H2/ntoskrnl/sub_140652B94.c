/*
 * XREFs of sub_140652B94 @ 0x140652B94
 * Callers:
 *     sub_1406528E8 @ 0x1406528E8 (sub_1406528E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140652B94(__int64 a1, __int64 a2)
{
  char v2; // al
  char v4; // r8
  int v5; // ecx
  int v6; // ecx

  v2 = *(_BYTE *)(a2 + 5);
  if ( v2 != 21 && v2 != 32 )
    return 3221225659LL;
  v4 = 0;
  xmmword_140C10CA0 = 0LL;
  xmmword_140C10CB0 = 0LL;
  LOWORD(xmmword_140C10CA0) = *(unsigned __int8 *)(a2 + 5);
  DWORD1(xmmword_140C10CA0) = *(unsigned __int8 *)(a2 + 4);
  v5 = *(unsigned __int8 *)(a2 + 16) >> 6;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        v4 = 16;
    }
    else
    {
      v4 = 4;
    }
  }
  else
  {
    v4 = 1;
  }
  BYTE8(xmmword_140C10CA0) = v4;
  *(_QWORD *)&xmmword_140C10CB0 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
  BYTE8(xmmword_140C10CB0) = *(_BYTE *)(a2 + 8) & 1;
  BYTE9(xmmword_140C10CB0) = *(_BYTE *)(a2 + 6) & 0xFE;
  return 0LL;
}
