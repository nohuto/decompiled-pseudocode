/*
 * XREFs of sub_1C0007860 @ 0x1C0007860
 * Callers:
 *     sub_1C0007B00 @ 0x1C0007B00 (sub_1C0007B00.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0013D54 @ 0x1C0013D54 (sub_1C0013D54.c)
 *     sub_1C002122C @ 0x1C002122C (sub_1C002122C.c)
 *     sub_1C00224F4 @ 0x1C00224F4 (sub_1C00224F4.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003285C @ 0x1C003285C (sub_1C003285C.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C003F124 @ 0x1C003F124 (sub_1C003F124.c)
 *     sub_1C00A0F84 @ 0x1C00A0F84 (sub_1C00A0F84.c)
 *     sub_1C00A1BE4 @ 0x1C00A1BE4 (sub_1C00A1BE4.c)
 *     sub_1C00A1C44 @ 0x1C00A1C44 (sub_1C00A1C44.c)
 *     sub_1C00A25F4 @ 0x1C00A25F4 (sub_1C00A25F4.c)
 *     sub_1C00A2788 @ 0x1C00A2788 (sub_1C00A2788.c)
 *     sub_1C00A353C @ 0x1C00A353C (sub_1C00A353C.c)
 *     sub_1C00A360C @ 0x1C00A360C (sub_1C00A360C.c)
 *     sub_1C00A4248 @ 0x1C00A4248 (sub_1C00A4248.c)
 *     sub_1C00A4A54 @ 0x1C00A4A54 (sub_1C00A4A54.c)
 *     sub_1C00AA8F4 @ 0x1C00AA8F4 (sub_1C00AA8F4.c)
 *     sub_1C00AA924 @ 0x1C00AA924 (sub_1C00AA924.c)
 *     sub_1C00AA970 @ 0x1C00AA970 (sub_1C00AA970.c)
 *     sub_1C00AA9A8 @ 0x1C00AA9A8 (sub_1C00AA9A8.c)
 */

__int64 __fastcall sub_1C0007860(__int64 a1, IRP *a2, __int64 a3)
{
  char v3; // r14
  int v6; // edx
  signed int v7; // edi
  unsigned int MinorFunction; // ebp
  int v9; // ecx
  int v10; // eax
  PDEVICE_OBJECT v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // edi
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF

  v3 = 1;
  LOBYTE(a3) = 1;
  v15 = 0LL;
  v7 = sub_1C00071D4(a1, (__int64)a2, a3);
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( byte_1C0093BE8 )
  {
    IoGetActivityIdIrp(a2, &v15);
    if ( MinorFunction > 0x16 || (v10 = 4718720, !_bittest(&v10, MinorFunction)) )
    {
      if ( (byte_1C0093A02 & 0x20) != 0 )
        sub_1C003285C(v9, v6, (unsigned int)&v15, (_DWORD)a2, MinorFunction, 0, *(_QWORD *)(a1 + 8));
    }
  }
  if ( v7 < 0 )
  {
    a2->IoStatus.Information = 0LL;
    return sub_1C0003440(a2, 0, v7);
  }
  v11 = off_1C0093070;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 10LL, &unk_1C0083530, a1, a2, MinorFunction);
  }
  if ( MinorFunction > 0xB )
  {
    if ( MinorFunction <= 0x12 )
    {
      if ( MinorFunction == 12 )
      {
        v12 = sub_1C00A360C(a1, a2);
        goto LABEL_16;
      }
    }
    else
    {
      if ( MinorFunction == 19 )
      {
        if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x20) != 0 )
          sub_1C003285C(
            a2->Tail.Overlay.CurrentStackLocation,
            v6,
            (unsigned int)&v15,
            (_DWORD)a2,
            19,
            a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
            *(_QWORD *)(a1 + 8));
        v12 = sub_1C00A353C(a1, a2);
        goto LABEL_16;
      }
      if ( MinorFunction == 20 )
      {
        v12 = sub_1C00A1BE4(a1, a2);
        goto LABEL_16;
      }
      if ( MinorFunction != 21 )
      {
        if ( MinorFunction == 22 )
        {
          if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x20) != 0 )
            sub_1C003285C(
              a2->Tail.Overlay.CurrentStackLocation,
              v6,
              (unsigned int)&v15,
              (_DWORD)a2,
              MinorFunction,
              a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options,
              *(_QWORD *)(a1 + 8));
          v12 = sub_1C0013D54(a1, a2);
          goto LABEL_16;
        }
        if ( MinorFunction == 23 )
        {
          v12 = sub_1C00A25F4(a1, a2);
          goto LABEL_47;
        }
      }
    }
    v12 = sub_1C00A4248(v11, a2);
    goto LABEL_16;
  }
  if ( MinorFunction == 11 )
  {
LABEL_38:
    v12 = sub_1C00A4A54(v11, a2);
    goto LABEL_16;
  }
  if ( MinorFunction > 5 )
  {
    if ( MinorFunction != 6 )
    {
      switch ( MinorFunction )
      {
        case 7u:
          if ( byte_1C0093BE8 && (byte_1C0093A02 & 0x20) != 0 )
            sub_1C003285C(
              a2->Tail.Overlay.CurrentStackLocation,
              v6,
              (unsigned int)&v15,
              (_DWORD)a2,
              MinorFunction,
              a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length,
              *(_QWORD *)(a1 + 8));
          v12 = sub_1C00A0F84(a1, a2);
          goto LABEL_16;
        case 8u:
          v12 = sub_1C002122C(a1, a2);
          goto LABEL_16;
        case 9u:
          v12 = sub_1C00A1C44(a1, a2);
          goto LABEL_16;
      }
      goto LABEL_38;
    }
LABEL_59:
    v12 = sub_1C00AA8F4(a1, a2);
    goto LABEL_16;
  }
  switch ( MinorFunction )
  {
    case 5u:
      v12 = sub_1C00AA970(a1, a2);
      break;
    case 0u:
      v12 = sub_1C00A2788(a1, a2);
      break;
    case 1u:
      v12 = sub_1C00AA924(a1, a2);
      break;
    case 2u:
      v12 = sub_1C00224F4(a1, a2);
LABEL_47:
      v3 = 0;
      break;
    case 3u:
      goto LABEL_59;
    default:
      v12 = sub_1C00AA9A8(a1, a2);
      break;
  }
LABEL_16:
  v13 = v12;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F124(off_1C0093070->AttachedDevice, 11LL, &unk_1C0083530, a1, a2, MinorFunction, v12);
  }
  if ( v3 )
    sub_1C000729C(a1);
  return v13;
}
