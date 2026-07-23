/*
 * XREFs of sub_1409D56C0 @ 0x1409D56C0
 * Callers:
 *     sub_1406ECC60 @ 0x1406ECC60 (sub_1406ECC60.c)
 *     sub_140847F98 @ 0x140847F98 (sub_140847F98.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405FCEA8 @ 0x1405FCEA8 (sub_1405FCEA8.c)
 */

NTSTATUS __fastcall sub_1409D56C0(REGHANDLE *a1, __int64 a2)
{
  NTSTATUS result; // eax
  PEVENT_DATA_DESCRIPTOR UserData[2]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG UserDataCount; // [rsp+50h] [rbp-B0h]
  int v7; // [rsp+54h] [rbp-ACh]
  int v8; // [rsp+58h] [rbp-A8h]
  int v9; // [rsp+5Ch] [rbp-A4h]
  _BYTE v10[1360]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v11[3]; // [rsp+5B0h] [rbp+4B0h] BYREF

  memset(v11, 0, sizeof(v11));
  memset(v10, 0, sizeof(v10));
  UserDataCount = 0;
  v8 = 0;
  UserData[0] = (PEVENT_DATA_DESCRIPTOR)v11;
  v7 = 3;
  UserData[1] = (PEVENT_DATA_DESCRIPTOR)v10;
  v9 = 1360;
  result = sub_1405FCEA8(a2, (__int64)UserData);
  if ( result )
    return EtwWriteEx(*a1, &stru_140039090, 0LL, 0, 0LL, 0LL, UserDataCount, UserData[0]);
  return result;
}
