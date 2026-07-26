/*
 * XREFs of ndisCopyPeriodicReceiveNbl @ 0x1C00A313C
 * Callers:
 *     ndisMPeriodicReceivesResources @ 0x1C00A4CA0 (ndisMPeriodicReceivesResources.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0004090 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0005150 (NdisFreeNetBufferList.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C005DBE0 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ExFreeToNPagedLookasideList @ 0x1C008AF28 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00A5640 (ExAllocateFromNPagedLookasideList.c)
 */

PNET_BUFFER_LIST __fastcall ndisCopyPeriodicReceiveNbl(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  SIZE_T v6; // r13
  unsigned int v7; // ebx
  struct _NPAGED_LOOKASIDE_LIST *v8; // r12
  struct _MDL *v9; // rax
  struct _MDL *v10; // r15
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rdi
  __int64 v12; // rbx
  __int64 v13; // rcx
  char *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rbx
  size_t v19; // r8
  char *v20; // rdx
  void *v21; // rcx
  char *v22; // rax
  void *v23; // r9
  __int64 v24; // rcx
  int v25; // eax
  void **v26; // rcx
  __int64 v27; // r8
  const struct _EVENT_DESCRIPTOR *v28; // rdx
  __int64 v29; // r9
  void **v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int8 DataOffset; // [rsp+28h] [rbp-39h]
  const struct _GUID *DataLength; // [rsp+30h] [rbp-31h]
  __int128 v36; // [rsp+48h] [rbp-19h] BYREF
  int v37; // [rsp+58h] [rbp-9h]
  struct _GUID v38; // [rsp+68h] [rbp+7h] BYREF
  struct _GUID v39; // [rsp+78h] [rbp+17h] BYREF

  v3 = *(_QWORD *)(a3 + 8);
  v37 = a2;
  v5 = 0LL;
  *(_QWORD *)&v38.Data1 = v3;
  v6 = *(unsigned int *)(v3 + 24);
  v7 = (MmSizeOfMdl((PVOID)0xFFF, v6) + 7) & 0xFFFFFFF8;
  if ( (unsigned int)v6 <= 0x64 )
  {
    v8 = &Lookaside;
LABEL_5:
    v9 = (struct _MDL *)ExAllocateFromNPagedLookasideList(v8);
    goto LABEL_8;
  }
  if ( (unsigned int)v6 <= 0x5EE )
  {
    v8 = &stru_1C00EC340;
    goto LABEL_5;
  }
  v8 = 0LL;
  if ( (v6 + v7) >> 32 )
    return (PNET_BUFFER_LIST)v5;
  v36 = 0LL;
  LOBYTE(v36) = 1;
  DWORD2(v36) = 0;
  v9 = (struct _MDL *)ExAllocatePool3(66LL, v7 + (unsigned int)v6, 1919960142LL, &v36, 1);
LABEL_8:
  v10 = v9;
  if ( !v9 )
    return (PNET_BUFFER_LIST)v5;
  v9->Next = 0LL;
  v9->MdlFlags = 0;
  *(_QWORD *)&v36 = (char *)v9 + v7;
  v9->ByteCount = v6;
  v9->ByteOffset = ((_WORD)v9 + (_WORD)v7) & 0xFFF;
  v9->Size = 8 * ((((((unsigned int)v9 + v7) & 0xFFFLL) + v6 + 4095) >> 12) + 6);
  v9->StartVa = (PVOID)(((unsigned __int64)v9 + v7) & 0xFFFFFFFFFFFFF000uLL);
  MmBuildMdlForNonPagedPool(v9);
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(PoolHandle, 0, 0, v10, 0, v6);
  if ( !NetBufferAndNetBufferList )
    goto LABEL_40;
  v12 = *(_QWORD *)&v38.Data1;
  v13 = *(_QWORD *)(*(_QWORD *)&v38.Data1 + 8LL);
  *(_QWORD *)&v38.Data1 = v13;
  if ( (*(_BYTE *)(v13 + 10) & 5) != 0 )
  {
    v14 = *(char **)(v13 + 24);
  }
  else
  {
    v14 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v13, 0, MmCached, 0LL, 0, 0x40000000u);
    v13 = *(_QWORD *)&v38.Data1;
  }
  if ( !v14 || (v15 = *(_DWORD *)(v13 + 40), v16 = *(unsigned int *)(v12 + 16), (unsigned int)v16 > v15) )
  {
LABEL_39:
    NdisFreeNetBufferList(NetBufferAndNetBufferList);
LABEL_40:
    if ( (v10->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v10->MappedSystemVa, v10);
    if ( v8 )
      ExFreeToNPagedLookasideList(v8, v10);
    else
      ExFreePoolWithTag(v10, 0x7270444Eu);
    return (PNET_BUFFER_LIST)v5;
  }
  v17 = v15 - v16;
  if ( v17 >= (unsigned int)v6 )
    v17 = v6;
  v18 = v17;
  v19 = v17;
  v20 = &v14[v16];
  v21 = (void *)v36;
  while ( 1 )
  {
    memmove(v21, v20, v19);
    LODWORD(v6) = v6 - v18;
    v23 = (void *)(v18 + v36);
    *(_QWORD *)&v36 = v18 + v36;
    v24 = **(_QWORD **)&v38.Data1;
    *(_QWORD *)&v38.Data1 = v24;
    if ( !v24 )
      break;
    v18 = *(unsigned int *)(v24 + 40);
    if ( (*(_BYTE *)(v24 + 10) & 5) != 0 )
    {
      v22 = *(char **)(v24 + 24);
    }
    else
    {
      v22 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v24, 0, MmCached, 0LL, 0, 0x40000000u);
      v23 = (void *)v36;
    }
    if ( !v22 )
      goto LABEL_39;
    v20 = v22;
    v21 = v23;
    if ( (unsigned int)v18 >= (unsigned int)v6 )
      v18 = (unsigned int)v6;
    v19 = (unsigned int)v18;
  }
  LODWORD(NetBufferAndNetBufferList->ProtocolReserved[0]) = v37;
  NetBufferAndNetBufferList->MiniportReserved[1] = v8;
  NetBufferAndNetBufferList->SourceHandle = *(void **)(a3 + 120);
  v25 = *(_DWORD *)(a3 + 136);
  if ( (v25 & 0x80u) != 0 )
  {
    NetBufferAndNetBufferList->Flags |= 0x80u;
    NetBufferAndNetBufferList->NblFlags |= 0x8000u;
    v25 = *(_DWORD *)(a3 + 136);
  }
  if ( (v25 & 0x200) != 0 )
    NetBufferAndNetBufferList->Flags |= 0x200u;
  v26 = &NetBufferAndNetBufferList->NetBufferListInfo[6];
  NetBufferAndNetBufferList->NetBufferListInfo[0] = *(void **)(a3 + 144);
  v27 = 2LL;
  NetBufferAndNetBufferList->NetBufferListInfo[1] = *(void **)(a3 + 152);
  v28 = (const struct _EVENT_DESCRIPTOR *)(a3 - (_QWORD)NetBufferAndNetBufferList);
  v29 = 2LL;
  NetBufferAndNetBufferList->NetBufferListInfo[2] = *(void **)(a3 + 160);
  NetBufferAndNetBufferList->NetBufferListInfo[3] = *(void **)(a3 + 168);
  NetBufferAndNetBufferList->NetBufferListInfo[4] = *(void **)(a3 + 176);
  do
  {
    *v26 = *(void **)((char *)v26 + (_QWORD)v28);
    ++v26;
    --v29;
  }
  while ( v29 );
  v30 = &NetBufferAndNetBufferList->NetBufferListInfo[11];
  do
  {
    *v30 = *(void **)((char *)&v28->Id + (_QWORD)v30);
    ++v30;
    --v27;
  }
  while ( v27 );
  if ( byte_1C00EC210 )
  {
    NetBufferAndNetBufferList->NetBufferListInfo[13] = *(void **)(a3 + 248);
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v31 = (__int64)NetBufferAndNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)v38.Data4 = 0LL;
    *(_QWORD *)&v38.Data1 = v31;
    v32 = *(_QWORD *)(a3 + 248) & 0x7FFFFFFFFFFFFFFFLL;
    v39 = (struct _GUID)*(unsigned __int64 *)&v38.Data1;
    v36 = (unsigned __int64)v32;
    v38 = (struct _GUID)(unsigned __int64)v32;
    EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFLL, v28, &v39, &v38, DataOffset, DataLength, 6u);
  }
  return NetBufferAndNetBufferList;
}
