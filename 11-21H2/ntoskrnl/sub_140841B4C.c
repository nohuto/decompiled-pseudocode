/*
 * XREFs of sub_140841B4C @ 0x140841B4C
 * Callers:
 *     sub_140841AE8 @ 0x140841AE8 (sub_140841AE8.c)
 * Callees:
 *     sub_1403CB368 @ 0x1403CB368 (sub_1403CB368.c)
 *     sub_1403CB454 @ 0x1403CB454 (sub_1403CB454.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B1B8 @ 0x14075B1B8 (sub_14075B1B8.c)
 *     sub_140841E14 @ 0x140841E14 (sub_140841E14.c)
 *     sub_140841F20 @ 0x140841F20 (sub_140841F20.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140841B4C(__int64 a1, unsigned __int16 *a2)
{
  int v2; // r13d
  __int64 v4; // r12
  unsigned __int16 *i; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  int v8; // esi
  __int64 v9; // rax
  _WORD *v10; // rcx
  char *v11; // r15
  unsigned __int16 *v12; // r12
  unsigned int v13; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  int v17; // ebx
  unsigned __int16 *v18; // rsi
  unsigned int v19; // ebx
  unsigned __int64 v20; // r15
  unsigned __int64 j; // r14
  __int64 v22; // r12
  int v23; // eax
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _DWORD *v29; // rax
  __int64 v30; // rsi
  _WORD *v31; // [rsp+30h] [rbp-30h] BYREF
  wchar_t *Str1; // [rsp+38h] [rbp-28h]
  unsigned __int64 v33; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+48h] [rbp-18h] BYREF
  __int64 v35; // [rsp+58h] [rbp-8h] BYREF
  __int16 v36; // [rsp+A8h] [rbp+48h]
  int v37; // [rsp+A8h] [rbp+48h]
  __int64 v38; // [rsp+B0h] [rbp+50h] BYREF
  PVOID P; // [rsp+B8h] [rbp+58h] BYREF

  v2 = (int)a2;
  v34 = 0LL;
  v35 = 0LL;
  v4 = 0LL;
  v33 = 0LL;
  if ( !a2 )
  {
    v29 = (_DWORD *)(a1 + 184);
    v30 = 8LL;
    do
    {
      *v29 |= 2u;
      v29 += 8;
      --v30;
    }
    while ( v30 );
    *(_DWORD *)(a1 + 792) |= 2u;
    return 0;
  }
  i = a2;
  P = 0LL;
  v6 = 0LL;
  v31 = 0LL;
  v38 = 0LL;
  if ( a2[2] )
  {
    v17 = -1073741811;
    sub_1406E0C3C(1LL, (__int64)"AslpFileVerQueryBlock");
    goto LABEL_50;
  }
  v8 = sub_14075B1B8(&P, L"\\VarFileInfo\\Translation");
  if ( v8 < 0 )
  {
    sub_1406E0C3C(1LL, (__int64)"AslpFileVerQueryBlock");
  }
  else
  {
    v9 = *i;
    if ( (__int16)v9 < 8 )
    {
      v8 = -1073741811;
      sub_1406E0C3C(1LL, (__int64)"AslpFileVerQueryBlock");
    }
    else
    {
      v10 = P;
      v11 = (char *)i + v9;
      v12 = (unsigned __int16 *)v11;
      v36 = *(unsigned __int16 *)((char *)i + v9 - 2);
      *((_WORD *)v11 - 1) = 0;
LABEL_7:
      Str1 = sub_1403CB368(v10, v7, &v31);
      if ( Str1 )
      {
        v13 = (_DWORD)v11 - (_DWORD)i;
        if ( (unsigned int)((_DWORD)v11 - (_DWORD)i) >= 8 && *i <= v13 && (int)sub_1403CB454(&v38, (__int64)i, v13) >= 0 )
        {
          v14 = *i;
          v15 = v38 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
          v38 = v15;
          if ( v15 <= v14 )
          {
            v12 = (unsigned __int16 *)((char *)i + v14);
            for ( i = (unsigned __int16 *)((char *)i + v15);
                  i < v12;
                  i = (unsigned __int16 *)((char *)i + ((*i + 3LL) & 0xFFFFFFFFFFFFFFFCuLL)) )
            {
              v16 = *i;
              if ( (unsigned __int16)v16 <= 8u || v16 > (char *)v12 - (char *)i )
                break;
              if ( !wcsicmp(Str1, i + 3) )
              {
                v10 = 0LL;
                goto LABEL_7;
              }
            }
          }
        }
        v8 = -1073741275;
        *((_WORD *)v11 - 1) = v36;
        v4 = 0LL;
      }
      else
      {
        v6 = (char *)v12 - (char *)i;
        *((_WORD *)v11 - 1) = v36;
        v4 = (__int64)i;
        v8 = 0;
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x74705041u);
  v17 = v8;
  if ( v8 == -1073741275 )
  {
    v18 = 0LL;
    v19 = 0;
    goto LABEL_26;
  }
  if ( v8 < 0 )
  {
LABEL_50:
    sub_1406E0C3C(1LL, (__int64)"AslpFileMakeStringVersionAttributes");
    return (unsigned int)v17;
  }
  v18 = 0LL;
  v19 = 0;
  if ( (int)sub_1403CB454(&v33, v4, v6) >= 0 && v33 < v6 )
  {
    v18 = (unsigned __int16 *)(v33 + v4);
    v19 = v6 - v33;
  }
LABEL_26:
  v20 = (unsigned __int64)v19 >> 2;
  for ( j = 0LL; j < 0x80; j += 16LL )
  {
    v22 = *(int *)&byte_140009380[j];
    v37 = *(_DWORD *)&byte_140009380[j];
    v23 = sub_140841F20((unsigned int)&v34, (unsigned int)&v35, v2, (_DWORD)v18, v20, *(_QWORD *)&byte_140009380[j + 8]);
    v17 = v23;
    if ( v23 < 0 )
    {
      if ( v23 != -1073741275 )
        goto LABEL_50;
      *(_DWORD *)(32 * v22 + a1 + 24) |= 2u;
    }
    else
    {
      v24 = v34;
      v17 = sub_140841E14(v34, 0LL);
      if ( v17 < 0 )
        goto LABEL_50;
      v25 = 32LL * v37;
      v26 = -1LL;
      *(_DWORD *)(v25 + a1) = 4;
      do
        ++v26;
      while ( *(_WORD *)(v24 + 2 * v26) );
      *(_DWORD *)(v25 + a1 + 24) |= 1u;
      *(_QWORD *)(v25 + a1 + 8) = v26;
      *(_QWORD *)(v25 + a1 + 16) = v24;
    }
  }
  if ( v18 && v20 == 1 )
  {
    *(_DWORD *)(a1 + 768) = 2;
    *(_QWORD *)(a1 + 776) = 4LL;
    v27 = *v18;
    *(_DWORD *)(a1 + 792) |= 1u;
    *(_QWORD *)(a1 + 784) = v27;
  }
  else
  {
    *(_DWORD *)(a1 + 792) |= 2u;
  }
  return 0;
}
