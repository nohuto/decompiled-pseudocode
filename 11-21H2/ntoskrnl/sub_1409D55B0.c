/*
 * XREFs of sub_1409D55B0 @ 0x1409D55B0
 * Callers:
 *     sub_1406ECC60 @ 0x1406ECC60 (sub_1406ECC60.c)
 *     sub_1406ED88C @ 0x1406ED88C (sub_1406ED88C.c)
 *     sub_140847F98 @ 0x140847F98 (sub_140847F98.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405FCA9C @ 0x1405FCA9C (sub_1405FCA9C.c)
 */

NTSTATUS __fastcall sub_1409D55B0(REGHANDLE *a1, __int64 a2, __int64 *a3)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // r8
  ULONG UserDataCount; // edx
  _QWORD v9[2]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v10; // [rsp+50h] [rbp-B0h]
  __int64 v11; // [rsp+54h] [rbp-ACh]
  int v12; // [rsp+5Ch] [rbp-A4h]
  _QWORD v13[20]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14[19]; // [rsp+100h] [rbp+0h] BYREF

  memset(v14, 0, sizeof(v14));
  memset(v13, 0, 0x98uLL);
  v11 = 19LL;
  v9[1] = v13;
  v10 = 0;
  UserData = v14;
  v9[0] = v14;
  v12 = 152;
  if ( a3 == qword_140038258 )
  {
    UserDataCount = 1;
    v13[0] = a2;
    v14[0].Ptr = (ULONGLONG)v13;
    *(_QWORD *)&v14[0].Size = 8LL;
  }
  else
  {
    sub_1405FCA9C(a2, (__int64)v9);
    UserDataCount = v10;
    UserData = (struct _EVENT_DATA_DESCRIPTOR *)v9[0];
  }
  return EtwWriteEx(*a1, (PCEVENT_DESCRIPTOR)a3, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
}
