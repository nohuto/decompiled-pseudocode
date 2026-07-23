/*
 * XREFs of sub_14062D2A0 @ 0x14062D2A0
 * Callers:
 *     sub_14022A8D0 @ 0x14022A8D0 (sub_14022A8D0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_14062D2A0(ULONGLONG a1, __int16 a2, unsigned __int16 *a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+48h] [rbp-9h] BYREF
  __int16 *v6; // [rsp+58h] [rbp+7h]
  __int64 v7; // [rsp+60h] [rbp+Fh]
  int *v8; // [rsp+68h] [rbp+17h]
  __int64 v9; // [rsp+70h] [rbp+1Fh]
  __int64 v10; // [rsp+78h] [rbp+27h]
  int v11; // [rsp+80h] [rbp+2Fh]
  int v12; // [rsp+84h] [rbp+33h]
  __int64 *v13; // [rsp+88h] [rbp+37h]
  __int64 v14; // [rsp+90h] [rbp+3Fh]
  __int16 v15; // [rsp+C0h] [rbp+6Fh] BYREF
  int v16; // [rsp+D0h] [rbp+7Fh] BYREF

  v16 = a4;
  v15 = a2;
  v5.Ptr = a1;
  v6 = &v15;
  v8 = &v16;
  v10 = *((_QWORD *)a3 + 1);
  v11 = *a3;
  v13 = &qword_14000EF90;
  v12 = 0;
  *(_QWORD *)&v5.Size = 16LL;
  v7 = 2LL;
  v9 = 4LL;
  v14 = 2LL;
  return EtwWriteEx(qword_140C15FA8, &stru_140014A18, 0LL, 1u, 0LL, 0LL, 5u, &v5);
}
