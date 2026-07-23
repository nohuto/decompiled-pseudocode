/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x14036E610
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x1407F4E30 (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCDCC (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 */

ULONG RtlGetCurrentServiceSessionId(void)
{
  __int64 CurrentServerSilo; // rax
  _DWORD **v1; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( CurrentServerSilo )
    v1 = *(_DWORD ***)(CurrentServerSilo + 1488);
  else
    v1 = (_DWORD **)&PspHostSiloGlobals;
  return *v1[165];
}
