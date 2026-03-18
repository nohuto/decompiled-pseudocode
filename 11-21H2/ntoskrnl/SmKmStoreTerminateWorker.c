/*
 * XREFs of SmKmStoreTerminateWorker @ 0x1405FBC00
 * Callers:
 *     <none>
 * Callees:
 *     SmEtwEnabled @ 0x140261818 (SmEtwEnabled.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     ZwSetSystemInformation @ 0x14041EE00 (ZwSetSystemInformation.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SmKmEtwAppendObjectName @ 0x1405FB648 (SmKmEtwAppendObjectName.c)
 *     SmKmEtwAppendProductName @ 0x1405FB7C0 (SmKmEtwAppendProductName.c)
 *     SmKmStoreDereference @ 0x1405FBB0C (SmKmStoreDereference.c)
 *     SmKmSqmAddToStream @ 0x1405FD958 (SmKmSqmAddToStream.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmStoreTerminateWorker(PVOID P)
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
  size_t Size; // rbx
  const wchar_t *v12; // rax
  __int64 v13; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v14; // [rsp+58h] [rbp-B0h]
  __int64 v15; // [rsp+60h] [rbp-A8h]
  __int64 v16; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17[2]; // [rsp+70h] [rbp-98h] BYREF
  int v18; // [rsp+80h] [rbp-88h]
  int v19; // [rsp+84h] [rbp-84h]
  int v20; // [rsp+88h] [rbp-80h]
  int v21; // [rsp+8Ch] [rbp-7Ch]
  int v22; // [rsp+90h] [rbp-78h]
  const wchar_t *v23; // [rsp+98h] [rbp-70h]
  int v24; // [rsp+A0h] [rbp-68h]
  int v25; // [rsp+A8h] [rbp-60h]
  _DWORD v26[20]; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v27[284]; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28[6]; // [rsp+578h] [rbp+470h] BYREF

  memset(v27, 0, 0x468uLL);
  v16 = 0LL;
  memset(v28, 0, sizeof(v28));
  memset(v26, 0, 0x44uLL);
  v15 = 68LL;
  v14 = (__int64 *)v26;
  v13 = 0x800000001LL;
  v26[0] = 1;
  if ( (int)ZwQuerySystemInformation(109LL, (__int64)&v13) >= 0
    && (v13 = 0xD00000001LL,
        v14 = (__int64 *)v27,
        LODWORD(v15) = 1128,
        memset(&v27[1], 0, 0x464uLL),
        v2 = 0,
        v27[0] = 259,
        (v26[0] & 0xFF00) != 0) )
  {
    while ( 1 )
    {
      v3 = v2;
      v27[1] = v26[v2 + 1];
      if ( (int)ZwQuerySystemInformation(109LL, (__int64)&v13) >= 0 )
      {
        v4 = 0;
        if ( v27[4] )
          break;
      }
LABEL_9:
      if ( ++v2 >= BYTE1(v26[0]) )
        goto LABEL_10;
    }
    v5 = v27[24];
    while ( !_bittest(&v5, v4) != *((_DWORD *)P + 13) || v27[v4 + 8] != *((_DWORD *)P + 12) )
    {
      if ( ++v4 >= v27[4] )
        goto LABEL_9;
    }
    UserDataCount = 0;
    UserData = v28;
    v17[1] = (__int64)v27;
    v17[0] = (__int64)v28;
    v19 = 6;
    v21 = 1036;
    v8 = SmEtwEnabled(2);
    if ( v8 )
    {
      if ( P != (PVOID)-56LL )
        LOBYTE(v27[0]) = *((_BYTE *)P + 56);
      v28[0].Ptr = (ULONGLONG)v27;
      *(_QWORD *)&v28[0].Size = 1LL;
      if ( P != (PVOID)-60LL )
        *(_DWORD *)((char *)v27 + 1) = *((_DWORD *)P + 15);
      v28[1].Ptr = (ULONGLONG)v27 + 1;
      *(_QWORD *)&v28[1].Size = 4LL;
      v9 = *((_QWORD *)P + 5);
      v18 = 2;
      v20 = 5;
      SmKmEtwAppendProductName(v17, v9);
      SmKmEtwAppendObjectName((__int64)v17, *(_QWORD *)(v9 + 8));
      UserDataCount = v18;
      UserData = (struct _EVENT_DATA_DESCRIPTOR *)v17[0];
    }
    SmKmStoreDereference(*((_QWORD *)P + 4), *((_DWORD *)P + 12));
    v13 = 0xA00000001LL;
    v14 = &v16;
    v10 = v26[v3 + 1];
    LODWORD(v15) = 8;
    LODWORD(v16) = 1;
    HIDWORD(v16) = v10;
    if ( (int)ZwSetSystemInformation(109LL, (__int64)&v13) >= 0 )
    {
      if ( v8 )
      {
        EtwWriteEx(*v8, &SmEventCacheTermination, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
        if ( !*((_DWORD *)P + 14) )
        {
          Size = UserData[3].Size;
          memmove(v27, (const void *)UserData[3].Ptr, Size);
          v22 = 2;
          v12 = (const wchar_t *)v27;
          v24 = 1;
          *((_WORD *)v27 + (Size >> 1)) = 0;
          if ( !LOWORD(v27[0]) )
            v12 = L"(null)";
          v23 = v12;
          v25 = *((_DWORD *)P + 15);
          SmKmSqmAddToStream(*v8);
        }
      }
    }
  }
  else
  {
LABEL_10:
    SmKmStoreDereference(*((_QWORD *)P + 4), *((_DWORD *)P + 12));
  }
  ExFreePoolWithTag(P, 0);
}
