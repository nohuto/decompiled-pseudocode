/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x18012C488
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180128CC0 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     Feature_2838281531__private_IsEnabledDeviceUsage @ 0x1800A08AC (Feature_2838281531__private_IsEnabledDeviceUsage.c)
 *     Feature_3213038904__private_IsEnabledDeviceUsage @ 0x1800A08E8 (Feature_3213038904__private_IsEnabledDeviceUsage.c)
 *     PssValidateSnapshotDescriptor @ 0x1800A0924 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x1800A11B0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A1270 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A15F0 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A1630 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A1690 (ZwReadVirtualMemory.c)
 *     PssNtFreeRemoteSnapshot @ 0x180128D40 (PssNtFreeRemoteSnapshot.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        HANDLE SourceProcessHandle,
        PVOID *a4,
        char a5)
{
  unsigned int v8; // r14d
  int v9; // ebx
  unsigned __int64 v10; // r15
  unsigned int v11; // esi
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  void *v22; // rdx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rax
  NTSTATUS v30; // eax
  unsigned __int64 i; // rsi
  SIZE_T v32; // r12
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-C0h] BYREF
  PVOID BaseAddressa; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v36; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BufferSize; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR NumberOfBytesWritten; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v39; // [rsp+68h] [rbp-98h]
  PVOID *v40; // [rsp+70h] [rbp-90h]
  _BYTE v41[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v42; // [rsp+84h] [rbp-7Ch]
  __int16 v43; // [rsp+198h] [rbp+98h]
  char *v44; // [rsp+1A0h] [rbp+A0h]
  HANDLE TargetHandle; // [rsp+3E8h] [rbp+2E8h] BYREF
  HANDLE v46; // [rsp+400h] [rbp+300h] BYREF
  char *v47; // [rsp+408h] [rbp+308h]
  HANDLE v48; // [rsp+418h] [rbp+318h] BYREF
  HANDLE v49; // [rsp+430h] [rbp+330h] BYREF
  HANDLE v50; // [rsp+450h] [rbp+350h] BYREF
  HANDLE v51; // [rsp+470h] [rbp+370h] BYREF
  HANDLE v52; // [rsp+4E8h] [rbp+3E8h] BYREF
  __int64 Buffer[111]; // [rsp+500h] [rbp+400h] BYREF
  unsigned int v54; // [rsp+878h] [rbp+778h]
  HANDLE v55; // [rsp+880h] [rbp+780h]
  __int64 v56; // [rsp+888h] [rbp+788h]
  HANDLE v57; // [rsp+898h] [rbp+798h]
  HANDLE v58; // [rsp+8B0h] [rbp+7B0h]
  HANDLE v59; // [rsp+8D0h] [rbp+7D0h]
  HANDLE v60; // [rsp+8F0h] [rbp+7F0h]
  HANDLE v61; // [rsp+968h] [rbp+868h]

  v40 = BaseAddress;
  v39 = a4;
  BaseAddressa = 0LL;
  v36 = 0LL;
  *a4 = 0LL;
  v8 = 0;
  memset_thunk_772440563353939046(v41, 0, 0x478uLL);
  v9 = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x478uLL, &BufferSize);
  if ( v9 < 0 )
    goto LABEL_49;
  if ( BufferSize == 1144 )
  {
    if ( LODWORD(Buffer[0]) == 1146311504 )
    {
      if ( (unsigned int)Feature_2838281531__private_IsEnabledDeviceUsage() )
      {
        v9 = PssValidateSnapshotDescriptor(Buffer);
        if ( v9 < 0 )
          goto LABEL_49;
      }
      if ( LODWORD(Buffer[0]) == 1146311504 )
      {
        v10 = (unsigned __int64)v54 << 6;
        if ( v10 <= 0xFFFFFFFF )
        {
          v11 = v10 + 1144;
          if ( (unsigned int)v10 < 0xFFFFFB88 )
          {
            v12 = 8LL;
            v13 = v41;
            v14 = Buffer;
            do
            {
              v15 = *((_OWORD *)v14 + 1);
              *(_OWORD *)v13 = *(_OWORD *)v14;
              v16 = *((_OWORD *)v14 + 2);
              *((_OWORD *)v13 + 1) = v15;
              v17 = *((_OWORD *)v14 + 3);
              *((_OWORD *)v13 + 2) = v16;
              v18 = *((_OWORD *)v14 + 4);
              *((_OWORD *)v13 + 3) = v17;
              v19 = *((_OWORD *)v14 + 5);
              *((_OWORD *)v13 + 4) = v18;
              v20 = *((_OWORD *)v14 + 6);
              *((_OWORD *)v13 + 5) = v19;
              v21 = *((_OWORD *)v14 + 7);
              v14 += 16;
              *((_OWORD *)v13 + 6) = v20;
              v13 += 128;
              *((_OWORD *)v13 - 1) = v21;
              --v12;
            }
            while ( v12 );
            v22 = (void *)Buffer[109];
            v23 = *((_OWORD *)v14 + 1);
            *(_OWORD *)v13 = *(_OWORD *)v14;
            v24 = *((_OWORD *)v14 + 2);
            *((_OWORD *)v13 + 1) = v23;
            v25 = *((_OWORD *)v14 + 3);
            *((_OWORD *)v13 + 2) = v24;
            v26 = *((_OWORD *)v14 + 4);
            *((_OWORD *)v13 + 3) = v25;
            v27 = *((_OWORD *)v14 + 5);
            *((_OWORD *)v13 + 4) = v26;
            v28 = *((_OWORD *)v14 + 6);
            v29 = v14[14];
            *((_OWORD *)v13 + 5) = v27;
            *((_OWORD *)v13 + 6) = v28;
            *((_QWORD *)v13 + 14) = v29;
            TargetHandle = 0LL;
            v46 = 0LL;
            v48 = 0LL;
            v49 = 0LL;
            v50 = 0LL;
            v51 = 0LL;
            v52 = 0LL;
            if ( v22 )
            {
              v9 = ZwDuplicateObject(ProcessHandle, v22, SourceProcessHandle, &TargetHandle, 0, 0, 2u);
              v8 = v10 + 1144;
              if ( v9 < 0 )
                goto LABEL_49;
            }
            if ( v55 )
            {
              v9 = ZwDuplicateObject(ProcessHandle, v55, SourceProcessHandle, &v46, 0, 0, 2u);
              v8 = v10 + 1144;
              if ( v9 < 0 )
                goto LABEL_49;
            }
            if ( v57 )
            {
              v9 = ZwDuplicateObject(ProcessHandle, v57, SourceProcessHandle, &v48, 0, 0, 2u);
              v8 = v10 + 1144;
              if ( v9 < 0 )
                goto LABEL_49;
            }
            if ( v58 )
            {
              v9 = ZwDuplicateObject(ProcessHandle, v58, SourceProcessHandle, &v49, 0, 0, 2u);
              v8 = v10 + 1144;
              if ( v9 < 0 )
                goto LABEL_49;
            }
            if ( v59 )
            {
              v9 = ZwDuplicateObject(ProcessHandle, v59, SourceProcessHandle, &v50, 0, 0, 2u);
              v8 = v10 + 1144;
              if ( v9 < 0 )
                goto LABEL_49;
            }
            if ( v60 )
            {
              v9 = ZwDuplicateObject(ProcessHandle, v60, SourceProcessHandle, &v51, 0, 0, 2u);
              v8 = v10 + 1144;
              if ( v9 < 0 )
                goto LABEL_49;
            }
            if ( v61 )
            {
              v9 = ZwDuplicateObject(ProcessHandle, v61, SourceProcessHandle, &v52, 0, 0, 2u);
              v8 = v10 + 1144;
              if ( v9 < 0 )
                goto LABEL_49;
            }
            BaseAddressa = 0LL;
            RegionSize = v11;
            v9 = ZwAllocateVirtualMemory(SourceProcessHandle, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u);
            v8 = v10 + 1144;
            if ( v9 < 0 )
              goto LABEL_49;
            v42 = v42 & 0xFFFFFFF8 | 1;
            if ( v47 )
              v47 = (char *)BaseAddressa + 1144;
            if ( v43 )
              v44 = (char *)BaseAddressa + 296;
            v30 = (unsigned int)Feature_3213038904__private_IsEnabledDeviceUsage()
                ? NtWriteVirtualMemory(SourceProcessHandle, BaseAddressa, v41, 0x478uLL, 0LL)
                : NtWriteVirtualMemory(SourceProcessHandle, BaseAddressa, v41, v11, 0LL);
            v9 = v30;
            if ( v30 < 0 )
              goto LABEL_49;
            if ( v56 )
            {
              v36 = 0LL;
              RegionSize = 1LL;
              v9 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v36, 0LL, &RegionSize, 0x1000u, 4u);
              if ( v9 < 0 )
                goto LABEL_49;
              for ( i = 0LL; i < (unsigned int)v10; i += NumberOfBytesWritten )
              {
                v32 = (unsigned int)v10 - i;
                if ( RegionSize <= v32 )
                  v32 = RegionSize;
                v9 = ZwReadVirtualMemory(ProcessHandle, (PVOID)(i + v56), v36, v32, &BufferSize);
                if ( v9 < 0 )
                  goto LABEL_49;
                if ( BufferSize != v32 )
                {
                  v9 = -2147483635;
                  goto LABEL_49;
                }
                v9 = NtWriteVirtualMemory(
                       SourceProcessHandle,
                       (char *)BaseAddressa + i + 1144,
                       v36,
                       BufferSize,
                       &NumberOfBytesWritten);
                if ( v9 < 0 )
                  goto LABEL_49;
                if ( NumberOfBytesWritten != BufferSize )
                  goto LABEL_3;
              }
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v36, &RegionSize, 0x8000u);
              v36 = 0LL;
            }
            v9 = 0;
            *v39 = BaseAddressa;
            goto LABEL_67;
          }
          v8 = -1;
        }
        v9 = -1073741675;
        goto LABEL_49;
      }
    }
    v9 = -1073741816;
  }
  else
  {
LABEL_3:
    v9 = -2147483635;
  }
