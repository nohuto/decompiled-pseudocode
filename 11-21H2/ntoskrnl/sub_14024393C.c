/*
 * XREFs of sub_14024393C @ 0x14024393C
 * Callers:
 *     sub_140243648 @ 0x140243648 (sub_140243648.c)
 *     sub_1402436C8 @ 0x1402436C8 (sub_1402436C8.c)
 *     sub_1403DAB6C @ 0x1403DAB6C (sub_1403DAB6C.c)
 *     sub_1405E0320 @ 0x1405E0320 (sub_1405E0320.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 */

KIRQL __fastcall sub_14024393C(__int64 a1, KIRQL *a2)
{
  KIRQL result; // al
  struct _KTHREAD *CurrentThread; // rax

  if ( *(_DWORD *)a1 )
  {
    result = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
    *a2 = result;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    *a2 = 0;
    --*((_WORD *)CurrentThread + 243);
    return ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  }
  return result;
}
