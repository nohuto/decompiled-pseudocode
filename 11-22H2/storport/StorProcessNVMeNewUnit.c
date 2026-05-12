/*
 * XREFs of StorProcessNVMeNewUnit @ 0x1C00ABBA8
 * Callers:
 *     StorProcessNVMeModifiedNodes @ 0x1C0074A18 (StorProcessNVMeModifiedNodes.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1C0017E28 (RaidAdapterInsertUnit.c)
 *     McTemplateK0zqjuuusssz_EtwWriteTransfer @ 0x1C001A370 (McTemplateK0zqjuuusssz_EtwWriteTransfer.c)
 *     RaidStartUnit @ 0x1C00212D8 (RaidStartUnit.c)
 *     RaidLockDeviceQueue @ 0x1C0040380 (RaidLockDeviceQueue.c)
 *     RaidUnitAssignAddress @ 0x1C0061088 (RaidUnitAssignAddress.c)
 *     StorUnitAssignNVMeIdentity @ 0x1C00ABC98 (StorUnitAssignNVMeIdentity.c)
 */

NTSTATUS __fastcall StorProcessNVMeNewUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // r9
  NTSTATUS result; // eax
  const wchar_t *v8; // r10

  v2 = *(_QWORD *)(a2 + 8);
  RaidUnitAssignAddress(v2, *(_DWORD *)(a2 + 4));
  StorUnitAssignNVMeIdentity(v4, v3 + 32);
  v5 = *(_BYTE *)(v2 + 448) & 0xF7;
  *(_DWORD *)(v2 + 48) = 2;
  *(_BYTE *)(v2 + 448) = v5 | 4;
  RaidLockDeviceQueue(v2 + 656);
  RaidAdapterInsertUnit(*(_QWORD *)(v2 + 24), v2);
  RaidStartUnit(v2);
  v6 = *(_QWORD *)(v2 + 24);
  result = *(_DWORD *)(v6 + 4212);
  *(_DWORD *)(v2 + 3344) = result;
  if ( (byte_1C0092A06 & 2) != 0 )
  {
    v8 = (const wchar_t *)&unk_1C0081788;
    if ( *(_QWORD *)(v6 + 5016) )
      v8 = *(const wchar_t **)(v6 + 5016);
    return McTemplateK0zqjuuusssz_EtwWriteTransfer(
             v2 + 169,
             v2 + 160,
             v6 + 5000,
             *(const wchar_t **)(v6 + 4656),
             *(_DWORD *)(v6 + 56),
             v6 + 5000,
             0,
             0,
             *(_BYTE *)(v2 + 96),
             (const char *)(v2 + 160),
             (const char *)(v2 + 169),
             (const char *)(v2 + 186),
             v8);
  }
  return result;
}
