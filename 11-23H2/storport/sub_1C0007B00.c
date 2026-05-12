/*
 * XREFs of sub_1C0007B00 @ 0x1C0007B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0007860 @ 0x1C0007860 (sub_1C0007860.c)
 *     sub_1C00161D0 @ 0x1C00161D0 (sub_1C00161D0.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 */

__int64 __fastcall sub_1C0007B00(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx

  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(
      off_1C0093070->AttachedDevice,
      20LL,
      &unk_1C0089898,
      a1,
      a2,
      *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL));
  }
  *(_BYTE *)(a2 + 141) = -88;
  v5 = *(_DWORD **)(a1 + 64);
  if ( *v5 == 1431193940 )
  {
    v6 = sub_1C0007860((__int64)v5, (IRP *)a2, a3);
  }
  else
  {
    if ( *v5 != 1094997074 )
    {
      v7 = -1073741823;
      goto LABEL_6;
    }
    v6 = sub_1C00161D0(v5, (PIRP)a2);
  }
  v7 = v6;
LABEL_6:
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F0C4(off_1C0093070->AttachedDevice, 21LL, &unk_1C0089898, a1, a2, v7);
  }
  return v7;
}
