/*
 * XREFs of NdisWdfQuerySingleInstance @ 0x1C0060860
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x1C0025FE0 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 */

__int64 __fastcall NdisWdfQuerySingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct tagWNODE_SINGLE_INSTANCE *a3,
        unsigned int a4,
        unsigned int *a5)
{
  return ndisWmiQuerySingleInstance(a1, a2, a3, a4, a5);
}
