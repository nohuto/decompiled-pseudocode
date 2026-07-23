/*
 * XREFs of BiUpdateBcdObject @ 0x140806888
 * Callers:
 *     BiBindEfiEntries @ 0x140805D6C (BiBindEfiEntries.c)
 * Callees:
 *     BiMapEfiDeviceForSpaces @ 0x1403745C4 (BiMapEfiDeviceForSpaces.c)
 *     Feature_Servicing_Mbr2Gpt__private_IsEnabledDeviceUsage @ 0x140412120 (Feature_Servicing_Mbr2Gpt__private_IsEnabledDeviceUsage.c)
 *     RtlCompareMemory @ 0x140429160 (RtlCompareMemory.c)
 *     BiDeleteElement @ 0x140805C00 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14080669C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14080723C (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x140807480 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1408074C4 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x1408079C4 (BiGetRegistryValue.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiGetFilePathFromEfiPath @ 0x14080826C (BiGetFilePathFromEfiPath.c)
 *     BiGetDeviceFromEfiPath @ 0x1408083D4 (BiGetDeviceFromEfiPath.c)
 *     BiSaveFirmwareVariable @ 0x140A5D494 (BiSaveFirmwareVariable.c)
 *     BiAreBootEntriesEqual @ 0x140A5DA70 (BiAreBootEntriesEqual.c)
 *     BiCreateMergedBootEntry @ 0x140A5E03C (BiCreateMergedBootEntry.c)
 *     BiModifyBootEntry @ 0x140A5EC3C (BiModifyBootEntry.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiUpdateBcdObject(void *a1, const GUID *a2)
{
  _DWORD *v2; // rdi
  PVOID v4; // r12
  void *Pool2; // r13
  PBOOT_ENTRY v6; // rsi
  NTSTATUS v7; // eax
  HANDLE v8; // r14
  int v9; // ebx
  unsigned int v10; // eax
  BCD_FLAGS v11; // r8d
  _WORD *v12; // r15
  __int64 v13; // rax
  SIZE_T v14; // rbx
  NTSTATUS ElementDataWithFlags; // eax
  BCD_FLAGS v16; // r8d
  BCD_FLAGS v17; // r8d
  __int64 v18; // rax
  char *v19; // rbx
  const GUID *v20; // r15
  BCD_FLAGS v21; // r8d
  int FilePathFromEfiPath; // eax
  BCD_FLAGS v23; // r8d
  int v24; // eax
  int v26; // [rsp+30h] [rbp-30h] BYREF
  ULONG v27; // [rsp+34h] [rbp-2Ch] BYREF
  PVOID Buffer; // [rsp+38h] [rbp-28h] BYREF
  PBOOT_ENTRY BootEntry; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  void *Source2; // [rsp+50h] [rbp-10h] BYREF
  HANDLE BcdObjectHandle; // [rsp+58h] [rbp-8h] BYREF
  ULONG BufferSize; // [rsp+B0h] [rbp+50h] BYREF
  ULONG v35; // [rsp+B8h] [rbp+58h] BYREF

  v2 = *(_DWORD **)a2[2].Data4;
  v35 = 0;
  v27 = 0;
  v4 = 0LL;
  Buffer = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v6 = 0LL;
  Source2 = 0LL;
  v26 = 0;
  BcdObjectHandle = 0LL;
  BufferSize = 0;
  BootEntry = 0LL;
  v7 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v8 = BcdObjectHandle;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_37;
  if ( (a2[3].Data1 & 2) != 0
    && (int)BiGetRegistryValue(BcdObjectHandle, L"FirmwareVariable", L"Description", 3LL, &Source2, &v26) >= 0 )
  {
    v10 = v2[1];
    if ( v10 == v26 && RtlCompareMemory(v2, Source2, v10) == v2[1] )
    {
LABEL_8:
      v12 = (_WORD *)((char *)v2 + (unsigned int)v2[4]);
      v13 = -1LL;
      do
        ++v13;
      while ( v12[v13] );
      v14 = (unsigned int)(2 * v13 + 2);
      ElementDataWithFlags = BcdGetElementDataWithFlags(v8, 0x12000004u, v11, 0LL, &BufferSize);
      if ( ElementDataWithFlags == -1073741789 )
      {
        Pool2 = (void *)ExAllocatePool2(258LL, BufferSize, 1262764866LL);
        if ( !Pool2 )
        {
LABEL_17:
          BiDeleteElement(v8, 0x12000004u);
          BcdSetElementDataWithFlags(v8, 0x12000004u, v17, v12, v14);
LABEL_18:
          v18 = (unsigned int)v2[5];
          if ( *(_DWORD *)((char *)v2 + v18 + 8) == 4 )
          {
            v19 = (char *)v2 + v18;
            if ( (int)BiGetDeviceFromEfiPath((char *)v2 + v18 + 12) < 0 )
            {
              v4 = Buffer;
              v20 = a2;
            }
            else
            {
              BiDeleteElement(v8, 0x11000001u);
              v20 = a2;
              BiMapEfiDeviceForSpaces((__int64)a2, (const void **)&Buffer, &v35);
              v4 = Buffer;
              BcdSetElementDataWithFlags(v8, 0x11000001u, v21, Buffer, v35);
            }
            FilePathFromEfiPath = BiGetFilePathFromEfiPath(v19 + 12, &P, &v27);
            v9 = 0;
            if ( FilePathFromEfiPath >= 0 )
            {
              BiDeleteElement(v8, 0x12000002u);
              BcdSetElementDataWithFlags(v8, 0x12000002u, v23, P, v27);
              v9 = 0;
            }
            if ( (unsigned int)Feature_Servicing_Mbr2Gpt__private_IsEnabledDeviceUsage() )
            {
              v24 = BiCreateMergedBootEntry(v2, 0LL, v4, 0LL, &BootEntry);
              v6 = BootEntry;
              if ( v24 >= 0 && !(unsigned __int8)BiAreBootEntriesEqual(v2, BootEntry) )
              {
                BiLogMessage(2LL, L"Updating BootEntry: %d", (unsigned int)v2[2]);
                v9 = BiModifyBootEntry(v6);
                if ( v9 >= 0 )
                {
                  v9 = BiSaveFirmwareVariable(v8, v6, v6->Length);
                  if ( v9 >= 0 )
                  {
                    ExFreePoolWithTag(v2, 0x4B444342u);
                    v9 = 0;
                    *(_QWORD *)v20[2].Data4 = v6;
                    v6 = 0LL;
                  }
                }
              }
            }
          }
          else
          {
            v9 = 0;
          }
          if ( v4 )
            ExFreePoolWithTag(v4, 0x4B444342u);
          if ( P )
            ExFreePoolWithTag(P, 0x4B444342u);
          goto LABEL_35;
        }
        ElementDataWithFlags = BcdGetElementDataWithFlags(v8, 0x12000004u, v16, Pool2, &BufferSize);
      }
      if ( ElementDataWithFlags >= 0 && Pool2 && BufferSize == (_DWORD)v14 && RtlCompareMemory(v12, Pool2, v14) == v14 )
        goto LABEL_18;
      goto LABEL_17;
    }
  }
  v9 = BiSaveFirmwareVariable(v8, v2, (unsigned int)v2[1]);
  if ( v9 >= 0 )
  {
    a2[3].Data1 |= 2u;
    goto LABEL_8;
  }
LABEL_35:
  if ( Source2 )
    ExFreePoolWithTag(Source2, 0x4B444342u);
LABEL_37:
  if ( v8 )
    BcdCloseObject(v8);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  return (unsigned int)v9;
}
