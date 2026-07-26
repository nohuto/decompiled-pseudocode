/*
 * XREFs of ?ndisFIndicateOffloadChange@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAXK@Z @ 0x1C008B414
 * Callers:
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001C790 (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001CC90 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C008B348 (-ndisFAllocateFilterOffload@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 */

char __fastcall ndisFIndicateOffloadChange(struct _NDIS_FILTER_BLOCK *a1, unsigned __int16 *Src, unsigned int a3)
{
  char v5; // bl
  _NDIS_FILTER_TASK_OFFLOAD *Offload; // rcx
  size_t v7; // rsi

  v5 = 1;
  if ( a3 < 0x70 || *(_BYTE *)Src != 0xA7 || Src[1] < 0x70u || !*((_BYTE *)Src + 1) )
    return 0;
  Offload = a1->Offload;
  v7 = 216LL;
  if ( Offload )
  {
    memset(Offload, 0, sizeof(_NDIS_FILTER_TASK_OFFLOAD));
  }
  else if ( (unsigned int)ndisFAllocateFilterOffload(a1) )
  {
    return 0;
  }
  if ( Src[1] < 0xD8u )
    v7 = Src[1];
  memmove(a1->Offload, Src, v7);
  return v5;
}
