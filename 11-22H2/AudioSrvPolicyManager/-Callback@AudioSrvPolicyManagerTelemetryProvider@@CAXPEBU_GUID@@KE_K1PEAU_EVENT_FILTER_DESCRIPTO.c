/*
 * XREFs of ?Callback@AudioSrvPolicyManagerTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x18001C640
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180002610 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 */

void __fastcall AudioSrvPolicyManagerTelemetryProvider::Callback(const struct _GUID *a1, int a2)
{
  __int64 v2[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    v2[0] = (__int64)off_18004E7D8;
    v2[7] = (__int64)v2;
    QueueGenericWorkItem(v2);
  }
}
