/*
 * XREFs of sub_1406A2630 @ 0x1406A2630
 * Callers:
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall sub_1406A2630(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v3; // rcx
  void *v4; // rcx
  struct _KTHREAD *v5; // rax
  bool v6; // zf

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v3 = *(void **)a1;
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *(_QWORD *)a1 = 0LL;
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v5 = KeGetCurrentThread();
  v6 = (*((_WORD *)v5 + 242))++ == 0xFFFF;
  if ( v6 && *((struct _KTHREAD **)v5 + 19) != (struct _KTHREAD *)((char *)v5 + 152) && !*((_WORD *)v5 + 243) )
    LOBYTE(v5) = KiCheckForKernelApcDelivery();
  return (char)v5;
}
