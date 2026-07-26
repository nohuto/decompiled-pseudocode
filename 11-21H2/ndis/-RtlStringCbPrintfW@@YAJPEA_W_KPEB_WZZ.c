/*
 * XREFs of ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002563C
 * Callers:
 *     ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C00338F8 (-ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z.c)
 *     ?ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEA_WI@Z @ 0x1C007702C (-ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEA_WI@Z.c)
 *     ndisWdfOpenConfigurationKey @ 0x1C011FC18 (ndisWdfOpenConfigurationKey.c)
 *     ?ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z @ 0x1C0129004 (-ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z @ 0x1C01290B4 (-ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z.c)
 *     ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C012918C (-ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C0129274 (-ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C013D850 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C002567C (RtlStringVPrintfWorkerW.c)
 */

NTSTATUS RtlStringCbPrintfW(wchar_t *a1, unsigned __int64 a2, wchar_t *a3, ...)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v3 = a2 >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
    return RtlStringVPrintfWorkerW(a1, v3, (size_t *)a3, a3, va);
  result = -1073741811;
  if ( v3 )
    *a1 = 0;
  return result;
}
