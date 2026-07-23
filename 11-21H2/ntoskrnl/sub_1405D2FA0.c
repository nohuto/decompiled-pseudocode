/*
 * XREFs of sub_1405D2FA0 @ 0x1405D2FA0
 * Callers:
 *     sub_140304CE0 @ 0x140304CE0 (sub_140304CE0.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405D2FA0(int a1, __int64 a2, _QWORD *a3)
{
  char v3; // si
  char v4; // bl
  char v6; // di
  __int64 v7; // rdx
  int v8; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-9h]
  int v11; // [rsp+68h] [rbp-1h]
  int v12; // [rsp+6Ch] [rbp+3h]
  int *v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  int *v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+88h] [rbp+1Fh]
  int v18; // [rsp+8Ch] [rbp+23h]
  int v19; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+6Fh] BYREF

  v20 = a2;
  v19 = a1;
  v3 = byte_140C5AE14;
  v4 = 1;
  v6 = 1;
  if ( !byte_140C5AE14 || !EtwEventEnabled(RegHandle, &stru_140038CF0) )
    v4 = 0;
  if ( !v3 || !EtwEventEnabled(RegHandle, &stru_140039868) )
    v6 = 0;
  if ( v4 || v6 )
  {
    UserData.Reserved = 0;
    v12 = 0;
    UserData.Ptr = (ULONGLONG)&v19;
    UserData.Size = 4;
    v10 = &v20;
    v11 = 8;
    if ( *a3 )
      v7 = DesiredTime * (MEMORY[0xFFFFF78000000320] - *a3) / 10000000LL;
    else
      LODWORD(v7) = 0;
    v15 = 0;
    v18 = 0;
    v13 = &v8;
    v16 = &dword_140C0C5F0;
    v8 = v7;
    *a3 = MEMORY[0xFFFFF78000000320];
    v14 = 4;
    v17 = 4;
    if ( v4 )
      EtwWriteEx(RegHandle, &stru_140038CF0, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    if ( v6 )
      EtwWriteEx(RegHandle, &stru_140039868, 0LL, 0, 0LL, 0LL, 4u, &UserData);
  }
}
