/*
 * XREFs of sub_1C0041AC0 @ 0x1C0041AC0
 * Callers:
 *     sub_1C00417B0 @ 0x1C00417B0 (sub_1C00417B0.c)
 *     StorPortInitialize @ 0x1C00428F0 (StorPortInitialize.c)
 * Callees:
 *     sub_1C001579C @ 0x1C001579C (sub_1C001579C.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1C0041AC0(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return sub_1C001579C(a1, a2, 0LL, 2u, &v5);
}
