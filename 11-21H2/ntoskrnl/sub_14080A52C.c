/*
 * XREFs of sub_14080A52C @ 0x14080A52C
 * Callers:
 *     sub_140806B90 @ 0x140806B90 (sub_140806B90.c)
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14039A88C @ 0x14039A88C (sub_14039A88C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_14080A52C()
{
  int v0; // eax
  char v1; // [rsp+30h] [rbp-49h] BYREF
  int v2; // [rsp+34h] [rbp-45h] BYREF
  __int64 v3; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-39h] BYREF
  char *v5; // [rsp+50h] [rbp-29h]
  int v6; // [rsp+58h] [rbp-21h]
  int v7; // [rsp+5Ch] [rbp-1Dh]
  int *v8; // [rsp+60h] [rbp-19h]
  int v9; // [rsp+68h] [rbp-11h]
  int v10; // [rsp+6Ch] [rbp-Dh]
  int *v11; // [rsp+70h] [rbp-9h]
  int v12; // [rsp+78h] [rbp-1h]
  int v13; // [rsp+7Ch] [rbp+3h]
  int *v14; // [rsp+80h] [rbp+7h]
  int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+8Ch] [rbp+13h]
  __int64 *v17; // [rsp+90h] [rbp+17h]
  int v18; // [rsp+98h] [rbp+1Fh]
  int v19; // [rsp+9Ch] [rbp+23h]
  unsigned __int64 v20; // [rsp+A0h] [rbp+27h]
  int v21; // [rsp+A8h] [rbp+2Fh]
  int v22; // [rsp+ACh] [rbp+33h]
  __int64 *v23; // [rsp+B0h] [rbp+37h]
  int v24; // [rsp+B8h] [rbp+3Fh]
  int v25; // [rsp+BCh] [rbp+43h]

  if ( byte_140C5AE16 )
  {
    if ( EtwEventEnabled(CallbackContext, &stru_140011D58) )
    {
      UserData.Reserved = 0;
      v7 = 0;
      v3 = MEMORY[0xFFFFF78000000014];
      UserData.Ptr = qword_140C22050;
      v1 = qword_140C22048;
      v5 = &v1;
      UserData.Size = 16;
      v6 = 1;
      v0 = sub_14039A88C(1);
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v2 = v0;
      v9 = 4;
      v8 = &v2;
      v11 = &dword_140C54140;
      v14 = &dword_140C54218;
      v17 = &qword_140C22048;
      v20 = 0xFFFFF780000002C4uLL;
      v23 = &v3;
      v12 = 4;
      v15 = 4;
      v21 = 4;
      v18 = 8;
      v24 = 8;
      EtwWrite(CallbackContext, &stru_140011D58, &OutputBuffer, 8u, &UserData);
    }
  }
}
