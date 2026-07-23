/*
 * XREFs of sub_14069F024 @ 0x14069F024
 * Callers:
 *     sub_14065C63C @ 0x14065C63C (sub_14065C63C.c)
 *     sub_14069EE0C @ 0x14069EE0C (sub_14069EE0C.c)
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14069F090 @ 0x14069F090 (sub_14069F090.c)
 *     sub_14069F130 @ 0x14069F130 (sub_14069F130.c)
 *     sub_14069F150 @ 0x14069F150 (sub_14069F150.c)
 */

void __fastcall sub_14069F024(__int64 a1)
{
  __int16 i; // di
  __int64 v3; // rax
  _PRIVILEGE_SET *v4; // rcx

  sub_14069F150(a1 + 8);
  for ( i = 0; i <= *(__int16 *)a1; ++i )
  {
    v3 = sub_14069F130(a1);
    sub_14069F090(v3);
  }
  v4 = *(_PRIVILEGE_SET **)(a1 + 344);
  if ( v4 )
    SeFreePrivileges(v4);
}
