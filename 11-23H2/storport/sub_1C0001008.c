/*
 * XREFs of sub_1C0001008 @ 0x1C0001008
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C00067B0 @ 0x1C00067B0 (sub_1C00067B0.c)
 *     sub_1C0006B40 @ 0x1C0006B40 (sub_1C0006B40.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall sub_1C0001008(union _SLIST_HEADER *a1)
{
  __int128 *v2; // rax
  PSLIST_ENTRY v3; // rax
  __int64 v4; // rcx
  struct _SLIST_ENTRY *Next; // rdx
  char *v6; // rax
  union _SLIST_HEADER *v7; // rdx
  union _SLIST_HEADER **Region; // rcx
  union _SLIST_HEADER **v9; // rax
  union _SLIST_HEADER *v10; // rbx
  ULONG v11; // r9d
  struct _SLIST_ENTRY *v12; // rdx
  struct _SLIST_ENTRY *v13; // r8
  _QWORD *Alignment; // rax
  __int64 v15; // r10
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rax
  __int128 v19; // [rsp+20h] [rbp-10h] BYREF

  v19 = 0LL;
  LOWORD(v2) = ExQueryDepthSList(a1 + 6);
  if ( (_WORD)v2 )
  {
    *((_QWORD *)&v19 + 1) = &v19;
    *(_QWORD *)&v19 = &v19;
    v3 = ExpInterlockedFlushSList(a1 + 6);
    if ( v3 )
    {
      while ( 1 )
      {
        v4 = v19;
        Next = v3->Next;
        v6 = (char *)(&v3[-1].Next + 1);
        if ( *(__int128 **)(v19 + 8) != &v19 )
          break;
        *(_QWORD *)v6 = v19;
        *((_QWORD *)v6 + 1) = &v19;
        *(_QWORD *)(v4 + 8) = v6;
        *(_QWORD *)&v19 = v6;
        v6[20] &= ~2u;
        v3 = Next;
        if ( !Next )
          goto LABEL_5;
      }
LABEL_7:
      __fastfail(3u);
    }
LABEL_5:
    v2 = &v19;
    if ( (__int128 *)v19 != &v19 )
    {
      v7 = a1 + 8;
      Region = (union _SLIST_HEADER **)a1[8].Region;
      if ( *(union _SLIST_HEADER **)(a1[8].Alignment + 8) != &a1[8] )
        goto LABEL_7;
      if ( *Region != v7 )
        goto LABEL_7;
      if ( *(__int128 **)(v19 + 8) != &v19 )
        goto LABEL_7;
      if ( **((__int128 ***)&v19 + 1) != &v19 )
        goto LABEL_7;
      *Region = (union _SLIST_HEADER *)&v19;
      v9 = (union _SLIST_HEADER **)*((_QWORD *)&v19 + 1);
      a1[8].Region = *((_QWORD *)&v19 + 1);
      *v9 = v7;
      v2 = (__int128 *)v19;
      *((_QWORD *)&v19 + 1) = Region;
      if ( *(__int128 **)(v19 + 8) != &v19 || *Region != (union _SLIST_HEADER *)&v19 )
        goto LABEL_7;
      *Region = (union _SLIST_HEADER *)v19;
      *((_QWORD *)v2 + 1) = Region;
    }
  }
  v10 = a1 + 8;
  if ( (union _SLIST_HEADER *)v10->Alignment != v10 )
  {
    LOWORD(v2) = ExQueryDepthSList(a1 + 7);
    if ( !(_WORD)v2 )
    {
      v11 = 0;
      v12 = 0LL;
      v13 = 0LL;
      while ( 1 )
      {
        Alignment = (_QWORD *)v10->Alignment;
        if ( (union _SLIST_HEADER *)v10->Alignment == v10 || v11 >= 0x40 )
          break;
        v15 = *Alignment;
        if ( *(_QWORD **)(*Alignment + 8LL) != Alignment )
          goto LABEL_7;
        v16 = (_QWORD *)Alignment[1];
        if ( (_QWORD *)*v16 != Alignment )
          goto LABEL_7;
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        *((_BYTE *)Alignment + 20) |= 2u;
        v17 = ((unsigned __int64)Alignment + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v13 )
          v13->Next = (struct _SLIST_ENTRY *)v17;
        else
          v12 = (struct _SLIST_ENTRY *)v17;
        v13 = (struct _SLIST_ENTRY *)v17;
        ++v11;
      }
      v13->Next = 0LL;
      LOWORD(v2) = (unsigned __int16)InterlockedPushListSList(a1 + 7, v12, v13, v11);
    }
  }
  return (__int16)v2;
}
