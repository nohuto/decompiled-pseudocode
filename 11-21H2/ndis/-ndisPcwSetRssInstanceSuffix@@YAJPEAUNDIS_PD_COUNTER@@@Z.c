/*
 * XREFs of ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C012918C
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C0125D70 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002563C (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ndisPcwSetRssInstanceSuffix(_UNICODE_STRING *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  bool v4; // zf
  WCHAR SourceString[264]; // [rsp+20h] [rbp-228h] BYREF

  result = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, (wchar_t *)L"RSS %u", *(unsigned int *)&a1[4].Length);
  v3 = result;
  if ( result >= 0 )
  {
    if ( !RtlCreateUnicodeString(a1 + 6, SourceString) )
      return -1073741670;
    v4 = RtlCreateUnicodeString(a1 + 7, SourceString) == 0;
    result = v3;
    if ( v4 )
      return -1073741670;
  }
  return result;
}
