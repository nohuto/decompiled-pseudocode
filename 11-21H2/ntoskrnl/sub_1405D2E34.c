/*
 * XREFs of sub_1405D2E34 @ 0x1405D2E34
 * Callers:
 *     sub_1405D77A0 @ 0x1405D77A0 (sub_1405D77A0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1405D2E34(__int64 a1, int a2)
{
  NTSTATUS result; // eax
  int v3; // [rsp+48h] [rbp+7h] BYREF
  __int64 v4; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+58h] [rbp+17h] BYREF
  int *v6; // [rsp+68h] [rbp+27h]
  __int64 v7; // [rsp+70h] [rbp+2Fh]
  int *v8; // [rsp+78h] [rbp+37h]
  __int64 v9; // [rsp+80h] [rbp+3Fh]
  int v10; // [rsp+B0h] [rbp+6Fh] BYREF

  v10 = a2;
  if ( byte_140C5AE14 )
  {
    v5.Ptr = (ULONGLONG)&v4;
    v4 = 0LL;
    v6 = &v10;
    v3 = 0;
    v8 = &v3;
    *(_QWORD *)&v5.Size = 4LL;
    v7 = 4LL;
    v9 = 4LL;
    return EtwWriteEx(RegHandle, &stru_1400393E8, 0LL, 0, 0LL, 0LL, 3u, &v5);
  }
  return result;
}
