/*
 * XREFs of sub_1C0060B80 @ 0x1C0060B80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C005EAF4 @ 0x1C005EAF4 (sub_1C005EAF4.c)
 */

__int64 __fastcall sub_1C0060B80(int a1, __int64 a2)
{
  int v5; // [rsp+30h] [rbp-138h]
  int v6; // [rsp+38h] [rbp-130h]
  _BYTE Dst[272]; // [rsp+40h] [rbp-128h] BYREF

  memset_0(Dst, 0, 0x108uLL);
  v6 = 1;
  v5 = 1;
  return sub_1C005EAF4(
           a1,
           a2,
           (__int64)Dst,
           0x108u,
           (void (__fastcall *)(__int64, __int64, _QWORD, char *))&sub_1C006ED80,
           (void (__fastcall *)(_QWORD, struct _UNICODE_STRING *, _QWORD, __int64))sub_1C00A9400,
           v5,
           v6);
}
