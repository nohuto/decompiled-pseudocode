/*
 * XREFs of sub_1405D9D50 @ 0x1405D9D50
 * Callers:
 *     sub_1405CF800 @ 0x1405CF800 (sub_1405CF800.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1405D9D50(__int64 a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v5; // rbx
  __int16 v6; // ax
  __int16 v8; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  __int64 v10; // [rsp+68h] [rbp+17h]
  int v11; // [rsp+70h] [rbp+1Fh]
  int v12; // [rsp+74h] [rbp+23h]
  int *v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  int *v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+90h] [rbp+3Fh]
  int v18; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  int v20; // [rsp+C0h] [rbp+6Fh] BYREF
  int v21; // [rsp+C8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v21 = a3;
  v20 = a2;
  if ( byte_140C5AE30 )
  {
    v5 = qword_140C1F580;
    LOBYTE(v3) = EtwEventEnabled(qword_140C1F580, &stru_140038F18);
    if ( (_BYTE)v3 )
    {
      v6 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v8 = v6;
      UserData.Ptr = (ULONGLONG)&v8;
      v10 = a1 + 209;
      v13 = &v20;
      v16 = &v21;
      v14 = 4;
      v17 = 4;
      UserData.Size = 2;
      v11 = 1;
      LOBYTE(v3) = EtwWriteEx(v5, &stru_140038F18, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
  return (char)v3;
}
