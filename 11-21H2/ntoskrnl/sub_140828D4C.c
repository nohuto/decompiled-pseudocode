/*
 * XREFs of sub_140828D4C @ 0x140828D4C
 * Callers:
 *     sub_140828BC0 @ 0x140828BC0 (sub_140828BC0.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

BOOLEAN sub_140828D4C()
{
  BOOLEAN result; // al
  REGHANDLE v1; // rbx
  int v2; // [rsp+30h] [rbp-59h] BYREF
  int v3; // [rsp+38h] [rbp-51h] BYREF
  int v4; // [rsp+40h] [rbp-49h] BYREF
  int v5; // [rsp+48h] [rbp-41h] BYREF
  int v6; // [rsp+50h] [rbp-39h] BYREF
  int v7; // [rsp+58h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  int *v9; // [rsp+70h] [rbp-19h]
  int v10; // [rsp+78h] [rbp-11h]
  int v11; // [rsp+7Ch] [rbp-Dh]
  int *v12; // [rsp+80h] [rbp-9h]
  int v13; // [rsp+88h] [rbp-1h]
  int v14; // [rsp+8Ch] [rbp+3h]
  int *v15; // [rsp+90h] [rbp+7h]
  int v16; // [rsp+98h] [rbp+Fh]
  int v17; // [rsp+9Ch] [rbp+13h]
  int *v18; // [rsp+A0h] [rbp+17h]
  int v19; // [rsp+A8h] [rbp+1Fh]
  int v20; // [rsp+ACh] [rbp+23h]
  int *v21; // [rsp+B0h] [rbp+27h]
  int v22; // [rsp+B8h] [rbp+2Fh]
  int v23; // [rsp+BCh] [rbp+33h]

  v7 = 0;
  v6 = dword_140C1F368;
  v5 = dword_140C1F370;
  v4 = dword_140C1F370;
  result = dword_140C1F374;
  v3 = dword_140C1F374;
  v2 = dword_140C1F374;
  if ( byte_140C5AE14 )
  {
    v1 = RegHandle;
    result = EtwEventEnabled(RegHandle, &stru_140011CE8);
    if ( result )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 4;
      v9 = &v3;
      v12 = &v4;
      v15 = &v5;
      v18 = &v6;
      v21 = &v7;
      v10 = 4;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      return EtwWrite(v1, &stru_140011CE8, 0LL, 6u, &UserData);
    }
  }
  return result;
}
