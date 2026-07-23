/*
 * XREFs of sub_1405D0B58 @ 0x1405D0B58
 * Callers:
 *     sub_14057A428 @ 0x14057A428 (sub_14057A428.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405D0B58(int a1)
{
  int v1; // r9d
  REGHANDLE v2; // rbx
  int v3; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+Fh] BYREF
  GUID v5; // [rsp+58h] [rbp+1Fh] BYREF
  int *v6; // [rsp+78h] [rbp+3Fh]
  int v7; // [rsp+80h] [rbp+47h]
  int v8; // [rsp+84h] [rbp+4Bh]
  int v9; // [rsp+A0h] [rbp+67h] BYREF

  v9 = a1;
  if ( (unsigned int)dword_140C03A00 > 5 && sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
  {
    v8 = 0;
    v6 = &v3;
    v3 = v1;
    v7 = 4;
    sub_14020A9C4(
      (__int64)&dword_140C03A00,
      (unsigned __int8 *)byte_14002F1F5,
      0LL,
      0LL,
      3u,
      (PEVENT_DATA_DESCRIPTOR)&v5);
  }
  if ( byte_140C5AE14 )
  {
    v2 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140039508) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 4;
      EtwWriteEx(v2, &stru_140039508, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
