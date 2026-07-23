/*
 * XREFs of SmKmStoreTerminateWorker @ 0x1405CC0D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     SmEtwEnabled @ 0x140343574 (SmEtwEnabled.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140345424 (SmKmStoreRefFromStoreIndex.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041B7B0 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x14041E810 (ZwSetSystemInformation.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SmKmEtwAppendObjectName @ 0x1405CB784 (SmKmEtwAppendObjectName.c)
 *     SmKmEtwAppendProductName @ 0x1405CB8FC (SmKmEtwAppendProductName.c)
 *     SmKmSqmAddToStream @ 0x1405CE218 (SmKmSqmAddToStream.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmStoreTerminateWorker(char *P)
{
  unsigned int v2; // ebx
  __int64 v3; // r12
  unsigned int v4; // edx
  int v5; // r10d
  struct _EX_RUNDOWN_REF *v6; // rax
  ULONG UserDataCount; // ebx
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rsi
  _BYTE *v9; // r15
  REGHANDLE *v10; // r14
  __int64 v11; // rbx
  struct _EX_RUNDOWN_REF *v12; // rax
  int v13; // eax
  ULONG Size; // ebx
  const wchar_t *v15; // rax
  ULONG ReturnLength; // [rsp+48h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v18; // [rsp+58h] [rbp-B0h]
  __int64 v19; // [rsp+60h] [rbp-A8h]
  __int64 v20; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v21[2]; // [rsp+70h] [rbp-98h] BYREF
  int v22; // [rsp+80h] [rbp-88h]
  int v23; // [rsp+84h] [rbp-84h]
  int v24; // [rsp+88h] [rbp-80h]
  int v25; // [rsp+8Ch] [rbp-7Ch]
  int v26; // [rsp+90h] [rbp-78h]
  const wchar_t *v27; // [rsp+98h] [rbp-70h]
  int v28; // [rsp+A0h] [rbp-68h]
  int v29; // [rsp+A8h] [rbp-60h]
  _DWORD v30[20]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v31[284]; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32[6]; // [rsp+578h] [rbp+470h] BYREF

  ReturnLength = 0;
  memset(v31, 0, 0x468uLL);
  v20 = 0LL;
  memset(v32, 0, sizeof(v32));
  memset(v30, 0, 0x44uLL);
  v19 = 68LL;
  v18 = (__int64 *)v30;
  SystemInformation = 0x800000001LL;
  v30[0] = 1;
  if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0
    && (v18 = (__int64 *)v31,
        v2 = 0,
        SystemInformation = 0xD00000001LL,
        LODWORD(v19) = 1128,
        v31[0] = 259,
        (v30[0] & 0xFF00) != 0) )
  {
    while ( 1 )
    {
      v3 = v2;
      v31[1] = v30[v2 + 1];
      if ( ZwQuerySystemInformation(SystemStoreInformation, &SystemInformation, 0x18u, &ReturnLength) >= 0 )
      {
        v4 = 0;
        if ( v31[4] )
          break;
      }
LABEL_9:
      if ( ++v2 >= BYTE1(v30[0]) )
        goto LABEL_10;
    }
    v5 = v31[24];
    while ( !_bittest(&v5, v4) != *((_DWORD *)P + 13) || v31[v4 + 8] != *((_DWORD *)P + 12) )
    {
      if ( ++v4 >= v31[4] )
        goto LABEL_9;
    }
    UserDataCount = 0;
    UserData = v32;
    v21[1] = (__int64)v31;
    v21[0] = (__int64)v32;
    v23 = 6;
    v25 = 1036;
    v9 = P + 56;
    v10 = (REGHANDLE *)SmEtwEnabled(2);
    if ( v10 )
    {
      if ( P != (char *)-56LL )
        LOBYTE(v31[0]) = *v9;
      v32[0].Ptr = (ULONGLONG)v31;
      *(_QWORD *)&v32[0].Size = 1LL;
      if ( P != (char *)-60LL )
        *(_DWORD *)((char *)v31 + 1) = *((_DWORD *)P + 15);
      v32[1].Ptr = (ULONGLONG)v31 + 1;
      *(_QWORD *)&v32[1].Size = 4LL;
      v11 = *((_QWORD *)P + 5);
      v22 = 2;
      v24 = 5;
      SmKmEtwAppendProductName(v21, v11);
      SmKmEtwAppendObjectName((__int64)v21, *(_QWORD *)(v11 + 8));
      UserDataCount = v22;
      UserData = (struct _EVENT_DATA_DESCRIPTOR *)v21[0];
    }
    v12 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*((_QWORD *)P + 4), *((_DWORD *)P + 12) & 0x3FF);
    ExReleaseRundownProtection_0(v12 + 1);
    SystemInformation = 0xA00000001LL;
    v18 = &v20;
    v13 = v30[v3 + 1];
    LODWORD(v20) = 1;
    LODWORD(v19) = 8;
    HIDWORD(v20) = v13;
    if ( ZwSetSystemInformation(SystemStoreInformation, &SystemInformation, 0x18u) >= 0 )
    {
      if ( v10 )
      {
        EtwWriteEx(*v10, &SmEventCacheTermination, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
        if ( !*(_DWORD *)v9 )
        {
          Size = UserData[3].Size;
          ReturnLength = Size;
          memmove(v31, (const void *)UserData[3].Ptr, Size);
          v26 = 2;
          v28 = 1;
          *((_WORD *)v31 + ((unsigned __int64)Size >> 1)) = 0;
          v15 = (const wchar_t *)v31;
          if ( !LOWORD(v31[0]) )
            v15 = L"(null)";
          v27 = v15;
          v29 = *((_DWORD *)P + 15);
          SmKmSqmAddToStream(*v10);
        }
      }
    }
  }
  else
  {
LABEL_10:
    v6 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(*((_QWORD *)P + 4), *((_DWORD *)P + 12) & 0x3FF);
    ExReleaseRundownProtection_0(v6 + 1);
  }
  ExFreePoolWithTag(P, 0);
}
