/*
 * XREFs of sub_14057F3EC @ 0x14057F3EC
 * Callers:
 *     sub_14057F290 @ 0x14057F290 (sub_14057F290.c)
 *     sub_14057F2D0 @ 0x14057F2D0 (sub_14057F2D0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14057F3EC(__int64 a1, __int64 a2)
{
  REGHANDLE v2; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+5Ch] [rbp-1Ch]
  __int64 v7; // [rsp+80h] [rbp+8h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  v2 = qword_140D00B58;
  if ( qword_140D00B58 )
  {
    if ( EtwEventEnabled(qword_140D00B58, &stru_140038740) )
    {
      UserData.Reserved = 0;
      v6 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      UserData.Size = 8;
      v4 = &v8;
      v5 = 8;
      EtwWriteEx(v2, &stru_140038740, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
