/*
 * XREFs of sub_140555FAC @ 0x140555FAC
 * Callers:
 *     sub_140764EC8 @ 0x140764EC8 (sub_140764EC8.c)
 *     sub_140AFE7A0 @ 0x140AFE7A0 (sub_140AFE7A0.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140555FAC(REGHANDLE *a1, const EVENT_DESCRIPTOR *a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-28h] BYREF

  return sub_1402D1760(a1, a2, 0LL, 1u, &v3);
}
