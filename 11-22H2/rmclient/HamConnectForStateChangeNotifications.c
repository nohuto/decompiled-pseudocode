/*
 * XREFs of HamConnectForStateChangeNotifications @ 0x180009FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180005824 @ 0x180005824 (sub_180005824.c)
 *     sub_180008C00 @ 0x180008C00 (sub_180008C00.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

__int64 __fastcall HamConnectForStateChangeNotifications(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v9[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-30h] BYREF
  __int128 v11; // [rsp+50h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-18h]

  v8 = 0LL;
  if ( a1 )
  {
    v9[0] = a1;
    v11 = 0LL;
    v12 = 0LL;
    v10 = a3;
    v9[1] = a2;
    v5 = sub_180005824((__int64)v9, (__int64)&unk_1800208C0, 0, (__int64)&v10, &v8);
    if ( v5 < 0 )
    {
      v6 = v8;
    }
    else
    {
      v6 = 0LL;
      *a4 = v8;
      v5 = 0;
    }
    if ( v6 )
      sub_180008C00(v6);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v5;
}
