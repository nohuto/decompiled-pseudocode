/*
 * XREFs of sub_14094FC28 @ 0x14094FC28
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_14076FAB0 @ 0x14076FAB0 (sub_14076FAB0.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     sub_140944C08 @ 0x140944C08 (sub_140944C08.c)
 *     sub_14094F804 @ 0x14094F804 (sub_14094F804.c)
 *     sub_14094F96C @ 0x14094F96C (sub_14094F96C.c)
 */

void __fastcall sub_14094FC28(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  LOBYTE(v3) = 0;
  ExAcquireFastMutex(&stru_140C44960);
  *(_DWORD *)(a1 + 568) = 1;
  LODWORD(a1) = _InterlockedExchangeAdd(&dword_140C449B0, 0xFFFFFFFF);
  KeReleaseGuardedMutex(&stru_140C44960);
  if ( (_DWORD)a1 == 1 )
  {
    if ( (int)sub_14094F96C((__int64)&v3) >= 0 && (_BYTE)v3 )
    {
      sub_140944C08((__int128 *)sub_140014AC0, 2, 0LL, 0LL);
      sub_14094F804();
    }
    else
    {
      sub_140944C08(&xmmword_140014AB0, 2, 0LL, 0LL);
    }
    KeReleaseSemaphore(&stru_140C449C0, 0, 1, 0);
  }
}
