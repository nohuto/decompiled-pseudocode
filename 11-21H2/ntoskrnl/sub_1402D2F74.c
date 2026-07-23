/*
 * XREFs of sub_1402D2F74 @ 0x1402D2F74
 * Callers:
 *     sub_1402D2478 @ 0x1402D2478 (sub_1402D2478.c)
 *     sub_1402D2E74 @ 0x1402D2E74 (sub_1402D2E74.c)
 *     sub_14074C534 @ 0x14074C534 (sub_14074C534.c)
 * Callees:
 *     sub_1402D301C @ 0x1402D301C (sub_1402D301C.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14074C5A8 @ 0x14074C5A8 (sub_14074C5A8.c)
 *     sub_14074CA9C @ 0x14074CA9C (sub_14074CA9C.c)
 */

__int64 __fastcall sub_1402D2F74(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // ebp
  unsigned int v9; // eax
  unsigned int v10; // ebx
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  PreviousAffinity = 0LL;
  v8 = sub_1402D301C(a1, &PreviousAffinity);
  if ( a4 )
    v9 = sub_14074C5A8(a1, a2, a4, a5);
  else
    v9 = sub_14074CA9C(a1, a2, -1073741637, 0, a5);
  v10 = v9;
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v10;
}
