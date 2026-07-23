/*
 * XREFs of sub_140991ED8 @ 0x140991ED8
 * Callers:
 *     sub_14098C0DC @ 0x14098C0DC (sub_14098C0DC.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_140991ED8(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  int v4; // edi
  REGHANDLE v5; // rbx
  char v7; // [rsp+38h] [rbp-19h] BYREF
  int v8; // [rsp+3Ch] [rbp-15h] BYREF
  int v9; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  int *v11; // [rsp+58h] [rbp+7h]
  int v12; // [rsp+60h] [rbp+Fh]
  int v13; // [rsp+64h] [rbp+13h]
  int *v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  __int64 *v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  __int64 *v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  int v22; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  __int64 v24; // [rsp+C8h] [rbp+77h] BYREF

  v3 = &retaddr;
  v24 = a3;
  v9 = 0;
  v4 = a1;
  if ( byte_140C5AE14 )
  {
    v5 = RegHandle;
    LOBYTE(v3) = EtwEventEnabled(RegHandle, &stru_140038308);
    if ( (_BYTE)v3 )
    {
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v7 = qword_140C22048;
      UserData.Ptr = (ULONGLONG)&v7;
      v11 = &v8;
      v14 = &v9;
      v12 = 4;
      v15 = 4;
      v17 = &v24;
      v20 = &qword_140C22048;
      v18 = 8;
      v21 = 8;
      v8 = v4;
      UserData.Size = 1;
      LOBYTE(v3) = EtwWrite(v5, &stru_140038308, 0LL, 5u, &UserData);
    }
  }
  return (char)v3;
}
