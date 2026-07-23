/*
 * XREFs of sub_1403AEF40 @ 0x1403AEF40
 * Callers:
 *     sub_1403AEF08 @ 0x1403AEF08 (sub_1403AEF08.c)
 * Callees:
 *     KeConnectInterruptForHal @ 0x1403AEFF0 (KeConnectInterruptForHal.c)
 *     KeInitializeInterrupt @ 0x1403AF060 (KeInitializeInterrupt.c)
 *     sub_1403AF2D8 @ 0x1403AF2D8 (sub_1403AF2D8.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1403AEF40(int a1, int a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int LockArray_high; // ebp
  __int64 v9; // rbx

  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v9 = sub_1403AF2D8(LockArray_high);
  if ( !v9 )
    KeBugCheckEx(0xACu, 0x120uLL, 3uLL, (ULONG_PTR)"minkernel\\hals\\lib\\interrupts\\common\\kintrupt.c", 0x190uLL);
  KeInitializeInterrupt(v9, a1, 0, 0, 0, a5, a2, a3, a3, 1, 0, LockArray_high);
  KeConnectInterruptForHal(v9);
  return v9;
}
