/*
 * XREFs of sub_140724418 @ 0x140724418
 * Callers:
 *     sub_140207028 @ 0x140207028 (sub_140207028.c)
 *     sub_1406B52CC @ 0x1406B52CC (sub_1406B52CC.c)
 *     sub_1406BBE6C @ 0x1406BBE6C (sub_1406BBE6C.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14079DB4C @ 0x14079DB4C (sub_14079DB4C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140726520 @ 0x140726520 (sub_140726520.c)
 *     SePrivilegeCheck @ 0x14072B5E0 (SePrivilegeCheck.c)
 */

BOOLEAN __fastcall sub_140724418(LUID a1, struct _SECURITY_SUBJECT_CONTEXT *a2, KPROCESSOR_MODE a3)
{
  BOOLEAN v5; // al
  __int64 v6; // r9
  BOOLEAN v7; // di
  _PRIVILEGE_SET v9; // [rsp+20h] [rbp-28h] BYREF

  v9.PrivilegeCount = 1;
  v9.Control = 1;
  v9.Privilege[0].Luid = a1;
  v9.Privilege[0].Attributes = 0;
  v5 = SePrivilegeCheck(&v9, a2, a3);
  v7 = v5;
  if ( a3 )
  {
    LOBYTE(v6) = v5;
    sub_140726520(0LL, a2, &v9, v6);
  }
  return v7;
}
