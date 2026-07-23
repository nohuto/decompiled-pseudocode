/*
 * XREFs of sub_14071EDD4 @ 0x14071EDD4
 * Callers:
 *     sub_140721910 @ 0x140721910 (sub_140721910.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1406BC164 @ 0x1406BC164 (sub_1406BC164.c)
 */

BOOLEAN __fastcall sub_14071EDD4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9

  ExAcquireFastMutexUnsafe(&stru_140C493C0);
  v6 = *(_QWORD *)(a1 + 16);
  if ( v6 == a1 + 16 || (unsigned __int16)*(_DWORD *)(v6 + 56) != 3 )
  {
    ExReleaseFastMutexUnsafe(&stru_140C493C0);
    return sub_1406BC164(a1, a2, a3);
  }
  else
  {
    ExReleaseFastMutexUnsafe(&stru_140C493C0);
    return 1;
  }
}
