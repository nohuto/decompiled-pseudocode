/*
 * XREFs of BiLoadSystemStore @ 0x1408046A8
 * Callers:
 *     BiOpenSystemStore @ 0x140805A48 (BiOpenSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     BiLogFileOwnerProcess @ 0x140671500 (BiLogFileOwnerProcess.c)
 *     BiMarkTreatAsSystemStore @ 0x1408047D4 (BiMarkTreatAsSystemStore.c)
 *     BiAddStoreFromFile @ 0x140804BEC (BiAddStoreFromFile.c)
 *     BcdCloseStore @ 0x140805378 (BcdCloseStore.c)
 *     BiIsSystemStore @ 0x1408054D4 (BiIsSystemStore.c)
 *     BcdGetSystemStorePath @ 0x1408056F0 (BcdGetSystemStorePath.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiLoadSystemStore(_QWORD *a1)
{
  void *v2; // rdi
  NTSTATUS SystemStorePath; // eax
  void *v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rbx
  unsigned int v7; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  HANDLE v12; // rsi
  int v13; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  void *Src; // [rsp+68h] [rbp+10h] BYREF
  HANDLE BcdStoreHandle; // [rsp+70h] [rbp+18h] BYREF

  BcdStoreHandle = 0LL;
  Src = 0LL;
  DestinationString = 0LL;
  v2 = 0LL;
  SystemStorePath = BcdGetSystemStorePath((PWSTR *)&Src);
  v4 = Src;
  v5 = SystemStorePath;
  if ( SystemStorePath >= 0 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *((_WORD *)Src + v6) );
    v7 = v6 + 1;
    Pool2 = (_DWORD *)ExAllocatePool2(258LL, 2 * v7 + 12, 1262764866LL);
    v2 = Pool2;
    if ( Pool2 )
    {
      v9 = Pool2 + 3;
      *Pool2 = 1;
      Pool2[1] = 2 * v7 + 12;
      Pool2[2] = 3;
      memmove(Pool2 + 3, v4, 2LL * v7);
      v10 = BiAddStoreFromFile(v2, 0LL, &BcdStoreHandle);
      v5 = v10;
      if ( v10 < 0 )
      {
        BiLogMessage(
          4LL,
          L"Failed to add system store from file. File: %ws Status: %x",
          v9,
          (unsigned int)v10,
          *(_QWORD *)&DestinationString.Length,
          DestinationString.Buffer);
        if ( v5 == -1073741757 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v4);
          BiLogFileOwnerProcess((__int64)&DestinationString, v15, v16);
        }
      }
      else
      {
        v12 = BcdStoreHandle;
        LOBYTE(v11) = 1;
        v13 = BiMarkTreatAsSystemStore(BcdStoreHandle, v11);
        v5 = v13;
        if ( v13 < 0 )
        {
          BiLogMessage(
            4LL,
            L"Failed to mark system store. File: %ws Status: %x",
            v9,
            (unsigned int)v13,
            *(_QWORD *)&DestinationString.Length,
            DestinationString.Buffer);
          BcdCloseStore(v12);
        }
        else if ( (unsigned __int8)BiIsSystemStore(v12) )
        {
          *a1 = v12;
        }
        else
        {
          BiLogMessage(
            4LL,
            L"File is not system store. File: %ws Status: %x",
            v9,
            v5,
            *(_QWORD *)&DestinationString.Length,
            DestinationString.Buffer);
          BcdCloseStore(v12);
          v5 = -1073741672;
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  return v5;
}
