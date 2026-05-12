/*
 * XREFs of sub_1C0007400 @ 0x1C0007400
 * Callers:
 *     sub_1C0006C10 @ 0x1C0006C10 (sub_1C0006C10.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00072E0 @ 0x1C00072E0 (sub_1C00072E0.c)
 *     sub_1C00076F4 @ 0x1C00076F4 (sub_1C00076F4.c)
 *     sub_1C0007D58 @ 0x1C0007D58 (sub_1C0007D58.c)
 *     sub_1C00140E4 @ 0x1C00140E4 (sub_1C00140E4.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C00327CC @ 0x1C00327CC (sub_1C00327CC.c)
 *     sub_1C003408C @ 0x1C003408C (sub_1C003408C.c)
 *     sub_1C003411C @ 0x1C003411C (sub_1C003411C.c)
 *     sub_1C0036230 @ 0x1C0036230 (sub_1C0036230.c)
 *     sub_1C0036360 @ 0x1C0036360 (sub_1C0036360.c)
 *     sub_1C0036528 @ 0x1C0036528 (sub_1C0036528.c)
 *     sub_1C0036834 @ 0x1C0036834 (sub_1C0036834.c)
 *     sub_1C0036948 @ 0x1C0036948 (sub_1C0036948.c)
 *     sub_1C0036A40 @ 0x1C0036A40 (sub_1C0036A40.c)
 *     sub_1C0036B68 @ 0x1C0036B68 (sub_1C0036B68.c)
 *     sub_1C0036E74 @ 0x1C0036E74 (sub_1C0036E74.c)
 *     sub_1C003704C @ 0x1C003704C (sub_1C003704C.c)
 *     sub_1C0037340 @ 0x1C0037340 (sub_1C0037340.c)
 *     sub_1C00377A4 @ 0x1C00377A4 (sub_1C00377A4.c)
 *     sub_1C0038368 @ 0x1C0038368 (sub_1C0038368.c)
 *     sub_1C0038644 @ 0x1C0038644 (sub_1C0038644.c)
 *     sub_1C003869C @ 0x1C003869C (sub_1C003869C.c)
 *     sub_1C0038718 @ 0x1C0038718 (sub_1C0038718.c)
 *     sub_1C0039528 @ 0x1C0039528 (sub_1C0039528.c)
 *     sub_1C0039604 @ 0x1C0039604 (sub_1C0039604.c)
 *     sub_1C003A38C @ 0x1C003A38C (sub_1C003A38C.c)
 *     sub_1C003A440 @ 0x1C003A440 (sub_1C003A440.c)
 *     sub_1C003A494 @ 0x1C003A494 (sub_1C003A494.c)
 *     sub_1C003A65C @ 0x1C003A65C (sub_1C003A65C.c)
 *     sub_1C003A7B8 @ 0x1C003A7B8 (sub_1C003A7B8.c)
 *     sub_1C003A7FC @ 0x1C003A7FC (sub_1C003A7FC.c)
 *     sub_1C003F124 @ 0x1C003F124 (sub_1C003F124.c)
 *     sub_1C0040070 @ 0x1C0040070 (sub_1C0040070.c)
 *     sub_1C0050C54 @ 0x1C0050C54 (sub_1C0050C54.c)
 *     sub_1C0050E94 @ 0x1C0050E94 (sub_1C0050E94.c)
 *     sub_1C0051188 @ 0x1C0051188 (sub_1C0051188.c)
 *     sub_1C00513FC @ 0x1C00513FC (sub_1C00513FC.c)
 *     sub_1C00516D0 @ 0x1C00516D0 (sub_1C00516D0.c)
 *     sub_1C0051930 @ 0x1C0051930 (sub_1C0051930.c)
 *     sub_1C0051BF4 @ 0x1C0051BF4 (sub_1C0051BF4.c)
 *     sub_1C0051E04 @ 0x1C0051E04 (sub_1C0051E04.c)
 *     sub_1C0051FD0 @ 0x1C0051FD0 (sub_1C0051FD0.c)
 *     sub_1C0052204 @ 0x1C0052204 (sub_1C0052204.c)
 *     sub_1C00524E0 @ 0x1C00524E0 (sub_1C00524E0.c)
 *     sub_1C005276C @ 0x1C005276C (sub_1C005276C.c)
 *     sub_1C00529EC @ 0x1C00529EC (sub_1C00529EC.c)
 *     sub_1C00A0DEC @ 0x1C00A0DEC (sub_1C00A0DEC.c)
 *     sub_1C00A2D68 @ 0x1C00A2D68 (sub_1C00A2D68.c)
 *     sub_1C00A6E08 @ 0x1C00A6E08 (sub_1C00A6E08.c)
 *     sub_1C00A84AC @ 0x1C00A84AC (sub_1C00A84AC.c)
 */

