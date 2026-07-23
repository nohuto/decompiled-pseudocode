/*
 * XREFs of sub_1405D3288 @ 0x1405D3288
 * Callers:
 *     sub_1405CF800 @ 0x1405CF800 (sub_1405CF800.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1405D3288(int a1, ULONG a2)
{
  int v3; // eax
  ULONG UserDataCount; // [rsp+30h] [rbp-39h]
  __int16 v6; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int16 *v9; // [rsp+60h] [rbp-9h]
  int v10; // [rsp+68h] [rbp-1h]
  int v11; // [rsp+6Ch] [rbp+3h]
  _OWORD *v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  _OWORD v15[2]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+37h]
  __int16 v17; // [rsp+A8h] [rbp+3Fh]
  int v18; // [rsp+D0h] [rbp+67h] BYREF

  v18 = a1;
  v7 = 0LL;
  LOBYTE(v3) = 0;
  v15[0] = xmmword_140438C30;
  v17 = 0;
  v16 = 0x39003900390039LL;
  v15[1] = xmmword_140438C40;
  if ( byte_140C5AE14 )
  {
    LOBYTE(v3) = EtwEventEnabled(RegHandle, &stru_140039590);
    if ( (_BYTE)v3 )
    {
      UserDataCount = a2;
      v3 = sub_1402DFBC4(v15, 0x15uLL, 0LL, &v7, 0, (const WCHAR *)&RelatedActivityId, UserDataCount);
      if ( v3 >= 0 )
      {
        UserData.Reserved = 0;
        v11 = 0;
        v14 = 0;
        UserData.Ptr = (ULONGLONG)&v18;
        v6 = 21 - v7;
        v9 = &v6;
        v13 = 2 * (unsigned __int16)(21 - v7);
        v12 = v15;
        UserData.Size = 4;
        v10 = 2;
        LOBYTE(v3) = EtwWriteEx(RegHandle, &stru_140039590, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      }
    }
  }
  return v3;
}
