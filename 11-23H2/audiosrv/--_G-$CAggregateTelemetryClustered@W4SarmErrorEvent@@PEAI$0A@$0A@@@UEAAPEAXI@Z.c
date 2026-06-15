/*
 * XREFs of ??_G?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x180137730
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     ??1?$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x180137664 (--1-$CAggregateTelemetryClustered@W4SarmErrorEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 */

void *__fastcall CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SarmErrorEvent,unsigned int *,0,0>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
