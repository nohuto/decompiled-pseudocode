/*
 * XREFs of RtlpMergeSecurityAttributeInformation @ 0x180002880
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800F523C (RtlpIsAttributeAceInSacl.c)
 */

__int64 __fastcall RtlpMergeSecurityAttributeInformation(unsigned __int16 *a1, __int64 a2, _QWORD *a3, char a4)
{
  char *v4; // rdi
  char v5; // bp
  _QWORD *v6; // rax
  char *Heap; // rsi
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // ecx
  _BYTE *v14; // r13
  unsigned __int16 *v15; // rbp
  unsigned int v16; // r14d
  _BYTE *v17; // rbp
  unsigned int i; // r14d
  unsigned int v19; // eax
  _BYTE *v20; // rcx
  unsigned int v21; // r14d
  _BYTE *v22; // rbp
  unsigned int v23; // ebp
  _BYTE *v24; // rbp
  unsigned int j; // r12d
  _WORD *v26; // r14
  __int64 v28; // r8
  _WORD *v29; // r14
  unsigned int v30; // eax
  _BYTE v31[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+24h] [rbp-44h]
  _BYTE *v33; // [rsp+28h] [rbp-40h]

  v4 = 0LL;
  v5 = a4;
  v31[0] = 0;
  v6 = a3;
  Heap = 0LL;
  v10 = 0;
  if ( !a3 )
  {
    v10 = -1073741811;
    goto LABEL_27;
  }
  if ( a1 )
  {
    v11 = a1[1];
    if ( !a2 )
    {
      v12 = 0;
      goto LABEL_5;
    }
  }
  else
  {
    if ( !a2 )
    {
LABEL_26:
      v4 = Heap;
      goto LABEL_27;
    }
    v11 = 0;
  }
  v12 = *(unsigned __int16 *)(a2 + 2);
LABEL_5:
  v13 = v11 + v12;
  v32 = v13;
  if ( v13 < 8 )
  {
    v10 = -1073741705;
    goto LABEL_71;
  }
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v13);
  if ( !Heap )
  {
    v10 = -1073741801;
    goto LABEL_71;
  }
  v14 = Heap + 8;
  *(_QWORD *)Heap = 0LL;
  *Heap = 2;
  *((_WORD *)Heap + 1) = 8;
  if ( !a1 )
    goto LABEL_10;
  v15 = a1 + 4;
  v16 = 0;
  if ( !a1[2] )
  {
LABEL_9:
    v5 = a4;
LABEL_10:
    if ( a2 )
    {
      if ( v5 )
      {
        v17 = (_BYTE *)(a2 + 8);
        for ( i = 0; i < *(unsigned __int16 *)(a2 + 4); v17 += *((unsigned __int16 *)v17 + 1) )
        {
          if ( *v17 == 18 && (v17[1] & 0x10) == 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(v17, Heap, 0LL, v31) )
          {
            *((_WORD *)Heap + 1) += *((_WORD *)v17 + 1);
            if ( *((unsigned __int16 *)Heap + 1) > v32 )
              goto LABEL_70;
            memmove(v14, v17, *((unsigned __int16 *)v17 + 1));
            ++*((_WORD *)Heap + 2);
            v14 += *((unsigned __int16 *)v17 + 1);
          }
          ++i;
        }
      }
    }
    if ( a1 )
    {
      LOWORD(v19) = a1[2];
      v20 = a1 + 4;
      v33 = a1 + 4;
      v21 = 0;
      v22 = a1 + 4;
      if ( (_WORD)v19 )
      {
        do
        {
          if ( *v22 == 18 && (v22[1] & 0x10) != 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(v22, Heap, 0LL, v31) )
          {
            if ( a2 && (unsigned __int8)RtlpIsAttributeAceInSacl(v22, a2, 1LL, v31) && v31[0] )
            {
              *((_WORD *)Heap + 1) += *((_WORD *)v22 + 1);
              if ( *((unsigned __int16 *)Heap + 1) > v32 )
                goto LABEL_70;
              memmove(v14, v22, *((unsigned __int16 *)v22 + 1));
              ++*((_WORD *)Heap + 2);
              v14[1] |= 0x10u;
            }
            else
            {
              *((_WORD *)Heap + 1) += *((_WORD *)v22 + 1);
              if ( *((unsigned __int16 *)Heap + 1) > v32 )
                goto LABEL_70;
              memmove(v14, v22, *((unsigned __int16 *)v22 + 1));
              ++*((_WORD *)Heap + 2);
              v14[1] &= ~0x10u;
            }
            v14 += *((unsigned __int16 *)v22 + 1);
          }
          ++v21;
          v22 += *((unsigned __int16 *)v22 + 1);
          v19 = a1[2];
        }
        while ( v21 < v19 );
        v20 = a1 + 4;
      }
      v23 = 0;
      if ( (_WORD)v19 )
      {
        do
        {
          v29 = v20 + 2;
          if ( *v20 != 18 )
          {
            *((_WORD *)Heap + 1) += *v29;
            if ( *((unsigned __int16 *)Heap + 1) > v32 )
              goto LABEL_70;
            memmove(v14, v20, (unsigned __int16)*v29);
            v20 = v33;
            ++*((_WORD *)Heap + 2);
            v14 += (unsigned __int16)*v29;
          }
          ++v23;
          v20 += (unsigned __int16)*v29;
          v30 = a1[2];
          v33 = v20;
        }
        while ( v23 < v30 );
      }
    }
    if ( a2 )
    {
      if ( a4 )
      {
        v24 = (_BYTE *)(a2 + 8);
        for ( j = 0; j < *(unsigned __int16 *)(a2 + 4); v24 += (unsigned __int16)*v26 )
        {
          v26 = v24 + 2;
          if ( *v24 != 18 )
          {
            *((_WORD *)Heap + 1) += *v26;
            if ( *((unsigned __int16 *)Heap + 1) > v32 )
              goto LABEL_70;
            memmove(v14, v24, (unsigned __int16)*v26);
            ++*((_WORD *)Heap + 2);
            v14 += (unsigned __int16)*v26;
          }
          ++j;
        }
      }
    }
    v6 = a3;
    goto LABEL_26;
  }
  while ( 1 )
  {
    if ( *(_BYTE *)v15 != 18
      || (*((_BYTE *)v15 + 1) & 0x10) != 0
      || (unsigned __int8)RtlpIsAttributeAceInSacl(v15, Heap, 0LL, v31) )
    {
      goto LABEL_46;
    }
    if ( a2 )
    {
      if ( !a4 )
      {
        LOBYTE(v28) = 1;
        if ( (unsigned __int8)RtlpIsAttributeAceInSacl(v15, a2, v28, v31) )
        {
          if ( v31[0] )
          {
            *((_WORD *)Heap + 1) += v15[1];
            if ( *((unsigned __int16 *)Heap + 1) > v32 )
              break;
            memmove(v14, v15, v15[1]);
            ++*((_WORD *)Heap + 2);
            v14[1] |= 0x10u;
            goto LABEL_45;
          }
        }
      }
    }
    *((_WORD *)Heap + 1) += v15[1];
    if ( *((unsigned __int16 *)Heap + 1) > v32 )
      break;
    memmove(v14, v15, v15[1]);
    ++*((_WORD *)Heap + 2);
LABEL_45:
    v14 += v15[1];
LABEL_46:
    ++v16;
    v15 = (unsigned __int16 *)((char *)v15 + v15[1]);
    if ( v16 >= a1[2] )
      goto LABEL_9;
  }
LABEL_70:
  v10 = -1073741705;
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_71:
  v6 = a3;
LABEL_27:
  *v6 = v4;
  return v10;
}
