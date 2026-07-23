/*
 * XREFs of sub_1405D9630 @ 0x1405D9630
 * Callers:
 *     sub_1405DD2E0 @ 0x1405DD2E0 (sub_1405DD2E0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405D9630(__int64 a1)
{
  REGHANDLE v2; // rbx
  __int16 v3; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int16 *v5; // [rsp+58h] [rbp-28h]
  int v6; // [rsp+60h] [rbp-20h]
  int v7; // [rsp+64h] [rbp-1Ch]
  __int64 v8; // [rsp+68h] [rbp-18h]
  int v9; // [rsp+70h] [rbp-10h]
  int v10; // [rsp+74h] [rbp-Ch]

  if ( byte_140C5AE30 )
  {
    v2 = qword_140C1F580;
    if ( EtwEventEnabled(qword_140C1F580, &stru_140037DE8) )
    {
      UserData.Reserved = 0;
      v7 = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&qword_140C204B8;
      v3 = *(unsigned __int8 *)(a1 + 208);
      v5 = &v3;
      v8 = a1 + 209;
      UserData.Size = 8;
      v6 = 2;
      v9 = 1;
      EtwWriteEx(v2, &stru_140037DE8, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
