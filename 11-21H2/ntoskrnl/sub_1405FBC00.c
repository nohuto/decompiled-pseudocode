/*
 * XREFs of sub_1405FBC00 @ 0x1405FBC00
 * Callers:
 *     <none>
 * Callees:
 *     sub_140261818 @ 0x140261818 (sub_140261818.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x14041EE00 (ZwSetSystemInformation.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405FB648 @ 0x1405FB648 (sub_1405FB648.c)
 *     sub_1405FB7C0 @ 0x1405FB7C0 (sub_1405FB7C0.c)
 *     sub_1405FBB0C @ 0x1405FBB0C (sub_1405FBB0C.c)
 *     sub_1405FD958 @ 0x1405FD958 (sub_1405FD958.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1405FBC00(PVOID P)
{
  unsigned int v2; // ebx
  __int64 v3; // r15
  unsigned int v4; // edx
  int v5; // r10d
  ULONG UserDataCount; // ebx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rsi
  ULONGLONG *v8; // r14
  __int64 v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // rbx
  const wchar_t *v12; // rax
  ULONG ReturnLength; // [rsp+48h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v15; // [rsp+58h] [rbp-B0h]
  __int64 v16; // [rsp+60h] [rbp-A8h]
  __int64 v17; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18[2]; // [rsp+70h] [rbp-98h] BYREF
  int v19; // [rsp+80h] [rbp-88h]
  int v20; // [rsp+84h] [rbp-84h]
  int v21; // [rsp+88h] [rbp-80h]
  int v22; // [rsp+8Ch] [rbp-7Ch]
  int v23; // [rsp+90h] [rbp-78h]
  const wchar_t *v24; // [rsp+98h] [rbp-70h]
  int v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A8h] [rbp-60h]
  _DWORD v27[20]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v28[284]; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29[6]; // [rsp+578h] [rbp+470h] BYREF

  ReturnLength = 0;
  memset(v28, 0, 0x468uLL);
  v17 = 0LL;
  memset(v29, 0, sizeof(v29));
  memset(v27, 0, 0x44uLL);
  v16 = 68LL;
  v15 = (__int64 *)v27;
  SystemInformation = 0x800000001LL;
  v27[0] = 1;
  if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0
    && (SystemInformation = 0xD00000001LL,
        v15 = (__int64 *)v28,
        LODWORD(v16) = 1128,
        memset(&v28[1], 0, 0x464uLL),
        v2 = 0,
        v28[0] = 259,
        (v27[0] & 0xFF00) != 0) )
  {
    while ( 1 )
    {
      v3 = v2;
      v28[1] = v27[v2 + 1];
      if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0 )
      {
        v4 = 0;
        if ( v28[4] )
          break;
      }
LABEL_9:
      if ( ++v2 >= BYTE1(v27[0]) )
        goto LABEL_10;
    }
    v5 = v28[24];
    while ( !_bittest(&v5, v4) != *((_DWORD *)P + 13) || v28[v4 + 8] != *((_DWORD *)P + 12) )
    {
      if ( ++v4 >= v28[4] )
        goto LABEL_9;
    }
    UserDataCount = 0;
    UserData = v29;
    v18[1] = (__int64)v28;
    v18[0] = (__int64)v29;
    v20 = 6;
    v22 = 1036;
    v8 = sub_140261818(2);
    if ( v8 )
    {
      if ( P != (PVOID)-56LL )
        LOBYTE(v28[0]) = *((_BYTE *)P + 56);
      v29[0].Ptr = (ULONGLONG)v28;
      *(_QWORD *)&v29[0].Size = 1LL;
      if ( P != (PVOID)-60LL )
        *(_DWORD *)((char *)v28 + 1) = *((_DWORD *)P + 15);
      v29[1].Ptr = (ULONGLONG)v28 + 1;
      *(_QWORD *)&v29[1].Size = 4LL;
      v9 = *((_QWORD *)P + 5);
      v19 = 2;
      v21 = 5;
      sub_1405FB7C0(v18, v9);
      sub_1405FB648((__int64)v18, *(_QWORD *)(v9 + 8));
      UserDataCount = v19;
      UserData = (struct _EVENT_DATA_DESCRIPTOR *)v18[0];
    }
    sub_1405FBB0C(*((_QWORD *)P + 4), *((_DWORD *)P + 12));
    SystemInformation = 0xA00000001LL;
    v15 = &v17;
    v10 = v27[v3 + 1];
    LODWORD(v16) = 8;
    LODWORD(v17) = 1;
    HIDWORD(v17) = v10;
    if ( ZwSetSystemInformation(SystemStoreInformation, &SystemInformation, 0x18u) >= 0 )
    {
      if ( v8 )
      {
        EtwWriteEx(*v8, &stru_140038D90, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
        if ( !*((_DWORD *)P + 14) )
        {
          ReturnLength = UserData[3].Size;
          v11 = ReturnLength;
          memmove(v28, (const void *)UserData[3].Ptr, ReturnLength);
          v23 = 2;
          v12 = (const wchar_t *)v28;
          v25 = 1;
          *((_WORD *)v28 + (v11 >> 1)) = 0;
          if ( !LOWORD(v28[0]) )
            v12 = L"(null)";
          v24 = v12;
          v26 = *((_DWORD *)P + 15);
          sub_1405FD958(*v8);
        }
      }
    }
  }
  else
  {
LABEL_10:
    sub_1405FBB0C(*((_QWORD *)P + 4), *((_DWORD *)P + 12));
  }
  ExFreePoolWithTag(P, 0);
}
