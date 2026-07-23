/*
 * XREFs of AslPathToSystemPath @ 0x140A555D8
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x140A4EDB8 (SdbpGetManifestedMergeStubAlloc.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x1406D4A28 (AslStringDuplicate.c)
 *     AslPathToSystemPathBuf @ 0x140A55698 (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall AslPathToSystemPath(wchar_t **a1, const wchar_t *a2)
{
  int v3; // ebx
  wchar_t pszDest[264]; // [rsp+30h] [rbp-228h] BYREF

  *a1 = 0LL;
  pszDest[0] = 0;
  v3 = AslPathToSystemPathBuf(pszDest, 0x104uLL, a2);
  if ( v3 < 0 || (v3 = AslStringDuplicate(a1, pszDest), v3 < 0) )
    AslLogCallPrintf(1LL);
  else
    return 0;
  return (unsigned int)v3;
}
