/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x1800F17C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlValidSecurityDescriptor @ 0x18004A460 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1800774C0 (RtlLengthSecurityDescriptor.c)
 *     RtlCompareMemory @ 0x1800A8B30 (RtlCompareMemory.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlIsZeroMemory @ 0x18010BFC0 (RtlIsZeroMemory.c)
 */

BOOLEAN __cdecl RtlNormalizeSecurityDescriptor(
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        ULONG SecurityDescriptorLength,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        PULONG NewSecurityDescriptorLength,
        BOOLEAN CheckOnly)
{
  _DWORD *v5; // rdi
  SIZE_T v6; // rbx
  _DWORD *Heap; // rsi
  BOOLEAN v9; // r12
  unsigned int v10; // ebx
  unsigned int v11; // r13d
  unsigned int v12; // r10d
  __int64 v13; // r8
  unsigned int v14; // r14d
  unsigned __int16 v15; // dx
  __int64 v16; // rax
  unsigned int v17; // r9d
  unsigned int v18; // r11d
  _WORD *v19; // r15
  unsigned int v20; // ecx
  _WORD *v21; // r13
  __int64 v22; // rdx
  SIZE_T v23; // rax
  _WORD *v24; // r13
  __int64 v25; // rdx
  SIZE_T v26; // rax
  int v27; // eax
  unsigned int v28; // r15d
  unsigned int v29; // ecx
  char *v30; // r11
  unsigned int v31; // eax
  unsigned __int8 *v32; // rdx
  unsigned int v33; // r14d
  unsigned int v34; // eax
  ULONG v35; // ebx
  unsigned __int8 *v36; // rdx
  unsigned int v37; // r14d
  PSECURITY_DESCRIPTOR *v38; // rax
  unsigned int v40; // [rsp+20h] [rbp-78h]
  unsigned int v41; // [rsp+24h] [rbp-74h]
  unsigned int v42; // [rsp+28h] [rbp-70h]
  unsigned int v43; // [rsp+2Ch] [rbp-6Ch]
  int v44; // [rsp+30h] [rbp-68h]
  char *v45; // [rsp+38h] [rbp-60h]
  __int64 v46; // [rsp+40h] [rbp-58h]
  char v48; // [rsp+A8h] [rbp+10h]

  v5 = *SecurityDescriptor;
  v6 = SecurityDescriptorLength;
  v45 = 0LL;
  Heap = 0LL;
  v48 = 0;
  v9 = 0;
  if ( !RtlValidSecurityDescriptor(*SecurityDescriptor) || (unsigned int)v6 < RtlLengthSecurityDescriptor(v5) )
    return 0;
  if ( !CheckOnly )
  {
    if ( NewSecurityDescriptor )
    {
      Heap = *NewSecurityDescriptor;
      if ( *NewSecurityDescriptor )
        goto LABEL_8;
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v6);
    if ( Heap )
    {
      v48 = 1;
LABEL_8:
      *(_OWORD *)Heap = *(_OWORD *)v5;
      Heap[4] = v5[4];
      goto LABEL_9;
    }
    return 0;
  }
LABEL_9:
  v10 = 20;
  v11 = 1;
  v44 = 1;
  do
  {
    if ( v11 == 1 )
      v12 = v5[3];
    else
      v12 = v5[4];
    v43 = v12;
    if ( !v12 )
      goto LABEL_63;
    v13 = v12;
    v46 = v12;
    if ( v11 != 1 || *(_WORD *)((char *)v5 + v12 + 4) )
    {
      v14 = v10;
      if ( v10 == v12 )
        goto LABEL_22;
    }
    else
    {
      v14 = 0;
    }
    v9 = 1;
    if ( CheckOnly )
      goto LABEL_82;
    if ( v11 == 1 )
      Heap[3] = v14;
    else
      Heap[4] = v14;
LABEL_22:
    if ( v14 )
    {
      if ( !CheckOnly )
      {
        v45 = (char *)Heap + v14;
        *(_QWORD *)v45 = *(_QWORD *)((char *)v5 + v12);
      }
      v15 = *(_WORD *)((char *)v5 + v12 + 4);
      v16 = (__int64)v5 + v12 + 8;
      v40 = 0;
      v10 += 8;
      v41 = 0;
      v17 = 0;
      v18 = 0;
      v19 = (_WORD *)v16;
      if ( v15 )
      {
        while ( !*(_BYTE *)v19 )
        {
          v42 = 0;
          v20 = 0;
          if ( !CheckOnly )
          {
            v24 = v45 + 8;
            if ( v17 )
            {
              LOWORD(v25) = v19[1];
              do
              {
                if ( v24[1] == (_WORD)v25 )
                {
                  v26 = RtlCompareMemory(v19, v24, (unsigned __int16)v25);
                  v25 = (unsigned __int16)v19[1];
                  v17 = v40;
                  if ( v26 == v25 )
                  {
                    LOWORD(v27) = v19[1];
                    v9 = 1;
                    v13 = v46;
                    v18 = v41;
                    goto LABEL_47;
                  }
                  v20 = v42;
                }
                ++v20;
                v24 = (_WORD *)((char *)v24 + (unsigned __int16)v24[1]);
                v42 = v20;
              }
              while ( v20 < v17 );
            }
LABEL_44:
            memmove((char *)Heap + v10, v19, (unsigned __int16)v19[1]);
            v18 = v41;
LABEL_45:
            v17 = v40;
            v13 = v46;
            goto LABEL_46;
          }
          v21 = (_WORD *)v16;
          if ( v18 )
          {
            LOWORD(v22) = v19[1];
            while ( 1 )
            {
              if ( v21[1] == (_WORD)v22 )
              {
                v23 = RtlCompareMemory(v19, v21, (unsigned __int16)v22);
                v22 = (unsigned __int16)v19[1];
                if ( v23 == v22 )
                {
                  v9 = 1;
                  goto LABEL_82;
                }
                v20 = v42;
                v18 = v41;
              }
              ++v20;
              v21 = (_WORD *)((char *)v21 + (unsigned __int16)v21[1]);
              v42 = v20;
              if ( v20 >= v18 )
                goto LABEL_45;
            }
          }
LABEL_46:
          v27 = (unsigned __int16)v19[1];
          v10 += v27;
          v40 = ++v17;
LABEL_47:
          ++v18;
          v19 = (_WORD *)((char *)v19 + (unsigned __int16)v27);
          v41 = v18;
          v15 = *(_WORD *)((char *)v5 + v13 + 4);
          v16 = (__int64)v5 + v13 + 8;
          if ( v18 >= v15 )
          {
            v11 = v44;
            v12 = v43;
            goto LABEL_49;
          }
        }
        if ( CheckOnly )
          goto LABEL_46;
        goto LABEL_44;
      }
LABEL_49:
      v28 = (v10 + 3) & 0xFFFFFFFC;
      v29 = v28 - v14;
      if ( v28 - v14 == *(unsigned __int16 *)((char *)v5 + v13 + 2) )
      {
        v30 = v45;
      }
      else
      {
        v9 = 1;
        if ( CheckOnly )
          goto LABEL_82;
        v30 = v45;
        *((_WORD *)v45 + 1) = v29;
        v15 = *(_WORD *)((char *)v5 + v13 + 4);
      }
      if ( v17 != v15 )
        *((_WORD *)v30 + 2) = v17;
      if ( v10 != v28 )
      {
        if ( v14 == v12
          && v29 == *(unsigned __int16 *)((char *)v5 + v13 + 2)
          && !RtlIsZeroMemory((char *)v5 + v10, v28 - v10) )
        {
          v9 = 1;
          if ( CheckOnly )
            goto LABEL_82;
        }
        if ( !CheckOnly )
          memset((char *)Heap + v10, 0, v28 - v10);
        v10 = (v10 + 3) & 0xFFFFFFFC;
      }
    }
LABEL_63:
    v44 = ++v11;
  }
  while ( v11 <= 2 );
  v31 = v5[1];
  if ( v10 == v31 )
    goto LABEL_67;
  v9 = 1;
  if ( CheckOnly )
    goto LABEL_82;
  Heap[1] = v10;
  v31 = v5[1];
LABEL_67:
  v32 = (unsigned __int8 *)v5 + v31;
  v33 = 4 * v32[1] + 8;
  if ( !CheckOnly )
    memmove((char *)Heap + (unsigned int)Heap[1], v32, v33);
  v34 = v5[2];
  v35 = v33 + v10;
  if ( !v34 )
    goto LABEL_76;
  if ( v35 == v34 )
    goto LABEL_73;
  v9 = 1;
  if ( CheckOnly )
  {
LABEL_82:
    if ( v48 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  else
  {
    Heap[2] = v35;
    v34 = v5[2];
LABEL_73:
    v36 = (unsigned __int8 *)v5 + v34;
    v37 = 4 * v36[1] + 8;
    if ( !CheckOnly )
      memmove((char *)Heap + (unsigned int)Heap[2], v36, v37);
    v35 += v37;
LABEL_76:
    if ( !v9 || CheckOnly )
      goto LABEL_82;
    v38 = NewSecurityDescriptor;
    if ( !NewSecurityDescriptor )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      v38 = SecurityDescriptor;
      goto LABEL_86;
    }
    if ( v48 )
LABEL_86:
      *v38 = Heap;
    if ( NewSecurityDescriptorLength )
      *NewSecurityDescriptorLength = v35;
  }
  return v9;
}
