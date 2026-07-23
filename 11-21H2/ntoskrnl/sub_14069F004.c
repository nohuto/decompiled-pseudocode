/*
 * XREFs of sub_14069F004 @ 0x14069F004
 * Callers:
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 */

void __fastcall sub_14069F004(__int64 a1)
{
  _PRIVILEGE_SET *v1; // rcx

  v1 = *(_PRIVILEGE_SET **)(a1 + 24);
  if ( v1 )
    SeFreePrivileges(v1);
}
