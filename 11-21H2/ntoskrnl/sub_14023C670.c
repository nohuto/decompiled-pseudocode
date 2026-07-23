/*
 * XREFs of sub_14023C670 @ 0x14023C670
 * Callers:
 *     sub_1405D7BF0 @ 0x1405D7BF0 (sub_1405D7BF0.c)
 * Callees:
 *     <none>
 */

char sub_14023C670()
{
  __int64 v1; // rcx
  unsigned __int8 v2; // r10
  unsigned int v3; // r12d
  unsigned int v4; // r15d
  unsigned __int16 v5; // si
  __int64 v6; // r9
  unsigned __int8 v7; // di
  unsigned int v8; // r13d
  unsigned int v9; // ebx
  char v10; // bp
  unsigned __int8 v11; // r11
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // al
  unsigned int v14; // r10d
  int v15; // ecx
  unsigned int v16; // r8d
  int v17; // edx
  unsigned __int8 v18; // cl
  bool v19; // zf
  unsigned __int8 v20; // al
  unsigned __int8 v21; // [rsp+48h] [rbp+8h]
  char v22; // [rsp+50h] [rbp+10h]
  char v23; // [rsp+58h] [rbp+18h]
  __int16 v24; // [rsp+60h] [rbp+20h]

  if ( !dword_140C1CF20 )
    return 1;
  v1 = 534LL * dword_140C232CC;
  v2 = BYTE6(off_140C03040[v1 + 20]);
  v3 = off_140C03040[v1 + 22];
  v4 = HIDWORD(off_140C03040[v1 + 21]);
  v23 = BYTE1(off_140C03040[v1 + 21]);
  v22 = off_140C03040[v1 + 21];
  v21 = v2;
  if ( dword_140C204A8 == 5 )
  {
    v4 = 0;
    v3 = 0;
  }
  v5 = 0;
  v24 = 0;
  if ( !dword_140C1CF34 )
    return 1;
  do
  {
    v6 = qword_140C1CF38 + 336LL * v5;
    if ( (*(_BYTE *)(v6 + 146) & 1) != 0 )
      goto LABEL_58;
    ++*(_DWORD *)v6;
    v7 = 0;
    v8 = *(_DWORD *)v6;
    do
    {
      v9 = *(unsigned __int8 *)(v7 + v6 + 128);
      if ( !(_BYTE)v9 || ((unsigned __int8)(1 << (v7 + 1)) & *(_BYTE *)(v6 + 146)) != 0 )
        goto LABEL_56;
      v10 = byte_140C1CF30;
      v11 = byte_140C1CF31;
      if ( byte_140C1CF30 )
        v11 = 1;
      if ( v7 || *(_BYTE *)(v6 + 6) == *(_BYTE *)(v6 + 128) || *(_BYTE *)(v6 + 139) < *(_BYTE *)(v6 + 144) )
      {
        v12 = *(_BYTE *)(v6 + 140);
        v13 = *(_BYTE *)(v6 + 141);
      }
      else
      {
        v12 = *(_BYTE *)(v6 + 266);
        v13 = *(_BYTE *)(v6 + 268);
      }
      if ( (!byte_140C1CF30 || byte_140C1CF31 == 1) && v12 < (unsigned __int8)v9 && v13 > v2 )
        ++v12;
      v14 = *(unsigned __int8 *)(v7 + v6 + 138);
      if ( byte_140C1CF30 )
        v14 /= (unsigned __int8)byte_140C1CF31;
      if ( (unsigned __int8)v14 < v12 )
      {
        if ( (unsigned __int8)v14 >= (unsigned __int8)v9 || v8 < v3 )
          goto LABEL_48;
        *(_DWORD *)v6 = 0;
        if ( v23 )
        {
          switch ( v23 )
          {
            case 1:
              LOBYTE(v14) = v11 + v14;
              break;
            case 2:
              LOBYTE(v14) = v9;
              break;
            case 3:
              v15 = *(unsigned __int8 *)(v6 + 145);
              v16 = v15 + (unsigned __int8)v14;
              LOBYTE(v14) = v14 + v15;
              if ( v16 >= v9 )
                LOBYTE(v14) = v9;
              break;
          }
          goto LABEL_48;
        }
LABEL_47:
        LOBYTE(v14) = v12;
        goto LABEL_48;
      }
      if ( (unsigned __int8)v14 <= v12 || (unsigned __int8)v14 <= v11 || v8 < v4 )
        goto LABEL_48;
      *(_DWORD *)v6 = 0;
      switch ( v22 )
      {
        case 0:
          goto LABEL_47;
        case 1:
          LOBYTE(v14) = v14 - v11;
          break;
        case 2:
          LOBYTE(v14) = v11;
          break;
        case 3:
          v17 = *(unsigned __int8 *)(v6 + 145);
          v12 = byte_140C1CF31;
          if ( (unsigned __int8)v14 <= v17 + (unsigned int)(unsigned __int8)byte_140C1CF31 )
            goto LABEL_47;
          LOBYTE(v14) = v14 - v17;
          break;
      }
LABEL_48:
      v18 = v14;
      if ( (unsigned __int8)v14 >= (unsigned __int8)v9 )
        v18 = v9;
      if ( v10 )
        v18 *= byte_140C1CF31;
      v19 = byte_140D068BC == 0;
      v2 = v21;
      *(_BYTE *)(v7 + v6 + 138) = v18;
      if ( !v19 )
      {
        v20 = *(_BYTE *)(v6 + 296);
        *(_BYTE *)(v6 + 298) = v18;
        if ( v18 >= v20 )
        {
          *(_BYTE *)(v6 + 297) = v18 - v20;
        }
        else
        {
          *(_BYTE *)(v6 + 298) = v20;
          *(_BYTE *)(v6 + 297) = 0;
        }
      }
LABEL_56:
      ++v7;
    }
    while ( v7 < 2u );
    v5 = v24;
LABEL_58:
    v24 = ++v5;
  }
  while ( v5 < (unsigned int)dword_140C1CF34 );
  return 1;
}
