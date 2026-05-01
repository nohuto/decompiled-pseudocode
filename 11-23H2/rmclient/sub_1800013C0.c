/*
 * XREFs of sub_1800013C0 @ 0x1800013C0
 * Callers:
 *     sub_1800128FC @ 0x1800128FC (sub_1800128FC.c)
 *     sub_180013784 @ 0x180013784 (sub_180013784.c)
 *     sub_18001435C @ 0x18001435C (sub_18001435C.c)
 * Callees:
 *     sub_180001104 @ 0x180001104 (sub_180001104.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

ULONG __fastcall sub_1800013C0(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v13 = a7;
  v11 = a6;
  v9 = a5;
  v14 = 4LL;
  v12 = 8LL;
  v10 = 4LL;
  return sub_180001104((__int64)&dword_180032000, a2, 0LL, 0LL, 5u, &v8);
}
