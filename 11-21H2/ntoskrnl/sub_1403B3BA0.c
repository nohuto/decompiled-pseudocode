/*
 * XREFs of sub_1403B3BA0 @ 0x1403B3BA0
 * Callers:
 *     HalStartNextProcessor @ 0x1403B2F30 (HalStartNextProcessor.c)
 *     sub_1403B3AE0 @ 0x1403B3AE0 (sub_1403B3AE0.c)
 *     sub_1403BAB70 @ 0x1403BAB70 (sub_1403BAB70.c)
 *     sub_1403BC388 @ 0x1403BC388 (sub_1403BC388.c)
 *     HalEnumerateProcessors @ 0x1403DD110 (HalEnumerateProcessors.c)
 *     HalStartDynamicProcessor @ 0x140508D60 (HalStartDynamicProcessor.c)
 *     sub_14050E490 @ 0x14050E490 (sub_14050E490.c)
 *     sub_14051FFF8 @ 0x14051FFF8 (sub_14051FFF8.c)
 *     sub_140822FF8 @ 0x140822FF8 (sub_140822FF8.c)
 *     sub_140A557A0 @ 0x140A557A0 (sub_140A557A0.c)
 *     sub_140A5B2F8 @ 0x140A5B2F8 (sub_140A5B2F8.c)
 *     sub_140A5B400 @ 0x140A5B400 (sub_140A5B400.c)
 *     sub_140A629D4 @ 0x140A629D4 (sub_140A629D4.c)
 *     sub_140A63680 @ 0x140A63680 (sub_140A63680.c)
 *     sub_140AF866C @ 0x140AF866C (sub_140AF866C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 */

__int64 sub_1403B3BA0()
{
  __int64 result; // rax
  int v1; // ett
  unsigned __int32 MaximumProcessorCount; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int32 Data; // [rsp+60h] [rbp+20h] BYREF
  ULONG ResultDataSize; // [rsp+68h] [rbp+28h] BYREF
  ULONG Type; // [rsp+70h] [rbp+30h] BYREF

  ResultDataSize = 0;
  Type = 0;
  Data = 0;
  DestinationString = 0LL;
  _m_prefetchw(&dword_140CF75C4);
  LODWORD(result) = dword_140CF75C4;
  do
  {
    v1 = result;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140CF75C4, result, result);
  }
  while ( v1 != (_DWORD)result );
  if ( !(_DWORD)result )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    if ( MaximumProcessorCount > 0x800 )
      MaximumProcessorCount = 2048;
    RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) >= 0
      && ResultDataSize == 4
      && Type == 4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      Data *= *((_DWORD *)CurrentPrcb + 38) * *((_DWORD *)CurrentPrcb + 39);
      if ( MaximumProcessorCount > Data )
        MaximumProcessorCount = Data;
    }
    result = MaximumProcessorCount;
    _InterlockedExchange(&dword_140CF75C4, MaximumProcessorCount);
  }
  return result;
}
