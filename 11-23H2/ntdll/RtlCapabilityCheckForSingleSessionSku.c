/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x180089A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlIsMultiSessionSku @ 0x180009B60 (RtlIsMultiSessionSku.c)
 *     RtlCapabilityCheck @ 0x180011760 (RtlCapabilityCheck.c)
 */

__int64 __fastcall RtlCapabilityCheckForSingleSessionSku(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a3 )
  {
    if ( RtlIsMultiSessionSku(a1, a2, (__int64)a3, a4) )
      *a3 = 0;
    else
      return (unsigned int)RtlCapabilityCheck(a1, a2, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
