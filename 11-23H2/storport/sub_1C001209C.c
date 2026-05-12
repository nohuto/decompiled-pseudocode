/*
 * XREFs of sub_1C001209C @ 0x1C001209C
 * Callers:
 *     sub_1C0011FB8 @ 0x1C0011FB8 (sub_1C0011FB8.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C001250C @ 0x1C001250C (sub_1C001250C.c)
 *     sub_1C0012644 @ 0x1C0012644 (sub_1C0012644.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C003F124 @ 0x1C003F124 (sub_1C003F124.c)
 */

__int64 __fastcall sub_1C001209C(PVOID Context, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  ULONG Options; // r14d
  unsigned int v6; // eax
  unsigned int v7; // esi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart <= 6 )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 4) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003F0C4(off_1C0093070->AttachedDevice, 49LL, &unk_1C008A080, Context, Irp, Options);
    }
    if ( Options )
    {
      if ( Options != 1 )
      {
        v7 = -1073741823;
        goto LABEL_8;
      }
      v6 = sub_1C001250C(Context, Irp);
    }
    else
    {
      v6 = sub_1C0012644(Context, Irp);
    }
    v7 = v6;
LABEL_8:
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 4) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003F124(off_1C0093070->AttachedDevice, 50LL, &unk_1C008A080, Context, Irp, Options, v7);
    }
    return v7;
  }
  v7 = sub_1C0003440(Irp, 0, 0);
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 48LL, &unk_1C008A080, Context, Irp);
  }
  return v7;
}
