/*
 * XREFs of ?ndisFakeFilterReceiveHandler@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0065540
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP6AX20K@Z@Z @ 0x1C0013054 (-ndisInvokeNextReceiveCompleteHandler@@YAXPEAU_NET_BUFFER_LIST@@KPEAU_NDIS_OBJECT_HEADER@@1PEAXP.c)
 *     PktMonClientNblDropNdis @ 0x1C00D3238 (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisFakeFilterReceiveHandler(void *a1, struct _NET_BUFFER_LIST *a2, int a3, __int64 a4, char a5)
{
  __int64 v7; // r8
  unsigned int v8; // edx

  if ( byte_1C00F5390 && (*((_DWORD *)a1 + 210) & 2) != 0 )
    PktMonClientNblDropNdis((_DWORD)a1 + 784, (_DWORD)a2, a3, 1, -1071448033, -536866814);
  if ( (a5 & 2) == 0 )
  {
    v7 = *((_QWORD *)a1 + 15);
    v8 = a5 & 1;
    if ( v7 )
      ndisInvokeNextReceiveCompleteHandler(
        a2,
        v8,
        (struct _NDIS_FILTER_BLOCK *)v7,
        *(struct _NDIS_FILTER_BLOCK **)(v7 + 552),
        *(void **)(v7 + 536),
        *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(v7 + 528));
    else
      ndisInvokeNextReceiveCompleteHandler(
        a2,
        v8,
        *((struct _NDIS_FILTER_BLOCK **)a1 + 4),
        *(struct _NDIS_FILTER_BLOCK **)(*((_QWORD *)a1 + 4) + 2544LL),
        *(void **)(*((_QWORD *)a1 + 4) + 2528LL),
        *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int))(*((_QWORD *)a1 + 4) + 2640LL));
  }
}
