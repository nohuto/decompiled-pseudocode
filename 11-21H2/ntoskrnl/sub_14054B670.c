/*
 * XREFs of sub_14054B670 @ 0x14054B670
 * Callers:
 *     sub_1403DE4F0 @ 0x1403DE4F0 (sub_1403DE4F0.c)
 *     CallbackFunction @ 0x1405439C0 (CallbackFunction.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054BF10 @ 0x14054BF10 (sub_14054BF10.c)
 */

char sub_14054B670()
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rdi
  char result; // al
  __int128 v3; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v4; // [rsp+30h] [rbp-D0h]
  __int64 v5; // [rsp+38h] [rbp-C8h]
  __int128 v6; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  __int128 v9; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v12; // [rsp+88h] [rbp-78h]
  __int64 v13; // [rsp+90h] [rbp-70h]
  _BYTE v14[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v15[2064]; // [rsp+A8h] [rbp-58h] BYREF

  v7 = 0LL;
  LODWORD(v8) = 0;
  v6 = 0LL;
  v4 = 0LL;
  LODWORD(v5) = 0;
  v3 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v0 = sub_14039DF90((PHYSICAL_ADDRESS *)&v6, 1, (__int64)v14, 8LL);
  v1 = sub_14039DF90((PHYSICAL_ADDRESS *)&v3, 2, (__int64)v15, 1032LL);
  *(_DWORD *)v0 = 14;
  if ( !(unsigned __int16)HvlInvokeHypercall(123) )
  {
    v9 = *(_OWORD *)v1;
    v10 = v1[2];
  }
  sub_14039D8F0((__int64)&v3);
  result = sub_14039D8F0((__int64)&v6);
  if ( BYTE1(v9) )
  {
    if ( (_BYTE)v9 )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v9 + 8;
      v13 = 8LL;
      v12 = &v10;
      return sub_14054BF10(&stru_14003ADA8, 2u, &UserData);
    }
  }
  return result;
}
