/*
 * XREFs of sub_140797B54 @ 0x140797B54
 * Callers:
 *     sub_140790B38 @ 0x140790B38 (sub_140790B38.c)
 *     sub_140794F30 @ 0x140794F30 (sub_140794F30.c)
 *     sub_1409E448C @ 0x1409E448C (sub_1409E448C.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     bsearch @ 0x1403E1840 (bsearch.c)
 */

bool __fastcall sub_140797B54(__int64 a1, const void *a2)
{
  signed __int64 *v2; // rbx
  bool v5; // di

  v2 = (signed __int64 *)(a1 + 688);
  ExAcquirePushLockSharedEx(a1 + 688, 0LL);
  if ( *(_WORD *)(a1 + 1064) )
    v5 = bsearch(a2, *(const void **)(a1 + 1072), *(unsigned __int16 *)(a1 + 1064), 0x10uLL, sub_140883930) == 0LL;
  else
    v5 = 1;
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  sub_1402AFC00((ULONG_PTR)v2);
  return v5;
}
