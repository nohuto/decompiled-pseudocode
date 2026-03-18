/*
 * XREFs of IopAllocateIrpWithExtension @ 0x14028FDC0
 * Callers:
 *     IoAllocateIrp @ 0x14022E610 (IoAllocateIrp.c)
 *     IopAllocateIrpExReturn @ 0x14022EF70 (IopAllocateIrpExReturn.c)
 *     IoAllocateIrpEx @ 0x140310FB0 (IoAllocateIrpEx.c)
 *     IopMountVolume @ 0x1407014E8 (IopMountVolume.c)
 *     IopInitializeReserveIrps @ 0x140B6DDB8 (IopInitializeReserveIrps.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14022EFA0 (IopAllocateIrpPrivate.c)
 *     IopIsActivityTracingEnabled @ 0x1402902B0 (IopIsActivityTracingEnabled.c)
 *     IopInitActivityIdIrp @ 0x140555724 (IopInitActivityIdIrp.c)
 */

PSLIST_ENTRY __fastcall IopAllocateIrpWithExtension(__int64 a1, char a2, char a3)
{
  PSLIST_ENTRY IrpPrivate; // rax
  PSLIST_ENTRY v4; // rbx
  __int64 v5; // rcx

  IrpPrivate = IopAllocateIrpPrivate(0LL, a2 + 2, a3);
  v4 = IrpPrivate;
  if ( IrpPrivate )
  {
    *((_QWORD *)&IrpPrivate[11].Next + 1) -= 144LL;
    v5 = *((_QWORD *)&IrpPrivate[11].Next + 1);
    BYTE3(IrpPrivate[4].Next) -= 2;
    BYTE2(IrpPrivate[4].Next) -= 2;
    *((_QWORD *)&IrpPrivate[12].Next + 1) = v5;
    if ( (unsigned __int8)IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(v4);
  }
  return v4;
}
