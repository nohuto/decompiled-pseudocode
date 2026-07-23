/*
 * XREFs of sub_1409DB0F0 @ 0x1409DB0F0
 * Callers:
 *     sub_140840AEC @ 0x140840AEC (sub_140840AEC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14081549C @ 0x14081549C (sub_14081549C.c)
 */

NTSTATUS __fastcall sub_1409DB0F0(ULONGLONG a1)
{
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+30h] [rbp-28h] BYREF

  if ( !a1 )
    return -1073741811;
  v2.Reserved = 0;
  v2.Ptr = a1;
  v2.Size = 16;
  return sub_14081549C(a1, &stru_140037A38, 0LL, 1u, &v2);
}
