/*
 * XREFs of LdrpFindMessageInAlternateModule @ 0x1800681E4
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180005938 (LdrpResSearchResourceMappedFile.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F218 (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023940 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpFindMessageInAlternateModule(
        unsigned __int64 a1,
        ULONG *a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5)
{
  char *v7; // rax
  __int64 result; // rax
  unsigned int *v9; // r8
  __int64 v10; // rdx
  char *v11; // [rsp+30h] [rbp+8h] BYREF

  v7 = (char *)a2;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !a5 )
  {
    result = LdrpAccessResourceDataNoMultipleLanguage(a1, a2, &v11, 0LL);
    if ( (int)result < 0 )
      return result;
    v7 = v11;
  }
  v9 = (unsigned int *)(v7 + 4);
  v10 = *(unsigned int *)v7;
  if ( a5 && 12 * v10 + 4 > a3 )
    return 3221225595LL;
  while ( (_DWORD)v10 )
  {
    LODWORD(v10) = v10 - 1;
    if ( a4 >= *v9 && a4 <= v9[1] )
      return 0LL;
    v9 += 3;
  }
  return 3221225737LL;
}
