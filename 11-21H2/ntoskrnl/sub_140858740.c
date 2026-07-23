/*
 * XREFs of sub_140858740 @ 0x140858740
 * Callers:
 *     sub_140B270C4 @ 0x140B270C4 (sub_140B270C4.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140858740(int a1)
{
  int v1; // r9d
  REGHANDLE v2; // rbx
  int v3; // [rsp+30h] [rbp-9h] BYREF
  int v4; // [rsp+34h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-1h] BYREF
  int *v6; // [rsp+48h] [rbp+Fh]
  int v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+54h] [rbp+1Bh]
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+58h] [rbp+1Fh] BYREF
  int *v10; // [rsp+78h] [rbp+3Fh]
  int v11; // [rsp+80h] [rbp+47h]
  int v12; // [rsp+84h] [rbp+4Bh]
  int v13; // [rsp+A0h] [rbp+67h] BYREF

  v13 = a1;
  if ( byte_140C5AE15 && (unsigned int)dword_140C03A00 > 5 && sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
  {
    v12 = 0;
    v10 = &v3;
    v3 = v1;
    v11 = 4;
    sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_14002E6AB, 0LL, 0LL, 3u, &v9);
  }
  if ( byte_140C5AE14 )
  {
    v2 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140012F70) )
    {
      v4 = 0;
      UserData.Reserved = 0;
      v8 = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      UserData.Size = 4;
      v6 = &v13;
      v7 = 4;
      EtwWrite(v2, &stru_140037E98, 0LL, 2u, &UserData);
    }
  }
}
