/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x1407DF730
 * Callers:
 *     sub_1406AE49C @ 0x1406AE49C (sub_1406AE49C.c)
 *     sub_1406AF0D4 @ 0x1406AF0D4 (sub_1406AF0D4.c)
 *     sub_1407DF140 @ 0x1407DF140 (sub_1407DF140.c)
 *     sub_1407DF200 @ 0x1407DF200 (sub_1407DF200.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  struct _KTHREAD *CurrentThread; // r8
  BOOLEAN v2; // bl
  bool v3; // zf

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  v2 = (*((_BYTE *)CurrentThread + 1384) & 0x40) != 0;
  *((_BYTE *)CurrentThread + 1384) ^= (*((_BYTE *)CurrentThread + 1384) ^ (Prefetching << 6)) & 0x40;
  v3 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v3 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return v2;
}
