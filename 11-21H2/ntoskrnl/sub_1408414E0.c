/*
 * XREFs of sub_1408414E0 @ 0x1408414E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075E160 @ 0x14075E160 (sub_14075E160.c)
 *     sub_14075E448 @ 0x14075E448 (sub_14075E448.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_1408415E4 @ 0x1408415E4 (sub_1408415E4.c)
 *     sub_140841610 @ 0x140841610 (sub_140841610.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     sub_140A129F4 @ 0x140A129F4 (sub_140A129F4.c)
 *     sub_140A12DA0 @ 0x140A12DA0 (sub_140A12DA0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1408414E0(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, _QWORD *a6)
{
  _QWORD *v6; // rsi
  int v8; // r15d
  int *v9; // r13
  unsigned int v10; // r14d
  PVOID v11; // rdi
  PVOID *v12; // r12
  unsigned int v13; // eax
  _WORD *v14; // r13
  unsigned int v15; // eax
  int v16; // ecx
  __int64 result; // rax
  __int64 v18; // rdx
  int v19; // eax
  int *v20; // r8
  int v21; // r15d
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  __int64 v26; // [rsp+40h] [rbp-10h]
  int *v27; // [rsp+48h] [rbp-8h]
  int v30; // [rsp+A0h] [rbp+50h]

  v30 = a3;
  v6 = a6;
  v24 = 0;
  v8 = a2;
  P = 0LL;
  v9 = a1;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( a6[11] )
  {
    v24 = 1;
    goto LABEL_36;
  }
  v13 = sub_140792CCC(a3, a5, 24577);
  if ( v13 )
  {
    v14 = (_WORD *)sub_140842A24(a3, v13);
    if ( v14 )
    {
      if ( v6[1] && *v14 == 42 )
      {
        v15 = sub_140841610((unsigned int)&v24, v8, a3, a5, v6[1]);
        if ( (unsigned int)sub_1408415E4(v15) || v16 >= 0 )
          v10 = 1;
        else
          sub_1406E0C3C(1LL, (__int64)"SdbpCheckMatchingFiles");
        goto LABEL_9;
      }
      v18 = -1LL;
      do
        ++v18;
      while ( v14[v18] );
      v19 = *(_DWORD *)v6;
      v26 = v18;
      if ( (v19 & 1) != 0 )
      {
LABEL_21:
        v20 = (int *)v6[9];
        v21 = 0;
        v27 = v20;
        if ( *v20 <= 0 )
          goto LABEL_32;
        while ( 1 )
        {
          if ( !(unsigned int)sub_140A12DA0(a2, v6, v14, (unsigned int)v18, &v20[12 * v21 + 2], &P) )
          {
            sub_1406E0C3C(1LL, (__int64)"SdbpCheckMatchingFiles");
            v11 = P;
            goto LABEL_9;
          }
          v11 = P;
          a6 = 0LL;
          if ( (int)sub_14075E160(&a6, (WCHAR *)P, 0LL, 0LL, 0LL) >= 0 )
          {
            v12 = (PVOID *)a6;
            if ( (int)sub_140841610((unsigned int)&v24, a2, v30, a5, (__int64)a6) >= 0 )
            {
              if ( v21 > 0 )
                *((_DWORD *)v6 + 20) = 1;
LABEL_32:
              v22 = (unsigned __int16)*v14;
              LOWORD(v22) = v22 - 37;
              if ( (unsigned __int16)v22 <= 0x37u )
              {
                v23 = 0x80000000000201LL;
                if ( _bittest64(&v23, v22) )
                  *((_DWORD *)v6 + 20) = 1;
              }
              v9 = a1;
LABEL_36:
              v10 = 1;
              goto LABEL_10;
            }
            sub_14075E448(v12);
            v12 = 0LL;
            if ( v11 )
              ExFreePoolWithTag(v11, 0x74705041u);
          }
          else
          {
            if ( v11 )
              ExFreePoolWithTag(v11, 0x74705041u);
            v12 = (PVOID *)a6;
          }
          v20 = v27;
          ++v21;
          LODWORD(v18) = v26;
          v11 = 0LL;
          P = 0LL;
          if ( v21 >= *v27 )
            goto LABEL_32;
        }
      }
      if ( (unsigned int)sub_140A129F4(v6) )
      {
        LODWORD(v18) = v26;
        goto LABEL_21;
      }
    }
    sub_1406E0C3C(1LL, (__int64)"SdbpCheckMatchingFiles");
LABEL_9:
    v9 = a1;
  }
LABEL_10:
  sub_14075E448(v12);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x74705041u);
  result = v10;
  *v9 = v24;
  return result;
}
