/*
 * XREFs of ReadStringDelimited @ 0x18009D11C
 * Callers:
 *     _input_l @ 0x18009D2A0 (_input_l.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ReadString @ 0x18009CF54 (ReadString.c)
 */

__int64 __fastcall ReadStringDelimited(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _QWORD *SrcCh,
        int a6,
        FILE *Stream,
        _DWORD *a8)
{
  unsigned __int8 *v9; // r8
  unsigned __int8 v10; // r10
  char v12; // bl
  unsigned __int8 *v14; // rax
  bool v15; // zf
  unsigned __int8 *v16; // r8
  unsigned __int8 i; // al
  unsigned __int8 *v18; // rcx
  unsigned __int8 v19; // r9
  unsigned __int8 v20; // r11
  unsigned __int64 v21; // rdx
  unsigned __int8 v22; // al
  int v24[4]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v25; // [rsp+50h] [rbp-48h]

  v9 = *a2;
  v10 = 0;
  v12 = a1 | 8;
  v14 = *a2 + 1;
  *a2 = v14;
  v15 = *v14 == 94;
  *(_OWORD *)v24 = 0LL;
  if ( !v15 )
  {
    v14 = v9;
    v12 = a1;
  }
  v25 = 0LL;
  v16 = v14 + 1;
  i = v14[1];
  if ( i != 93 )
    goto LABEL_5;
  v10 = 93;
  HIBYTE(v24[2]) = 32;
  for ( i = *++v16; i != 93; i = *v16 )
  {
LABEL_5:
    v18 = v16++;
    if ( i == 45 && v10 && (v19 = *v16, *v16 != 93) )
    {
      v16 = v18 + 2;
      if ( v10 >= v19 )
      {
        v20 = v10;
      }
      else
      {
        v20 = v19;
        v19 = v10;
      }
      do
      {
        v21 = (unsigned __int64)v19 >> 3;
        v22 = v19++;
        *((_BYTE *)v24 + v21) |= 1 << (v22 & 7);
      }
      while ( v19 <= v20 );
      v10 = 0;
    }
    else
    {
      v10 = i;
      *((_BYTE *)v24 + ((unsigned __int64)i >> 3)) |= 1 << (i & 7);
    }
  }
  *a2 = v16;
  return ReadString(v12, (__int64)v24, a3, a4, SrcCh, a6, Stream, a8);
}
