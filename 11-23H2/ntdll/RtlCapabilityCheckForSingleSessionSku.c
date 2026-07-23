/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x180089A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsMultiSessionSku @ 0x180009B60 (RtlIsMultiSessionSku.c)
 *     RtlCapabilityCheck @ 0x180011760 (RtlCapabilityCheck.c)
 */

__int64 __fastcall RtlCapabilityCheckForSingleSessionSku(
        HANDLE TokenHandle,
        PUNICODE_STRING CapabilityName,
        PBOOLEAN HasCapability)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( HasCapability )
  {
    if ( RtlIsMultiSessionSku() )
      *HasCapability = 0;
    else
      return (unsigned int)RtlCapabilityCheck(TokenHandle, CapabilityName, HasCapability);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
