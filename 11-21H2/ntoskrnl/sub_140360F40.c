/*
 * XREFs of sub_140360F40 @ 0x140360F40
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x1402A3D50 (ExCleanupAutoExpandPushLock.c)
 *     sub_1407E0F30 @ 0x1407E0F30 (sub_1407E0F30.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_140360FD4 @ 0x140360FD4 (sub_140360FD4.c)
 */

char __fastcall sub_140360F40(unsigned int a1)
{
  __int64 v1; // r8
  unsigned int v2; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // rcx
  struct _KTHREAD *v5; // rax

  v1 = (a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v2, v1);
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140C10DA8 + 8LL * (v2 - 2)) + 8 * (v1 ^ (unsigned int)(1 << v2)) + 8)
                 + 16LL);
  --*((_WORD *)CurrentThread + 243);
  sub_140360FD4(v4);
  v5 = KeGetCurrentThread();
  if ( (*((_WORD *)v5 + 243))++ == 0xFFFF )
  {
    v5 = (struct _KTHREAD *)((char *)v5 + 152);
    if ( *(struct _KTHREAD **)v5 != v5 )
      LOBYTE(v5) = KiCheckForKernelApcDelivery();
  }
  return (char)v5;
}
