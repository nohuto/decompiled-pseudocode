/*
 * XREFs of sub_1C0020E68 @ 0x1C0020E68
 * Callers:
 *     sub_1C00A3D2C @ 0x1C00A3D2C (sub_1C00A3D2C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0020E68(__int64 a1, void *a2, ULONG a3)
{
  struct _MDL *Mdl; // rax

  Mdl = IoAllocateMdl(a2, a3, 0, 0, 0LL);
  *(_QWORD *)(a1 + 104) = Mdl;
  if ( !Mdl )
    return 3221225495LL;
  *(_BYTE *)(a1 + 16) |= 1u;
  MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
  return 0LL;
}
