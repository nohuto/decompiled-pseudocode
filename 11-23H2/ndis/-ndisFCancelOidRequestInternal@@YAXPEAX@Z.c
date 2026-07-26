/*
 * XREFs of ?ndisFCancelOidRequestInternal@@YAXPEAX@Z @ 0x1C0064CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1C009EECC (-ndisCancelOidRequestInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 */

void __fastcall ndisFCancelOidRequestInternal(PVOID Parameter)
{
  ndisCancelOidRequestInternal(
    *(struct _NDIS_MINIPORT_BLOCK **)(*((_QWORD *)Parameter + 1) + 32LL),
    *((struct _NDIS_FILTER_BLOCK **)Parameter + 1),
    *((void **)Parameter + 3),
    0);
}
