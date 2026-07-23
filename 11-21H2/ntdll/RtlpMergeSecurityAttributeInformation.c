/*
 * XREFs of RtlpMergeSecurityAttributeInformation @ 0x18008BA40
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800F54D4 (RtlpIsAttributeAceInSacl.c)
 */

__int64 __fastcall RtlpMergeSecurityAttributeInformation(unsigned __int16 *a1, __int64 a2, _QWORD *a3, char a4)
{
  char *v4; // rbx
  char v5; // si
  _QWORD *v6; // rax
  char *Heap; // rdi
  unsigned int v10; // r12d
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // ecx
  _BYTE *v14; // r15
  unsigned __int16 *v15; // rsi
  unsigned int v16; // r14d
  _BYTE *v17; // rsi
  unsigned int i; // r14d
  unsigned int v19; // eax
  _WORD *v20; // r14
  _BYTE *v21; // rsi
  unsigned int v22; // esi
  _WORD *v23; // rsi
  unsigned int j; // r14d
  __int64 v26; // r8
  __int64 v27; // rax
  _BYTE v28[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+24h] [rbp-44h]
  unsigned int v30; // [rsp+28h] [rbp-40h]

  v4 = 0LL;
  v5 = a4;
  v28[0] = 0;
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
  v29 = v13;
  if ( v13 < 8 )
    goto LABEL_71;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v13);
  if ( !Heap )
  {
    v10 = -1073741801;
    goto LABEL_72;
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
          if ( *v17 == 18 && (v17[1] & 0x10) == 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(v17, Heap, 0LL, v28) )
          {
            *((_WORD *)Heap + 1) += *((_WORD *)v17 + 1);
            if ( *((unsigned __int16 *)Heap + 1) > v29 )
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
      v30 = 0;
      v21 = a1 + 4;
      if ( (_WORD)v19 )
      {
        do
        {
          if ( *v21 == 18 && (v21[1] & 0x10) != 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(v21, Heap, 0LL, v28) )
          {
            if ( a2 && (unsigned __int8)RtlpIsAttributeAceInSacl(v21, a2, 1LL, v28) && v28[0] )
            {
              *((_WORD *)Heap + 1) += *((_WORD *)v21 + 1);
              if ( *((unsigned __int16 *)Heap + 1) > v29 )
                goto LABEL_70;
              memmove(v14, v21, *((unsigned __int16 *)v21 + 1));
              ++*((_WORD *)Heap + 2);
              v14[1] |= 0x10u;
            }
            else
            {
              *((_WORD *)Heap + 1) += *((_WORD *)v21 + 1);
              if ( *((unsigned __int16 *)Heap + 1) > v29 )
                goto LABEL_70;
              memmove(v14, v21, *((unsigned __int16 *)v21 + 1));
              ++*((_WORD *)Heap + 2);
              v14[1] &= ~0x10u;
            }
            v14 += *((unsigned __int16 *)v21 + 1);
          }
          v27 = *((unsigned __int16 *)v21 + 1);
          ++v30;
          v21 += v27;
          v19 = a1[2];
        }
        while ( v30 < v19 );
      }
      v22 = 0;
      if ( (_WORD)v19 )
      {
        do
        {
          if ( *(_BYTE *)v20 != 18 )
          {
            *((_WORD *)Heap + 1) += v20[1];
            if ( *((unsigned __int16 *)Heap + 1) > v29 )
              goto LABEL_70;
            memmove(v14, v20, (unsigned __int16)v20[1]);
            ++*((_WORD *)Heap + 2);
            v14 += (unsigned __int16)v20[1];
          }
          ++v22;
          v20 = (_WORD *)((char *)v20 + (unsigned __int16)v20[1]);
        }
        while ( v22 < a1[2] );
      }
    }
    if ( a2 )
    {
      if ( a4 )
      {
        v23 = (_WORD *)(a2 + 8);
        for ( j = 0; j < *(unsigned __int16 *)(a2 + 4); v23 = (_WORD *)((char *)v23 + (unsigned __int16)v23[1]) )
        {
          if ( *(_BYTE *)v23 != 18 )
          {
            *((_WORD *)Heap + 1) += v23[1];
            if ( *((unsigned __int16 *)Heap + 1) > v29 )
              goto LABEL_70;
            memmove(v14, v23, (unsigned __int16)v23[1]);
            ++*((_WORD *)Heap + 2);
            v14 += (unsigned __int16)v23[1];
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
      || (unsigned __int8)RtlpIsAttributeAceInSacl(v15, Heap, 0LL, v28) )
    {
      goto LABEL_45;
    }
    if ( a2 )
    {
      if ( !a4 )
      {
        LOBYTE(v26) = 1;
        if ( (unsigned __int8)RtlpIsAttributeAceInSacl(v15, a2, v26, v28) )
        {
          if ( v28[0] )
          {
            *((_WORD *)Heap + 1) += v15[1];
            if ( *((unsigned __int16 *)Heap + 1) > v29 )
              break;
            memmove(v14, v15, v15[1]);
            ++*((_WORD *)Heap + 2);
            v14[1] |= 0x10u;
            goto LABEL_44;
          }
        }
      }
    }
    *((_WORD *)Heap + 1) += v15[1];
    if ( *((unsigned __int16 *)Heap + 1) > v29 )
      break;
    memmove(v14, v15, v15[1]);
    ++*((_WORD *)Heap + 2);
LABEL_44:
    v14 += v15[1];
LABEL_45:
    ++v16;
    v15 = (unsigned __int16 *)((char *)v15 + v15[1]);
    if ( v16 >= a1[2] )
      goto LABEL_9;
  }
LABEL_70:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_71:
  v10 = -1073741705;
LABEL_72:
  v6 = a3;
LABEL_27:
  *v6 = v4;
  return v10;
}
