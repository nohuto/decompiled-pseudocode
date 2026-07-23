/*
 * XREFs of BiCreateEfiEntry @ 0x140A5E090
 * Callers:
 *     BiBindEfiEntries @ 0x140803AB8 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x140A5E754 (BiExportBcdObjects.c)
 * Callees:
 *     BiSetRegistryValue @ 0x140803CEC (BiSetRegistryValue.c)
 *     BcdCloseObject @ 0x1408051D0 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140805214 (BcdOpenObject.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiGetSavedBootEntry @ 0x140805E44 (BiGetSavedBootEntry.c)
 *     BiAddBootEntry @ 0x140A5D9FC (BiAddBootEntry.c)
 *     BiCreateBootEntry @ 0x140A5DCDC (BiCreateBootEntry.c)
 *     BiUpdateEfiEntry @ 0x140A5F19C (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A5F354 (BiUpdateObjectReferenceInEfiEntry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateEfiEntry(void *a1, const GUID *a2)
{
  _BOOT_ENTRY *v3; // rsi
  NTSTATUS v5; // eax
  HANDLE v6; // r14
  int SavedBootEntry; // ebx
  const GUID *v8; // rdi
  ULONG v9; // eax
  ULONG v10; // eax
  ULONG Id; // [rsp+78h] [rbp+48h] BYREF
  PVOID P; // [rsp+80h] [rbp+50h] BYREF
  HANDLE BcdObjectHandle; // [rsp+88h] [rbp+58h] BYREF

  Id = 0;
  BcdObjectHandle = 0LL;
  v3 = 0LL;
  P = 0LL;
  v5 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  v6 = BcdObjectHandle;
  SavedBootEntry = v5;
  if ( v5 < 0 )
    goto LABEL_16;
  v8 = a2 + 3;
  if ( (a2[3].Data1 & 2) == 0 )
  {
    SavedBootEntry = BiCreateBootEntry(BcdObjectHandle, &P);
    if ( SavedBootEntry >= 0 )
    {
      v3 = (_BOOT_ENTRY *)P;
      SavedBootEntry = BiAddBootEntry((PBOOT_ENTRY)P, &Id);
      if ( SavedBootEntry >= 0 )
      {
        BiLogMessage(2LL, L"Created new boot entry 0x%x", Id);
        v3->Id = Id;
        v10 = Id;
        v8->Data1 |= 0x21u;
        a2[2].Data1 = v10;
        *(_QWORD *)a2[2].Data4 = v3;
        SavedBootEntry = BiSetRegistryValue(
                           (__int64)v6,
                           L"FirmwareVariable",
                           (__int64)L"Description",
                           3u,
                           v3,
                           v3->Length);
        if ( SavedBootEntry >= 0 )
        {
          v8->Data1 |= 2u;
          goto LABEL_17;
        }
      }
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  SavedBootEntry = BiGetSavedBootEntry((__int64)BcdObjectHandle, &P);
  if ( SavedBootEntry < 0 )
  {
LABEL_15:
    v3 = (_BOOT_ENTRY *)P;
    goto LABEL_16;
  }
  v3 = (_BOOT_ENTRY *)P;
  if ( (v8->Data1 & 8) == 0 )
  {
    SavedBootEntry = BiUpdateObjectReferenceInEfiEntry(P, v6);
    if ( SavedBootEntry >= 0 )
    {
      v8->Data1 |= 0x20u;
      goto LABEL_7;
    }
LABEL_16:
    BiLogMessage(4LL, L"BiCreateEfiEntry failed %x", (unsigned int)SavedBootEntry);
    v8 = a2 + 3;
    goto LABEL_17;
  }
LABEL_7:
  SavedBootEntry = BiAddBootEntry(v3, &Id);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  BiLogMessage(2LL, L"Created boot entry 0x%x using cached variable", Id);
  v3->Id = Id;
  v9 = Id;
  v8->Data1 |= 1u;
  a2[2].Data1 = v9;
  *(_QWORD *)a2[2].Data4 = v3;
  SavedBootEntry = BiSetRegistryValue((__int64)v6, L"FirmwareVariable", (__int64)L"Description", 3u, v3, v3->Length);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
  SavedBootEntry = BiUpdateEfiEntry(a1, a2);
  if ( SavedBootEntry < 0 )
    goto LABEL_16;
LABEL_17:
  if ( v6 )
    BcdCloseObject(v6);
  if ( (v8->Data1 & 1) == 0 && v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  return (unsigned int)SavedBootEntry;
}
