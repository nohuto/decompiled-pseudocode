/*
 * XREFs of ?AddToIndexIfSet@CPresentParametersInfo@CPresentationManager@@QEAAXAEAVCPropertyIndex@@@Z @ 0x1801AD238
 * Callers:
 *     ?Present@CPresentationManager@@UEAAJXZ @ 0x1801ADEE0 (-Present@CPresentationManager@@UEAAJXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentParametersInfo@@I@?$vector@UCFlipPropertyItem@@V?$allocator@UCFlipPropertyItem@@@std@@@std@@QEAAPEAUCFlipPropertyItem@@QEAU2@AEBU_GUID@@AEAPEBUPresentParametersInfo@@$$QEAI@Z @ 0x1801ACD30 (--$_Emplace_reallocate@AEBU_GUID@@AEAPEBUPresentParametersInfo@@I@-$vector@UCFlipPropertyItem@@V.c)
 */

void __fastcall CPresentationManager::CPresentParametersInfo::AddToIndexIfSet(
        CPresentationManager::CPresentParametersInfo *this,
        struct CPropertyIndex *a2)
{
  GUID *v3; // rdx
  int v4; // [rsp+40h] [rbp+8h] BYREF
  CPresentationManager::CPresentParametersInfo *v5; // [rsp+50h] [rbp+18h] BYREF

  if ( *(_DWORD *)this || *((_DWORD *)this + 2) || *((_BYTE *)this + 12) )
  {
    v3 = (GUID *)*((_QWORD *)a2 + 1);
    v5 = this;
    v4 = 16;
    if ( v3 == *((GUID **)a2 + 2) )
    {
      std::vector<CFlipPropertyItem>::_Emplace_reallocate<_GUID const &,PresentParametersInfo const * &,unsigned int>(
        (__int64 *)a2,
        (__int64)v3,
        (__int128 *)&GUID_a3ec3a74_6a2c_4ab9_9e31_bce1a71d6ed7,
        &v5,
        &v4);
    }
    else
    {
      v3[1].Data1 = 16;
      *(_QWORD *)v3[1].Data4 = this;
      *v3 = GUID_a3ec3a74_6a2c_4ab9_9e31_bce1a71d6ed7;
      *((_QWORD *)a2 + 1) += 32LL;
    }
  }
}
