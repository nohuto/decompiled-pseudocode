/*
 * XREFs of BiUpdateEfiEntry @ 0x140A5F19C
 * Callers:
 *     BiCreateEfiEntry @ 0x140A5E090 (BiCreateEfiEntry.c)
 *     BiExportBcdObjects @ 0x140A5E754 (BiExportBcdObjects.c)
 * Callees:
 *     BiSpacesUpdatePhysicalDevicePath @ 0x140671CF4 (BiSpacesUpdatePhysicalDevicePath.c)
 *     BcdCloseObject @ 0x1408051D0 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140805214 (BcdOpenObject.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiGetElement @ 0x140A5CBE0 (BiGetElement.c)
 *     BiAreBootEntriesEqual @ 0x140A5DCB0 (BiAreBootEntriesEqual.c)
 *     BiCreateMergedBootEntry @ 0x140A5E27C (BiCreateMergedBootEntry.c)
 *     BiModifyBootEntry @ 0x140A5EE7C (BiModifyBootEntry.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateEfiEntry(void *a1, const GUID *a2)
{
  PVOID v3; // r12
  _DWORD *v4; // r15
  _WORD *v5; // r14
  NTSTATUS v6; // ebx
  int updated; // eax
  int MergedBootEntry; // eax
  _BOOT_ENTRY *v9; // rsi
  HANDLE BcdObjectHandle; // [rsp+30h] [rbp-30h] BYREF
  _OWORD *v12; // [rsp+38h] [rbp-28h] BYREF
  _WORD *v13; // [rsp+40h] [rbp-20h] BYREF
  PVOID v14; // [rsp+48h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID v16; // [rsp+A8h] [rbp+48h] BYREF
  ULONG v17; // [rsp+B0h] [rbp+50h] BYREF
  ULONG v18; // [rsp+B8h] [rbp+58h] BYREF

  LODWORD(v16) = 0;
  v17 = 0;
  v18 = 0;
  v3 = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  v12 = 0LL;
  v5 = 0LL;
  v13 = 0LL;
  P[0] = 0LL;
  BcdObjectHandle = 0LL;
  v6 = BcdOpenObject(a1, a2 + 1, &BcdObjectHandle);
  if ( v6 < 0 )
    goto LABEL_12;
  BiGetElement(BcdObjectHandle, 0x12000004u, &v14, (ULONG *)&v16);
  if ( (a2[3].Data1 & 8) == 0 )
  {
    BiGetElement(BcdObjectHandle, 0x11000001u, &v12, &v17);
    updated = BiSpacesUpdatePhysicalDevicePath(&v12);
    if ( updated < 0 )
      BiLogMessage(3LL, L"BiSpacesUpdatePhysicalDevicePath failed %x", (unsigned int)updated);
    BiGetElement(BcdObjectHandle, 0x12000002u, &v13, &v18);
    v4 = v12;
    v5 = v13;
  }
  v3 = v14;
  v16 = *(PVOID *)a2[2].Data4;
  MergedBootEntry = BiCreateMergedBootEntry(v16, v14, v4, v5, P);
  v6 = MergedBootEntry;
  if ( MergedBootEntry == -1073741766 )
  {
    v6 = 0;
    goto LABEL_13;
  }
  if ( MergedBootEntry < 0 )
    goto LABEL_12;
  v9 = (_BOOT_ENTRY *)P[0];
  if ( !BiAreBootEntriesEqual(v16, (_DWORD *)P[0]) )
  {
    v6 = BiModifyBootEntry(v9);
    if ( v6 < 0 )
    {
      ExFreePoolWithTag(v9, 0x4B444342u);
LABEL_12:
      BiLogMessage(4LL, L"BiUpdateEfiEntry failed %x", (unsigned int)v6);
      goto LABEL_13;
    }
  }
  ExFreePoolWithTag(v16, 0x4B444342u);
  *(_QWORD *)a2[2].Data4 = v9;
LABEL_13:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  return (unsigned int)v6;
}
