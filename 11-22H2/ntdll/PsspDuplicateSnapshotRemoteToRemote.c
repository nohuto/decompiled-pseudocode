/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x18012AFB8
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180127840 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009F0F0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009F1B0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x18009F530 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009F570 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18009F5D0 (ZwReadVirtualMemory.c)
 *     PssNtFreeRemoteSnapshot @ 0x1801278C0 (PssNtFreeRemoteSnapshot.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        HANDLE SourceProcessHandle,
        PVOID *a4,
        char a5)
{
  unsigned int v8; // r14d
  NTSTATUS v9; // ebx
  unsigned __int64 v10; // r12
  unsigned int v11; // esi
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  HANDLE v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rax
  unsigned __int64 v30; // r15
  SIZE_T v31; // rsi
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v34; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BaseAddressa; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BufferSize; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR NumberOfBytesWritten; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v38; // [rsp+68h] [rbp-98h]
  PVOID *v39; // [rsp+70h] [rbp-90h]
  _BYTE v40[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v41; // [rsp+84h] [rbp-7Ch]
  __int16 v42; // [rsp+198h] [rbp+98h]
  char *v43; // [rsp+1A0h] [rbp+A0h]
  HANDLE TargetHandle; // [rsp+3E8h] [rbp+2E8h] BYREF
  HANDLE v45; // [rsp+400h] [rbp+300h] BYREF
  char *v46; // [rsp+408h] [rbp+308h]
  HANDLE v47; // [rsp+418h] [rbp+318h] BYREF
  HANDLE v48; // [rsp+430h] [rbp+330h] BYREF
  HANDLE v49; // [rsp+450h] [rbp+350h] BYREF
  HANDLE v50; // [rsp+470h] [rbp+370h] BYREF
  HANDLE v51; // [rsp+4E8h] [rbp+3E8h] BYREF
  _DWORD Buffer[218]; // [rsp+500h] [rbp+400h] BYREF
  HANDLE SourceHandle; // [rsp+868h] [rbp+768h]
  unsigned int v54; // [rsp+878h] [rbp+778h]
  HANDLE v55; // [rsp+880h] [rbp+780h]
  __int64 v56; // [rsp+888h] [rbp+788h]
  HANDLE v57; // [rsp+898h] [rbp+798h]
  HANDLE v58; // [rsp+8B0h] [rbp+7B0h]
  HANDLE v59; // [rsp+8D0h] [rbp+7D0h]
  HANDLE v60; // [rsp+8F0h] [rbp+7F0h]
  HANDLE v61; // [rsp+968h] [rbp+868h]

  v39 = BaseAddress;
  v38 = a4;
  BaseAddressa = 0LL;
  v34 = 0LL;
  *a4 = 0LL;
  v8 = 0;
  memset_thunk_772440563353939046(v40, 0, 0x478uLL);
  v9 = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x478uLL, &BufferSize);
  if ( v9 < 0 )
    goto LABEL_43;
  if ( BufferSize == 1144 )
  {
    if ( Buffer[0] == 1146311504 )
    {
      v10 = (unsigned __int64)v54 << 6;
      if ( v10 <= 0xFFFFFFFF )
      {
        v11 = v10 + 1144;
        if ( (unsigned int)v10 < 0xFFFFFB88 )
        {
          v12 = 8LL;
          v13 = v40;
          v14 = Buffer;
          do
          {
            v15 = v14[1];
            *(_OWORD *)v13 = *v14;
            v16 = v14[2];
            *((_OWORD *)v13 + 1) = v15;
            v17 = v14[3];
            *((_OWORD *)v13 + 2) = v16;
            v18 = v14[4];
            *((_OWORD *)v13 + 3) = v17;
            v19 = v14[5];
            *((_OWORD *)v13 + 4) = v18;
            v20 = v14[6];
            *((_OWORD *)v13 + 5) = v19;
            v21 = v14[7];
            v14 += 8;
            *((_OWORD *)v13 + 6) = v20;
            v13 += 128;
            *((_OWORD *)v13 - 1) = v21;
            --v12;
          }
          while ( v12 );
          v22 = SourceHandle;
          v23 = v14[1];
          *(_OWORD *)v13 = *v14;
          v24 = v14[2];
          *((_OWORD *)v13 + 1) = v23;
          v25 = v14[3];
          *((_OWORD *)v13 + 2) = v24;
          v26 = v14[4];
          *((_OWORD *)v13 + 3) = v25;
          v27 = v14[5];
          *((_OWORD *)v13 + 4) = v26;
          v28 = v14[6];
          v29 = *((_QWORD *)v14 + 14);
          *((_OWORD *)v13 + 5) = v27;
          *((_OWORD *)v13 + 6) = v28;
          *((_QWORD *)v13 + 14) = v29;
          TargetHandle = 0LL;
          v45 = 0LL;
          v47 = 0LL;
          v48 = 0LL;
          v49 = 0LL;
          v50 = 0LL;
          v51 = 0LL;
          if ( v22 )
          {
            v9 = ZwDuplicateObject(ProcessHandle, v22, SourceProcessHandle, &TargetHandle, 0, 0, 2u);
            v8 = v10 + 1144;
            if ( v9 < 0 )
              goto LABEL_43;
          }
          if ( v55 )
          {
            v9 = ZwDuplicateObject(ProcessHandle, v55, SourceProcessHandle, &v45, 0, 0, 2u);
            v8 = v10 + 1144;
            if ( v9 < 0 )
              goto LABEL_43;
          }
          if ( v57 )
          {
            v9 = ZwDuplicateObject(ProcessHandle, v57, SourceProcessHandle, &v47, 0, 0, 2u);
            v8 = v10 + 1144;
            if ( v9 < 0 )
              goto LABEL_43;
          }
          if ( v58 )
          {
            v9 = ZwDuplicateObject(ProcessHandle, v58, SourceProcessHandle, &v48, 0, 0, 2u);
            v8 = v10 + 1144;
            if ( v9 < 0 )
              goto LABEL_43;
          }
          if ( v59 )
          {
            v9 = ZwDuplicateObject(ProcessHandle, v59, SourceProcessHandle, &v49, 0, 0, 2u);
            v8 = v10 + 1144;
            if ( v9 < 0 )
              goto LABEL_43;
          }
          if ( v60 )
          {
            v9 = ZwDuplicateObject(ProcessHandle, v60, SourceProcessHandle, &v50, 0, 0, 2u);
            v8 = v10 + 1144;
            if ( v9 < 0 )
              goto LABEL_43;
          }
          if ( v61 )
          {
            v9 = ZwDuplicateObject(ProcessHandle, v61, SourceProcessHandle, &v51, 0, 0, 2u);
            v8 = v10 + 1144;
            if ( v9 < 0 )
              goto LABEL_43;
          }
          BaseAddressa = 0LL;
          RegionSize = v11;
          v9 = ZwAllocateVirtualMemory(SourceProcessHandle, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u);
          v8 = v10 + 1144;
          if ( v9 < 0 )
            goto LABEL_43;
          v41 = v41 & 0xFFFFFFF8 | 1;
          if ( v46 )
            v46 = (char *)BaseAddressa + 1144;
          if ( v42 )
            v43 = (char *)BaseAddressa + 296;
          v30 = 0LL;
          v9 = NtWriteVirtualMemory(SourceProcessHandle, BaseAddressa, v40, v11, 0LL);
          if ( v9 < 0 )
            goto LABEL_43;
          if ( v56 )
          {
            v34 = 0LL;
            RegionSize = 1LL;
            v9 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v34, 0LL, &RegionSize, 0x1000u, 4u);
            if ( v9 < 0 )
              goto LABEL_43;
            if ( (_DWORD)v10 )
            {
              do
              {
                v31 = (unsigned int)v10 - v30;
                if ( RegionSize <= v31 )
                  v31 = RegionSize;
                v9 = ZwReadVirtualMemory(ProcessHandle, (PVOID)(v30 + v56), v34, v31, &BufferSize);
                if ( v9 < 0 )
                  goto LABEL_43;
                if ( BufferSize != v31 )
                  goto LABEL_42;
                v9 = NtWriteVirtualMemory(
                       SourceProcessHandle,
                       (char *)BaseAddressa + v30 + 1144,
                       v34,
                       BufferSize,
                       &NumberOfBytesWritten);
                if ( v9 < 0 )
                  goto LABEL_43;
                if ( NumberOfBytesWritten != BufferSize )
                {
LABEL_42:
                  v9 = -2147483635;
                  goto LABEL_43;
                }
                v30 += NumberOfBytesWritten;
              }
              while ( v30 < (unsigned int)v10 );
            }
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v34, &RegionSize, 0x8000u);
            v34 = 0LL;
          }
          v9 = 0;
          *v38 = BaseAddressa;
          goto LABEL_61;
        }
        v8 = -1;
      }
      v9 = -1073741675;
      goto LABEL_43;
    }
    v9 = -1073741816;
  }
  else
  {
    v9 = -2147483635;
  }
LABEL_43:
  if ( v34 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v34, &RegionSize, 0x8000u);
  }
  if ( BaseAddressa )
  {
    RegionSize = v8;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( v50 )
    ZwDuplicateObject(SourceProcessHandle, v50, 0LL, 0LL, 0, 0, 1u);
  if ( v49 )
    ZwDuplicateObject(SourceProcessHandle, v49, 0LL, 0LL, 0, 0, 1u);
  if ( v47 )
    ZwDuplicateObject(SourceProcessHandle, v47, 0LL, 0LL, 0, 0, 1u);
  if ( v48 )
    ZwDuplicateObject(SourceProcessHandle, v48, 0LL, 0LL, 0, 0, 1u);
  if ( v45 )
    ZwDuplicateObject(SourceProcessHandle, v45, 0LL, 0LL, 0, 0, 1u);
  if ( TargetHandle )
    ZwDuplicateObject(SourceProcessHandle, TargetHandle, 0LL, 0LL, 0, 0, 1u);
  if ( v51 )
    ZwDuplicateObject(SourceProcessHandle, v51, 0LL, 0LL, 0, 0, 1u);
LABEL_61:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(ProcessHandle, v39);
  return (unsigned int)v9;
}
