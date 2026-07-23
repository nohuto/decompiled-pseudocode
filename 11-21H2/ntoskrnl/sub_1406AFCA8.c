/*
 * XREFs of sub_1406AFCA8 @ 0x1406AFCA8
 * Callers:
 *     sub_140237A0C @ 0x140237A0C (sub_140237A0C.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_1403C55B0 @ 0x1403C55B0 (sub_1403C55B0.c)
 *     sub_1405F3CD0 @ 0x1405F3CD0 (sub_1405F3CD0.c)
 */

void __fastcall sub_1406AFCA8(__int64 *a1)
{
  _PRIVILEGE_SET *v2; // rcx
  __int64 v3; // rcx
  _PRIVILEGE_SET *v4; // rcx
  _PRIVILEGE_SET *v5; // rcx

  v2 = (_PRIVILEGE_SET *)a1[2];
  if ( v2 )
    SeFreePrivileges(v2);
  v3 = a1[4];
  if ( v3 )
    sub_1405F3CD0(v3);
  v4 = (_PRIVILEGE_SET *)a1[5];
  if ( v4 )
    SeFreePrivileges(v4);
  v5 = (_PRIVILEGE_SET *)a1[6];
  if ( v5 )
    SeFreePrivileges(v5);
  if ( *a1 )
    sub_1403C55B0(*a1);
}
