/*
 * XREFs of sub_14039AE20 @ 0x14039AE20
 * Callers:
 *     sub_14068E624 @ 0x14068E624 (sub_14068E624.c)
 * Callees:
 *     sub_1402D1760 @ 0x1402D1760 (sub_1402D1760.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14039AE20(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        __int64 a4,
        unsigned __int16 a5,
        __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  __int64 v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  unsigned __int16 *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]

  v8 = a4;
  v14 = 0;
  v10 = &a5;
  v12 = a6;
  v9 = 16LL;
  v13 = 2 * a5;
  v11 = 2LL;
  return sub_1402D1760(qword_140C044F0, a2, a3, 4u, &v7);
}
