/*
 * XREFs of CmpGetVirtualStoreRoot @ 0x140A19C84
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140A19FA8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     CmpReferenceKeyControlBlock @ 0x14076A6F0 (CmpReferenceKeyControlBlock.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 *     CmpFindKcbInHashEntryByCellIndex @ 0x140A17308 (CmpFindKcbInHashEntryByCellIndex.c)
 *     CmpGetMappingHiveForString @ 0x140A19B68 (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationID @ 0x140A19D3C (CmpGetVirtualizationID.c)
 */

__int64 __fastcall CmpGetVirtualStoreRoot(__int64 a1, __int64 *a2, int *a3, ULONG_PTR *a4)
{
  int VirtualizationID; // esi
  __int64 v8; // rcx
  int v9; // edi
  ULONG_PTR KcbInHashEntryByCellIndex; // rbx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  UnicodeString = 0LL;
  RtlInitUnicodeString(&UnicodeString, 0LL);
  VirtualizationID = CmpGetVirtualizationID(&UnicodeString);
  if ( VirtualizationID >= 0 )
  {
    VirtualizationID = CmpGetMappingHiveForString((__m128i *)&UnicodeString, a2);
    if ( VirtualizationID >= 0 )
    {
      v8 = *a2;
      v9 = *(_DWORD *)(*(_QWORD *)(*a2 + 64) + 36LL);
      KcbInHashEntryByCellIndex = CmpFindKcbInHashEntryByCellIndex(v8, 0, v9);
      CmpReferenceKeyControlBlock(KcbInHashEntryByCellIndex);
      *a3 = v9;
      *a4 = KcbInHashEntryByCellIndex;
    }
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)VirtualizationID;
}
