/*
 * XREFs of sub_1405D33D8 @ 0x1405D33D8
 * Callers:
 *     sub_1405CF800 @ 0x1405CF800 (sub_1405CF800.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1405D33D8(int a1, ULONG a2)
{
  int v3; // eax
  ULONG UserDataCount; // [rsp+30h] [rbp-49h]
  __int16 v6; // [rsp+40h] [rbp-39h] BYREF
  int v7; // [rsp+44h] [rbp-35h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  int *v10; // [rsp+60h] [rbp-19h]
  int v11; // [rsp+68h] [rbp-11h]
  int v12; // [rsp+6Ch] [rbp-Dh]
  __int16 *v13; // [rsp+70h] [rbp-9h]
  int v14; // [rsp+78h] [rbp-1h]
  int v15; // [rsp+7Ch] [rbp+3h]
  _OWORD *v16; // [rsp+80h] [rbp+7h]
  int v17; // [rsp+88h] [rbp+Fh]
  int v18; // [rsp+8Ch] [rbp+13h]
  _OWORD v19[2]; // [rsp+90h] [rbp+17h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+37h]
  __int16 v21; // [rsp+B8h] [rbp+3Fh]
  int v22; // [rsp+E0h] [rbp+67h] BYREF

  v22 = a1;
  v8 = 0LL;
  LOBYTE(v3) = 0;
  v19[0] = xmmword_140438C30;
  v21 = 0;
  v20 = 0x39003900390039LL;
  v19[1] = xmmword_140438C40;
  if ( byte_140C5AE14 )
  {
    LOBYTE(v3) = EtwEventEnabled(RegHandle, &stru_1400397E0);
    if ( (_BYTE)v3 )
    {
      UserDataCount = a2;
      v3 = sub_1402DFBC4(v19, 0x15uLL, 0LL, &v8, 0, (const WCHAR *)&RelatedActivityId, UserDataCount);
      if ( v3 >= 0 )
      {
        v7 = 0;
        UserData.Reserved = 0;
        v12 = 0;
        v15 = 0;
        v18 = 0;
        UserData.Ptr = (ULONGLONG)&v22;
        v10 = &v7;
        v6 = 21 - v8;
        v13 = &v6;
        v17 = 2 * (unsigned __int16)(21 - v8);
        UserData.Size = 4;
        v11 = 4;
        v16 = v19;
        v14 = 2;
        LOBYTE(v3) = EtwWriteEx(RegHandle, &stru_1400397E0, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      }
    }
  }
  return v3;
}
