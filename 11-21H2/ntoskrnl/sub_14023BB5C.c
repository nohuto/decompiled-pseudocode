/*
 * XREFs of sub_14023BB5C @ 0x14023BB5C
 * Callers:
 *     sub_14023B798 @ 0x14023B798 (sub_14023B798.c)
 * Callees:
 *     sub_14023BC00 @ 0x14023BC00 (sub_14023BC00.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_14023BB5C(__int64 a1)
{
  const EVENT_DESCRIPTOR *v2; // rax
  const EVENT_DESCRIPTOR *v3; // rsi
  REGHANDLE v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned __int64 v7; // r8
  unsigned int v8; // edx
  int v9; // eax
  int v10; // edx
  int v12; // [rsp+48h] [rbp-39h] BYREF
  int v13; // [rsp+4Ch] [rbp-35h] BYREF
  int v14; // [rsp+50h] [rbp-31h] BYREF
  int v15; // [rsp+54h] [rbp-2Dh] BYREF
  unsigned int v16; // [rsp+58h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  int *v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+84h] [rbp+3h]
  int *v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+94h] [rbp+13h]
  int *v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+A0h] [rbp+1Fh]
  int v26; // [rsp+A4h] [rbp+23h]
  unsigned int *v27; // [rsp+A8h] [rbp+27h]
  int v28; // [rsp+B0h] [rbp+2Fh]
  int v29; // [rsp+B4h] [rbp+33h]
  GUID v30; // [rsp+B8h] [rbp+37h] BYREF

  v13 = 0;
  v2 = (const EVENT_DESCRIPTOR *)sub_14023BC00(
                                   a1,
                                   (unsigned int)qword_14000E9E0,
                                   (unsigned int)qword_14000E9F0,
                                   (unsigned int)&v13,
                                   (__int64)&v30);
  v3 = v2;
  if ( byte_140C5AE30 )
  {
    v4 = qword_140C1F580;
    LOBYTE(v2) = EtwEventEnabled(qword_140C1F580, v2);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&qword_140C204B8;
      v5 = *(_QWORD *)(a1 + 8);
      UserData.Size = 8;
      if ( v5 )
        v6 = *(_DWORD *)(v5 + 72);
      else
        v6 = 100;
      v16 = v6;
      v7 = qword_140C204C0 / 0x2710uLL;
      v8 = ((unsigned int)(qword_140C204C0 / 0x2710uLL) * (*(_DWORD *)(a1 + 40) / v6) + 50) / 0x64;
      v12 = v8;
      if ( v8 <= (unsigned int)(qword_140C204C0 / 0x2710uLL) )
      {
        v9 = v7 - v8;
        v10 = 0;
      }
      else
      {
        v9 = 0;
        v12 = qword_140C204C0 / 0x2710uLL;
        v10 = v8 - v7;
      }
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v14 = v9;
      v18 = &v14;
      v21 = &v12;
      v24 = &v15;
      v27 = &v16;
      v15 = v10;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      v28 = 4;
      LOBYTE(v2) = EtwWriteEx(v4, v3, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return (char)v2;
}
