/*
 * XREFs of LdrFindResource_U @ 0x140822980
 * Callers:
 *     FindBitmapResource @ 0x140B526E0 (FindBitmapResource.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x140755D10 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResource_U(__int64 a1, __int64 *a2, unsigned int a3, unsigned int **a4)
{
  return LdrpSearchResourceSection_U(a1, a2, a3, 0, a4);
}
