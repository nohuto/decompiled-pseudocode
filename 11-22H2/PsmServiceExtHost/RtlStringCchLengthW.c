/*
 * XREFs of RtlStringCchLengthW @ 0x180090038
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x180051804 (SdbGetMergeRedirectPath.c)
 *     AslStringDuplicate @ 0x180099128 (AslStringDuplicate.c)
 *     AslStringReplace @ 0x1800993B4 (AslStringReplace.c)
 *     AslPathCombine @ 0x18009DD0C (AslPathCombine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchLengthW(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  if ( !a1 )
  {
    result = 3221225485LL;
LABEL_12:
    if ( a3 )
      *a3 = 0LL;
    return result;
  }
  v3 = a2;
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( v3 )
      *a3 = a2 - v3;
    else
      *a3 = 0LL;
  }
  if ( !v3 )
    goto LABEL_12;
  return result;
}
