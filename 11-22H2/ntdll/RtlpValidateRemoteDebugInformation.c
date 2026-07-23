/*
 * XREFs of RtlpValidateRemoteDebugInformation @ 0x1800E3818
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpValidateRange @ 0x1800E36F8 (RtlpValidateRange.c)
 */

__int64 __fastcall RtlpValidateRemoteDebugInformation(
        unsigned __int64 *a1,
        __int16 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int *Heap; // rax
  unsigned __int64 v11; // r8
  unsigned int *v12; // r8
  _DWORD *v13; // r8
  unsigned int v14; // r14d
  __int64 v15; // r12
  unsigned __int64 v16; // r8
  _WORD *v17; // r14
  __int64 v18; // rcx
  unsigned int *v19; // r8
  unsigned __int64 v20; // r8
  unsigned int *v21; // r8
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r8
  unsigned int *v25; // r8
  unsigned __int64 v26; // r9
  _RTL_BITMAP v27; // [rsp+30h] [rbp-10h] BYREF
  unsigned int *BaseAddress; // [rsp+70h] [rbp+30h]

  v4 = 0;
  if ( !a1[14] && !a1[12] && !a1[15] && !a1[18] )
    return v4;
  if ( a4 )
  {
    Heap = (unsigned int *)RtlAllocateHeap(
                             NtCurrentPeb()->ProcessHeap,
                             8u,
                             ((unsigned __int64)(a4 + 31) >> 3) & 0x1FFFFFFFFFFFFFFCLL);
    BaseAddress = Heap;
    if ( !Heap )
      return 3221225626LL;
    v11 = a1[14];
    v27.SizeOfBitMap = a4;
    v27.Buffer = Heap;
    if ( v11 )
    {
      if ( !RtlpValidateRange(a3, a4, v11, 8LL, &v27) )
        goto LABEL_43;
      v12 = (unsigned int *)a1[14];
      if ( !is_mul_ok(*v12, 0x60uLL) || !RtlpValidateRange(a3, a4, (unsigned __int64)(v12 + 2), 96LL * *v12, &v27) )
        goto LABEL_43;
      v13 = (_DWORD *)a1[14];
      v14 = 0;
      if ( *v13 )
      {
        do
        {
          v15 = 24LL * v14;
          if ( v13[v15 + 11] )
          {
            if ( !is_mul_ok((unsigned int)v13[v15 + 11], 0x20uLL)
              || !RtlpValidateRange(a3, a4, *(_QWORD *)&v13[v15 + 22], 32LL * (unsigned int)v13[v15 + 11], &v27) )
            {
              goto LABEL_43;
            }
          }
          v16 = a1[14];
          if ( *(_DWORD *)(v15 * 4 + v16 + 40) )
          {
            if ( !is_mul_ok(*(unsigned int *)(v15 * 4 + v16 + 40), 0x48uLL)
              || !RtlpValidateRange(
                    a3,
                    a4,
                    *(_QWORD *)(v15 * 4 + v16 + 80),
                    72LL * *(unsigned int *)(v15 * 4 + v16 + 40),
                    &v27) )
            {
              goto LABEL_43;
            }
          }
          v13 = (_DWORD *)a1[14];
        }
        while ( ++v14 < *v13 );
      }
    }
    v17 = (_WORD *)a1[12];
    if ( !v17 )
      goto LABEL_31;
    if ( (a2 & 0x100) != 0 )
    {
      while ( RtlpValidateRange(a3, a4, (unsigned __int64)v17, 2LL, &v27)
           && (!*v17 || RtlpValidateRange(a3, a4, (unsigned __int64)(v17 + 1), 318LL, &v27)) )
      {
        v18 = (unsigned __int16)*v17;
        v17 = (_WORD *)((char *)v17 + v18);
        if ( !(_WORD)v18 )
          goto LABEL_31;
      }
      goto LABEL_43;
    }
    if ( RtlpValidateRange(a3, a4, a1[12], 8LL, &v27) )
    {
      v19 = (unsigned int *)a1[12];
      if ( is_mul_ok(*v19, 0x128uLL) )
      {
        if ( RtlpValidateRange(a3, a4, (unsigned __int64)(v19 + 2), 296LL * *v19, &v27) )
        {
LABEL_31:
          v20 = a1[15];
          if ( !v20
            || RtlpValidateRange(a3, a4, v20, 8LL, &v27)
            && (v21 = (unsigned int *)a1[15], is_mul_ok(*v21, 0x30uLL))
            && RtlpValidateRange(a3, a4, (unsigned __int64)(v21 + 2), 48LL * *v21, &v27) )
          {
            v22 = a1[13];
            if ( !v22
              || RtlpValidateRange(a3, a4, v22, 24LL, &v27)
              && (v23 = a1[13], is_mul_ok(*(unsigned int *)(v23 + 20), 0x110uLL))
              && RtlpValidateRange(a3, a4, v23 + 24, 272LL * *(unsigned int *)(v23 + 20), &v27) )
            {
              v24 = a1[18];
              if ( !v24 )
                goto LABEL_44;
              if ( RtlpValidateRange(a3, a4, v24, 8LL, &v27) )
              {
                v25 = (unsigned int *)a1[18];
                v26 = *v25;
                if ( v26 >= 8 )
                {
                  if ( RtlpValidateRange(a3, a4, (unsigned __int64)(v25 + 2), v26 - 8, &v27) )
                    goto LABEL_44;
                }
              }
            }
          }
        }
      }
    }
LABEL_43:
    v4 = -1073741823;
LABEL_44:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return v4;
  }
  return (unsigned int)-1073741823;
}
