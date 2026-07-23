/*
 * XREFs of FsRtlMupGetProviderIdFromName @ 0x14092E210
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

NTSTATUS __stdcall FsRtlMupGetProviderIdFromName(PCUNICODE_STRING pProviderName, PULONG32 pProviderId)
{
  if ( qword_140D3B158 )
    return sub_14042A5E0(pProviderName, pProviderId);
  else
    return -1073741637;
}
