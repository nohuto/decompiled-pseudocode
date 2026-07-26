/*
 * XREFs of ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x1C0028AA0
 * Callers:
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C0118600 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C011866C (-ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C013AAA8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     GetModuleServiceName @ 0x1C0141548 (GetModuleServiceName.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 RtlUnicodeStringPrintf(struct _UNICODE_STRING *a1, const wchar_t *a2, ...)
{
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  unsigned int v5; // ebx
  size_t v6; // rsi
  int v7; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, a2);
  Length = a1->Length;
  if ( (Length & 1) != 0 )
    return (unsigned int)-1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( Length > MaximumLength )
    return (unsigned int)-1073741811;
  if ( MaximumLength == 0xFFFF )
    return (unsigned int)-1073741811;
  v5 = 0;
  if ( !a1->Buffer && (Length || MaximumLength) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v6 = (unsigned __int64)a1->MaximumLength >> 1;
    v7 = _vsnwprintf(a1->Buffer, v6, a2, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      LOWORD(v7) = v6;
      v5 = -2147483643;
    }
    a1->Length = 2 * v7;
  }
  return v5;
}
