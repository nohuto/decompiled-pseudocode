/*
 * XREFs of sub_14045E2C4 @ 0x14045E2C4
 * Callers:
 *     PoFxSetComponentLatency @ 0x14045DDB0 (PoFxSetComponentLatency.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14045E2C4(__int64 a1, int a2, __int64 a3)
{
  REGHANDLE v3; // rbx
  __int64 v4; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v6; // [rsp+58h] [rbp-28h]
  int v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+64h] [rbp-1Ch]
  __int64 *v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+70h] [rbp-10h]
  int v11; // [rsp+74h] [rbp-Ch]
  int v12; // [rsp+98h] [rbp+18h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+20h] BYREF

  v13 = a3;
  v12 = a2;
  v4 = a1;
  sub_140355058(a1, a2, 9, a3);
  if ( byte_140C5AE14 )
  {
    v3 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140039878) )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      UserData.Size = 8;
      v6 = &v12;
      v9 = &v13;
      v10 = 8;
      v7 = 4;
      EtwWriteEx(v3, &stru_140039878, 0LL, 1u, 0LL, 0LL, 3u, &UserData);
    }
  }
}
