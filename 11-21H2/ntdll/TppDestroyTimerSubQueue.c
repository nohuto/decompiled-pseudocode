/*
 * XREFs of TppDestroyTimerSubQueue @ 0x18008712C
 * Callers:
 *     TppInitializeTimerQueue @ 0x180074B68 (TppInitializeTimerQueue.c)
 *     TppPoolpFree @ 0x18008701C (TppPoolpFree.c)
 * Callees:
 *     NtClose @ 0x1800A4250 (NtClose.c)
 */

NTSTATUS __fastcall TppDestroyTimerSubQueue(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax

  NtClose(*(HANDLE *)(a1 + 32));
  v2 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 96) = 0LL;
  result = NtClose(v2);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
