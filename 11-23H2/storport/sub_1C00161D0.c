/*
 * XREFs of sub_1C00161D0 @ 0x1C00161D0
 * Callers:
 *     sub_1C0007B00 @ 0x1C0007B00 (sub_1C0007B00.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00076F4 @ 0x1C00076F4 (sub_1C00076F4.c)
 *     sub_1C00140E4 @ 0x1C00140E4 (sub_1C00140E4.c)
 *     sub_1C00143F8 @ 0x1C00143F8 (sub_1C00143F8.c)
 *     sub_1C0016374 @ 0x1C0016374 (sub_1C0016374.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003275C @ 0x1C003275C (sub_1C003275C.c)
 *     sub_1C003285C @ 0x1C003285C (sub_1C003285C.c)
 *     sub_1C003746C @ 0x1C003746C (sub_1C003746C.c)
 *     sub_1C0037500 @ 0x1C0037500 (sub_1C0037500.c)
 *     sub_1C0039ED0 @ 0x1C0039ED0 (sub_1C0039ED0.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C003F124 @ 0x1C003F124 (sub_1C003F124.c)
 *     sub_1C00A127C @ 0x1C00A127C (sub_1C00A127C.c)
 *     sub_1C00A13F0 @ 0x1C00A13F0 (sub_1C00A13F0.c)
 *     sub_1C00A6450 @ 0x1C00A6450 (sub_1C00A6450.c)
 *     sub_1C00A73E4 @ 0x1C00A73E4 (sub_1C00A73E4.c)
 *     sub_1C00A7DD8 @ 0x1C00A7DD8 (sub_1C00A7DD8.c)
 *     sub_1C00A7E78 @ 0x1C00A7E78 (sub_1C00A7E78.c)
 *     sub_1C00A81A4 @ 0x1C00A81A4 (sub_1C00A81A4.c)
 *     sub_1C00A82EC @ 0x1C00A82EC (sub_1C00A82EC.c)
 *     sub_1C00A85AC @ 0x1C00A85AC (sub_1C00A85AC.c)
 */

__int64 __fastcall sub_1C00161D0(__int64 Context, PIRP Irp)
{
  char v4; // r14
  int v5; // edx
  signed int v6; // esi
  unsigned int MinorFunction; // ebp
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // esi
  __int64 v13; // rcx
  __int128 v14; // [rsp+40h] [rbp-58h] BYREF
  __int128 v15; // [rsp+50h] [rbp-48h] BYREF

  v14 = 0LL;
  v4 = 0;
  v6 = sub_1C00076F4(Context);
  MinorFunction = Irp->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( byte_1C0093BE8 )
  {
    IoGetActivityIdIrp(Irp, &v14);
    if ( MinorFunction > 0x16 || (v9 = 4718720, !_bittest(&v9, MinorFunction)) )
    {
      if ( (byte_1C0093A02 & 0x20) != 0 )
        sub_1C003285C(v8, v5, (unsigned int)&v14, (_DWORD)Irp, MinorFunction, 0, *(_QWORD *)(Context + 8));
    }
  }
  if ( v6 < 0 )
  {
    if ( v6 != -1073741738 || MinorFunction != 2 && MinorFunction != 20 || *(_DWORD *)(Context + 88) != 5 )
    {
      Irp->IoStatus.Information = 0LL;
      return sub_1C0003440(Irp, 0, v6);
    }
  }
  else
  {
    v4 = 1;
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 12LL, &unk_1C0083210, Context, Irp, MinorFunction);
  }
  if ( MinorFunction > 7 )
  {
    switch ( MinorFunction )
    {
      case 8u:
        v10 = sub_1C0037500(Context, Irp);
        break;
      case 9u:
        v10 = sub_1C00A13F0(Context, Irp);
        break;
      case 0xDu:
        v10 = sub_1C00A73E4(Context, Irp);
        break;
      case 0x13u:
        if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x20) != 0 )
          sub_1C003285C(
            Irp->Tail.Overlay.CurrentStackLocation,
            v5,
            (unsigned int)&v14,
            (_DWORD)Irp,
            MinorFunction,
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
            *(_QWORD *)(Context + 8));
        v10 = sub_1C003746C(Context, Irp);
        break;
      case 0x14u:
        v10 = sub_1C00A127C(Context, Irp);
        break;
      case 0x16u:
        if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x20) != 0 )
          sub_1C003285C(
            Irp->Tail.Overlay.CurrentStackLocation,
            v5,
            (unsigned int)&v14,
            (_DWORD)Irp,
            MinorFunction,
            Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options,
            *(_QWORD *)(Context + 8));
        v10 = sub_1C00143F8(Context, Irp);
        break;
      case 0x17u:
        v4 = 0;
        v10 = sub_1C00A85AC(Context, Irp);
        break;
      default:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 296));
        v4 = 0;
        if ( byte_1C0093BE8 )
        {
          v15 = 0LL;
          IoGetActivityIdIrp(Irp, &v15);
          if ( (byte_1C0093A02 & 0x20) != 0 )
            sub_1C003275C(v13, &unk_1C0083220, &v15, Irp, Irp->IoStatus.Status);
        }
        v10 = sub_1C00140E4(*(struct _DEVICE_OBJECT **)(Context + 24), Irp);
        break;
    }
    goto LABEL_14;
  }
  if ( MinorFunction == 7 )
  {
    if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x20) != 0 )
      sub_1C003285C(
        Irp->Tail.Overlay.CurrentStackLocation,
        v5,
        (unsigned int)&v14,
        (_DWORD)Irp,
        7,
        Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
        *(_QWORD *)(Context + 8));
    v10 = sub_1C0016374(Context, Irp);
    goto LABEL_14;
  }
  if ( MinorFunction )
  {
    switch ( MinorFunction )
    {
      case 1u:
        v10 = sub_1C00A7DD8(Context, Irp);
        break;
      case 2u:
        v4 = 0;
        v10 = sub_1C00A81A4(Context, Irp);
        break;
      case 3u:
        goto LABEL_46;
      case 4u:
        v10 = sub_1C00A82EC(Context, Irp);
        break;
      case 5u:
        v10 = sub_1C00A7E78(Context, Irp);
        break;
      default:
LABEL_46:
        v10 = sub_1C00A6450(Context, Irp);
        break;
    }
  }
  else
  {
    v10 = sub_1C0039ED0((PVOID)Context, Irp);
  }
LABEL_14:
  v11 = v10;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F124(off_1C0093070->AttachedDevice, 13LL, &unk_1C0083210, Context, Irp, MinorFunction, v10);
  }
  if ( v4 )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 296));
  return v11;
}
