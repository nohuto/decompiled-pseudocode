/*
 * XREFs of RtlULongLongMult @ 0x180094794
 * Callers:
 *     SdbpResolveMatchingFile @ 0x180096BF8 (SdbpResolveMatchingFile.c)
 *     AslStringDuplicate @ 0x180098DC8 (AslStringDuplicate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  v4 = a1 * a2;
  result = 0LL;
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = v4;
  }
  else
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
  return result;
}
