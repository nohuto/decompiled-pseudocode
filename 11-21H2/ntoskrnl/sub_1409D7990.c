/*
 * XREFs of sub_1409D7990 @ 0x1409D7990
 * Callers:
 *     sub_1409D4BC0 @ 0x1409D4BC0 (sub_1409D4BC0.c)
 *     sub_1409D4E10 @ 0x1409D4E10 (sub_1409D4E10.c)
 *     sub_1409D8AB0 @ 0x1409D8AB0 (sub_1409D8AB0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1409D790C @ 0x1409D790C (sub_1409D790C.c)
 *     sub_1409D7C9C @ 0x1409D7C9C (sub_1409D7C9C.c)
 */

__int64 __fastcall sub_1409D7990(__int64 a1)
{
  __int64 v2; // rax
  _PRIVILEGE_SET *v3; // rbx

  v2 = sub_1409D7C9C();
  v3 = (_PRIVILEGE_SET *)v2;
  if ( !v2 )
    return 3221225561LL;
  sub_1409D790C(v2);
  SeFreePrivileges(v3);
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return 0LL;
}
