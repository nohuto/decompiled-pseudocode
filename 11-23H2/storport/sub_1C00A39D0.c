/*
 * XREFs of sub_1C00A39D0 @ 0x1C00A39D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C00072E0 @ 0x1C00072E0 (sub_1C00072E0.c)
 *     sub_1C003F074 @ 0x1C003F074 (sub_1C003F074.c)
 *     sub_1C003F0C4 @ 0x1C003F0C4 (sub_1C003F0C4.c)
 *     sub_1C0040070 @ 0x1C0040070 (sub_1C0040070.c)
 *     sub_1C00A3A64 @ 0x1C00A3A64 (sub_1C00A3A64.c)
 */

__int64 __fastcall sub_1C00A39D0(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  __int64 result; // rax
  int v7; // [rsp+28h] [rbp-10h]

  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x40) != 0
    && BYTE1(off_1C0093070->Timer) >= 4u )
  {
    sub_1C003F074((__int64)off_1C0093070->AttachedDevice, 0x18u, (__int64)&unk_1C0089898, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  if ( !sub_1C00072E0(a1) || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
  {
    v4 = sub_1C00A3A64(a1, a2);
    v5 = v4;
    if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 0x40) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      v7 = v4;
      sub_1C003F0C4((__int64)off_1C0093070->AttachedDevice, 0x19u, (__int64)&unk_1C0089898, a1, a2, v7);
    }
    return v5;
  }
  else
  {
    result = sub_1C0040070(a1, a2);
    if ( !(_DWORD)result )
      return 259LL;
  }
  return result;
}
