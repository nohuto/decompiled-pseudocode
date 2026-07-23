/*
 * XREFs of RtlFindMessage @ 0x18002AD90
 * Callers:
 *     <none>
 * Callees:
 *     LdrpAccessResourceData @ 0x180022C2C (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 *     RtlpFindMessageInTable @ 0x18002AE4C (RtlpFindMessageInTable.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
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
  unsigned __int64 v9[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10[4]; // [rsp+48h] [rbp-30h] BYREF

  v10[0] = MessageTableId;
  v10[2] = MessageLanguageId;
  v10[1] = 1LL;
  v10[3] = MessageId;
  result = LdrpSearchResourceSection_U((unsigned __int64)DllHandle, v10, 4u, 0x40u, v9);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData((unsigned __int64)DllHandle, v9[0]);
    if ( result >= 0 )
      return RtlpFindMessageInTable(v9[1], v8, MessageId, MessageEntry);
  }
  return result;
}
