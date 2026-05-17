/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x1800F27D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     RtlValidSecurityDescriptor @ 0x180071880 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x180073950 (RtlLengthSecurityDescriptor.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlpNormalizeAcl @ 0x1800F45D0 (RtlpNormalizeAcl.c)
 */

char __fastcall RtlNormalizeSecurityDescriptor(__int64 *a1, unsigned int a2, __int64 *a3, unsigned int *a4, char a5)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 Heap; // rdi
  char v9; // r15
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r13
  unsigned int v13; // r12d
  __int64 v15; // r14
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  __int64 v18; // r12
  __int64 v19; // r14
  int v20; // eax
  unsigned __int8 *v21; // rdx
  unsigned int v22; // r14d
  unsigned __int8 *v23; // rdx
  unsigned int v24; // r14d
  __int64 *v25; // rax
  char v27; // [rsp+78h] [rbp+10h]

  v5 = *a1;
  v6 = a2;
  v27 = 0;
  Heap = 0LL;
  v9 = 0;
  if ( RtlValidSecurityDescriptor(*a1) && (unsigned int)v6 >= (unsigned int)RtlLengthSecurityDescriptor(v5) )
  {
    if ( a5 )
      goto LABEL_9;
    if ( a3 )
    {
      Heap = *a3;
      if ( *a3 )
      {
LABEL_8:
        *(_OWORD *)Heap = *(_OWORD *)v5;
        *(_DWORD *)(Heap + 16) = *(_DWORD *)(v5 + 16);
LABEL_9:
        v10 = *(unsigned int *)(v5 + 12);
        v11 = 20;
        if ( (_DWORD)v10 )
        {
          v12 = v10 + v5;
          v13 = *(_WORD *)(v10 + v5 + 4) != 0 ? 0x14 : 0;
          v9 = v13 != (_DWORD)v10;
          if ( v13 != (_DWORD)v10 && a5 )
          {
LABEL_12:
            if ( !v9 )
              goto LABEL_13;
LABEL_52:
            if ( !a5 )
            {
              v25 = a3;
              if ( a3 )
              {
                if ( !v27 )
                  goto LABEL_58;
              }
              else
              {
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
                v25 = a1;
              }
              *v25 = Heap;
LABEL_58:
              if ( a4 )
                *a4 = v11;
              return v9;
            }
LABEL_13:
            if ( v27 )
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
            return v9;
          }
          if ( *(_WORD *)(v12 + 4) )
          {
            if ( a5 )
              v15 = 0LL;
            else
              v15 = Heap + v13;
            v9 |= RtlpNormalizeAcl(v15, v10 + v5, 0LL);
            if ( v9 && a5 )
              goto LABEL_52;
            if ( a5 )
            {
              v16 = *(_WORD *)(v12 + 2);
            }
            else
            {
              *(_DWORD *)(Heap + 12) = v13;
              v16 = *(_WORD *)(v15 + 2);
            }
            v11 = v16 + 20;
          }
          else
          {
            v9 = 1;
            if ( a5 )
              goto LABEL_13;
            *(_DWORD *)(Heap + 12) = 0;
          }
        }
        v17 = *(unsigned int *)(v5 + 16);
        if ( (_DWORD)v17 )
        {
          v9 |= v11 != (_DWORD)v17;
          if ( v9 && a5 )
            goto LABEL_13;
          v18 = v17 + v5;
          v19 = a5 ? 0LL : Heap + v11;
          v9 |= RtlpNormalizeAcl(v19, v17 + v5, 0LL);
          if ( v9 )
          {
            if ( a5 )
              goto LABEL_13;
          }
          if ( a5 )
          {
            v20 = *(unsigned __int16 *)(v18 + 2);
          }
          else
          {
            *(_DWORD *)(Heap + 16) = v11;
            v20 = *(unsigned __int16 *)(v19 + 2);
          }
          v11 += v20;
        }
        if ( v11 != *(_DWORD *)(v5 + 4) )
        {
          v9 = 1;
          if ( a5 )
            goto LABEL_13;
          *(_DWORD *)(Heap + 4) = v11;
        }
        v21 = (unsigned __int8 *)(v5 + *(unsigned int *)(v5 + 4));
        v22 = 4 * v21[1] + 8;
        if ( !a5 )
          memmove((void *)(Heap + *(unsigned int *)(Heap + 4)), v21, v22);
        v11 += v22;
        if ( *(_DWORD *)(v5 + 8) )
        {
          if ( v11 != *(_DWORD *)(v5 + 8) )
          {
            v9 = 1;
            if ( a5 )
              goto LABEL_13;
            *(_DWORD *)(Heap + 8) = v11;
          }
          v23 = (unsigned __int8 *)(v5 + *(unsigned int *)(v5 + 8));
          v24 = 4 * v23[1] + 8;
          if ( !a5 )
            memmove((void *)(Heap + *(unsigned int *)(Heap + 8)), v23, v24);
          v11 += v24;
        }
        goto LABEL_12;
      }
    }
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v6);
    if ( Heap )
    {
      v27 = 1;
      goto LABEL_8;
    }
  }
  return 0;
}
