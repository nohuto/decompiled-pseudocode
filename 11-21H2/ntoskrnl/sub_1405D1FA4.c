/*
 * XREFs of sub_1405D1FA4 @ 0x1405D1FA4
 * Callers:
 *     sub_1405CEDA8 @ 0x1405CEDA8 (sub_1405CEDA8.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1405D1FA4(__int64 a1, int a2, __int64 a3, int a4)
{
  _UNKNOWN **v4; // rax
  REGHANDLE v7; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  int *v10; // [rsp+58h] [rbp+7h]
  int v11; // [rsp+60h] [rbp+Fh]
  int v12; // [rsp+64h] [rbp+13h]
  int *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  __int64 v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  __int64 v20; // [rsp+B8h] [rbp+67h] BYREF
  int v21; // [rsp+C0h] [rbp+6Fh] BYREF
  int v22; // [rsp+D0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v22 = a4;
  v21 = a2;
  v20 = a1;
  if ( byte_140C5AE14 )
  {
    v7 = RegHandle;
    LOBYTE(v4) = EtwEventEnabled(RegHandle, &stru_140038020);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      UserData.Ptr = (ULONGLONG)&v20;
      v11 = 4;
      v10 = &v21;
      v13 = &v22;
      v17 = 4 * a4;
      v14 = 4;
      UserData.Size = 8;
      v16 = a3;
      LOBYTE(v4) = EtwWriteEx(v7, &stru_140038020, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v4;
}
