/*
 * XREFs of RtlFindMessage @ 0x140755780
 * Callers:
 *     PiGetDefaultMessageString @ 0x140848E70 (PiGetDefaultMessageString.c)
 *     IopInitializeBootLogging @ 0x140945048 (IopInitializeBootLogging.c)
 *     ExpSystemErrorHandler2 @ 0x140AAAFC0 (ExpSystemErrorHandler2.c)
 *     ResFwFindMessage @ 0x140AED0A8 (ResFwFindMessage.c)
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     RtlpFindMessageInTable @ 0x1402F722C (RtlpFindMessageInTable.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     LdrpAccessResourceData @ 0x14075583C (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x140755F00 (LdrpSearchResourceSection_U.c)
 */

NTSTATUS __cdecl RtlFindMessage(
        PVOID DllHandle,
        ULONG MessageTableId,
        ULONG MessageLanguageId,
        ULONG MessageId,
        PMESSAGE_RESOURCE_ENTRY *MessageEntry)
{
  NTSTATUS result; // eax
  __int64 v8; // [rsp+38h] [rbp-38h] BYREF
  int *v9; // [rsp+40h] [rbp-30h]
  _QWORD v10[4]; // [rsp+48h] [rbp-28h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v10[0] = MessageTableId;
  v10[2] = MessageLanguageId;
  v10[1] = 1LL;
  v10[3] = MessageId;
  result = LdrpSearchResourceSection_U((_DWORD)DllHandle, (unsigned int)v10, 4, 64, (__int64)&v8);
  if ( result >= 0 )
  {
    result = LdrpAccessResourceData(DllHandle);
    if ( result >= 0 )
      return RtlpFindMessageInTable(v9, 0, MessageId, (unsigned __int16 **)MessageEntry);
  }
  return result;
}
