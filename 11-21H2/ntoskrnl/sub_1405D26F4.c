/*
 * XREFs of sub_1405D26F4 @ 0x1405D26F4
 * Callers:
 *     sub_1405CC460 @ 0x1405CC460 (sub_1405CC460.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405D26F4(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  REGHANDLE v3; // rbx
  int v4; // [rsp+40h] [rbp-48h] BYREF
  __int64 v5; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  int *v7; // [rsp+60h] [rbp-28h]
  int v8; // [rsp+68h] [rbp-20h]
  int v9; // [rsp+6Ch] [rbp-1Ch]

  v2 = a2;
  v5 = a1;
  sub_140355058(a1, 0, 25, a2);
  if ( byte_140C5AE14 )
  {
    v3 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140037B50) )
    {
      UserData.Reserved = 0;
      v9 = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      v4 = v2;
      v7 = &v4;
      UserData.Size = 8;
      v8 = 4;
      EtwWriteEx(v3, &stru_140037B50, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
