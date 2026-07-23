/*
 * XREFs of sub_14037C48C @ 0x14037C48C
 * Callers:
 *     sub_14037C880 @ 0x14037C880 (sub_14037C880.c)
 *     sub_14037E6D8 @ 0x14037E6D8 (sub_14037E6D8.c)
 * Callees:
 *     sub_14037DDFC @ 0x14037DDFC (sub_14037DDFC.c)
 *     sub_14037E6D8 @ 0x14037E6D8 (sub_14037E6D8.c)
 *     sub_14037E878 @ 0x14037E878 (sub_14037E878.c)
 *     sub_140383620 @ 0x140383620 (sub_140383620.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14037C48C(__int64 *a1, unsigned int ***a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v8; // rcx
  int v9; // edi
  char *v10; // r8
  __int64 *v11; // rsi
  unsigned int *v12; // rdi
  __int64 v13; // r9
  unsigned int v14; // r12d
  unsigned int *v15; // rsi
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r10
  unsigned int *v23; // r8
  int v24; // edx
  unsigned int *v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // ebp
  char v29; // al
  __int64 v30; // rax

  v3 = *a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *((_DWORD *)a2 + 6);
  v10 = (char *)a2 + 28;
  if ( *((_DWORD *)a2 + 7) <= (unsigned int)v8 && !(unsigned int)sub_140383620(v8, a2, v10, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v11 = (__int64 *)&(*a2)[2 * (unsigned int)(v9 - 1)];
  }
  else
  {
    v30 = sub_14037E878(v8, 1LL, 1LL);
    *a1 = v30;
    if ( !v30 )
      return (unsigned int)-1073741670;
    v11 = (__int64 *)*a2;
    *v11 = v30;
    v11[1] = *a1 + 16;
    ++*((_DWORD *)a2 + 6);
  }
  v12 = (unsigned int *)*v11;
  LOBYTE(v8) = *(_BYTE *)(*v11 + 3);
  v13 = *(unsigned int *)*v11;
  v14 = (unsigned __int8)-((_BYTE)v8 != 0) + 255;
  if ( (unsigned __int16)v13 >= v14 )
  {
    v17 = v11[1] - (_QWORD)v12 - 16;
    v18 = v17 >> 3;
    v19 = v17 >> 4;
    if ( !(_BYTE)v8 )
      LODWORD(v18) = v19;
    if ( v12 == (unsigned int *)*a1 )
    {
      v22 = 0LL;
      v21 = 0LL;
    }
    else
    {
      v20 = sub_14037DDFC(v8, a2, v10, v13);
      LODWORD(v13) = *v12;
      v21 = v20;
      v22 = 32LL * ((v20 & 1) == 0) - 16 + *(v11 - 1);
    }
    if ( (unsigned __int16)v13 < v14 )
    {
      if ( (v21 & 1) != 0 )
      {
        v23 = (unsigned int *)(v21 & 0xFFFFFFFFFFFFFFFEuLL);
        v24 = (unsigned __int16)v13 - v14 + v18;
        if ( *((_BYTE *)v12 + 3) )
        {
          if ( v24 <= 0 )
          {
            v12 = v23;
            v24 += (unsigned __int16)*v23;
          }
        }
        else if ( v24 < 0 )
        {
          v12 = v23;
          v24 += (unsigned __int16)*v23 + 1;
          goto LABEL_38;
        }
        if ( v12 != v23 )
        {
LABEL_21:
          *v11 = (__int64)v12;
          if ( *((_BYTE *)v12 + 3) )
            v25 = &v12[2 * v24 + 4];
          else
            v25 = &v12[4 * v24 + 4];
          v11[1] = (__int64)v25;
          LODWORD(v13) = *v12;
          LOBYTE(v8) = *((_BYTE *)v12 + 3);
          goto LABEL_7;
        }
LABEL_38:
        *(v11 - 1) = v22;
        goto LABEL_21;
      }
      v24 = v18;
      if ( (int)v18 <= (unsigned __int16)v13 )
        goto LABEL_21;
      v28 = v18 - (unsigned __int16)v13;
      v29 = *((_BYTE *)v12 + 3);
      v12 = (unsigned int *)v21;
      *(v11 - 1) = v22;
LABEL_27:
      v24 = v28 - 1;
      if ( v29 )
        v24 = v28;
      goto LABEL_21;
    }
    v26 = sub_14037E6D8(a1, a2, v21);
    if ( v26 )
    {
      v24 = v18;
      v11 = (__int64 *)&(*a2)[2 * (unsigned int)(*((_DWORD *)a2 + 6) - 1)];
      v27 = (unsigned __int16)*v12;
      if ( (int)v18 <= v27 )
        goto LABEL_21;
      v28 = v18 - v27;
      v29 = *((_BYTE *)v12 + 3);
      *(v11 - 1) += 16LL;
      v12 = (unsigned int *)v26;
      goto LABEL_27;
    }
    return (unsigned int)-1073741670;
  }
LABEL_7:
  v15 = (unsigned int *)v11[1];
  if ( (_BYTE)v8 )
  {
    memmove(v15 + 2, v15, (size_t)v12 + 8LL * (unsigned __int16)v13 + 16 - (_QWORD)v15);
    *(_QWORD *)v15 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v15 + 4, v15, (size_t)v12 + 16 * ((unsigned __int16)v13 + 1LL) - (_QWORD)v15);
    *(_OWORD *)v15 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v12;
  return v4;
}
