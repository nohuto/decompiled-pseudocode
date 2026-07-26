/*
 * XREFs of ?ndisPcwSetRssInstanceSuffix@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C0134E24
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C0131930 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C0024614 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall ndisPcwSetRssInstanceSuffix(_UNICODE_STRING *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  BOOLEAN UnicodeString; // al
  int v5; // ecx
  WCHAR SourceString[264]; // [rsp+20h] [rbp-228h] BYREF

  result = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, (wchar_t *)L"RSS %u", *(unsigned int *)&a1[4].Length);
  v3 = result;
  if ( result >= 0 )
  {
    if ( RtlCreateUnicodeString(a1 + 6, SourceString) )
    {
      UnicodeString = RtlCreateUnicodeString(a1 + 7, SourceString);
      v5 = -1073741670;
      if ( UnicodeString )
        return v3;
      return v5;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
