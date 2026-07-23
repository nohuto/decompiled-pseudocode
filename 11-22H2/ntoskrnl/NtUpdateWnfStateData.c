/*
 * XREFs of NtUpdateWnfStateData @ 0x140712310
 * Callers:
 *     SepSecureBootCheckForUpdates @ 0x140B6DC20 (SepSecureBootCheckForUpdates.c)
 * Callees:
 *     ExpNtUpdateWnfStateData @ 0x14071234C (ExpNtUpdateWnfStateData.c)
 */

NTSTATUS __cdecl NtUpdateWnfStateData(
        PCWNF_STATE_NAME StateName,
        const void *Buffer,
        ULONG Length,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        WNF_CHANGE_STAMP MatchingChangeStamp,
        LOGICAL CheckStamp)
{
  return ExpNtUpdateWnfStateData(
           (_DWORD)StateName,
           (_DWORD)Buffer,
           Length,
           (_DWORD)TypeId,
           (__int64)ExplicitScope,
           MatchingChangeStamp,
           CheckStamp,
           1);
}
