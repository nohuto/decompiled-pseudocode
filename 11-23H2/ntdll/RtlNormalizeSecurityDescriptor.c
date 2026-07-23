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

BOOLEAN __cdecl RtlNormalizeSecurityDescriptor(
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        ULONG SecurityDescriptorLength,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        PULONG NewSecurityDescriptorLength,
        BOOLEAN CheckOnly)
{
  _DWORD *v5; // rbp
  SIZE_T v6; // rbx
  _DWORD *Heap; // rdi
  BOOLEAN v9; // r15
  __int64 v10; // rcx
  ULONG v11; // ebx
  char *v12; // r13
  unsigned int v13; // r12d
  char *v15; // r14
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  char *v18; // r12
  char *v19; // r14
  int v20; // eax
  unsigned __int8 *v21; // rdx
  unsigned int v22; // r14d
  unsigned __int8 *v23; // rdx
  unsigned int v24; // r14d
  PSECURITY_DESCRIPTOR *v25; // rax
  char v27; // [rsp+78h] [rbp+10h]

  v5 = *SecurityDescriptor;
  v6 = SecurityDescriptorLength;
  v27 = 0;
  Heap = 0LL;
  v9 = 0;
  if ( RtlValidSecurityDescriptor(*SecurityDescriptor) && (unsigned int)v6 >= RtlLengthSecurityDescriptor(v5) )
  {
    if ( CheckOnly )
      goto LABEL_9;
    if ( NewSecurityDescriptor )
    {
      Heap = *NewSecurityDescriptor;
      if ( *NewSecurityDescriptor )
      {
LABEL_8:
        *(_OWORD *)Heap = *(_OWORD *)v5;
        Heap[4] = v5[4];
LABEL_9:
        v10 = (unsigned int)v5[3];
        v11 = 20;
        if ( (_DWORD)v10 )
        {
          v12 = (char *)v5 + v10;
          v13 = *(_WORD *)((char *)v5 + v10 + 4) != 0 ? 0x14 : 0;
          v9 = v13 != (_DWORD)v10;
          if ( v13 != (_DWORD)v10 && CheckOnly )
          {
LABEL_12:
            if ( !v9 )
              goto LABEL_13;
LABEL_52:
            if ( !CheckOnly )
            {
              v25 = NewSecurityDescriptor;
              if ( NewSecurityDescriptor )
              {
                if ( !v27 )
                  goto LABEL_58;
              }
              else
              {
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
                v25 = SecurityDescriptor;
              }
              *v25 = Heap;
LABEL_58:
              if ( NewSecurityDescriptorLength )
                *NewSecurityDescriptorLength = v11;
              return v9;
            }
LABEL_13:
            if ( v27 )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
            return v9;
          }
          if ( *((_WORD *)v12 + 2) )
          {
            if ( CheckOnly )
              v15 = 0LL;
            else
              v15 = (char *)Heap + v13;
            v9 |= RtlpNormalizeAcl(v15, (char *)v5 + v10, 0LL);
            if ( v9 && CheckOnly )
              goto LABEL_52;
            if ( CheckOnly )
            {
              v16 = *((_WORD *)v12 + 1);
            }
            else
            {
              Heap[3] = v13;
              v16 = *((_WORD *)v15 + 1);
            }
            v11 = v16 + 20;
          }
          else
          {
            v9 = 1;
            if ( CheckOnly )
              goto LABEL_13;
            Heap[3] = 0;
          }
        }
        v17 = (unsigned int)v5[4];
        if ( (_DWORD)v17 )
        {
          v9 |= v11 != (_DWORD)v17;
          if ( v9 && CheckOnly )
            goto LABEL_13;
          v18 = (char *)v5 + v17;
          v19 = CheckOnly ? 0LL : (char *)Heap + v11;
          v9 |= RtlpNormalizeAcl(v19, (char *)v5 + v17, 0LL);
          if ( v9 )
          {
            if ( CheckOnly )
              goto LABEL_13;
          }
          if ( CheckOnly )
          {
            v20 = *((unsigned __int16 *)v18 + 1);
          }
          else
          {
            Heap[4] = v11;
            v20 = *((unsigned __int16 *)v19 + 1);
          }
          v11 += v20;
        }
        if ( v11 != v5[1] )
        {
          v9 = 1;
          if ( CheckOnly )
            goto LABEL_13;
          Heap[1] = v11;
        }
        v21 = (unsigned __int8 *)v5 + (unsigned int)v5[1];
        v22 = 4 * v21[1] + 8;
        if ( !CheckOnly )
          memmove((char *)Heap + (unsigned int)Heap[1], v21, v22);
        v11 += v22;
        if ( v5[2] )
        {
          if ( v11 != v5[2] )
          {
            v9 = 1;
            if ( CheckOnly )
              goto LABEL_13;
            Heap[2] = v11;
          }
          v23 = (unsigned __int8 *)v5 + (unsigned int)v5[2];
          v24 = 4 * v23[1] + 8;
          if ( !CheckOnly )
            memmove((char *)Heap + (unsigned int)Heap[2], v23, v24);
          v11 += v24;
        }
        goto LABEL_12;
      }
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v6);
    if ( Heap )
    {
      v27 = 1;
      goto LABEL_8;
    }
  }
  return 0;
}
