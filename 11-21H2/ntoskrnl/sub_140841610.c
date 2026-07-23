/*
 * XREFs of sub_140841610 @ 0x140841610
 * Callers:
 *     sub_1408414E0 @ 0x1408414E0 (sub_1408414E0.c)
 *     sub_140A11A00 @ 0x140A11A00 (sub_140A11A00.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_1407ECF5C @ 0x1407ECF5C (sub_1407ECF5C.c)
 *     sub_140841858 @ 0x140841858 (sub_140841858.c)
 *     sub_14084192C @ 0x14084192C (sub_14084192C.c)
 *     sub_140842904 @ 0x140842904 (sub_140842904.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140841610(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r14
  int v9; // edi
  _DWORD *v10; // rbp
  unsigned int v11; // r13d
  int *v12; // r12
  __int16 v13; // bx
  unsigned int v14; // eax
  char *v15; // rdi
  __int64 v16; // rbp
  int v17; // eax
  __int64 *v19; // r15
  int v20; // ecx
  int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // [rsp+30h] [rbp-68h] BYREF
  int v25; // [rsp+34h] [rbp-64h] BYREF
  __int64 v26; // [rsp+38h] [rbp-60h] BYREF
  PVOID P; // [rsp+40h] [rbp-58h]
  unsigned __int16 v32; // [rsp+C0h] [rbp+28h]

  v6 = 0;
  v24 = 0;
  v7 = a4;
  v26 = 0LL;
  v8 = a3;
  *a1 = 0;
  v9 = 1;
  v25 = 1;
  if ( !a5 )
    return v6;
  if ( *(_DWORD *)(a5 + 80) )
  {
    if ( !*(_QWORD *)(a5 + 32) )
      return v6;
  }
  else if ( !*(_QWORD *)(a5 + 8) )
  {
    return v6;
  }
  P = sub_14075B444((__int64)a1, 0x440uLL);
  v10 = P;
  if ( !P )
    return (unsigned int)-1073741801;
  v11 = 0;
  v12 = (int *)&unk_140C0C8E4;
  while ( 1 )
  {
    v13 = *((_WORD *)v12 - 2);
    v32 = v13;
    v14 = sub_140792CCC(v8, v7, v13);
    if ( !v14 )
      goto LABEL_7;
    v19 = 0LL;
    v20 = v13 & 0xF000;
    v21 = 0;
    switch ( v20 )
    {
      case 20480:
        v26 = sub_140842904(a3, v14, 0LL);
        v19 = &v26;
        v21 = 8;
        break;
      case 16384:
        v24 = sub_1407ECF5C(a3, v14, 0);
        v19 = (__int64 *)&v24;
        v21 = 4;
        break;
      case 24576:
        v22 = sub_140842A24(a3, v14);
        v23 = -1LL;
        v19 = (__int64 *)v22;
        do
          ++v23;
        while ( *(_WORD *)(v22 + 2 * v23) );
        v21 = 2 * v23 + 2;
        break;
    }
    v6 = sub_14084192C(v10, a5, 1LL << *v12);
    if ( (v6 & 0x80000000) != 0 )
      break;
    if ( (v10[8 * *v12 + 6] & 1) == 0 )
      goto LABEL_9;
    if ( !(unsigned int)sub_140841858((unsigned int)&v25, v32, (_DWORD)v19, v21, (__int64)&v10[8 * *v12]) )
    {
      v6 = -1073741595;
      sub_1406E0C3C(1LL, (__int64)"SdbpCheckAllAttributes");
      goto LABEL_10;
    }
    v9 = v25;
    if ( *(_QWORD *)(a2 + 1488) )
      sub_14042A5E0(v32, v19);
    if ( !v9 )
    {
LABEL_8:
      *a1 = v9;
LABEL_9:
      v6 = 0;
      goto LABEL_10;
    }
    v8 = a3;
    v7 = a4;
LABEL_7:
    ++v11;
    v12 += 2;
    if ( v11 >= 0x22 )
      goto LABEL_8;
  }
  sub_1406E0C3C(1LL, (__int64)"SdbpCheckAllAttributes");
LABEL_10:
  v15 = (char *)(v10 + 4);
  v16 = 34LL;
  do
  {
    v17 = *((_DWORD *)v15 + 2);
    if ( (v17 & 1) != 0 && *((_DWORD *)v15 - 4) == 4 && (v17 & 4) != 0 && *(_QWORD *)v15 )
      ExFreePoolWithTag(*(PVOID *)v15, 0x74705041u);
    v15 += 32;
    --v16;
  }
  while ( v16 );
  memset(P, 0, 0x440uLL);
  ExFreePoolWithTag(P, 0x74705041u);
  return v6;
}
