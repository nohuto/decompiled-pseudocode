/*
 * XREFs of sub_1405D2B0C @ 0x1405D2B0C
 * Callers:
 *     sub_1405CBC30 @ 0x1405CBC30 (sub_1405CBC30.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405D2B0C(__int64 *a1, unsigned __int8 a2)
{
  int v3; // edi
  REGHANDLE v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]
  int *v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+74h] [rbp-Ch]

  v3 = a2;
  if ( byte_140C5AE14 )
  {
    v4 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140039830) )
    {
      v5 = *a1;
      v6 = *(_QWORD *)(*a1 + 80);
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      UserData.Ptr = v6 + 48;
      v9 = v5 + 16;
      v10 = 4;
      v12 = &v7;
      v13 = 4;
      UserData.Size = 8;
      v7 = v3;
      EtwWriteEx(v4, &stru_140039830, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
}
