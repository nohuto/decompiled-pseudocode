/*
 * XREFs of sub_1C0011E40 @ 0x1C0011E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011EE8 @ 0x1C0011EE8 (sub_1C0011EE8.c)
 *     sub_1C0011FB8 @ 0x1C0011FB8 (sub_1C0011FB8.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 */

__int64 __fastcall sub_1C0011E40(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx

  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074(off_1C0093070->AttachedDevice, 22LL, &unk_1C0089898, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(_DWORD **)(a1 + 64);
  if ( *v4 == 1094997074 )
  {
    v5 = sub_1C0011EE8(v4, a2);
  }
  else
  {
    if ( *v4 != 1431193940 )
    {
      v6 = -1073741823;
      goto LABEL_6;
    }
    v5 = sub_1C0011FB8(v4, (PIRP)a2);
  }
  v6 = v5;
LABEL_6:
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 4) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 23LL, &unk_1C0089898, a1, a2, v6);
  }
  return v6;
}
