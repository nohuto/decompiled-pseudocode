/*
 * XREFs of sub_140752DA8 @ 0x140752DA8
 * Callers:
 *     sub_140752F30 @ 0x140752F30 (sub_140752F30.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140752ECC @ 0x140752ECC (sub_140752ECC.c)
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140752DA8(int a1, unsigned __int8 a2, __int64 a3)
{
  int v3; // edi
  unsigned __int64 v6; // r15
  __int64 v7; // rcx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ebx
  bool v11; // zf
  REGHANDLE v12; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-41h] BYREF
  int v18; // [rsp+50h] [rbp-39h] BYREF
  _DWORD v19[4]; // [rsp+58h] [rbp-31h] BYREF
  __int128 v20; // [rsp+68h] [rbp-21h] BYREF
  __int64 v21; // [rsp+78h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-9h] BYREF
  unsigned int *v23; // [rsp+90h] [rbp+7h]
  int v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+9Ch] [rbp+13h]
  int *v26; // [rsp+A0h] [rbp+17h]
  int v27; // [rsp+A8h] [rbp+1Fh]
  int v28; // [rsp+ACh] [rbp+23h]

  v3 = a2;
  v21 = 0LL;
  v20 = 0LL;
  v6 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  v7 = (unsigned int)(a1 - 1);
  if ( !(_DWORD)v7 )
    goto LABEL_12;
  v8 = v7 - 2;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v10 = -1073741811;
        goto LABEL_7;
      }
      v7 = 0LL;
      goto LABEL_6;
    }
    sub_1402D6B0C((__int64)&unk_140CE2050, 0x16F54A4u, 0, 0, (__int64)&qword_14000EFB0, 1);
LABEL_12:
    LOBYTE(v7) = v3;
LABEL_6:
    v10 = sub_140752ECC(v7);
    goto LABEL_7;
  }
  if ( a2 )
  {
    v19[2] = 0;
    *(_QWORD *)&v20 = 0x8000000007LL;
    v19[0] = 3;
    v19[1] = -2147483612;
    sub_140A48330(0);
    sub_1407FEC6C((unsigned int)&v20, 0, (unsigned int)v19, 5, 1);
    sub_140A47CF8(v15, v14);
  }
  v10 = 0;
LABEL_7:
  v11 = byte_140C5AE14 == 0;
  *(_QWORD *)a3 = v6;
  *(_DWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 12) = v3;
  *(_DWORD *)(a3 + 16) = v10;
  v17 = v10;
  v18 = a1;
  if ( !v11 )
  {
    v12 = RegHandle;
    if ( EtwEventEnabled(RegHandle, &stru_14000FFB8) )
    {
      UserData.Reserved = 0;
      v25 = 0;
      v28 = 0;
      UserData.Ptr = (ULONGLONG)&v16;
      UserData.Size = 4;
      v23 = &v17;
      v26 = &v18;
      v24 = 4;
      v27 = 4;
      v16 = v3;
      EtwWrite(v12, &stru_14000FFB8, 0LL, 3u, &UserData);
    }
  }
  return v10;
}
