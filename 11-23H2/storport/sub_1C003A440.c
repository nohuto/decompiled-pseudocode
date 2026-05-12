/*
 * XREFs of sub_1C003A440 @ 0x1C003A440
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C003576C @ 0x1C003576C (sub_1C003576C.c)
 */

__int64 __fastcall sub_1C003A440(__int64 a1, IRP *a2)
{
  struct _IRP *MasterIrp; // rdx
  unsigned int v4; // eax

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 0x20
    && (MasterIrp = a2->AssociatedIrp.MasterIrp) != 0LL
    && *(_DWORD *)&MasterIrp->Type == 32
    && *(_DWORD *)(&MasterIrp->Size + 1) >= 0x20u )
  {
    v4 = sub_1C003576C(a1, (__int64)MasterIrp, (__int64)a2);
  }
  else
  {
    v4 = -1073741811;
  }
  return sub_1C0003440(a2, 0, v4);
}
