/*
 * XREFs of AslRegistryGetUInt32 @ 0x1800533B0
 * Callers:
 *     SdbpGetMergeSdbsDisabled @ 0x180052484 (SdbpGetMergeSdbsDisabled.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslRegistryGetUInt32_UStr @ 0x180098BDC (AslRegistryGetUInt32_UStr.c)
 */

__int64 __fastcall AslRegistryGetUInt32(__int64 a1, __int64 a2)
{
  NTSTATUS inited; // eax
  unsigned int v5; // ebx
  NTSTATUS v7; // [rsp+20h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  inited = RtlInitUnicodeStringEx(&DestinationString, L"DisableDoubleQuerySdbs");
  v5 = inited;
  if ( inited >= 0 )
  {
    return (unsigned int)AslRegistryGetUInt32_UStr(a1, a2, &DestinationString);
  }
  else
  {
    v7 = inited;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryGetUInt32",
      986,
      (unsigned int)"RtlInitUnicodeStringEx failed [%x]",
      v7);
  }
  return v5;
}