LABEL_49:
  if ( v36 )
  {
    RegionSize = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v36, &RegionSize, 0x8000u);
  }
  if ( BaseAddressa )
  {
    RegionSize = v8;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, 0x8000u);
  }
  if ( v51 )
    ZwDuplicateObject(SourceProcessHandle, v51, 0LL, 0LL, 0, 0, 1u);
  if ( v50 )
    ZwDuplicateObject(SourceProcessHandle, v50, 0LL, 0LL, 0, 0, 1u);
  if ( v48 )
    ZwDuplicateObject(SourceProcessHandle, v48, 0LL, 0LL, 0, 0, 1u);
  if ( v49 )
    ZwDuplicateObject(SourceProcessHandle, v49, 0LL, 0LL, 0, 0, 1u);
  if ( v46 )
    ZwDuplicateObject(SourceProcessHandle, v46, 0LL, 0LL, 0, 0, 1u);
  if ( TargetHandle )
    ZwDuplicateObject(SourceProcessHandle, TargetHandle, 0LL, 0LL, 0, 0, 1u);
  if ( v52 )
    ZwDuplicateObject(SourceProcessHandle, v52, 0LL, 0LL, 0, 0, 1u);
LABEL_67:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot(ProcessHandle, v40);
  return (unsigned int)v9;
}
