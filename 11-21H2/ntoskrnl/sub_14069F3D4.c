/*
 * XREFs of sub_14069F3D4 @ 0x14069F3D4
 * Callers:
 *     sub_1402260D0 @ 0x1402260D0 (sub_1402260D0.c)
 *     sub_14065AAAC @ 0x14065AAAC (sub_14065AAAC.c)
 *     sub_1407F6698 @ 0x1407F6698 (sub_1407F6698.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140226470 @ 0x140226470 (sub_140226470.c)
 *     sub_14069F434 @ 0x14069F434 (sub_14069F434.c)
 */

void __fastcall sub_14069F3D4(__int64 a1)
{
  unsigned __int16 i; // di
  __int64 *v3; // rax
  _PRIVILEGE_SET *v4; // rcx

  for ( i = 0; i <= *(_WORD *)(a1 + 12); ++i )
  {
    v3 = (__int64 *)sub_14069F434(a1, i);
    sub_140226470(v3);
  }
  v4 = *(_PRIVILEGE_SET **)(a1 + 80);
  if ( v4 )
    SeFreePrivileges(v4);
}
