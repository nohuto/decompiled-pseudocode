/*
 * XREFs of NtRIMSetTestModeStatus @ 0x1C01810B0
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetTestModeStatus @ 0x1C017F320 (RIMSetTestModeStatus.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0209104 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMSetTestModeStatus(int a1)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMSetTestModeStatus(a1);
  else
    return 3221225506LL;
}
