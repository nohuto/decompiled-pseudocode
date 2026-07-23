/*
 * XREFs of sub_1403A8230 @ 0x1403A8230
 * Callers:
 *     sub_1403A8000 @ 0x1403A8000 (sub_1403A8000.c)
 *     sub_140AABFF8 @ 0x140AABFF8 (sub_140AABFF8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403A8230(unsigned int *a1, unsigned int *a2, __int64 a3, unsigned int *a4, _QWORD *a5, char a6)
{
  __int64 v6; // rax
  unsigned int v8; // r15d
  unsigned int v10; // ebp
  int v12; // ecx
  unsigned int v13; // r11d
  unsigned __int64 v14; // xmm0_8
  unsigned int v15; // ebx
  unsigned int v16; // esi
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  unsigned int v19; // r9d
  unsigned int v20; // r14d
  unsigned int v21; // edx
  __int64 v23; // [rsp+0h] [rbp-58h]
  unsigned __int64 v24; // [rsp+8h] [rbp-50h]
  int v26; // [rsp+68h] [rbp+10h]
  __int64 v27; // [rsp+70h] [rbp+18h]

  v6 = *(_QWORD *)a2;
  v8 = *a1;
  v10 = a1[1];
  v12 = *(_DWORD *)(a3 + 8);
  v13 = v8;
  v14 = *(_QWORD *)a3;
  v15 = v10;
  v16 = *(_DWORD *)a3;
  v17 = *(_QWORD *)a2;
  v26 = v12;
  v18 = 0;
  v23 = *(_QWORD *)a2;
  v27 = *(_QWORD *)a2;
  v24 = v14;
  if ( v16 < v17 )
    return (unsigned int)-1073741811;
  v19 = *(_DWORD *)(a3 + 4);
  if ( v19 < HIDWORD(v6) )
    return (unsigned int)-1073741811;
  v20 = v14;
  if ( v10 > (unsigned int)v14 - v17 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    v15 = v14 - v17;
  }
  if ( v8 > HIDWORD(v14) - HIDWORD(v6) )
  {
    if ( a6 )
    {
      v13 = HIDWORD(v14) - HIDWORD(v6);
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
LABEL_5:
  if ( (unsigned __int8)(BYTE2(xmmword_140C0DF20) - 2) <= 1u && (_BYTE)xmmword_140C0DF20 )
  {
    if ( v15 < v10 && BYTE2(xmmword_140C0DF20) == 2 )
    {
      v17 = 0;
      LODWORD(v27) = 0;
    }
    else
    {
      v17 = v16 - v15 - v17;
      LODWORD(v27) = v17;
    }
    if ( v13 < v8 && BYTE2(xmmword_140C0DF20) == 2 )
    {
      v21 = 0;
      HIDWORD(v27) = 0;
      goto LABEL_8;
    }
    v21 = v19 - v13 - HIDWORD(v27);
    HIDWORD(v27) = v21;
  }
  else
  {
    v21 = HIDWORD(*(_QWORD *)a2);
  }
  if ( ((BYTE2(xmmword_140C0DF20) - 1) & 0xFD) == 0 && (_BYTE)xmmword_140C0DF20 )
  {
    v20 = *(_DWORD *)(a3 + 4);
    v24 = __PAIR64__(v16, v20);
    if ( BYTE2(xmmword_140C0DF20) == 1 )
    {
      if ( v15 >= v10 )
      {
        v21 = v16 - *a2 - v15;
        HIDWORD(v27) = v21;
      }
      else
      {
        v21 = 0;
        HIDWORD(v27) = 0;
      }
      v17 = a2[1];
      LODWORD(v27) = v17;
    }
    else
    {
      if ( v13 >= v8 )
      {
        v17 = v19 - a2[1] - v13;
        LODWORD(v27) = v17;
      }
      else
      {
        v17 = 0;
        LODWORD(v27) = 0;
      }
      v21 = *a2;
      HIDWORD(v27) = *a2;
    }
  }
LABEL_8:
  if ( v20 < v17 || HIDWORD(v24) < v21 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    a4[1] = v8;
    *a4 = v10;
  }
  if ( a5 )
    *a5 = v23;
  *(_QWORD *)a3 = v24;
  *(_DWORD *)(a3 + 8) = v26;
  *(_QWORD *)a2 = v27;
  *a1 = v13;
  a1[1] = v15;
  return v18;
}
