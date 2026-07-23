/*
 * XREFs of sub_1406DC040 @ 0x1406DC040
 * Callers:
 *     sub_1406D8150 @ 0x1406D8150 (sub_1406D8150.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140254F78 @ 0x140254F78 (sub_140254F78.c)
 */

void __fastcall sub_1406DC040(PPRIVILEGE_SET Privileges, __int64 a2)
{
  void *v2; // r8

  v2 = *(void **)&Privileges[2].Privilege[0].Attributes;
  if ( v2 )
    sub_140254F78((__int64)Privileges, *(HANDLE **)(a2 + 24), v2);
  SeFreePrivileges(Privileges);
}
