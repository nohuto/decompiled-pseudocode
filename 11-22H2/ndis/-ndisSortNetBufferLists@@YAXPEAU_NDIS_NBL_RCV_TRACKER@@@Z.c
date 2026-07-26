/*
 * XREFs of ?ndisSortNetBufferLists@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C0012970
 * Callers:
 *     ?ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0011EB0 (-ndisMTopReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0032490 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C009E310 (-ndisMDispatchReceiveNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ndisDoPeriodicReceivesIndication @ 0x1C00A9F54 (ndisDoPeriodicReceivesIndication.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00AAC30 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ?ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0012D74 (-ndisReturnNetBufferListsInternal@@YAXPEAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     PktMonClientNblDropNdis @ 0x1C00D3218 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisSortNetBufferLists(struct _NDIS_NBL_RCV_TRACKER *a1, __int64 a2, char *a3)
{
  __int64 v3; // rax
  struct _NDIS_OBJECT_HEADER *v4; // r11
  char v5; // r12
  __int64 *v6; // rsi
  int v8; // r9d
  int v9; // r13d
  _QWORD *v10; // r10
  unsigned __int16 v11; // di
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // r14d
  __int64 v16; // r15
  unsigned int v17; // ebp
  char *v18; // r8
  char *v19; // rax
  char v20; // al
  __int64 v21; // r10
  unsigned int v22; // ecx
  _WORD *v23; // rax
  __int64 v24; // rax
  char *v25; // rdx
  _DWORD *v26; // rcx
  unsigned int v27; // r9d
  __int64 v28; // rdx
  _QWORD *v29; // [rsp+30h] [rbp-68h]
  __int64 *v30; // [rsp+38h] [rbp-60h]
  struct _NET_BUFFER_LIST *v31; // [rsp+40h] [rbp-58h]
  struct _NDIS_OBJECT_HEADER *v32; // [rsp+48h] [rbp-50h]
  unsigned __int16 v33; // [rsp+A0h] [rbp+8h]
  unsigned __int16 v34; // [rsp+A8h] [rbp+10h]
  int v35; // [rsp+B0h] [rbp+18h]
  unsigned int v36; // [rsp+B8h] [rbp+20h]

  v3 = *((_QWORD *)a1 + 1);
  v4 = *(struct _NDIS_OBJECT_HEADER **)a1;
  v5 = 0;
  v6 = (__int64 *)*((_QWORD *)a1 + 3);
  *((_DWORD *)a1 + 172) = 0;
  v8 = 0;
  v9 = 0;
  v35 = 0;
  v10 = 0LL;
  v36 = 0;
  v32 = v4;
  v29 = 0LL;
  v31 = 0LL;
  if ( *(_QWORD *)(v3 + 328) || (*((_DWORD *)a1 + 4) & 2) != 0 )
  {
    *((_QWORD *)a1 + 8) = v6;
    *((_QWORD *)a1 + 9) = *((_QWORD *)a1 + 4);
    *((_QWORD *)a1 + 7) = 0LL;
    *((_DWORD *)a1 + 20) = *((_DWORD *)a1 + 11);
    return;
  }
  *((_QWORD *)a1 + 7) = 0LL;
  v11 = 0;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_WORD *)a1 + 24) = 0;
  *((_DWORD *)a1 + 20) = 0;
  if ( !v6 )
    return;
  while ( 1 )
  {
    v12 = (__int64 *)*v6;
    *v6 = 0LL;
    v30 = v12;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 464LL) )
    {
      v11 = *((_WORD *)v6 + 100);
      goto LABEL_24;
    }
    v13 = v6[1];
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 40);
      v16 = *(unsigned int *)(v13 + 16);
      if ( v15 >= 0xE && v15 > (unsigned int)v16 )
      {
        v17 = v15 - v16;
        if ( v15 - (unsigned int)v16 >= 0xE )
          break;
      }
    }
LABEL_47:
    if ( v10 )
      *v10 = v6;
    else
      v31 = (struct _NET_BUFFER_LIST *)v6;
    ++*(_QWORD *)&v4[862].Type;
    v10 = v6;
    v29 = v6;
LABEL_51:
    v6 = v30;
    if ( !v30 )
      goto LABEL_54;
    v8 = v35;
  }
  if ( (*(_BYTE *)(v14 + 10) & 5) != 0 )
  {
    v18 = *(char **)(v14 + 24);
  }
  else
  {
    v19 = (char *)MmMapLockedPages((PMDL)v14, 0);
    v8 = v35;
    v18 = v19;
    v10 = v29;
    v4 = v32;
  }
  a3 = &v18[v16];
  HIBYTE(v34) = a3[12];
  LOBYTE(v34) = a3[13];
  v33 = *((_WORD *)a3 + 6);
  if ( v34 > 0x600u )
  {
    if ( v34 != 0x8100 )
      goto LABEL_18;
    if ( v15 >= 0x12 && v17 >= 0x12 )
    {
      v33 = *((_WORD *)a3 + 8);
LABEL_18:
      v11 = v33;
LABEL_24:
      v20 = 1;
      goto LABEL_25;
    }
    goto LABEL_47;
  }
  if ( v17 < 0x16 )
    goto LABEL_47;
  v20 = 0;
  if ( a3[14] == -86 && a3[15] == -86 && a3[16] == 3 )
  {
    v11 = *((_WORD *)a3 + 10);
    goto LABEL_24;
  }
LABEL_25:
  v21 = *((_QWORD *)a1 + 1);
  if ( !v20 )
    goto LABEL_34;
  if ( v8 == v11 )
  {
    v35 = v8;
    LODWORD(a3) = v9;
    if ( v5 == 1 )
      goto LABEL_39;
LABEL_34:
    LODWORD(v24) = 0;
  }
  else
  {
    v22 = *(_DWORD *)(v21 + 24);
    LODWORD(a3) = 0;
    v35 = v11;
    if ( !v22 )
    {
LABEL_33:
      v5 = 0;
      v9 = 0;
      goto LABEL_34;
    }
    v23 = (_WORD *)(v21 + 32);
    while ( v11 != *v23 )
    {
      LODWORD(a3) = (_DWORD)a3 + 1;
      v23 += 8;
      if ( (unsigned int)a3 >= v22 )
        goto LABEL_33;
    }
    v9 = (int)a3;
    v5 = 1;
LABEL_39:
    if ( *((_WORD *)a1 + 20 * v36 + 24) == v11 )
    {
      LODWORD(v24) = v36;
    }
    else
    {
      v27 = *((_DWORD *)a1 + 172);
      LODWORD(v24) = 1;
      if ( v27 )
      {
        while ( *((_WORD *)a1 + 20 * (unsigned int)v24 + 24) != v11 )
        {
          LODWORD(v24) = v24 + 1;
          if ( (unsigned int)v24 > v27 )
            goto LABEL_44;
        }
        v36 = v24;
      }
      else
      {
LABEL_44:
        v24 = v27 + 1;
        *((_DWORD *)a1 + 172) = v24;
        v28 = 5 * v24;
        *((_WORD *)a1 + 4 * v28 + 24) = v11;
        v36 = v27 + 1;
        *((_QWORD *)a1 + v28 + 7) = *(_QWORD *)(v21 + 16 * ((unsigned int)a3 + 1LL) + 24);
        *((_QWORD *)a1 + v28 + 8) = 0LL;
      }
    }
  }
  v25 = (char *)a1 + 40 * (unsigned int)v24;
  v26 = (_DWORD *)((char *)a1 + 40 * (unsigned int)v24 + 80);
  if ( *((_QWORD *)v25 + 8) )
  {
    v10 = v29;
    **((_QWORD **)v25 + 9) = v6;
    ++*v26;
    *((_QWORD *)v25 + 9) = v6;
    goto LABEL_51;
  }
  *((_QWORD *)v25 + 8) = v6;
  if ( (*((_DWORD *)a1 + 4) & 0x100) == 0 )
  {
    v10 = v29;
    *((_QWORD *)v25 + 9) = v6;
    *v26 = 1;
    goto LABEL_51;
  }
  *((_QWORD *)v25 + 9) = 0LL;
  *v6 = (__int64)v30;
  *v26 = *((_DWORD *)a1 + 11);
LABEL_54:
  if ( v31 )
  {
    if ( byte_1C00F5390 && (*(_DWORD *)&v4[1466] & 2) != 0 )
      PktMonClientNblDropNdis((_DWORD)v4 + 5808, (_DWORD)v31, (_DWORD)a3, 1, -1073676273, -536866810);
    if ( (*((_DWORD *)a1 + 4) & 2) == 0 )
      ndisReturnNetBufferListsInternal(v32, v31, *((_DWORD *)a1 + 4) & 1, 0LL);
  }
}
