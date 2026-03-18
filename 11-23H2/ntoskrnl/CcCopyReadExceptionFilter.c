/*
 * XREFs of CcCopyReadExceptionFilter @ 0x140537450
 * Callers:
 *     CcCopyBytesToUserBuffer @ 0x1402621B0 (CcCopyBytesToUserBuffer.c)
 *     CcCompleteAsyncRead @ 0x1402C1430 (CcCompleteAsyncRead.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcCopyReadExceptionFilter(int **a1, _DWORD *a2)
{
  int v2; // r8d

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 && (unsigned int)(*a1)[6] >= 3 )
    *a2 = (*a1)[12];
  return 1LL;
}
