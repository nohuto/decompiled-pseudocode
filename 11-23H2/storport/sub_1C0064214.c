/*
 * XREFs of sub_1C0064214 @ 0x1C0064214
 * Callers:
 *     sub_1C0009BC0 @ 0x1C0009BC0 (sub_1C0009BC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0064214(struct _MDL **a1, ULONG a2, void *a3, KPROCESSOR_MODE a4)
{
  struct _MDL *Mdl; // rax

  Mdl = IoAllocateMdl(a3, a2, 0, 0, 0LL);
  *a1 = Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MmProbeAndLockPages(Mdl, a4, IoWriteAccess);
  return 0LL;
}
