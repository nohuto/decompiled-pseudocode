/*
 * XREFs of BiUpdateBcdObject @ 0x140804304
 * Callers:
 *     BiBindEfiEntries @ 0x1408037E8 (BiBindEfiEntries.c)
 * Callees:
 *     BiMapEfiDeviceForSpaces @ 0x140373F70 (BiMapEfiDeviceForSpaces.c)
 *     RtlCompareMemory @ 0x140429820 (RtlCompareMemory.c)
 *     BiDeleteElement @ 0x14080367C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140804118 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140804CBC (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x140804F00 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140804F44 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x140805444 (BiGetRegistryValue.c)
 *     BiLogMessage @ 0x140805620 (BiLogMessage.c)
 *     BiGetFilePathFromEfiPath @ 0x140805CEC (BiGetFilePathFromEfiPath.c)
 *     BiGetDeviceFromEfiPath @ 0x140805E54 (BiGetDeviceFromEfiPath.c)
 *     BiSaveFirmwareVariable @ 0x140A5D424 (BiSaveFirmwareVariable.c)
 *     BiAreBootEntriesEqual @ 0x140A5DA00 (BiAreBootEntriesEqual.c)
 *     BiCreateMergedBootEntry @ 0x140A5DFCC (BiCreateMergedBootEntry.c)
 *     BiModifyBootEntry @ 0x140A5EBCC (BiModifyBootEntry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BiUpdateBcdObject(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  PVOID v4; // r12
  void *v5; // r15
  unsigned int *v6; // rdi
  int v7; // eax
  void *v8; // r14
  int v9; // ebx
  unsigned int v10; // eax
  int v11; // r8d
  _WORD *v12; // r15
  __int64 v13; // rax
  int ElementDataWithFlags; // eax
  int v15; // r8d
  void *v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rax
  char *v20; // rbx
  __int64 v21; // r8
  PVOID v22; // r15
  __int64 v23; // r8
  int v24; // eax
  unsigned int v26; // [rsp+30h] [rbp-40h] BYREF
  void *Pool2; // [rsp+38h] [rbp-38h]
  PVOID P; // [rsp+40h] [rbp-30h] BYREF
  PVOID v29; // [rsp+48h] [rbp-28h] BYREF
  unsigned int *v30; // [rsp+50h] [rbp-20h] BYREF
  void *Source2; // [rsp+58h] [rbp-18h] BYREF
  void *v32; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v33; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v34; // [rsp+C0h] [rbp+50h] BYREF
  SIZE_T Length; // [rsp+C8h] [rbp+58h] BYREF

  v2 = *(_DWORD **)(a2 + 40);
  v34 = 0;
  v26 = 0;
  v4 = 0LL;
  P = 0LL;
  v5 = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  Source2 = 0LL;
  LODWORD(Length) = 0;
  v32 = 0LL;
  Pool2 = 0LL;
  v33 = 0;
  v30 = 0LL;
  v7 = BcdOpenObject(a1, a2 + 16, &v32);
  v8 = v32;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_40;
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0
    && (int)BiGetRegistryValue(v32, L"FirmwareVariable", L"Description", 3LL, &Source2, &Length) >= 0 )
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
      ElementDataWithFlags = BcdGetElementDataWithFlags((_DWORD)v8, 301989892, v11, 0, (__int64)&v33);
      if ( ElementDataWithFlags == -1073741789 )
      {
        Pool2 = (void *)ExAllocatePool2(258LL, v33, 1262764866LL);
        v16 = Pool2;
        if ( !Pool2 )
          goto LABEL_18;
        ElementDataWithFlags = BcdGetElementDataWithFlags((_DWORD)v8, 301989892, v15, (_DWORD)Pool2, (__int64)&v33);
      }
      else
      {
        v16 = 0LL;
      }
      if ( ElementDataWithFlags >= 0 )
      {
        if ( v16 )
        {
          if ( v33 == (_DWORD)Length )
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
                  v4 = P;
                }
                else
                {
                  BiDeleteElement(v8, 0x11000001u);
                  BiMapEfiDeviceForSpaces(a2, (const void **)&P, &v34);
                  v4 = P;
                  BcdSetElementDataWithFlags(v8, 0x11000001u, v21, (__int64)P, v34);
                }
                if ( (int)BiGetFilePathFromEfiPath(v20 + 12, &v29, &v26) < 0 )
                {
                  v22 = v29;
                }
                else
                {
                  BiDeleteElement(v8, 0x12000002u);
                  v22 = v29;
                  BcdSetElementDataWithFlags(v8, 0x12000002u, v23, (__int64)v29, v26);
                }
                v24 = BiCreateMergedBootEntry(v2, 0LL, v4, 0LL, &v30);
                v6 = v30;
                if ( v24 >= 0 && !(unsigned __int8)BiAreBootEntriesEqual(v2, v30) )
                {
                  BiLogMessage(2LL, L"Updating BootEntry: %d", (unsigned int)v2[2]);
                  v9 = BiModifyBootEntry(v6);
                  if ( v9 < 0 )
                    goto LABEL_33;
                  v9 = BiSaveFirmwareVariable(v8, v6, v6[1]);
                  if ( v9 < 0 )
                    goto LABEL_33;
                  ExFreePoolWithTag(v2, 0x4B444342u);
                  *(_QWORD *)(a2 + 40) = v6;
                  v6 = 0LL;
                }
              }
              else
              {
                v22 = v29;
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
      BcdSetElementDataWithFlags(v8, 0x12000004u, v18, (__int64)v12, Length);
      goto LABEL_19;
    }
  }
  v9 = BiSaveFirmwareVariable(v8, v2, (unsigned int)v2[1]);
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a2 + 48) |= 2u;
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
