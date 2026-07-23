/*
 * XREFs of BiUpdateBcdObject @ 0x1408045D4
 * Callers:
 *     BiBindEfiEntries @ 0x140803AB8 (BiBindEfiEntries.c)
 * Callees:
 *     BiMapEfiDeviceForSpaces @ 0x140374110 (BiMapEfiDeviceForSpaces.c)
 *     RtlCompareMemory @ 0x140429BB0 (RtlCompareMemory.c)
 *     BiDeleteElement @ 0x14080394C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1408043E8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140804F8C (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1408051D0 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140805214 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x140805714 (BiGetRegistryValue.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiGetFilePathFromEfiPath @ 0x140805FBC (BiGetFilePathFromEfiPath.c)
 *     BiGetDeviceFromEfiPath @ 0x140806124 (BiGetDeviceFromEfiPath.c)
 *     BiSaveFirmwareVariable @ 0x140A5D6D4 (BiSaveFirmwareVariable.c)
 *     BiAreBootEntriesEqual @ 0x140A5DCB0 (BiAreBootEntriesEqual.c)
 *     BiCreateMergedBootEntry @ 0x140A5E27C (BiCreateMergedBootEntry.c)
 *     BiModifyBootEntry @ 0x140A5EE7C (BiModifyBootEntry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiUpdateBcdObject(void *a1, const GUID *a2)
{
  _DWORD *v2; // rsi
  PVOID v4; // r12
  void *v5; // r15
  PBOOT_ENTRY v6; // rdi
  NTSTATUS v7; // eax
  HANDLE v8; // r14
  int v9; // ebx
  unsigned int v10; // eax
  BCD_FLAGS v11; // r8d
  _WORD *v12; // r15
  __int64 v13; // rax
  NTSTATUS ElementDataWithFlags; // eax
  BCD_FLAGS v15; // r8d
  void *v16; // rbx
  __int64 v17; // rbx
  BCD_FLAGS v18; // r8d
  __int64 v19; // rax
  char *v20; // rbx
  BCD_FLAGS v21; // r8d
  PVOID v22; // r15
  BCD_FLAGS v23; // r8d
  int v24; // eax
  ULONG v26; // [rsp+30h] [rbp-40h] BYREF
  void *Pool2; // [rsp+38h] [rbp-38h]
  PVOID Buffer; // [rsp+40h] [rbp-30h] BYREF
  PVOID P; // [rsp+48h] [rbp-28h] BYREF
  PBOOT_ENTRY BootEntry; // [rsp+50h] [rbp-20h] BYREF
  void *Source2; // [rsp+58h] [rbp-18h] BYREF
  HANDLE BcdObjectHandle; // [rsp+60h] [rbp-10h] BYREF
  ULONG BufferSize; // [rsp+B8h] [rbp+48h] BYREF
  ULONG v34; // [rsp+C0h] [rbp+50h] BYREF
  SIZE_T Length; // [rsp+C8h] [rbp+58h] BYREF

  v2 = *(_DWORD **)a2[2].Data4;
  v34 = 0;
  v26 = 0;
  v4 = 0LL;
  Buffer = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  Source2 = 0LL;
  LODWORD(Length) = 0;
  BcdObjectHandle = 0LL;
  Pool2 = 0LL;
  BufferSize = 0;
  BootEntry = 0LL;
  v7 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v8 = BcdObjectHandle;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_40;
  if ( (a2[3].Data1 & 2) != 0
    && (int)BiGetRegistryValue(BcdObjectHandle, L"FirmwareVariable", L"Description", 3LL, &Source2, &Length) >= 0 )
  {
    v10 = v2[1];
    if ( v10 == (_DWORD)Length && RtlCompareMemory(v2, Source2, v10) == v2[1] )
    {
LABEL_8:
      v12 = (_WORD *)((char *)v2 + (unsigned int)v2[4]);
      v13 = -1LL;
      do
        ++v13;
      while ( v12[v13] );
      LODWORD(Length) = 2 * v13 + 2;
      ElementDataWithFlags = BcdGetElementDataWithFlags(v8, 0x12000004u, v11, 0LL, &BufferSize);
      if ( ElementDataWithFlags == -1073741789 )
      {
        Pool2 = (void *)ExAllocatePool2(258LL, BufferSize, 1262764866LL);
        v16 = Pool2;
        if ( !Pool2 )
          goto LABEL_18;
        ElementDataWithFlags = BcdGetElementDataWithFlags(v8, 0x12000004u, v15, Pool2, &BufferSize);
      }
      else
      {
        v16 = 0LL;
      }
      if ( ElementDataWithFlags >= 0 )
      {
        if ( v16 )
        {
          if ( BufferSize == (_DWORD)Length )
          {
            v17 = (unsigned int)Length;
            if ( RtlCompareMemory(v12, Pool2, (unsigned int)Length) == v17 )
            {
LABEL_19:
              v19 = (unsigned int)v2[5];
              if ( *(_DWORD *)((char *)v2 + v19 + 8) == 4 )
              {
                v20 = (char *)v2 + v19;
                if ( (int)BiGetDeviceFromEfiPath((char *)v2 + v19 + 12) < 0 )
                {
                  v4 = Buffer;
                }
                else
                {
                  BiDeleteElement(v8, 0x11000001u);
                  BiMapEfiDeviceForSpaces((__int64)a2, (const void **)&Buffer, &v34);
                  v4 = Buffer;
                  BcdSetElementDataWithFlags(v8, 0x11000001u, v21, Buffer, v34);
                }
                if ( (int)BiGetFilePathFromEfiPath(v20 + 12, &P, &v26) < 0 )
                {
                  v22 = P;
                }
                else
                {
                  BiDeleteElement(v8, 0x12000002u);
                  v22 = P;
                  BcdSetElementDataWithFlags(v8, 0x12000002u, v23, P, v26);
                }
                v24 = BiCreateMergedBootEntry(v2, 0LL, v4, 0LL, &BootEntry);
                v6 = BootEntry;
                if ( v24 >= 0 && !(unsigned __int8)BiAreBootEntriesEqual(v2, BootEntry) )
                {
                  BiLogMessage(2LL, L"Updating BootEntry: %d", (unsigned int)v2[2]);
                  v9 = BiModifyBootEntry(v6);
                  if ( v9 < 0 )
                    goto LABEL_33;
                  v9 = BiSaveFirmwareVariable(v8, v6, v6->Length);
                  if ( v9 < 0 )
                    goto LABEL_33;
                  ExFreePoolWithTag(v2, 0x4B444342u);
                  *(_QWORD *)a2[2].Data4 = v6;
                  v6 = 0LL;
                }
              }
              else
              {
                v22 = P;
              }
              v9 = 0;
LABEL_33:
              if ( v4 )
                ExFreePoolWithTag(v4, 0x4B444342u);
              if ( v22 )
                ExFreePoolWithTag(v22, 0x4B444342u);
              v5 = Pool2;
              goto LABEL_38;
            }
          }
        }
      }
LABEL_18:
      BiDeleteElement(v8, 0x12000004u);
      BcdSetElementDataWithFlags(v8, 0x12000004u, v18, v12, Length);
      goto LABEL_19;
    }
  }
  v9 = BiSaveFirmwareVariable(v8, v2, (unsigned int)v2[1]);
  if ( v9 >= 0 )
  {
    a2[3].Data1 |= 2u;
    goto LABEL_8;
  }
LABEL_38:
  if ( Source2 )
    ExFreePoolWithTag(Source2, 0x4B444342u);
LABEL_40:
  if ( v8 )
    BcdCloseObject(v8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  return (unsigned int)v9;
}
