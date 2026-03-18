/*
 * XREFs of PlaySndClient_midl_user_free @ 0x1C025A210
 * Callers:
 *     PlaySoundPostMessage @ 0x1C03775FC (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall PlaySndClient_midl_user_free(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
