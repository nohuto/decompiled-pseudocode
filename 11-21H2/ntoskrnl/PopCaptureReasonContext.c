/*
 * XREFs of PopCaptureReasonContext @ 0x14036BBCC
 * Callers:
 *     PoCaptureReasonContext @ 0x14036B98C (PoCaptureReasonContext.c)
 * Callees:
 *     PopSafeCopyUnicodeString @ 0x14036BE80 (PopSafeCopyUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopCaptureReasonContext(__int64 a1, char a2, bool *a3, __int64 *a4)
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
  void *v17; // rsi
  unsigned __int64 v18; // r14
  const UNICODE_STRING *v19; // rcx
  int v20; // ebx
  unsigned int v21; // r14d
  unsigned __int64 v22; // rcx
  __int64 v24; // rax
  __int128 v25; // [rsp+30h] [rbp-28h]
  __int128 v26; // [rsp+40h] [rbp-18h] BYREF

  *a4 = 0LL;
  v7 = 32LL;
  v26 = 0LL;
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
  v17 = (void *)Pool2;
  if ( Pool2 )
  {
    *a4 = Pool2;
    if ( v10 < 0 )
    {
      *(_QWORD *)(Pool2 + 24) = 0LL;
      return 0;
    }
    v18 = (Pool2 + 39) & 0xFFFFFFFFFFFFFFF8uLL;
    v19 = (const UNICODE_STRING *)(a1 + 8);
    *(_QWORD *)(Pool2 + 24) = v7 + Pool2 - v18;
    *(_DWORD *)v18 = v10;
    *(_QWORD *)(v18 + 8) = 32LL;
    if ( (v10 & 1) != 0 )
    {
      v20 = PopSafeCopyUnicodeString(v19);
      if ( v20 >= 0 )
      {
LABEL_26:
        if ( a3 )
          *a3 = (*(_DWORD *)(a1 + 4) & 4) != 0;
        return 0;
      }
    }
    else
    {
      v20 = PopSafeCopyUnicodeString(v19);
      if ( v20 >= 0 )
      {
        *(_WORD *)(v18 + 16) = *(_WORD *)(a1 + 24);
        *(_DWORD *)(v18 + 20) = v8;
        *(_QWORD *)(v18 + 24) = 32LL;
        v21 = 0;
        if ( v8 )
        {
          while ( 1 )
          {
            v22 = v9 + 16LL * v21;
            if ( a2 )
            {
              DWORD1(v25) = 0;
              if ( v22 >= 0x7FFFFFFF0000LL )
                v22 = 0x7FFFFFFF0000LL;
              LODWORD(v25) = *(_DWORD *)v22;
              v24 = *(_QWORD *)(v22 + 8);
              v22 = (unsigned __int64)&v26;
              *((_QWORD *)&v25 + 1) = v24;
              v26 = v25;
            }
            v20 = PopSafeCopyUnicodeString((PCUNICODE_STRING)v22);
            if ( v20 < 0 )
              goto LABEL_45;
            if ( ++v21 >= v8 )
              goto LABEL_26;
          }
        }
        goto LABEL_26;
      }
    }
LABEL_45:
    ExFreePoolWithTag(v17, 0x78435250u);
    *a4 = 0LL;
    return (unsigned int)v20;
  }
  return 3221225626LL;
}
