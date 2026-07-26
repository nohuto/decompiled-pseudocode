/*
 * XREFs of ndisCopyPeriodicReceiveNbl @ 0x1C00A9B58
 * Callers:
 *     ndisMPeriodicReceivesResources @ 0x1C00AB5E0 (ndisMPeriodicReceivesResources.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0002160 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0003B20 (NdisFreeNetBufferList.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0062FFC (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 */

PNET_BUFFER_LIST __fastcall ndisCopyPeriodicReceiveNbl(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  SIZE_T v6; // r13
  __int64 v7; // rbx
  struct _NPAGED_LOOKASIDE_LIST *v8; // r12
  struct _MDL *v9; // rax
  __int64 v10; // rdi
  struct _MDL *v11; // r15
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  char *v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rcx
  unsigned int v18; // edx
  size_t v19; // rbx
  char *v20; // rdx
  void *v21; // rcx
  char *v22; // rax
  void *v23; // r9
  __int64 v24; // rcx
  void **v25; // rcx
  __int64 v26; // r8
  const struct _EVENT_DESCRIPTOR *v27; // rdx
  __int64 v28; // r9
  void **v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int8 DataOffset; // [rsp+28h] [rbp-39h]
  const struct _GUID *DataLength; // [rsp+30h] [rbp-31h]
  __int128 v35; // [rsp+48h] [rbp-19h] BYREF
  int v36; // [rsp+58h] [rbp-9h]
  struct _GUID v37; // [rsp+68h] [rbp+7h] BYREF
  struct _GUID v38; // [rsp+78h] [rbp+17h] BYREF

  v3 = *(_QWORD *)(a3 + 8);
  v36 = a2;
  v5 = 0LL;
  *(_QWORD *)&v37.Data1 = v3;
  v6 = *(unsigned int *)(v3 + 24);
  v7 = ((unsigned int)MmSizeOfMdl((PVOID)0xFFF, v6) + 7) & 0xFFFFFFF8;
  if ( (unsigned int)v6 <= 0x64 )
  {
    v8 = &Lookaside;
LABEL_5:
    v9 = (struct _MDL *)ExAllocateFromNPagedLookasideList(v8);
    v10 = (unsigned int)v7;
    goto LABEL_8;
  }
  if ( (unsigned int)v6 <= 0x5EE )
  {
    v8 = &stru_1C00F5300;
    goto LABEL_5;
  }
  v10 = (unsigned int)v7;
  v8 = 0LL;
  if ( (v7 + v6) >> 32 )
    return (PNET_BUFFER_LIST)v5;
  v35 = 0LL;
  LOBYTE(v35) = 1;
  DWORD2(v35) = 0;
  v9 = (struct _MDL *)ExAllocatePool3(66LL, (unsigned int)(v7 + v6), 1919960142LL, &v35, 1);
LABEL_8:
  v11 = v9;
  if ( !v9 )
    return (PNET_BUFFER_LIST)v5;
  v9->Next = 0LL;
  *(_QWORD *)&v35 = (char *)v9 + v10;
  v9->MdlFlags = 0;
  v9->ByteCount = v6;
  v9->ByteOffset = (v10 + (_DWORD)v9) & 0xFFF;
  v9->Size = 8 * ((((((int)v10 + (int)v9) & 0xFFFLL) + v6 + 4095) >> 12) + 6);
  v9->StartVa = (PVOID)(((unsigned __int64)v9 + v10) & 0xFFFFFFFFFFFFF000uLL);
  MmBuildMdlForNonPagedPool(v9);
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(PoolHandle, 0, 0, v11, 0, v6);
  if ( !NetBufferAndNetBufferList )
    goto LABEL_39;
  v13 = *(_QWORD *)&v37.Data1;
  v14 = *(_QWORD *)(*(_QWORD *)&v37.Data1 + 8LL);
  *(_QWORD *)&v37.Data1 = v14;
  if ( (*(_BYTE *)(v14 + 10) & 5) != 0 )
  {
    v15 = *(char **)(v14 + 24);
  }
  else
  {
    v15 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v14, 0, MmCached, 0LL, 0, 0x40000000u);
    v14 = *(_QWORD *)&v37.Data1;
  }
  if ( !v15 || (v16 = *(_DWORD *)(v14 + 40), v17 = *(unsigned int *)(v13 + 16), (unsigned int)v17 > v16) )
  {
LABEL_38:
    NdisFreeNetBufferList(NetBufferAndNetBufferList);
LABEL_39:
    if ( (v11->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v11->MappedSystemVa, v11);
    if ( v8 )
      ExFreeToNPagedLookasideList(v8, v11);
    else
      ExFreePoolWithTag(v11, 0x7270444Eu);
    return (PNET_BUFFER_LIST)v5;
  }
  v18 = v16 - v17;
  if ( v18 >= (unsigned int)v6 )
    v18 = v6;
  v19 = v18;
  v20 = &v15[v17];
  v21 = (void *)v35;
  while ( 1 )
  {
    memmove(v21, v20, v19);
    LODWORD(v6) = v6 - v19;
    v23 = (void *)(v19 + v35);
    *(_QWORD *)&v35 = v19 + v35;
    v24 = **(_QWORD **)&v37.Data1;
    *(_QWORD *)&v37.Data1 = v24;
    if ( !v24 )
      break;
    v19 = *(unsigned int *)(v24 + 40);
    if ( (*(_BYTE *)(v24 + 10) & 5) != 0 )
    {
      v22 = *(char **)(v24 + 24);
    }
    else
    {
      v22 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v24, 0, MmCached, 0LL, 0, 0x40000000u);
      v23 = (void *)v35;
    }
    if ( !v22 )
      goto LABEL_38;
    v20 = v22;
    v21 = v23;
    if ( (unsigned int)v19 >= (unsigned int)v6 )
      v19 = (unsigned int)v6;
  }
  LODWORD(NetBufferAndNetBufferList->ProtocolReserved[0]) = v36;
  NetBufferAndNetBufferList->MiniportReserved[1] = v8;
  NetBufferAndNetBufferList->SourceHandle = *(void **)(a3 + 120);
  if ( (*(_DWORD *)(a3 + 136) & 0x80u) != 0 )
  {
    NetBufferAndNetBufferList->Flags |= 0x80u;
    NetBufferAndNetBufferList->NblFlags |= 0x8000u;
  }
  if ( (*(_DWORD *)(a3 + 136) & 0x200) != 0 )
    NetBufferAndNetBufferList->Flags |= 0x200u;
  v25 = &NetBufferAndNetBufferList->NetBufferListInfo[6];
  NetBufferAndNetBufferList->NetBufferListInfo[0] = *(void **)(a3 + 144);
  v26 = 2LL;
  NetBufferAndNetBufferList->NetBufferListInfo[1] = *(void **)(a3 + 152);
  v27 = (const struct _EVENT_DESCRIPTOR *)(a3 - (_QWORD)NetBufferAndNetBufferList);
  v28 = 2LL;
  NetBufferAndNetBufferList->NetBufferListInfo[2] = *(void **)(a3 + 160);
  NetBufferAndNetBufferList->NetBufferListInfo[3] = *(void **)(a3 + 168);
  NetBufferAndNetBufferList->NetBufferListInfo[4] = *(void **)(a3 + 176);
  do
  {
    *v25 = *(void **)((char *)v25 + (_QWORD)v27);
    ++v25;
    --v28;
  }
  while ( v28 );
  v29 = &NetBufferAndNetBufferList->NetBufferListInfo[11];
  do
  {
    *v29 = *(void **)((char *)v29 + (_QWORD)v27);
    ++v29;
    --v26;
  }
  while ( v26 );
  if ( byte_1C00F5390 )
  {
    NetBufferAndNetBufferList->NetBufferListInfo[13] = *(void **)(a3 + 248);
  }
  else if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v30 = (__int64)NetBufferAndNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)v37.Data4 = 0LL;
    *(_QWORD *)&v37.Data1 = v30;
    v31 = *(_QWORD *)(a3 + 248) & 0x7FFFFFFFFFFFFFFFLL;
    v38 = (struct _GUID)*(unsigned __int64 *)&v37.Data1;
    v35 = (unsigned __int64)v31;
    v37 = (struct _GUID)(unsigned __int64)v31;
    EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFLL, v27, &v38, &v37, DataOffset, DataLength, 6u);
  }
  return NetBufferAndNetBufferList;
}
