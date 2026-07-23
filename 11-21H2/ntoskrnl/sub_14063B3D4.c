/*
 * XREFs of sub_14063B3D4 @ 0x14063B3D4
 * Callers:
 *     sub_14063B690 @ 0x14063B690 (sub_14063B690.c)
 * Callees:
 *     sub_14063BD64 @ 0x14063BD64 (sub_14063BD64.c)
 */

unsigned __int64 __fastcall sub_14063B3D4(signed __int64 *a1)
{
  signed __int64 v1; // rsi
  int v2; // r12d
  unsigned int v4; // r8d
  unsigned int v5; // r10d
  unsigned __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // r9d
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rax
  unsigned __int64 result; // rax
  __int64 v17; // rbp
  __int64 *v18; // rbx
  signed __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r8
  char *v25; // rcx
  unsigned __int64 v26; // rax

  v1 = *a1;
  v2 = 0;
  v4 = qword_140C157A0 & ((40543 * *(_DWORD *)(*a1 + 8)) ^ ((40543 * (unsigned __int64)*(unsigned int *)(*a1 + 8)) >> 32));
  v5 = v4;
  LODWORD(v6) = 0;
  do
  {
    v7 = 80LL * v4;
    v8 = *(unsigned int *)((char *)qword_140C117A0 + v7);
    if ( v8 == *(_QWORD *)(v1 + 8) )
    {
      v2 = 1;
      v6 = 0xCCCCCCCCCCCCCCCDuLL * (v7 >> 4);
LABEL_22:
      v17 = 0LL;
      v18 = a1 + 1;
      v19 = v1 - (_QWORD)a1;
      while ( 1 )
      {
        if ( !*(__int64 *)((char *)v18 + v19 + 8) )
        {
          v20 = *(__int64 *)((char *)v18 + v19 + 16);
          v21 = *v18;
          if ( !v20 && (v21 || v18[1]) )
          {
            v22 = 0;
            goto LABEL_33;
          }
          v23 = *v18;
          if ( !v20 )
            goto LABEL_32;
        }
        v21 = *v18;
        v23 = *v18;
        if ( !*v18 && v18[1] == v21 )
        {
          v22 = 1;
        }
        else
        {
LABEL_32:
          v22 = 2;
          v21 = v23;
        }
LABEL_33:
        *(__int64 *)((char *)v18 + v19 + 8) = v21;
        result = v18[1];
        *(__int64 *)((char *)v18 + v19 + 16) = result;
        if ( v2 )
        {
          if ( v22 == 2 )
            goto LABEL_47;
          v24 = 0LL;
          *(_QWORD *)(v1 + 24 * v17 + 32) = v22 != 0;
          for ( result = (unsigned int)dword_140D06884;
                (unsigned int)v24 < (unsigned int)dword_140D06884;
                v24 = (unsigned int)(v24 + 1) )
          {
            v25 = (char *)*(&qword_140C117A0 + v24) + 80 * (unsigned int)v6;
            if ( *(_DWORD *)v25 )
            {
              if ( !*((_QWORD *)v25 + 9) )
                _InterlockedCompareExchange64((volatile signed __int64 *)v25 + 9, v1, 0LL);
              if ( (_DWORD)v17 )
                v26 = *((_QWORD *)v25 + 1);
              else
                v26 = *((_QWORD *)v25 + 4);
              if ( v22 )
              {
                *(_QWORD *)&v25[8 * v17 + 56] = 1LL;
              }
              else
              {
                *(_QWORD *)&v25[8 * v17 + 56] = v26;
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 24 * v17 + 32), v26);
              }
            }
            result = (unsigned int)dword_140D06884;
          }
          if ( v22 != 1 )
          {
LABEL_47:
            result = *(__int64 *)((char *)v18 + v19 + 16);
            if ( result )
            {
              if ( result < *(__int64 *)((char *)v18 + v19 + 24) )
                result = sub_14063BD64(v1);
            }
          }
        }
        v17 = (unsigned int)(v17 + 1);
        v18 += 3;
        if ( (int)v17 >= 2 )
          return result;
      }
    }
    if ( !(_DWORD)v8 )
      break;
    v4 = qword_140C157A0 & (v4 + 1);
  }
  while ( v4 != v5 );
  if ( !qword_140C157A8 )
    goto LABEL_22;
  v9 = 0;
  if ( !qword_140C157B0 )
    goto LABEL_22;
  v10 = 0LL;
  while ( 1 )
  {
    if ( !*((_DWORD *)qword_140C157A8 + 20 * v10) )
      goto LABEL_22;
    if ( *((_DWORD *)qword_140C157A8 + 20 * v10) == *(_DWORD *)(v1 + 8) )
      break;
    v10 = ++v9;
    if ( v9 >= (unsigned __int64)qword_140C157B0 )
      goto LABEL_22;
  }
  v11 = 10 * v10;
  v12 = 0LL;
  *((_QWORD *)qword_140C157A8 + 10 * v10 + 9) = v1;
  do
  {
    v13 = 3 * v12;
    *(_QWORD *)(v1 + 8 * v13 + 16) = a1[3 * v12 + 1];
    v14 = a1[3 * v12 + 2];
    v15 = qword_140C157A8;
    *(_QWORD *)(v1 + 8 * v13 + 24) = v14;
    if ( v12 )
      result = v15[v11 + 1];
    else
      result = v15[v11 + 4];
    *(_QWORD *)(v1 + 24 * v12 + 32) = result;
    if ( v14 && v14 < result )
      result = sub_14063BD64(v1);
    ++v12;
  }
  while ( v12 < 2 );
  return result;
}
