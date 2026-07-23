/*
 * XREFs of sub_14097DFA0 @ 0x14097DFA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405AA6C4 @ 0x1405AA6C4 (sub_1405AA6C4.c)
 *     sub_1405AAF14 @ 0x1405AAF14 (sub_1405AAF14.c)
 *     sub_1405AAF90 @ 0x1405AAF90 (sub_1405AAF90.c)
 *     sub_1405AB030 @ 0x1405AB030 (sub_1405AB030.c)
 *     sub_1405AB994 @ 0x1405AB994 (sub_1405AB994.c)
 *     sub_1405AB9F0 @ 0x1405AB9F0 (sub_1405AB9F0.c)
 *     sub_1405AC910 @ 0x1405AC910 (sub_1405AC910.c)
 *     sub_1405ACB84 @ 0x1405ACB84 (sub_1405ACB84.c)
 *     sub_14097C8DC @ 0x14097C8DC (sub_14097C8DC.c)
 *     sub_14097D2A0 @ 0x14097D2A0 (sub_14097D2A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14097DFA0(__int64 a1, unsigned __int64 a2, char *a3)
{
  char *v3; // r15
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rdi
  __int64 v9; // r13
  int v10; // ebx
  _QWORD *v11; // rax
  __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r10
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  int v18; // r9d
  bool i; // zf
  int v20; // r9d
  ULONG_PTR v21; // r15
  ULONG_PTR v22; // rsi
  __int64 *v23; // rsi
  ULONG_PTR v25; // [rsp+48h] [rbp-1060h]
  __int128 v26; // [rsp+50h] [rbp-1058h] BYREF
  _BYTE P[4096]; // [rsp+60h] [rbp-1048h] BYREF

  v3 = a3;
  v26 = 0LL;
  if ( a2 - 1 > 0xFFFFFFFFFFFFELL )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v8 = 0LL;
  v9 = 2LL;
  if ( !a3 )
    goto LABEL_6;
  if ( a2 > 0x200 )
  {
    v8 = sub_1402828F0(64, 8 * a2, 0x77526D4Du);
    if ( !v8 )
      return 3221225626LL;
  }
  else
  {
    v8 = P;
  }
  v10 = sub_14097C8DC(v8, v3, a2);
  if ( v10 >= 0 )
  {
LABEL_6:
    v25 = sub_1405AB9F0((__int64)CurrentThread);
    v11 = sub_1405AAF14(v7);
    v6 = (__int64)v11;
    if ( v11 )
    {
      v13 = v11[4];
      v14 = sub_1405AB030((__int64)v11);
      if ( !v14 )
        v14 = sub_1405AAF90(v13);
      if ( v14 == 1 || (((v14 << 12) - 1) & v7) == 0 )
      {
        v16 = ((v14 * a2) << 12) + v7 - 1;
        if ( v16 <= v7 )
        {
          v10 = -1073741584;
LABEL_27:
          if ( v25 )
            sub_1405AC910((__int64)CurrentThread, v25);
          goto LABEL_29;
        }
        if ( v7 >= (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) << 12
          && v16 <= (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF) )
        {
          v17 = sub_140313C70(v7);
          for ( i = v18 == 0; ; i = v20 == 1 )
          {
            v21 = v17;
            if ( i )
              break;
            v17 = sub_140313C70(v17);
          }
          v22 = sub_1405AB994(v13, (__int64)CurrentThread);
          if ( !v8 || (v10 = sub_14097D2A0(v13, (__int64)v8, a2, 0LL, (__int64 *)&v26, v6, v21), v10 >= 0) )
          {
            *((_QWORD *)&v26 + 1) = sub_1405ACB84(v6, v8, a2, 0LL, v21, 1);
            v10 = 0;
          }
          if ( v22 )
            sub_1405AC910((__int64)CurrentThread, v22);
          v3 = a3;
          goto LABEL_27;
        }
      }
    }
    v10 = -1073741585;
    goto LABEL_27;
  }
LABEL_29:
  v23 = (__int64 *)&v26;
  do
  {
    if ( *v23 )
      sub_1405AA6C4(v6, *v23, 0);
    ++v23;
    --v9;
  }
  while ( v9 );
  if ( v3 )
  {
    if ( v8 != (_QWORD *)P )
      ExFreePoolWithTag(v8, 0);
  }
  return (unsigned int)v10;
}
