/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x1409511E0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
