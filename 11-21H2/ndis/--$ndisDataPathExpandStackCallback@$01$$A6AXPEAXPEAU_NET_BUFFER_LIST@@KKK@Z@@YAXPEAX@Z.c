/*
 * XREFs of ??$ndisDataPathExpandStackCallback@$01$$A6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z@@YAXPEAX@Z @ 0x1C0039300
 * Callers:
 *     <none>
 * Callees:
 *     ??$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@AEAKAEAKAEAK@@YAXAEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z0AEAPEAU0@AEAK55@Z @ 0x1C00349DC (--$ndisCallNextDatapathHandler@$01AEAPEAXAEAP6AXPEAXPEAU_NET_BUFFER_LIST@@KKK@ZAEAPEAXAEAPEAU1@A.c)
 */

void __fastcall ndisDataPathExpandStackCallback<2,void (void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long)>(
        void *a1)
{
  ndisCallNextDatapathHandler<2,void * &,void (*&)(void *,_NET_BUFFER_LIST *,unsigned long,unsigned long,unsigned long),void * &,_NET_BUFFER_LIST * &,unsigned long &,unsigned long &,unsigned long &>(
    (struct _NDIS_FILTER_BLOCK **)a1,
    (__int64)a1 + 16,
    (__int64)a1 + 8,
    (__int64)a1 + 24,
    (int *)a1 + 8,
    (int *)a1 + 9,
    (int *)a1 + 10);
}
