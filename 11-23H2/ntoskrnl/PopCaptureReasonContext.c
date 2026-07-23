/*
 * XREFs of PopCaptureReasonContext @ 0x1402096D8
 * Callers:
 *     PoCaptureReasonContext @ 0x140209BF8 (PoCaptureReasonContext.c)
 * Callees:
 *     PopSafeCopyUnicodeString @ 0x140209618 (PopSafeCopyUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopCaptureReasonContext(__int64 a1, char a2, bool *a3, __int64 *a4)
{
  unsigned __int64 v7; // r15
  unsigned int v8; // r12d
  unsigned __int64 v9; // r13
  int v10; // ebx
  unsigned __int64 v11; // rax
  unsigned int v12; // edx
  unsigned __int16 *v13; // rcx
  __int64 v14; // rax
  __int64 Pool2; // rax
  void *v16; // rsi
  unsigned __int64 v17; // r14
  const UNICODE_STRING *v18; // rcx
  __int64 v19; // r8
  char v20; // r15
  int v21; // ebx
  char *v22; // rax
  unsigned int v23; // r14d
  unsigned __int64 v24; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-38h]
  __int128 v29; // [rsp+30h] [rbp-28h]
  __int128 v30; // [rsp+40h] [rbp-18h] BYREF
  wchar_t *v31; // [rsp+A0h] [rbp+48h] BYREF
  char v32; // [rsp+A8h] [rbp+50h]
  bool *v33; // [rsp+B0h] [rbp+58h]
  __int64 *v34; // [rsp+B8h] [rbp+60h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v31 = 0LL;
  *a4 = 0LL;
  v7 = 56LL;
  v30 = 0LL;
  if ( a3 )
    *a3 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( !a1 )
  {
    v10 = 0x80000000;
    goto LABEL_14;
  }
  if ( *(_DWORD *)a1 )
    return 3221225485LL;
  v10 = *(_DWORD *)(a1 + 4);
  if ( (v10 & 1) != 0 )
  {
    if ( (((unsigned __int8)*(_WORD *)(a1 + 8) + 2) & 1) == 0 )
    {
      v7 = *(unsigned __int16 *)(a1 + 8) + 90LL;
      goto LABEL_14;
    }
    return 3221225485LL;
  }
  if ( (v10 & 2) == 0 )
  {
    if ( v10 < 0 )
      goto LABEL_14;
    return 3221225485LL;
  }
  if ( ((*(_BYTE *)(a1 + 8) + 2) & 1) != 0 )
    return 3221225485LL;
  v8 = *(_DWORD *)(a1 + 28);
  v7 = *(unsigned __int16 *)(a1 + 8) + 90LL;
  v11 = 16LL * v8;
  if ( v11 > 0xFFFFFFFF )
    return 3221225485LL;
  v9 = *(_QWORD *)(a1 + 32);
  if ( a2 && (_DWORD)v11 )
  {
    if ( (v9 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v26 = v9 + (unsigned int)v11;
    if ( v26 > 0x7FFFFFFF0000LL || v26 < v9 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v12 = 0;
  if ( v8 )
  {
    v13 = (unsigned __int16 *)v9;
    do
    {
      v14 = *v13;
      if ( v14 + v7 + 2 < v7 )
        return 3221225485LL;
      ++v12;
      v13 += 8;
      v7 += v14 + 2;
    }
    while ( v12 < v8 );
  }
LABEL_14:
  Pool2 = ExAllocatePool2((a2 != 0) + 256LL, v7, 2017677904LL);
  v16 = (void *)Pool2;
  if ( Pool2 )
  {
    *a4 = Pool2;
    if ( v10 < 0 )
    {
      *(_QWORD *)(Pool2 + 48) = 0LL;
      return 0;
    }
    v17 = (Pool2 + 63) & 0xFFFFFFFFFFFFFFF8uLL;
    v18 = (const UNICODE_STRING *)(a1 + 8);
    *(_QWORD *)(Pool2 + 48) = v7 + Pool2 - v17;
    *(_DWORD *)v17 = v10;
    v31 = (wchar_t *)(v17 + 32);
    v28 = Pool2 + v7;
    v19 = Pool2 + v7;
    *(_QWORD *)(v17 + 8) = 32LL;
    if ( (v10 & 1) != 0 )
    {
      v21 = PopSafeCopyUnicodeString(v18, &v31, v19, v32);
      if ( v21 >= 0 )
      {
LABEL_22:
        if ( v33 )
          *v33 = (*(_DWORD *)(a1 + 4) & 4) != 0;
        return 0;
      }
    }
    else
    {
      v20 = v32;
      v21 = PopSafeCopyUnicodeString(v18, &v31, v19, v32);
      if ( v21 >= 0 )
      {
        *(_WORD *)(v17 + 16) = *(_WORD *)(a1 + 24);
        v22 = (char *)v31 - v17;
        *(_DWORD *)(v17 + 20) = v8;
        *(_QWORD *)(v17 + 24) = v22;
        v23 = 0;
        if ( v8 )
        {
          while ( 1 )
          {
            v24 = v9 + 16LL * v23;
            if ( v20 )
            {
              DWORD1(v29) = 0;
              if ( v24 >= 0x7FFFFFFF0000LL )
                v24 = 0x7FFFFFFF0000LL;
              LODWORD(v29) = *(_DWORD *)v24;
              v27 = *(_QWORD *)(v24 + 8);
              v24 = (unsigned __int64)&v30;
              *((_QWORD *)&v29 + 1) = v27;
              v30 = v29;
            }
            v21 = PopSafeCopyUnicodeString((PCUNICODE_STRING)v24, &v31, v28, v20);
            if ( v21 < 0 )
              goto LABEL_46;
            if ( ++v23 >= v8 )
              goto LABEL_22;
          }
        }
        goto LABEL_22;
      }
    }
LABEL_46:
    ExFreePoolWithTag(v16, 0x78435250u);
    *v34 = 0LL;
    return (unsigned int)v21;
  }
  return 3221225626LL;
}
