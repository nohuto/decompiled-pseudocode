/*
 * XREFs of BcdOpenStore @ 0x14080561C
 * Callers:
 *     WheaPersistBadPageToBcd @ 0x140611E00 (WheaPersistBadPageToBcd.c)
 *     PoInitHiberServices @ 0x14080406C (PoInitHiberServices.c)
 *     PopBcdOpen @ 0x1408043A0 (PopBcdOpen.c)
 *     PopAllocateHiberContext @ 0x140987DE8 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1409886A0 (PopFreeHiberContext.c)
 *     BcdOpenStoreFromFile @ 0x140A5C3B8 (BcdOpenStoreFromFile.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 *     BiMarkTreatAsSystemStore @ 0x1408047D4 (BiMarkTreatAsSystemStore.c)
 *     BiAddStoreFromFile @ 0x140804BEC (BiAddStoreFromFile.c)
 *     BiOpenSystemStore @ 0x140805A48 (BiOpenSystemStore.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiAcquireBcdSyncMutant @ 0x140807BB4 (BiAcquireBcdSyncMutant.c)
 *     BiReleaseBcdSyncMutant @ 0x140807C5C (BiReleaseBcdSyncMutant.c)
 *     BiDeleteRegistryValue @ 0x1408097F4 (BiDeleteRegistryValue.c)
 *     BiCleanupLoadedStores @ 0x14080A164 (BiCleanupLoadedStores.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl BcdOpenStore(UNICODE_STRING *BcdFilePath, BCD_OPEN_FLAGS BcdOpenFlags, PHANDLE BcdStoreHandle)
{
  UNICODE_STRING *v3; // rbx
  char v4; // si
  __int32 v7; // r14d
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // eax
  NTSTATUS v12; // ebx
  const wchar_t *Buffer; // r8
  NTSTATUS v15; // r10d
  unsigned int v16; // ebp
  _DWORD *Pool2; // rax
  void *v18; // r14
  _DWORD *v19; // r12
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  void *v23; // rdi
  int v24; // eax
  void *v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = BcdFilePath;
  v4 = BcdOpenFlags & 1;
  LOBYTE(BcdFilePath) = BcdOpenFlags & 1;
  v7 = BcdOpenFlags & 2;
  v8 = BiAcquireBcdSyncMutant(BcdFilePath);
  if ( v8 < 0 )
  {
    if ( v3 )
      Buffer = v3->Buffer;
    else
      Buffer = L"NULL";
    BiLogMessage(
      4LL,
      L"BcdOpenStore: Failed to acquire BCD sync Mutant. Store: %wsFlags: 0x%x Status: %x",
      Buffer,
      (unsigned int)BcdOpenFlags,
      v8);
    return v15;
  }
  else
  {
    v25 = 0LL;
    v9 = 0;
    BiLogMessage(2LL, L"Opening store. Flags: 0x%x", (unsigned int)BcdOpenFlags);
    if ( v3 )
    {
      if ( !v4 )
        BiCleanupLoadedStores(0LL);
      v16 = v3->Length + 14;
      Pool2 = (_DWORD *)ExAllocatePool2(258LL, v16, 1262764866LL);
      v18 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = 1;
        v19 = Pool2 + 3;
        Pool2[1] = v16;
        Pool2[2] = 3;
        memmove(Pool2 + 3, v3->Buffer, v3->Length);
        *((_WORD *)v19 + ((unsigned __int64)v3->Length >> 1)) = 0;
        BiLogMessage(2LL, L"Store path: \"%s\"", v19);
        if ( v4 )
        {
          BiLogMessage(v20, L"Store will be accessed with offline registry APIs.");
          v9 = 32;
        }
        v21 = BiAddStoreFromFile((__int64)v18, v9, &v25);
        v12 = v21;
        if ( v21 >= 0 )
        {
          v23 = v25;
          BiDeleteRegistryValue(v25, L"GuidCache", L"Description");
          v24 = BiMarkTreatAsSystemStore((__int64)v23, 0);
          v12 = v24;
          if ( v24 >= 0 )
            *BcdStoreHandle = v23;
          else
            BiLogMessage(4LL, L"Failed to clear system store flag. Status: %x", (unsigned int)v24);
        }
        else
        {
          v22 = 4LL;
          if ( v21 == -1073741809 )
            v22 = 2LL;
          BiLogMessage(
            v22,
            L"BcdOpenStore: Failed to add store from file %ws. StoreFlags: 0x%x Status: %x",
            v19,
            v9,
            v21);
        }
        ExFreePoolWithTag(v18, 0x4B444342u);
      }
      else
      {
        v12 = -1073741801;
      }
    }
    else if ( v4 )
    {
      v12 = -1073741811;
    }
    else
    {
      if ( v7 )
        BiLogMessage(v10, L"Store will be synchronized with firmware.");
      else
        v9 = 2;
      v11 = BiOpenSystemStore(BcdStoreHandle, v9);
      v12 = v11;
      if ( v11 < 0 )
        BiLogMessage(4LL, L"Failed to open system store. Status: %x", (unsigned int)v11);
    }
    LOBYTE(v10) = v4;
    BiReleaseBcdSyncMutant(v10);
    return v12;
  }
}
