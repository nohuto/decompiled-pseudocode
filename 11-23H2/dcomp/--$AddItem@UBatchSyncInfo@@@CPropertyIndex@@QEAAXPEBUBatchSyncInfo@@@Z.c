/*
 * XREFs of ??$AddItem@UBatchSyncInfo@@@CPropertyIndex@@QEAAXPEBUBatchSyncInfo@@@Z @ 0x1800A6FB8
 * Callers:
 *     ?Present@CPresentationManager@@UEAAJXZ @ 0x1801ADEE0 (-Present@CPresentationManager@@UEAAJXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUBatchSyncInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUBatchSyncInfo@@$$QEAI@Z @ 0x1800A70E8 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUBatchSyncInfo@@I@-$vector@UCFlipPropertyItem@@V-$alloca.c)
 */

__int64 __fastcall CPropertyIndex::AddItem<BatchSyncInfo>(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  GUID *v3; // rdx
  int v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  result = a2;
  v3 = *(GUID **)(a1 + 8);
  v4 = 8;
  if ( v3 == *(GUID **)(a1 + 16) )
    return std::vector<CFlipPropertyItem>::_Emplace_reallocate<_GUID const &,BatchSyncInfo const * &,unsigned int>(
             a1,
             (_DWORD)v3,
             (unsigned int)&GUID_7d0dcf87_222e_4d05_b402_3bfa5181ec53,
             (unsigned int)&v5,
             (__int64)&v4);
  v3[1].Data1 = 8;
  *(_QWORD *)v3[1].Data4 = result;
  *v3 = GUID_7d0dcf87_222e_4d05_b402_3bfa5181ec53;
  *(_QWORD *)(a1 + 8) += 32LL;
  return result;
}
