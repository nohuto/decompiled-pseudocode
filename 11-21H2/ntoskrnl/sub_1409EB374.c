/*
 * XREFs of sub_1409EB374 @ 0x1409EB374
 * Callers:
 *     sub_1406E30E0 @ 0x1406E30E0 (sub_1406E30E0.c)
 *     sub_140864A10 @ 0x140864A10 (sub_140864A10.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406BF0AC @ 0x1406BF0AC (sub_1406BF0AC.c)
 *     sub_1409EB400 @ 0x1409EB400 (sub_1409EB400.c)
 */

BOOLEAN __fastcall sub_1409EB374(__int64 *a1, unsigned __int64 a2)
{
  BOOLEAN v2; // bl
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  *(_DWORD *)((char *)&v4 + 9) = a1 == qword_140013540;
  v2 = IoSetThreadHardErrorMode(0);
  sub_1409EB400((ULONG_PTR)qword_140D06940);
  sub_1406BF0AC((__int64)sub_1409EB400, (__int64)&v4);
  return IoSetThreadHardErrorMode(v2);
}
