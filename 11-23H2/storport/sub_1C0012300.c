/*
 * XREFs of sub_1C0012300 @ 0x1C0012300
 * Callers:
 *     sub_1C0012158 @ 0x1C0012158 (sub_1C0012158.c)
 * Callees:
 *     sub_1C00127A8 @ 0x1C00127A8 (sub_1C00127A8.c)
 *     sub_1C001284C @ 0x1C001284C (sub_1C001284C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C003EE60 @ 0x1C003EE60 (sub_1C003EE60.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C004B174 @ 0x1C004B174 (sub_1C004B174.c)
 */

__int64 __fastcall sub_1C0012300(__int64 a1, IRP *a2)
{
  int v4; // edi
  int LowPart; // ebp
  NTSTATUS v6; // eax
  unsigned int v7; // edi
  __int128 v9; // [rsp+60h] [rbp-38h] BYREF

  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 17LL, &unk_1C008A080, a1, a2);
  }
  v4 = *(_DWORD *)(a1 + 308);
  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( byte_1C0093BE8 )
  {
    v9 = 0LL;
    IoGetActivityIdIrp(a2, &v9);
    if ( (byte_1C0093A02 & 0x10) != 0 )
      sub_1C004B174(
        a2->Tail.Overlay.CurrentStackLocation,
        a2->Tail.Overlay.CurrentStackLocation->MinorFunction,
        (unsigned int)&v9,
        *(_DWORD *)(a1 + 56),
        (char)a2,
        a2->Tail.Overlay.CurrentStackLocation->MinorFunction,
        a2->Tail.Overlay.CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter,
        v4,
        LowPart,
        a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.EaLength);
  }
  if ( v4 == 1 )
  {
    if ( LowPart > 1 )
    {
      v6 = sub_1C00127A8(a1, a2);
      goto LABEL_9;
    }
  }
  else if ( v4 > 1 && LowPart == 1 )
  {
    v6 = sub_1C001284C(a1, a2);
    goto LABEL_9;
  }
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003EE60(off_1C0093070->AttachedDevice, 18LL, &unk_1C008A080, (unsigned int)v4, LowPart);
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  v6 = PoCallDriver(*(PDEVICE_OBJECT *)(a1 + 24), a2);
LABEL_9:
  v7 = v6;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 19LL, &unk_1C008A080, a1, a2, v6);
  }
  return v7;
}
