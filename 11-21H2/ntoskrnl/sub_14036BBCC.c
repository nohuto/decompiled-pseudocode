/*
 * XREFs of sub_14036BBCC @ 0x14036BBCC
 * Callers:
 *     sub_14036B98C @ 0x14036B98C (sub_14036B98C.c)
 * Callees:
 *     sub_14036BE80 @ 0x14036BE80 (sub_14036BE80.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14036BBCC(__int64 a1, char a2, bool *a3, __int64 *a4)
{
  unsigned __int64 v7; // r15
  unsigned int v8; // r12d
  unsigned __int64 v9; // r13
  int v10; // ebx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned __int16 *v14; // rcx
  __int64 v15; // rax
  __int64 Pool2; // rax
  __int64 v17; // r9
  void *v18; // rsi
  unsigned __int64 v19; // r14
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  char v22; // r15
  int v23; // ebx
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  unsigned int v26; // r14d
  unsigned __int64 v27; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // [rsp+20h] [rbp-38h]
  __int128 v31; // [rsp+30h] [rbp-28h]
  __int128 v32; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v33; // [rsp+A0h] [rbp+48h] BYREF
  char v34; // [rsp+A8h] [rbp+50h]
  bool *v35; // [rsp+B0h] [rbp+58h]
  __int64 *v36; // [rsp+B8h] [rbp+60h]

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v33 = 0LL;
  *a4 = 0LL;
  v7 = 32LL;
  v32 = 0LL;
  if ( a3 )
    *a3 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( !a1 )
  {
    v10 = 0x80000000;
    goto LABEL_18;
  }
  if ( *(_DWORD *)a1 )
    return 3221225485LL;
  v10 = *(_DWORD *)(a1 + 4);
  if ( (v10 & 1) != 0 )
  {
    if ( (((unsigned __int8)*(_WORD *)(a1 + 8) + 2) & 1) == 0 )
    {
      v7 = *(unsigned __int16 *)(a1 + 8) + 66LL;
      goto LABEL_18;
    }
    return 3221225485LL;
  }
  if ( (v10 & 2) == 0 )
  {
    if ( v10 < 0 )
      goto LABEL_18;
    return 3221225485LL;
  }
  if ( ((*(_BYTE *)(a1 + 8) + 2) & 1) != 0 )
    return 3221225485LL;
  v8 = *(_DWORD *)(a1 + 28);
  v7 = *(unsigned __int16 *)(a1 + 8) + 66LL;
  v11 = 16LL * v8;
  if ( v11 > 0xFFFFFFFF )
    return 3221225485LL;
  v9 = *(_QWORD *)(a1 + 32);
  if ( a2 && (_DWORD)v11 )
  {
    if ( (v9 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v9 + (unsigned int)v11;
    if ( v12 > 0x7FFFFFFF0000LL || v12 < v9 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v13 = 0;
  if ( v8 )
  {
    v14 = (unsigned __int16 *)v9;
    do
    {
      v15 = *v14;
      if ( v15 + v7 + 2 < v7 )
        return 3221225485LL;
      ++v13;
      v14 += 8;
      v7 += v15 + 2;
    }
    while ( v13 < v8 );
  }
LABEL_18:
  Pool2 = ExAllocatePool2((a2 != 0) + 256LL, v7, 2017677904LL);
  v18 = (void *)Pool2;
  if ( Pool2 )
  {
    *a4 = Pool2;
    if ( v10 < 0 )
    {
      *(_QWORD *)(Pool2 + 24) = 0LL;
      return 0;
    }
    v19 = (Pool2 + 39) & 0xFFFFFFFFFFFFFFF8uLL;
    v20 = a1 + 8;
    *(_QWORD *)(Pool2 + 24) = v7 + Pool2 - v19;
    *(_DWORD *)v19 = v10;
    v33 = v19 + 32;
    v30 = Pool2 + v7;
    v21 = Pool2 + v7;
    *(_QWORD *)(v19 + 8) = 32LL;
    if ( (v10 & 1) != 0 )
    {
      LOBYTE(v17) = v34;
      v23 = sub_14036BE80(v20, &v33, v21, v17);
      if ( v23 >= 0 )
      {
LABEL_26:
        if ( v35 )
          *v35 = (*(_DWORD *)(a1 + 4) & 4) != 0;
        return 0;
      }
    }
    else
    {
      v22 = v34;
      LOBYTE(v17) = v34;
      v23 = sub_14036BE80(v20, &v33, v21, v17);
      if ( v23 >= 0 )
      {
        *(_WORD *)(v19 + 16) = *(_WORD *)(a1 + 24);
        v25 = v33 - v19;
        *(_DWORD *)(v19 + 20) = v8;
        *(_QWORD *)(v19 + 24) = v25;
        v26 = 0;
        if ( v8 )
        {
          while ( 1 )
          {
            v27 = v9 + 16LL * v26;
            if ( v22 )
            {
              DWORD1(v31) = 0;
              if ( v27 >= 0x7FFFFFFF0000LL )
                v27 = 0x7FFFFFFF0000LL;
              LODWORD(v31) = *(_DWORD *)v27;
              v29 = *(_QWORD *)(v27 + 8);
              v27 = (unsigned __int64)&v32;
              *((_QWORD *)&v31 + 1) = v29;
              v32 = v31;
            }
            LOBYTE(v24) = v22;
            v23 = sub_14036BE80(v27, &v33, v30, v24);
            if ( v23 < 0 )
              goto LABEL_45;
            if ( ++v26 >= v8 )
              goto LABEL_26;
          }
        }
        goto LABEL_26;
      }
    }
LABEL_45:
    ExFreePoolWithTag(v18, 0x78435250u);
    *v36 = 0LL;
    return (unsigned int)v23;
  }
  return 3221225626LL;
}
