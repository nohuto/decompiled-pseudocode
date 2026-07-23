/*
 * XREFs of AlpcGetCompletionListLastMessageInformation @ 0x1800EB060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl AlpcGetCompletionListLastMessageInformation(
        PVOID CompletionList,
        PULONG LastMessageId,
        PULONG LastCallbackId)
{
  *LastMessageId = *((_DWORD *)CompletionList + 18);
  *LastCallbackId = *((_DWORD *)CompletionList + 19);
}
