/*
 * XREFs of sub_1C00042F0 @ 0x1C00042F0
 * Callers:
 *     sub_1C000152C @ 0x1C000152C (sub_1C000152C.c)
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C001A278 @ 0x1C001A278 (sub_1C001A278.c)
 * Callees:
 *     sub_1C0006A3C @ 0x1C0006A3C (sub_1C0006A3C.c)
 *     sub_1C0006BCC @ 0x1C0006BCC (sub_1C0006BCC.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C00215F4 @ 0x1C00215F4 (sub_1C00215F4.c)
 *     sub_1C0023A9C @ 0x1C0023A9C (sub_1C0023A9C.c)
 *     sub_1C007896C @ 0x1C007896C (sub_1C007896C.c)
 */

char *__fastcall sub_1C00042F0(__int64 a1, char a2)
{
  _QWORD *v2; // r14
  char *v3; // rdi
  PSLIST_ENTRY v6; // rax
  __int64 v7; // rcx
  struct _SLIST_ENTRY *Next; // rdx
  char *v9; // rax
  __int128 *v10; // rdx
  __int128 **v11; // rcx
  __int128 **v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rdi
  ULONG v15; // r9d
  struct _SLIST_ENTRY *v16; // r10
  struct _SLIST_ENTRY *v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  PSLIST_ENTRY EntrySList; // rax
  char *v23; // r12
  char v24; // si
  __int64 v25; // rdx
  __int64 v26; // r14
  unsigned int v27; // esi
  unsigned int i; // r11d
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // r10
  __int64 v32; // r9
  int v33; // ecx
  int v34; // ecx
  unsigned __int64 v35; // rcx
  unsigned __int8 v36; // bp
  unsigned int v37; // esi
  unsigned int j; // r10d
  __int64 v39; // rcx
  unsigned __int64 v40; // r8
  __int64 v41; // r11
  __int64 v42; // r9
  int v43; // ecx
  int v44; // ecx
  unsigned __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rbp
  __int64 v48; // r14
  unsigned int v49; // eax
  bool v50; // zf
  __int64 v51; // rcx
  char **v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  int v55; // eax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // rcx
  __int128 v60; // [rsp+40h] [rbp-38h] BYREF
  __int64 v61; // [rsp+80h] [rbp+8h]

  v2 = (_QWORD *)(a1 + 144);
  v3 = *(char **)(a1 + 144);
  if ( v3 == (char *)(a1 + 144) )
  {
    if ( !ExQueryDepthSList((PSLIST_HEADER)(a1 + 112)) )
    {
      v60 = 0LL;
      if ( ExQueryDepthSList((PSLIST_HEADER)(a1 + 96)) )
      {
        *((_QWORD *)&v60 + 1) = &v60;
        *(_QWORD *)&v60 = &v60;
        v6 = ExpInterlockedFlushSList((PSLIST_HEADER)(a1 + 96));
        if ( v6 )
        {
          while ( 1 )
          {
            v7 = v60;
            Next = v6->Next;
            v9 = (char *)(&v6[-1].Next + 1);
            if ( *(__int128 **)(v60 + 8) != &v60 )
              break;
            *(_QWORD *)v9 = v60;
            *((_QWORD *)v9 + 1) = &v60;
            *(_QWORD *)(v7 + 8) = v9;
            *(_QWORD *)&v60 = v9;
            v9[20] &= ~2u;
            v6 = Next;
            if ( !Next )
              goto LABEL_7;
          }
LABEL_89:
          __fastfail(3u);
        }
LABEL_7:
        if ( (__int128 *)v60 != &v60 )
        {
          v10 = (__int128 *)(a1 + 128);
          v11 = *(__int128 ***)(a1 + 136);
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) != a1 + 128 )
            goto LABEL_89;
          if ( *v11 != v10 )
            goto LABEL_89;
          if ( *(__int128 **)(v60 + 8) != &v60 )
            goto LABEL_89;
          if ( **((__int128 ***)&v60 + 1) != &v60 )
            goto LABEL_89;
          *v11 = &v60;
          v12 = (__int128 **)*((_QWORD *)&v60 + 1);
          *(_QWORD *)(a1 + 136) = *((_QWORD *)&v60 + 1);
          *v12 = v10;
          v13 = v60;
          *((_QWORD *)&v60 + 1) = v11;
          if ( *(__int128 **)(v60 + 8) != &v60 || *v11 != &v60 )
            goto LABEL_89;
          *v11 = (__int128 *)v60;
          *(_QWORD *)(v13 + 8) = v11;
        }
      }
      v14 = (_QWORD *)(a1 + 128);
      if ( (_QWORD *)*v14 != v14 && !ExQueryDepthSList((PSLIST_HEADER)(a1 + 112)) )
      {
        v15 = 0;
        v16 = 0LL;
        v17 = 0LL;
        while ( 1 )
        {
          v18 = (_QWORD *)*v14;
          if ( (_QWORD *)*v14 == v14 || v15 >= 0x40 )
            break;
          v19 = *v18;
          if ( *(_QWORD **)(*v18 + 8LL) != v18 )
            goto LABEL_89;
          v20 = (_QWORD *)v18[1];
          if ( (_QWORD *)*v20 != v18 )
            goto LABEL_89;
          *v20 = v19;
          *(_QWORD *)(v19 + 8) = v20;
          *((_BYTE *)v18 + 20) |= 2u;
          v21 = ((unsigned __int64)v18 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v17 )
          {
            v17->Next = (struct _SLIST_ENTRY *)v21;
            ++v15;
            v17 = (struct _SLIST_ENTRY *)v21;
          }
          else
          {
            v16 = (struct _SLIST_ENTRY *)v21;
            v17 = (struct _SLIST_ENTRY *)v21;
            ++v15;
          }
        }
        v17->Next = 0LL;
        InterlockedPushListSList((PSLIST_HEADER)(a1 + 112), v16, v17, v15);
      }
    }
    if ( !ExQueryDepthSList((PSLIST_HEADER)(a1 + 112)) )
      return 0LL;
    EntrySList = FirstEntrySList((PSLIST_HEADER)(a1 + 112));
    v3 = 0LL;
    if ( EntrySList )
      v3 = (char *)(&EntrySList[-1].Next + 1);
  }
  v23 = v3;
  if ( !v3 )
    return v23;
  if ( !v3[22] && a2 )
    ++*(_DWORD *)(a1 + 32);
  v24 = v3[22] ^ (v3[22] ^ (16 * a2)) & 0x10;
  v3[22] = v24;
  if ( (v24 & 0x40) != 0 )
  {
    v61 = *((_QWORD *)v3 + 8);
    v25 = *(_QWORD *)(v61 + 8);
    if ( *(_BYTE *)(v25 + 2) != 40 )
    {
      v36 = *(_BYTE *)(v25 + 10);
      v26 = v25 + 72;
      goto LABEL_69;
    }
    v26 = 0LL;
    if ( !*(_DWORD *)(v25 + 20) )
    {
      v27 = *(_DWORD *)(v25 + 56);
      for ( i = 0; i < v27; ++i )
      {
        v29 = *(unsigned int *)(v25 + 4LL * i + 120);
        if ( (unsigned int)v29 < 0x80 )
          continue;
        v30 = *(unsigned int *)(v25 + 16);
        if ( (unsigned int)v29 >= (unsigned int)v30 )
          continue;
        v31 = v29 + v25;
        v32 = (unsigned int)v29;
        v33 = *(_DWORD *)(v29 + v25) - 64;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            if ( v34 == 1 && v32 + 40 <= v30 )
            {
              v26 = v31 + 32;
              if ( !*(_DWORD *)(v31 + 12) )
                v26 = 0LL;
              break;
            }
            continue;
          }
          v35 = v32 + 56;
        }
        else
        {
          v35 = v32 + 40;
        }
        if ( v35 <= v30 )
        {
          if ( *(_BYTE *)(v31 + 10) )
            v26 = v31 + 24;
          break;
        }
      }
    }
    v36 = 0;
    if ( !*(_DWORD *)(v25 + 20) )
    {
      v37 = *(_DWORD *)(v25 + 56);
      for ( j = 0; j < v37; ++j )
      {
        v39 = *(unsigned int *)(v25 + 4LL * j + 120);
        if ( (unsigned int)v39 < 0x80 )
          continue;
        v40 = *(unsigned int *)(v25 + 16);
        if ( (unsigned int)v39 >= (unsigned int)v40 )
          continue;
        v41 = v39 + v25;
        v42 = (unsigned int)v39;
        v43 = *(_DWORD *)(v39 + v25) - 64;
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( v44 )
          {
            if ( v44 == 1 && v42 + 40 <= v40 )
              break;
            continue;
          }
          v45 = v42 + 56;
        }
        else
        {
          v45 = v42 + 40;
        }
        if ( v45 <= v40 )
        {
          v36 = *(_BYTE *)(v41 + 10);
          break;
        }
      }
    }
