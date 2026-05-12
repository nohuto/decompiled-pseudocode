/*
 * XREFs of sub_1C00129D8 @ 0x1C00129D8
 * Callers:
 *     sub_1C0011BE0 @ 0x1C0011BE0 (sub_1C0011BE0.c)
 *     sub_1C001250C @ 0x1C001250C (sub_1C001250C.c)
 * Callees:
 *     sub_1C0004890 @ 0x1C0004890 (sub_1C0004890.c)
 *     sub_1C0012AE4 @ 0x1C0012AE4 (sub_1C0012AE4.c)
 *     sub_1C0012B64 @ 0x1C0012B64 (sub_1C0012B64.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C004B314 @ 0x1C004B314 (sub_1C004B314.c)
 */

__int64 __fastcall sub_1C00129D8(__int64 Context, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  int v5; // r14d
  DWORD LowPart; // esi
  unsigned int v7; // eax
  __int128 v9; // [rsp+70h] [rbp-48h] BYREF

  v9 = 0LL;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 53LL, &unk_1C008A080, Context, Irp);
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = *(_DWORD *)(Context + 492);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( byte_1C0093BE8 )
  {
    IoGetActivityIdIrp(Irp, &v9);
    if ( (byte_1C0093A02 & 0x10) != 0 )
      sub_1C004B314(
        Irp->Tail.Overlay.CurrentStackLocation,
        CurrentStackLocation->MinorFunction,
        (unsigned int)&v9,
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 96),
        *(_BYTE *)(Context + 97),
        *(_BYTE *)(Context + 98),
        (char)Irp,
        CurrentStackLocation->MinorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter,
        v5,
        LowPart,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength);
  }
  if ( LowPart == 4 )
    *(_DWORD *)(Context + 872) = 0;
  if ( sub_1C0004890(Context, 3) )
  {
    v7 = sub_1C0012AE4(Context, Irp);
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 4) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003EE1C(off_1C0093070->AttachedDevice, 54LL, &unk_1C008A080, v7);
    }
  }
  sub_1C0012B64((PVOID)Context, Irp);
  return 0LL;
}
