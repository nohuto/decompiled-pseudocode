/*
 * XREFs of sub_1405D3540 @ 0x1405D3540
 * Callers:
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1409A0F20 @ 0x1409A0F20 (sub_1409A0F20.c)
 */

__int64 __fastcall sub_1405D3540(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // ebx
  REGHANDLE v6; // r14
  unsigned int v8; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v9; // [rsp+44h] [rbp-25h] BYREF
  unsigned int v10; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  unsigned int *v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  int *v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]

  v8 = 0;
  v9 = 0;
  v4 = a2;
  v10 = a2;
  if ( byte_140C5AE14 )
  {
    v6 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_140039788) )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      UserData.Ptr = (ULONGLONG)&v8;
      UserData.Size = 4;
      v12 = &v10;
      v13 = 4;
      v15 = (int *)&v9;
      v16 = 4;
      v8 = a1;
      v9 = a3;
      EtwWriteEx(v6, &stru_140039788, 0LL, 0, 0LL, 0LL, 3u, &UserData);
      v4 = v10;
    }
  }
  return sub_1409A0F20(a1, v4, a3);
}
