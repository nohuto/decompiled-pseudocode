/*
 * XREFs of RtlFindMessage @ 0x140758920
 * Callers:
 *     sub_1408523B4 @ 0x1408523B4 (sub_1408523B4.c)
 *     sub_1409346B0 @ 0x1409346B0 (sub_1409346B0.c)
 *     sub_140A6CC50 @ 0x140A6CC50 (sub_140A6CC50.c)
 *     sub_140AAE860 @ 0x140AAE860 (sub_140AAE860.c)
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 * Callees:
 *     sub_1402D79D4 @ 0x1402D79D4 (sub_1402D79D4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14075717C @ 0x14075717C (sub_14075717C.c)
 *     sub_14075883C @ 0x14075883C (sub_14075883C.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  NTSTATUS result; // eax
  int v8; // [rsp+30h] [rbp-40h] BYREF
  char *v9; // [rsp+38h] [rbp-38h] BYREF
  int *v10; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11[4]; // [rsp+48h] [rbp-28h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v8 = 0;
  v11[0] = MessageTableId;
  v11[2] = MessageLanguageId;
  v11[1] = 1LL;
  v11[3] = MessageId;
  result = sub_14075717C((char *)DllHandle, v11, 4u, 64, &v9);
  if ( result >= 0 )
  {
    result = sub_14075883C((unsigned __int64)DllHandle, (unsigned int *)v9, (unsigned __int64 *)&v10, &v8);
    if ( result >= 0 )
      return sub_1402D79D4(v10, v8, MessageId, (unsigned __int16 **)MessageEntry);
  }
  return result;
}
