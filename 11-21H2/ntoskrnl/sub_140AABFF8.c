/*
 * XREFs of sub_140AABFF8 @ 0x140AABFF8
 * Callers:
 *     sub_140AABE28 @ 0x140AABE28 (sub_140AABE28.c)
 * Callees:
 *     sub_14025E2BC @ 0x14025E2BC (sub_14025E2BC.c)
 *     sub_1403A8230 @ 0x1403A8230 (sub_1403A8230.c)
 *     sub_1403A8368 @ 0x1403A8368 (sub_1403A8368.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14064D7E8 @ 0x14064D7E8 (sub_14064D7E8.c)
 */

__int64 __fastcall sub_140AABFF8(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r15d
  unsigned int *v3; // rsi
  unsigned int v5; // r12d
  _DWORD *v6; // rax
  int v7; // r9d
  int v8; // ecx
  int v9; // r8d
  unsigned int v10; // edx
  __int64 result; // rax
  int v12; // r14d
  char *v13; // r13
  unsigned int v14; // ebx
  char *v15; // r15
  size_t v16; // r14
  __int64 v17; // rsi
  __int64 v18; // [rsp+30h] [rbp-59h] BYREF
  char *v19; // [rsp+38h] [rbp-51h]
  __int64 v20; // [rsp+40h] [rbp-49h] BYREF
  int v21; // [rsp+48h] [rbp-41h]
  __int64 v22; // [rsp+50h] [rbp-39h] BYREF
  int v23; // [rsp+58h] [rbp-31h]
  __int64 v24; // [rsp+60h] [rbp-29h] BYREF
  int v25; // [rsp+68h] [rbp-21h]
  __int64 v26; // [rsp+70h] [rbp-19h] BYREF
  int v27; // [rsp+78h] [rbp-11h]
  _DWORD v28[4]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v29; // [rsp+90h] [rbp+7h]
  int v30; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int *v31; // [rsp+F8h] [rbp+6Fh]
  int v32; // [rsp+100h] [rbp+77h]
  unsigned __int64 v33; // [rsp+108h] [rbp+7Fh]

  v31 = a2;
  v2 = 0;
  v22 = 0LL;
  v3 = a2;
  v23 = 0;
  v18 = 0LL;
  v33 = 0LL;
  v30 = 0;
  v5 = (unsigned int)sub_1403A8368() >> 3;
  v6 = sub_14025E2BC(&v26);
  v8 = v6[2];
  v20 = *(_QWORD *)v6;
  v21 = v8;
  if ( !a1 )
    return 3221225485LL;
  v9 = *(_DWORD *)(a1 + 4);
  if ( !v9 )
    return 3221225485LL;
  v10 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 || *(_DWORD *)(a1 + 8) != v7 || !v3 || v9 + *v3 > (unsigned int)v20 || v10 + v3[1] > HIDWORD(v20) )
    return 3221225485LL;
  if ( (dword_140C0DF90 & 8) != 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(a1 + 12) < v5 * v9 * v10 )
    return 3221225507LL;
  if ( (dword_140C0DF90 & 2) == 0 )
    return 3221225473LL;
  result = sub_1403A8230((unsigned int *)a1, v3, (__int64)&v20, (unsigned int *)&v22, &v18, 0);
  if ( (int)result >= 0 )
  {
    v12 = 0;
    v32 = 0;
    if ( (_BYTE)xmmword_140C0DF20 )
    {
      v13 = *(char **)(a1 + 24);
      v14 = *(_DWORD *)a1;
      v19 = (char *)qword_140C0DF40;
      if ( BYTE2(xmmword_140C0DF20) )
      {
        HIDWORD(v33) = 0;
        if ( v14 )
        {
          while ( 1 )
          {
            LODWORD(v33) = 0;
            if ( *(_DWORD *)(a1 + 4) )
              break;
LABEL_31:
            HIDWORD(v33) = ++v2;
            if ( v2 >= *(_DWORD *)a1 )
              goto LABEL_18;
          }
          v24 = v20;
          v25 = v21;
          v26 = v22;
          v27 = v23;
          while ( 1 )
          {
            v12 = sub_14064D7E8(v33, (int *)&v26, v3, (__int64)&v24, &v30);
            if ( v12 < 0 )
              break;
            memmove(v13, &v19[v5 * v30], v5);
            v13 += v5;
            LODWORD(v33) = v33 + 1;
            if ( (unsigned int)v33 >= *(_DWORD *)(a1 + 4) )
              goto LABEL_31;
          }
        }
      }
      else
      {
        v15 = (char *)qword_140C0DF40 + v5 * (*v3 + v21 * v3[1]);
        if ( v14 )
        {
          v16 = v5 * *(_DWORD *)(a1 + 4);
          v17 = v5 * v21;
          do
          {
            memmove(v13, v15, v16);
            v15 += v17;
            v13 += v5 * *(_DWORD *)(a1 + 4);
            --v14;
          }
          while ( v14 );
          v3 = v31;
          v12 = v32;
        }
      }
    }
    else
    {
      v28[0] = *(_DWORD *)a1;
      v28[1] = *(_DWORD *)(a1 + 4);
      v28[3] = *(_DWORD *)(a1 + 12);
      v28[2] = xmmword_140C0DF30;
      v29 = *(_QWORD *)(a1 + 24);
      if ( qword_140C0DF40 )
        v12 = sub_14042A5E0(v28, v3);
      else
        v12 = -1073741823;
    }
LABEL_18:
    *(_DWORD *)a1 = HIDWORD(v22);
    *(_DWORD *)(a1 + 4) = v22;
    *(_QWORD *)v3 = v18;
    return (unsigned int)v12;
  }
  return result;
}
