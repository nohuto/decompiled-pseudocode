/*
 * XREFs of sub_1C0011FB8 @ 0x1C0011FB8
 * Callers:
 *     sub_1C0011E40 @ 0x1C0011E40 (sub_1C0011E40.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C001209C @ 0x1C001209C (sub_1C001209C.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C003F124 @ 0x1C003F124 (sub_1C003F124.c)
 */

__int64 __fastcall sub_1C0011FB8(PVOID Context, PIRP Irp, __int64 a3)
{
  signed int v5; // eax
  int MinorFunction; // ebp
  unsigned int v7; // eax
  unsigned int v8; // edi
  unsigned int v10; // r8d

  LOBYTE(a3) = 1;
  v5 = sub_1C00071D4((__int64)Context, (__int64)Irp, a3);
  if ( v5 < 0 )
  {
    Irp->IoStatus.Information = 0LL;
    return sub_1C0003440(Irp, 0, v5);
  }
  else
  {
    MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 4) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003F0C4(off_1C0093070->AttachedDevice, 45LL, &unk_1C008A080, Context, Irp, MinorFunction);
    }
    if ( MinorFunction == 2 )
    {
      v7 = sub_1C001209C(Context, Irp);
    }
    else
    {
      if ( MinorFunction == 3 )
      {
        if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
          && (HIDWORD(off_1C0093070->Timer) & 4) != 0
          && BYTE1(off_1C0093070->Timer) >= 4u )
        {
          sub_1C003F074(off_1C0093070->AttachedDevice, 47LL, &unk_1C008A080, Context, Irp);
        }
        v10 = 0;
      }
      else
      {
        v10 = -1073741637;
      }
      v7 = sub_1C0003440(Irp, 0, v10);
    }
    v8 = v7;
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 4) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003F124(off_1C0093070->AttachedDevice, 46LL, &unk_1C008A080, Context, Irp, MinorFunction, v7);
    }
    sub_1C000729C((__int64)Context);
    return v8;
  }
}
