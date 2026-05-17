/*
 * XREFs of RtlpRemoveArchDisallowedXStateFeatures @ 0x1800550C4
 * Callers:
 *     RtlGetExtendedContextLength2 @ 0x180054D00 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x180054DF0 (RtlInitializeExtendedContext2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpRemoveArchDisallowedXStateFeatures(int a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( (a1 & 0x10040) == 0x10040 )
  {
    result = 0x40000000000009FFLL;
  }
  else
  {
    result = 1048640LL;
    if ( (a1 & 0x100040) != 0x100040 )
      return result;
    result = 0x4000000000060DFFLL;
  }
  *a2 &= result;
  return result;
}
