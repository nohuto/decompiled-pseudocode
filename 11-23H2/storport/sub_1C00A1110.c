/*
 * XREFs of sub_1C00A1110 @ 0x1C00A1110
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000FE88 @ 0x1C000FE88 (sub_1C000FE88.c)
 *     sub_1C000FEA0 @ 0x1C000FEA0 (sub_1C000FEA0.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 */

__int64 __fastcall sub_1C00A1110(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+28h] [rbp-10h]

  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 1) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074((__int64)off_1C0093070->AttachedDevice, 0xEu, (__int64)&unk_1C0089898, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(_DWORD **)(a1 + 64);
  if ( *v4 == 1431193940 )
  {
    v5 = sub_1C000FE88(*(_QWORD *)(a1 + 64));
  }
  else
  {
    if ( *v4 != 1094997074 )
    {
      v6 = -1073741823;
      goto LABEL_6;
    }
    v5 = sub_1C000FEA0(v4[22], (IRP *)a2);
  }
  v6 = v5;
LABEL_6:
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 1) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    v8 = v6;
    sub_1C003F0C4((__int64)off_1C0093070->AttachedDevice, 0xFu, (__int64)&unk_1C0089898, a1, a2, v8);
  }
  return v6;
}
