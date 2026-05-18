/*
 * XREFs of sub_180038018 @ 0x180038018
 * Callers:
 *     sub_18002E3D0 @ 0x18002E3D0 (sub_18002E3D0.c)
 *     sub_18002FD24 @ 0x18002FD24 (sub_18002FD24.c)
 * Callees:
 *     sub_18001DDFC @ 0x18001DDFC (sub_18001DDFC.c)
 */

__int64 __fastcall sub_180038018(__int64 a1)
{
  __int64 result; // rax

  result = 0x38E38E38E38E38ELL;
  if ( *(_QWORD *)(a1 + 8) == 0x38E38E38E38E38ELL )
    sub_18001DDFC();
  return result;
}
