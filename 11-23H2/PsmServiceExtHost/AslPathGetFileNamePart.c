/*
 * XREFs of AslPathGetFileNamePart @ 0x180053234
 * Callers:
 *     SdbGetMergeRedirectPath @ 0x180051604 (SdbGetMergeRedirectPath.c)
 *     SdbGetMergeStubPath @ 0x180051A70 (SdbGetMergeStubPath.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall AslPathGetFileNamePart(const wchar_t *a1)
{
  wchar_t *v2; // rax

  v2 = wcsrchr(a1, 0x5Cu);
  if ( v2 )
    return v2 + 1;
  else
    return a1;
}
