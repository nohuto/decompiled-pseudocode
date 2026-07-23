/*
 * XREFs of sub_14079C640 @ 0x14079C640
 * Callers:
 *     sub_14079B3A0 @ 0x14079B3A0 (sub_14079B3A0.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     sub_14079C888 @ 0x14079C888 (sub_14079C888.c)
 *     sub_14079CED8 @ 0x14079CED8 (sub_14079CED8.c)
 */

__int64 __fastcall sub_14079C640(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        _DWORD *a4,
        PRTL_BITMAP BitMapHeader,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rdi
  unsigned int v8; // r12d
  _DWORD *v9; // r10
  unsigned int v11; // r11d
  unsigned int v12; // r14d
  int v13; // r15d
  __int64 v14; // r8
  int *v15; // rbx
  __int16 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdi
  char v21; // al
  __int64 v22; // rdi
  unsigned int v23; // [rsp+20h] [rbp-48h]
  unsigned int v24; // [rsp+80h] [rbp+18h]

  v7 = a7;
  v8 = 0;
  v24 = 0;
  v9 = a4;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( a7 )
    *(_QWORD *)(a7 + 328) = a2;
  v14 = (unsigned int)a2[2];
  v15 = a2 + 8;
  if ( a2 + 8 >= (_DWORD *)((char *)a2 + v14) )
  {
LABEL_15:
    if ( v12 + v11 + 32LL == (unsigned int)v14 )
    {
      if ( v15 == (_DWORD *)((char *)a2 + v14) )
      {
        if ( v9 )
          *v9 += v13;
        return v8;
      }
      v23 = 112;
    }
    else
    {
      v23 = 96;
    }
    v8 = -1073741492;
    sub_14020A890(v7, 0, 17, 0xC000014C, v23);
    return v8;
  }
  v16 = 27502;
  while ( 1 )
  {
    v17 = *v15;
    if ( (int)v17 >= 0 )
      break;
    v18 = (unsigned int)-(int)v17;
    if ( (unsigned int)v18 > (unsigned int)v14
      || (v19 = (unsigned int)v18, (char *)v15 + v18 > (char *)a2 + (unsigned int)v14) )
    {
      v22 = a7;
      v8 = -1073741492;
      if ( !a7 )
        return v8;
      sub_14020A890(a7, 0, 17, 0xC000014C, 0x20u);
      goto LABEL_41;
    }
    v12 += v18;
    v13 = v18 + v13 - 4;
    if ( v12 > (unsigned int)v14 )
    {
      v22 = a7;
      v8 = -1073741492;
      if ( !a7 )
        return v8;
      sub_14020A890(a7, 0, 17, 0xC000014C, 0x30u);
      goto LABEL_41;
    }
    if ( a6 && (unsigned int)v18 >= 0x54uLL && *((_WORD *)v15 + 2) == v16 )
    {
      v21 = *((_BYTE *)v15 + 16);
      if ( (v21 & 2) != 0 )
      {
        sub_14079C888(a6 + 32);
        sub_14079C888(a6 + 16);
        *(_QWORD *)(a6 + 48) = 0LL;
      }
      else if ( (v21 & 1) != 0 )
      {
        sub_14079CED8(a6 + 32);
        sub_14079C888(a6 + 16);
        if ( !*(_DWORD *)(a6 + 48) )
          *(_DWORD *)(a6 + 48) = a2[1];
        *(_DWORD *)(a6 + 52) = 0;
      }
      else
      {
        sub_14079CED8(a6 + 16);
        if ( !*(_DWORD *)(a6 + 52) )
          *(_DWORD *)(a6 + 52) = a2[1];
      }
    }
    if ( BitMapHeader )
    {
      RtlSetBits(BitMapHeader, (unsigned int)((_DWORD)v15 + a2[1] - (_DWORD)a2) >> 3, 1u);
      v11 = v24;
      v16 = 27502;
    }
LABEL_13:
    v15 = (int *)((char *)v15 + v19);
    v14 = (unsigned int)a2[2];
    if ( v15 >= (_DWORD *)((char *)a2 + v14) )
    {
      v9 = a4;
      v7 = a7;
      goto LABEL_15;
    }
  }
  if ( (unsigned int)v17 <= (unsigned int)v14 && (char *)v15 + v17 <= (char *)a2 + (unsigned int)v14 && (_DWORD)v17 )
  {
    v11 += v17;
    v24 = v11;
    if ( v11 <= (unsigned int)v14 )
    {
      if ( a6 )
      {
        sub_14079CED8(a6);
        ((void (*)(void))sub_14079C888)();
      }
      v19 = *v15;
      goto LABEL_13;
    }
    v22 = a7;
    v8 = -1073741492;
    if ( a7 )
    {
      sub_14020A890(a7, 0, 17, 0xC000014C, 0x50u);
LABEL_41:
      *(_QWORD *)(v22 + 336) = v15;
      return v8;
    }
    return v8;
  }
  if ( a7 )
  {
    sub_14020A890(a7, 0, 17, 0xC000014C, 0x40u);
    *(_QWORD *)(a7 + 336) = v15;
  }
  return 60LL;
}
