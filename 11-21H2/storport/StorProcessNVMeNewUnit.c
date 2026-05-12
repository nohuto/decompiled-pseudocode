/*
 * XREFs of StorProcessNVMeNewUnit @ 0x1C0090898
 * Callers:
 *     StorProcessNVMeModifiedNodes @ 0x1C0065F38 (StorProcessNVMeModifiedNodes.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1C001C684 (RaidAdapterInsertUnit.c)
 *     McTemplateK0zqjuuusssz_EtwWriteTransfer @ 0x1C001E540 (McTemplateK0zqjuuusssz_EtwWriteTransfer.c)
 *     RaidStartUnit @ 0x1C001EBDC (RaidStartUnit.c)
 *     RaidUnitAssignAddress @ 0x1C00546B8 (RaidUnitAssignAddress.c)
 *     StorUnitAssignNVMeIdentity @ 0x1C0090984 (StorUnitAssignNVMeIdentity.c)
 */

NTSTATUS __fastcall StorProcessNVMeNewUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // r9
  NTSTATUS result; // eax
  const wchar_t *v9; // r10

  v2 = *(_QWORD *)(a2 + 8);
  RaidUnitAssignAddress(v2, *(_DWORD *)(a2 + 4));
  StorUnitAssignNVMeIdentity(v4, v3 + 32);
  v5 = *(_QWORD *)(v2 + 24);
  v6 = *(_BYTE *)(v2 + 448) & 0xF3 | 4;
  *(_DWORD *)(v2 + 48) = 2;
  *(_BYTE *)(v2 + 448) = v6;
  *(_BYTE *)(v2 + 693) = 1;
  RaidAdapterInsertUnit(v5, v2);
  RaidStartUnit(v2);
  v7 = *(_QWORD *)(v2 + 24);
  result = *(_DWORD *)(v7 + 4148);
  *(_DWORD *)(v2 + 3296) = result;
  if ( (byte_1C00799E6 & 1) != 0 )
  {
    v9 = (const wchar_t *)&unk_1C006A690;
    if ( *(_QWORD *)(v7 + 4952) )
      v9 = *(const wchar_t **)(v7 + 4952);
    return McTemplateK0zqjuuusssz_EtwWriteTransfer(
             v2 + 169,
             v2 + 160,
             v7 + 4936,
             *(const wchar_t **)(v7 + 4592),
             *(_DWORD *)(v7 + 56),
             v7 + 4936,
             0,
             0,
             *(_BYTE *)(v2 + 96),
             (const char *)(v2 + 160),
             (const char *)(v2 + 169),
             (const char *)(v2 + 186),
             v9);
  }
  return result;
}