LABEL_69:
    v46 = *(_QWORD *)(*(_QWORD *)(v61 + 40) + 64LL);
    v47 = sub_1C007896C(v26, v36);
    v48 = (unsigned int)sub_1C0023A9C(v46, v47);
    v49 = RtlInterlockedSetClearRun(v46 + 3360, v48, 1LL);
    if ( v49 == 1 )
    {
      v50 = (v3[22] & 0xBF) == 0;
      v3[22] &= ~0x40u;
      if ( v50 )
        --*(_DWORD *)(a1 + 32);
    }
    if ( (qword_1C0093468 & 0x1000) != 0 )
      sub_1C0019E4C(*(_QWORD *)(v46 + 24), 48, v47, v48, *(unsigned __int8 *)(*(_QWORD *)(v46 + 3352) + v48), v49, 0LL);
    v2 = (_QWORD *)(a1 + 144);
  }
  if ( (unsigned int)sub_1C0006A3C(a1, v3) )
    return 0LL;
  if ( (_QWORD *)*v2 == v2 )
  {
    ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 112));
  }
  else
  {
    v51 = *(_QWORD *)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 )
      goto LABEL_89;
    v52 = (char **)*((_QWORD *)v3 + 1);
    if ( *v52 != v3 )
      goto LABEL_89;
    *v52 = (char *)v51;
    *(_QWORD *)(v51 + 8) = v52;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), 2uLL);
  sub_1C0006BCC(a1, v3);
  v3[20] &= 0xFCu;
  v55 = ((__int64)*(unsigned int *)(a1 + 88) >> 1) & 0x7FFFFFFF;
  if ( v55 > *(_DWORD *)(a1 + 184) )
    *(_DWORD *)(a1 + 184) = v55;
  if ( (v3[22] & 1) != 0 )
    *(_BYTE *)(a1 + 38) = 1;
  if ( (v3[22] & 0x20) != 0 )
  {
    v56 = (_QWORD *)sub_1C00215F4(v3, v53, v54);
    v57 = *v56;
    if ( *(_QWORD **)(*v56 + 8LL) != v56 )
      goto LABEL_89;
    v58 = (_QWORD *)v56[1];
    if ( (_QWORD *)*v58 != v56 )
      goto LABEL_89;
    *v58 = v57;
    *(_QWORD *)(v57 + 8) = v58;
  }
  return v23;
}
