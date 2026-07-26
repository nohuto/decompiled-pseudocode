/*
 * XREFs of ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0002FE0
 * Callers:
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C00025B0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0023370 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0098440 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A354C (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00A41C4 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0003230 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z @ 0x1C0013B5C (-ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00CCC38 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisSortNetBufferLists(struct _NDIS_NBL_RCV_TRACKER *a1)
{
  struct _NET_BUFFER_LIST *v1; // rdi
  int v2; // esi
  char v3; // bp
  __int64 v4; // rax
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  struct _NET_BUFFER_LIST *v8; // r13
  struct _NET_BUFFER_LIST *Alignment; // r12
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rdx
  unsigned int v13; // ecx
  unsigned int v14; // r11d
  _WORD *v15; // rax
  unsigned int v16; // r10d
  __int64 v17; // r9
  __int64 v18; // rcx
  char *v19; // rdx
  _DWORD *v20; // rcx
  struct _NDIS_OBJECT_HEADER *v21; // rcx
  unsigned __int8 v22; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int16 v23; // [rsp+88h] [rbp+10h] BYREF
  struct _NDIS_OBJECT_HEADER *v24; // [rsp+90h] [rbp+18h]
  _QWORD *p_Alignment; // [rsp+98h] [rbp+20h]

  v1 = (struct _NET_BUFFER_LIST *)*((_QWORD *)a1 + 3);
  v2 = 0;
  v24 = *(struct _NDIS_OBJECT_HEADER **)a1;
  v3 = 0;
  v4 = *((_QWORD *)a1 + 1);
  *((_DWORD *)a1 + 172) = 0;
  v6 = 0;
  v7 = 0;
  p_Alignment = 0LL;
  v8 = 0LL;
  if ( *(_QWORD *)(v4 + 328) || (*((_DWORD *)a1 + 4) & 2) != 0 )
  {
    *((_QWORD *)a1 + 8) = v1;
    *((_QWORD *)a1 + 9) = *((_QWORD *)a1 + 4);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_DWORD *)a1 + 20) = *((_DWORD *)a1 + 11);
    return;
  }
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_WORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 20) = 0;
  v23 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      Alignment = (struct _NET_BUFFER_LIST *)v1->Link.Alignment;
      v1->Link.Alignment = 0LL;
      v10 = *(_QWORD *)a1;
      v22 = 0;
      if ( !ndisParseReceivedNBL(*(enum _NDIS_MEDIUM *)(v10 + 464), v1, &v23, &v22) )
      {
        if ( p_Alignment )
          *p_Alignment = v1;
        else
          v8 = v1;
        p_Alignment = &v1->Link.Alignment;
        ++*(_QWORD *)&v24[862].Type;
        goto LABEL_21;
      }
      v12 = *((_QWORD *)a1 + 1);
      if ( !v22 )
        goto LABEL_29;
      v11 = v23;
      if ( v2 != v23 )
        break;
      v14 = v6;
      if ( v3 == 1 )
        goto LABEL_11;
      LODWORD(v17) = 0;
LABEL_14:
      v19 = (char *)a1 + 40 * (unsigned int)v17;
      v20 = (_DWORD *)((char *)a1 + 40 * (unsigned int)v17 + 80);
      if ( *((_QWORD *)v19 + 8) )
      {
        **((_QWORD **)v19 + 9) = v1;
        ++*v20;
      }
      else
      {
        *((_QWORD *)v19 + 8) = v1;
        if ( (*((_DWORD *)a1 + 4) & 0x100) != 0 )
        {
          *((_QWORD *)v19 + 9) = 0LL;
          v1->Link.Alignment = (unsigned __int64)Alignment;
          *v20 = *((_DWORD *)a1 + 11);
LABEL_17:
          if ( v8 )
          {
            v21 = v24;
            if ( byte_1C00EC210 && (*(_DWORD *)&v24[1465] & 2) != 0 )
            {
              PktMonClientNblDropNdis((_DWORD)v24 + 5808, (_DWORD)v8, v11, 1, -1073676273, -536866810);
              v21 = v24;
            }
            if ( (*((_DWORD *)a1 + 4) & 2) == 0 )
              ndisReturnNetBufferListsInternal(v21, v8, *((_DWORD *)a1 + 4) & 1, 0LL);
          }
          return;
        }
        *v20 = 1;
      }
      *((_QWORD *)v19 + 9) = v1;
LABEL_21:
      v1 = Alignment;
      if ( !Alignment )
        goto LABEL_17;
    }
    v13 = *(_DWORD *)(v12 + 24);
    v14 = 0;
    v2 = v23;
    if ( v13 )
    {
      v15 = (_WORD *)(v12 + 32);
      while ( v23 != *v15 )
      {
        ++v14;
        v15 += 8;
        if ( v14 >= v13 )
          goto LABEL_28;
      }
      v6 = v14;
      v3 = 1;
LABEL_11:
      if ( *((_WORD *)a1 + 20 * v7 + 24) == v23 )
      {
        LODWORD(v17) = v7;
      }
      else
      {
        v16 = *((_DWORD *)a1 + 172);
        LODWORD(v17) = 1;
        if ( v16 )
        {
          while ( *((_WORD *)a1 + 20 * (unsigned int)v17 + 24) != v23 )
          {
            LODWORD(v17) = v17 + 1;
            if ( (unsigned int)v17 > v16 )
              goto LABEL_13;
          }
          v7 = v17;
        }
        else
        {
LABEL_13:
          v17 = v16 + 1;
          *((_DWORD *)a1 + 172) = v17;
          v18 = 5 * v17;
          *((_WORD *)a1 + 4 * v18 + 24) = v11;
          v7 = v16 + 1;
          *((_QWORD *)a1 + v18 + 7) = *(_QWORD *)(v12 + 16 * (v14 + 1LL) + 24);
          *((_QWORD *)a1 + v18 + 8) = 0LL;
        }
      }
      goto LABEL_14;
    }
LABEL_28:
    v3 = 0;
    v6 = 0;
LABEL_29:
    LODWORD(v17) = 0;
    goto LABEL_14;
  }
}
