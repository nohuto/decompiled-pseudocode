/*
 * XREFs of PfSnLogHelper @ 0x1407E5390
 * Callers:
 *     PfSnLogVolumeCreate @ 0x1406CE4C4 (PfSnLogVolumeCreate.c)
 *     PfSnLogStreamCreate @ 0x1407E5234 (PfSnLogStreamCreate.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     PfSnReferenceProcessTrace @ 0x1402CD7F0 (PfSnReferenceProcessTrace.c)
 *     PfSnTraceGetLogEntry @ 0x14036669C (PfSnTraceGetLogEntry.c)
 *     PfSnFailProcessTrace @ 0x1407F8C9C (PfSnFailProcessTrace.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnLogHelper(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // rbx
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rdi

  v5 = 0LL;
  v6 = PfSnReferenceProcessTrace(a1);
  v7 = v6;
  if ( v6 )
  {
    if ( (int)PfSnTraceGetLogEntry((__int64)v6, a2, a3) < 0 )
    {
      PfSnFailProcessTrace(v7);
      ExReleaseRundownProtection(v7 + 45);
    }
    else
    {
      return v7;
    }
  }
  return (struct _EX_RUNDOWN_REF *)v5;
}
