/*
 * XREFs of sub_1405406E8 @ 0x1405406E8
 * Callers:
 *     sub_14092AC5C @ 0x14092AC5C (sub_14092AC5C.c)
 *     sub_14092B804 @ 0x14092B804 (sub_14092B804.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1405406E8(REGHANDLE a1, int a2)
{
  int v3; // [rsp+40h] [rbp-9h] BYREF
  int v4; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  __int64 *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  int *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]
  int v12; // [rsp+B8h] [rbp+6Fh] BYREF

  v12 = a2;
  v4 = 1;
  *(_QWORD *)&UserData.Size = 4LL;
  v9 = 4LL;
  UserData.Ptr = (ULONGLONG)&v3;
  v11 = 4LL;
  v6 = qword_14003AC60;
  v8 = &v12;
  v10 = &v4;
  v3 = 6;
  v7 = 16LL;
  return EtwWriteEx(a1, &stru_140C0CAE0, 0LL, 0, 0LL, 0LL, 4u, &UserData);
}
