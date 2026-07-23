/*
 * XREFs of sub_1405D25F0 @ 0x1405D25F0
 * Callers:
 *     sub_1405CBD34 @ 0x1405CBD34 (sub_1405CBD34.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405D25F0(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  REGHANDLE v3; // rbx
  int v4; // ecx
  int v5; // [rsp+40h] [rbp+7h] BYREF
  int v6; // [rsp+44h] [rbp+Bh] BYREF
  __int64 v7; // [rsp+48h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  int *v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  int *v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v2 = a2;
  v7 = a1;
  sub_140355058(a1, 0, 26, a2);
  if ( byte_140C5AE14 )
  {
    v3 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140037E18) )
    {
      v4 = *(_DWORD *)(v7 + 156);
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      v9 = &v5;
      v6 = v4;
      v12 = &v6;
      v10 = 4;
      v13 = 4;
      v5 = v2;
      UserData.Size = 8;
      EtwWriteEx(v3, &stru_140037E18, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
