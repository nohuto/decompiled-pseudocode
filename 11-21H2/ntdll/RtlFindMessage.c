/*
 * XREFs of RtlFindMessage @ 0x180035010
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFindMessageInTable @ 0x1800350CC (RtlpFindMessageInTable.c)
 *     LdrpAccessResourceData @ 0x180038740 (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x180040060 (LdrpSearchResourceSection_U.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  NTSTATUS result; // eax
  unsigned int v8; // [rsp+30h] [rbp-48h]
  _QWORD v9[6]; // [rsp+38h] [rbp-40h] BYREF

  v9[2] = MessageTableId;
  v9[4] = MessageLanguageId;
  v9[3] = 1LL;
  v9[5] = MessageId;
  result = LdrpSearchResourceSection_U(DllHandle, (__int64)v9);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData(DllHandle);
    if ( result >= 0 )
      return RtlpFindMessageInTable(v9[1], v8, MessageId, MessageEntry);
  }
  return result;
}
