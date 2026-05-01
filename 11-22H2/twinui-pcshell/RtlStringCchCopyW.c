/*
 * XREFs of RtlStringCchCopyW @ 0x1800EF3EC
 * Callers:
 *     AslpEnvResolveVars @ 0x1800EDEB0 (AslpEnvResolveVars.c)
 *     AslStringDuplicate @ 0x1800EF328 (AslStringDuplicate.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1800EF45C (RtlStringCopyWorkerW.c)
 */

__int64 RtlStringCchCopyW(_WORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
    return RtlStringCopyWorkerW(a1, a2, a3, a3);
  result = 3221225485LL;
  if ( a2 )
    *a1 = 0;
  return result;
}