__int64 __fastcall sub_1C0007400(__int64 a1, PIRP Irp)
{
  signed int v4; // esi
  __int64 v5; // r8
  DWORD LowPart; // ebp
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // esi
  unsigned int v10; // eax
  struct _DEVICE_OBJECT *v12; // rcx
  unsigned int v13; // r8d
  unsigned int v14; // edx
  _BYTE v15[8]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v16; // [rsp+48h] [rbp-30h] BYREF

  v15[0] = 0;
  v16 = 0LL;
  v4 = sub_1C00076F4();
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( byte_1C0093BE8 )
  {
    IoGetActivityIdIrp(Irp, &v16);
    v7 = LowPart - 315412;
    if ( (unsigned int)v7 <= 0x34 && (v8 = 0x11000011000001LL, _bittest64(&v8, v7)) || LowPart == 315396 )
    {
      if ( (byte_1C0093A03 & 1) != 0 )
        sub_1C00327CC(
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          (unsigned int)&unk_1C0089620,
          (unsigned int)&v16,
          (_DWORD)Irp,
          Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          LowPart);
    }
    else if ( (byte_1C0093A02 & 2) != 0 )
    {
      sub_1C00327CC(
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        (unsigned int)&unk_1C0088CA0,
        (unsigned int)&v16,
        (_DWORD)Irp,
        Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        LowPart);
    }
  }
  if ( v4 < 0 )
  {
    Irp->IoStatus.Information = 0LL;
    return sub_1C0003440(Irp, 0, v4);
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F124(off_1C0093070->AttachedDevice, 10LL, &unk_1C0083210, a1, Irp, HIWORD(LowPart), (LowPart >> 2) & 0xFFF);
  }
  v9 = -1073741822;
  if ( !byte_1C0093BC0 && byte_1C0093BC1 )
  {
    _InterlockedAdd(&dword_1C0093B5C, 1u);
    v9 = ((__int64 (__fastcall *)(int *, __int64, PIRP))qword_1C0093CC0)(&dword_1C0093038, a1, Irp);
    _InterlockedDecrement(&dword_1C0093B5C);
  }
  if ( v9 != -1073741822 )
    goto LABEL_26;
  if ( !byte_1C0093BC0 && byte_1C0093BC1 )
  {
    _InterlockedAdd(&dword_1C0093B5C, 1u);
    ((void (__fastcall *)(int *, __int64, PIRP))qword_1C0093CA8)(&dword_1C0093038, a1, Irp);
    _InterlockedDecrement(&dword_1C0093B5C);
  }
  if ( LowPart > 0x2D5F90 )
  {
    if ( LowPart > 0x2DDF84 )
    {
      if ( LowPart > 0x2DDFA0 )
      {
        switch ( LowPart )
        {
          case 0x2DDFA4u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C0052204((CMSPAddress *)a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDFACu:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C005276C(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDFB0u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C0051E04(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x32C000u:
          case 0x32C038u:
            v10 = sub_1C00140E4(*(_QWORD *)(a1 + 24), Irp);
            goto LABEL_23;
        }
      }
      else
      {
        switch ( LowPart )
        {
          case 0x2DDFA0u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C00516D0(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDF88u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C0051FD0(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDF8Cu:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C00529EC(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDF94u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C0050E94(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDF98u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C0051188(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDF9Cu:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C00524E0(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
        }
      }
    }
    else
    {
      if ( LowPart == 3006340 )
      {
        if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          v10 = sub_1C0050C54(a1, Irp);
          goto LABEL_23;
        }
        goto LABEL_205;
      }
      if ( LowPart > 0x2DD200 )
      {
        switch ( LowPart )
        {
          case 0x2DD3C0u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C003408C(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DD684u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C0039528(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDC04u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C0036360(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDC08u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C0036230(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2DDCD8u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C0036948(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
        }
      }
      else
      {
        switch ( LowPart )
        {
          case 0x2DD200u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C003411C(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2D5FA8u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C0051930(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2D93F4u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C003A65C(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2D93FCu:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C003A7FC(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2D9CD0u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C00377A4(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2D9CD4u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C0036834(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
          case 0x2D9CE2u:
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C0036B68(a1, Irp);
              goto LABEL_23;
            }
            goto LABEL_205;
        }
      }
    }
    goto LABEL_195;
  }
  if ( LowPart == 2973584 )
  {
    if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
    {
      v10 = sub_1C00513FC(a1, Irp);
      goto LABEL_23;
    }
    goto LABEL_205;
  }
  if ( LowPart > 0x2D1400 )
  {
    if ( LowPart > 0x2D1CCC )
    {
      switch ( LowPart )
      {
        case 0x2D1F80u:
          if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            v10 = sub_1C0051BF4(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
        case 0x2D5000u:
          v10 = sub_1C003A7B8(a1, Irp);
          goto LABEL_23;
        case 0x2D5014u:
          if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            v10 = sub_1C003A38C(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
        case 0x2D5020u:
          v10 = sub_1C003A440(a1, Irp);
          goto LABEL_23;
        case 0x2D5CDDu:
          if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            v10 = sub_1C0036A40(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
      }
    }
    else
    {
      switch ( LowPart )
      {
        case 0x2D1CCCu:
          v10 = sub_1C0039604(a1, Irp);
          goto LABEL_23;
        case 0x2D1680u:
          if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            v10 = sub_1C0037340(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
        case 0x2D1C00u:
          if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            v10 = sub_1C0036528(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
        case 0x2D1C94u:
          if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            v10 = sub_1C003704C(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
        case 0x2D1C98u:
          if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            v10 = sub_1C0038368(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
        case 0x2D1CA0u:
          if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            v10 = sub_1C00A6E08(a1, Irp);
            goto LABEL_23;
          }
          goto LABEL_205;
      }
    }
    goto LABEL_195;
  }
  if ( LowPart != 2954240 )
  {
    if ( LowPart != 315412 )
    {
      if ( LowPart <= 0x4D014 )
      {
        switch ( LowPart )
        {
          case 0x4100Cu:
            v10 = sub_1C0038718(a1, Irp);
            goto LABEL_23;
          case 0x41010u:
            v10 = sub_1C003869C(a1, Irp);
            goto LABEL_23;
          case 0x41018u:
            v10 = sub_1C0038644(a1, Irp);
            goto LABEL_23;
          case 0x4101Cu:
            v12 = *(struct _DEVICE_OBJECT **)(a1 + 32);
            *(_BYTE *)(a1 + 106) = 1;
            IoInvalidateDeviceRelations(v12, BusRelations);
            v13 = 0;
LABEL_38:
            v10 = sub_1C0003440(Irp, 0, v13);
            goto LABEL_23;
        }
        if ( LowPart != 315396 )
        {
          if ( LowPart == 315400 )
          {
            if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
            {
              v10 = sub_1C0007D58(a1, (_DWORD)Irp, 0, 0, 0, 2);
              goto LABEL_23;
            }
LABEL_205:
            v9 = sub_1C0040070(*(_QWORD *)(a1 + 8), Irp);
            if ( !v9 )
              v9 = 259;
            goto LABEL_24;
          }
          goto LABEL_195;
        }
        goto LABEL_63;
      }
      if ( LowPart == 315448 )
      {
        if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          return sub_1C0036E74(a1, Irp);
        goto LABEL_205;
      }
      if ( LowPart == 315460 )
      {
LABEL_63:
        v5 = 0LL;
        goto LABEL_42;
      }
      if ( LowPart != 315464 )
      {
        if ( LowPart == 2953684 )
        {
          v10 = sub_1C00A84AC(a1, Irp);
          goto LABEL_23;
        }
        if ( LowPart == 2954232 )
        {
          if ( !sub_1C00072E0(*(_QWORD *)(a1 + 8)) || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            v10 = sub_1C003A494(a1, Irp, v15);
            goto LABEL_23;
          }
          goto LABEL_205;
        }
LABEL_195:
        v13 = -1073741637;
        goto LABEL_38;
      }
    }
    LOBYTE(v5) = 1;
LABEL_42:
    v10 = sub_1C00A2D68(a1, Irp, v5);
    goto LABEL_23;
  }
  if ( sub_1C00072E0(*(_QWORD *)(a1 + 8)) && (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) == 0 )
    goto LABEL_205;
  v10 = sub_1C00A0DEC(a1, Irp);
LABEL_23:
  v9 = v10;
LABEL_24:
  if ( !byte_1C0093BC0 )
  {
    if ( byte_1C0093BC1 )
    {
      _InterlockedAdd(&dword_1C0093B5C, 1u);
      v14 = ((__int64 (__fastcall *)(int *, __int64, PIRP))qword_1C0093C80)(&dword_1C0093038, a1, Irp);
      _InterlockedDecrement(&dword_1C0093B5C);
      if ( v14 != -1073741822 )
        v9 = v14;
    }
  }
LABEL_26:
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x10) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F124(off_1C0093070->AttachedDevice, 11LL, &unk_1C0083210, a1, Irp, LowPart, v9);
  }
  if ( !v15[0] )
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 296));
  return v9;
}
