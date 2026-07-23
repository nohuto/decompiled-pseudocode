/*
 * XREFs of sub_1405D218C @ 0x1405D218C
 * Callers:
 *     PoFxSetComponentWake @ 0x1405CAD20 (PoFxSetComponentWake.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405D218C(__int64 a1, int a2, unsigned __int8 a3)
{
  int v3; // edi
  REGHANDLE v4; // rbx
  int v5; // [rsp+48h] [rbp+7h] BYREF
  __int64 v6; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+17h] BYREF
  int *v8; // [rsp+68h] [rbp+27h]
  int v9; // [rsp+70h] [rbp+2Fh]
  int v10; // [rsp+74h] [rbp+33h]
  int *v11; // [rsp+78h] [rbp+37h]
  int v12; // [rsp+80h] [rbp+3Fh]
  int v13; // [rsp+84h] [rbp+43h]
  int v14; // [rsp+B0h] [rbp+6Fh] BYREF

  v14 = a2;
  v3 = a3;
  v6 = a1;
  sub_140355058(a1, a2, 11, a3);
  if ( byte_140C5AE14 )
  {
    v4 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_1400393C8) )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      UserData.Ptr = (ULONGLONG)&v6;
      v9 = 4;
      v8 = &v14;
      v12 = 4;
      v11 = &v5;
      v5 = v3;
      UserData.Size = 8;
      EtwWriteEx(v4, &stru_1400393C8, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
