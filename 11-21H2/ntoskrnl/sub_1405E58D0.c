/*
 * XREFs of sub_1405E58D0 @ 0x1405E58D0
 * Callers:
 *     sub_14037E048 @ 0x14037E048 (sub_14037E048.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405E58D0(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v5; // ecx
  int v6; // edx
  unsigned int v7; // r13d
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  unsigned int v10; // ebp
  unsigned int v11; // esi
  unsigned int v12; // r12d
  unsigned int v13; // edi
  unsigned __int8 *v14; // r15
  unsigned int *v15; // r8
  unsigned __int8 v16; // r9
  unsigned __int8 *v17; // r15
  unsigned int v18; // eax
  unsigned int v19; // r8d
  unsigned __int8 i; // r9
  __int64 v21; // rdx
  char v22; // cl
  int v23; // eax
  unsigned int v24; // ecx
  __int64 result; // rax
  char v26; // [rsp+0h] [rbp-48h]
  int v28; // [rsp+60h] [rbp+18h]
  unsigned int v29; // [rsp+68h] [rbp+20h]

  v15 = a1;
  v5 = *a1;
  v6 = v5 & 7;
  v26 = v5;
  v28 = v6;
  v7 = (v5 >> 3) + (v6 != 0);
  v8 = 0;
  v9 = 0;
  v10 = (*a3 < v5 ? *a3 : 0) & 0xFFFFFFF8;
  v11 = v10 >> 3;
  v12 = 0;
  v13 = v10;
  v14 = (unsigned __int8 *)(*((_QWORD *)v15 + 1) + (v10 >> 3));
  LODWORD(v15) = 0;
  v16 = *v14;
  v17 = v14 + 1;
  if ( v10 >> 3 == v7 - 1 && (v5 & 7) != 0 )
  {
    v16 |= byte_140015C40[v5 & 7];
    v6 = v5 & 7;
  }
  v18 = 0;
  v29 = 0;
  if ( !v7 )
  {
LABEL_46:
    *a3 = 0;
    return 0LL;
  }
  do
  {
    if ( v16 )
    {
      v19 = *((unsigned __int8 *)qword_140018E00 + v16) + (_DWORD)v15;
      if ( v19 )
      {
        if ( v19 >= a2 )
        {
LABEL_39:
          *a3 = v13;
          return a2;
        }
        if ( v19 > v8 )
        {
          v8 = v19;
          v9 = v13;
        }
      }
      if ( v13 == v10 )
        v12 = v19;
      v15 = (unsigned int *)*((unsigned __int8 *)&qword_140018E00[64] + v16);
      v13 = 8 * v11 - (_DWORD)v15 + 8;
      for ( i = *(_BYTE *)((char *)&qword_140015C48 - (char *)v15) | byte_140018DF0[*((unsigned __int8 *)qword_140018E00
                                                                                    + v16)] | v16; ; i |= v22 )
      {
        if ( i == 0xFF || (v21 = *((unsigned __int8 *)&qword_140018E00[32] + i), v8 >= (unsigned int)v21) )
        {
          LOBYTE(v5) = v26;
          v6 = v28;
          v18 = v29;
          goto LABEL_21;
        }
        v22 = byte_140018DF0[v21];
        v23 = 0;
        while ( ((unsigned __int8)v22 & i) != 0 )
        {
          v22 *= 2;
          ++v23;
        }
        v9 = v23 + 8 * v11;
        if ( (unsigned int)v21 >= a2 )
          break;
        v8 = *((unsigned __int8 *)&qword_140018E00[32] + i);
      }
      *a3 = v9;
      return a2;
    }
    LODWORD(v15) = (_DWORD)v15 + 8;
    if ( (unsigned int)v15 >= a2 )
      goto LABEL_39;
LABEL_21:
    if ( ++v11 >= v7 )
    {
      if ( (_DWORD)v15 )
      {
        if ( v13 == v10 )
          v12 = (unsigned int)v15;
        if ( (unsigned int)v15 > v8 )
        {
          v8 = (unsigned int)v15;
          v9 = v13;
        }
        LODWORD(v15) = 0;
      }
      v11 = 0;
      v17 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
    }
    v16 = *v17++;
    if ( v11 == v7 - 1 && v6 )
    {
      v16 |= byte_140015C40[v5 & 7];
      v6 = v28;
      v18 = v29;
    }
    v29 = ++v18;
  }
  while ( v18 < v7 );
  if ( !(_DWORD)v15 )
  {
    result = v8;
    if ( v8 )
      goto LABEL_43;
    goto LABEL_46;
  }
  v24 = v12 + (_DWORD)v15;
  result = v8;
  if ( v13 + (_DWORD)v15 != v10 )
    v24 = (unsigned int)v15;
  if ( v24 > v8 )
  {
    result = v24;
    v9 = v13;
  }
LABEL_43:
  *a3 = v9;
  if ( (unsigned int)result > a2 )
    return a2;
  return result;
}
