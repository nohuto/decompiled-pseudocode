/*
 * XREFs of RtlpCombineAcls @ 0x18001307C
 * Callers:
 *     RtlpNewSecurityObject @ 0x180016E10 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x180079E78 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlCreateAcl @ 0x1800186F0 (RtlCreateAcl.c)
 *     RtlFirstFreeAce @ 0x18001B350 (RtlFirstFreeAce.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlpCombineAcls(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        ACL **a7,
        _DWORD *a8)
{
  unsigned int v8; // edi
  unsigned __int8 *v9; // r11
  ACL *v12; // r12
  ULONG v13; // esi
  unsigned int v15; // edx
  unsigned __int16 v16; // r8
  unsigned __int8 *v17; // r9
  unsigned int v18; // r10d
  unsigned __int16 v19; // cx
  ULONG v20; // ebx
  ACL *Heap; // rax
  unsigned int v22; // ebx
  char *v23; // r14
  unsigned __int16 *v24; // rsi
  unsigned int i; // r15d
  unsigned __int16 *v26; // rbp
  unsigned __int16 v27; // r9
  unsigned __int8 *v28; // r10
  unsigned int v29; // r11d
  unsigned __int16 v30; // r8
  unsigned __int16 v31; // r8
  unsigned __int8 *v32; // r9
  unsigned int v33; // r10d
  unsigned __int16 v34; // cx
  unsigned __int16 v35; // r8
  unsigned __int8 *v36; // r9
  unsigned int v37; // r10d
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // r8
  unsigned __int8 *v40; // r9
  unsigned int v41; // r10d
  unsigned __int16 v42; // cx
  unsigned __int16 v43; // r8
  unsigned __int8 *v44; // r9
  unsigned int v45; // r10d
  unsigned __int16 v46; // cx
  unsigned __int16 *v47; // rsi
  unsigned int v48; // ebp
  unsigned __int16 *v49; // rsi
  unsigned int j; // r15d
  unsigned __int16 *v51; // rbp
  unsigned __int16 *v52; // rsi
  unsigned int k; // r15d
  unsigned __int16 *v54; // rbp
  unsigned __int16 *v55; // rsi
  unsigned int m; // r15d
  unsigned __int16 *v57; // rbp
  unsigned __int16 *v58; // rsi
  unsigned __int16 *v59; // rbp
  PVOID FirstFree; // [rsp+20h] [rbp-48h] BYREF
  NTSTATUS Acl; // [rsp+70h] [rbp+8h]

  v8 = 0;
  v9 = a3;
  FirstFree = 0LL;
  v12 = 0LL;
  v13 = 2;
  if ( !a1 && !a2 && !a3 && !a4 && !a5 && !a6 )
  {
    *a7 = 0LL;
    return 0LL;
  }
  v15 = 8;
  if ( a1 )
  {
    v27 = *((_WORD *)a1 + 2);
    v28 = a1 + 8;
    v29 = 0;
    if ( v27 )
    {
      do
      {
        v30 = v27;
        if ( *v28 == 2
          || *v28 == 3
          || *v28 == 7
          || *v28 == 8
          || *v28 == 13
          || *v28 == 14
          || (unsigned int)*v28 - 15 <= 1 )
        {
          if ( v15 + *((unsigned __int16 *)v28 + 1) < v15 )
            goto LABEL_126;
          v15 += *((unsigned __int16 *)v28 + 1);
          if ( a8 )
          {
            *a8 |= 8u;
            v30 = *((_WORD *)a1 + 2);
          }
          if ( *a1 > v13 )
            v13 = *a1;
        }
        ++v29;
        v28 += *((unsigned __int16 *)v28 + 1);
        v27 = v30;
      }
      while ( v29 < v30 );
    }
    v9 = a3;
  }
  if ( a2 )
  {
    v16 = *((_WORD *)a2 + 2);
    v17 = a2 + 8;
    v18 = 0;
    if ( v16 )
    {
      do
      {
        v19 = v16;
        if ( *v17 == 17 )
        {
          if ( v15 + *((unsigned __int16 *)v17 + 1) < v15 )
            goto LABEL_126;
          v15 += *((unsigned __int16 *)v17 + 1);
          v19 = v16;
          if ( a8 )
          {
            *a8 |= 0x10u;
            v19 = *((_WORD *)a2 + 2);
          }
          if ( *a2 > v13 )
            v13 = *a2;
        }
        ++v18;
        v17 += *((unsigned __int16 *)v17 + 1);
        v16 = v19;
      }
      while ( v18 < v19 );
    }
  }
  if ( a5 )
  {
    v31 = *((_WORD *)a5 + 2);
    v32 = a5 + 8;
    v33 = 0;
    if ( v31 )
    {
      do
      {
        v34 = v31;
        if ( *v32 == 20 )
        {
          if ( v15 + *((unsigned __int16 *)v32 + 1) < v15 )
            goto LABEL_126;
          v15 += *((unsigned __int16 *)v32 + 1);
          v34 = v31;
          if ( a8 )
          {
            *a8 |= 0x80u;
            v34 = *((_WORD *)a5 + 2);
          }
          if ( *a5 > v13 )
            v13 = *a5;
        }
        ++v33;
        v32 += *((unsigned __int16 *)v32 + 1);
        v31 = v34;
      }
      while ( v33 < v34 );
    }
  }
  if ( a6 )
  {
    v35 = *((_WORD *)a6 + 2);
    v36 = a6 + 8;
    v37 = 0;
    if ( v35 )
    {
      do
      {
        v38 = v35;
        if ( *v36 == 21 )
        {
          if ( v15 + *((unsigned __int16 *)v36 + 1) < v15 )
            goto LABEL_126;
          v15 += *((unsigned __int16 *)v36 + 1);
          v38 = v35;
          if ( a8 )
          {
            *a8 |= 0x100u;
            v38 = *((_WORD *)a6 + 2);
          }
          if ( *a6 > v13 )
            v13 = *a6;
        }
        ++v37;
        v36 += *((unsigned __int16 *)v36 + 1);
        v35 = v38;
      }
      while ( v37 < v38 );
    }
  }
  if ( v9 )
  {
    v39 = *((_WORD *)v9 + 2);
    v40 = v9 + 8;
    v41 = 0;
    if ( v39 )
    {
      do
      {
        v42 = v39;
        if ( *v40 == 18 )
        {
          if ( v15 + *((unsigned __int16 *)v40 + 1) < v15 )
            goto LABEL_126;
          v15 += *((unsigned __int16 *)v40 + 1);
          v42 = v39;
          if ( a8 )
          {
            *a8 |= 0x20u;
            v42 = *((_WORD *)v9 + 2);
          }
          if ( *v9 > v13 )
            v13 = *v9;
        }
        ++v41;
        v40 += *((unsigned __int16 *)v40 + 1);
        v39 = v42;
      }
      while ( v41 < v42 );
    }
  }
  if ( a4 )
  {
    v43 = *((_WORD *)a4 + 2);
    v44 = a4 + 8;
    v45 = 0;
    if ( v43 )
    {
      do
      {
        v46 = v43;
        if ( *v44 == 19 )
        {
          if ( v15 + *((unsigned __int16 *)v44 + 1) < v15 )
            goto LABEL_126;
          v15 += *((unsigned __int16 *)v44 + 1);
          v46 = v43;
          if ( a8 )
          {
            *a8 |= 0x40u;
            v46 = *((_WORD *)a4 + 2);
          }
          if ( *a4 > v13 )
            v13 = *a4;
        }
        ++v45;
        v44 += *((unsigned __int16 *)v44 + 1);
        v43 = v46;
      }
      while ( v45 < v46 );
    }
  }
  if ( v15 + 3 < v15 )
  {
LABEL_126:
    v22 = -1073741675;
  }
  else
  {
    v20 = (v15 + 3) & 0xFFFFFFFC;
    Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v20);
    v12 = Heap;
    if ( Heap )
    {
      Acl = RtlCreateAcl(Heap, v20, v13);
      v22 = Acl;
      if ( Acl >= 0 )
      {
        if ( RtlFirstFreeAce(v12, &FirstFree) )
        {
          if ( a1 && (v47 = (unsigned __int16 *)(a1 + 8), v48 = 0, *((_WORD *)a1 + 2)) )
          {
            v23 = (char *)FirstFree;
            do
            {
              if ( *(_BYTE *)v47 == 2
                || *(_BYTE *)v47 == 3
                || *(_BYTE *)v47 == 7
                || *(_BYTE *)v47 == 8
                || *(_BYTE *)v47 == 13
                || *(_BYTE *)v47 == 14
                || (unsigned int)*(unsigned __int8 *)v47 - 15 <= 1 )
              {
                memmove(v23, v47, v47[1]);
                ++v12->AceCount;
                v23 += v47[1];
              }
              ++v48;
              v47 = (unsigned __int16 *)((char *)v47 + v47[1]);
            }
            while ( v48 < *((unsigned __int16 *)a1 + 2) );
            v22 = Acl;
          }
          else
          {
            v23 = (char *)FirstFree;
          }
          if ( a2 )
          {
            v24 = (unsigned __int16 *)(a2 + 8);
            for ( i = 0; i < *((unsigned __int16 *)a2 + 2); v24 = (unsigned __int16 *)((char *)v24 + *v26) )
            {
              v26 = v24 + 1;
              if ( *(_BYTE *)v24 == 17 )
              {
                memmove(v23, v24, *v26);
                ++v12->AceCount;
                v23 += *v26;
              }
              ++i;
            }
          }
          if ( a5 )
          {
            v49 = (unsigned __int16 *)(a5 + 8);
            for ( j = 0; j < *((unsigned __int16 *)a5 + 2); v49 = (unsigned __int16 *)((char *)v49 + *v51) )
            {
              v51 = v49 + 1;
              if ( *(_BYTE *)v49 == 20 )
              {
                memmove(v23, v49, *v51);
                ++v12->AceCount;
                v23 += *v51;
              }
              ++j;
            }
          }
          if ( a6 )
          {
            v52 = (unsigned __int16 *)(a6 + 8);
            for ( k = 0; k < *((unsigned __int16 *)a6 + 2); v52 = (unsigned __int16 *)((char *)v52 + *v54) )
            {
              v54 = v52 + 1;
              if ( *(_BYTE *)v52 == 21 )
              {
                memmove(v23, v52, *v54);
                ++v12->AceCount;
                v23 += *v54;
              }
              ++k;
            }
          }
          if ( a3 )
          {
            v55 = (unsigned __int16 *)(a3 + 8);
            for ( m = 0; m < *((unsigned __int16 *)a3 + 2); v55 = (unsigned __int16 *)((char *)v55 + *v57) )
            {
              v57 = v55 + 1;
              if ( *(_BYTE *)v55 == 18 )
              {
                memmove(v23, v55, *v57);
                ++v12->AceCount;
                v23 += *v57;
              }
              ++m;
            }
          }
          if ( a4 )
          {
            v58 = (unsigned __int16 *)(a4 + 8);
            if ( *((_WORD *)a4 + 2) )
            {
              do
              {
                v59 = v58 + 1;
                if ( *(_BYTE *)v58 == 19 )
                {
                  memmove(v23, v58, *v59);
                  ++v12->AceCount;
                  v23 += *v59;
                }
                ++v8;
                v58 = (unsigned __int16 *)((char *)v58 + *v59);
              }
              while ( v8 < *((unsigned __int16 *)a4 + 2) );
            }
          }
          goto LABEL_37;
        }
        v22 = -1073741699;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
      v12 = 0LL;
    }
    else
    {
      v22 = -1073741801;
    }
  }
LABEL_37:
  *a7 = v12;
  return v22;
}
