/*
 * XREFs of sub_1C005DA08 @ 0x1C005DA08
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C003EF0C @ 0x1C003EF0C (sub_1C003EF0C.c)
 *     sub_1C0060C18 @ 0x1C0060C18 (sub_1C0060C18.c)
 */

__int64 __fastcall sub_1C005DA08(__int64 a1, IRP *a2)
{
  unsigned int v3; // eax
  struct _IRP *MasterIrp; // rax
  __int64 MdlAddress_low; // rdx

  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 0x10 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp )
    {
      MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
      if ( (unsigned int)MdlAddress_low <= 1 )
      {
        if ( HIDWORD(MasterIrp->MdlAddress) == 0x80000000 )
          v3 = sub_1C0060C18(a1, MdlAddress_low, a1);
        else
          v3 = -1073741637;
        goto LABEL_17;
      }
    }
    else if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
           && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
           && BYTE1(off_1C0093070->Timer) >= 2u )
    {
      sub_1C003EF0C((__int64)off_1C0093070->AttachedDevice, 0x35u, (__int64)&unk_1C0083530, a1);
    }
    v3 = -1073741811;
    goto LABEL_17;
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
    && BYTE1(off_1C0093070->Timer) >= 2u )
  {
    sub_1C003EF0C((__int64)off_1C0093070->AttachedDevice, 0x34u, (__int64)&unk_1C0083530, a1);
  }
  v3 = -1073741820;
LABEL_17:
  a2->IoStatus.Information = 0LL;
  return sub_1C0003440(a2, 0, v3);
}
