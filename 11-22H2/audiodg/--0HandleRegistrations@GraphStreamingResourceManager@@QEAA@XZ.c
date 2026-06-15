/*
 * XREFs of ??0HandleRegistrations@GraphStreamingResourceManager@@QEAA@XZ @ 0x14001C56C
 * Callers:
 *     ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x14001C488 (--0GraphStreamingResourceManager@@QEAA@XZ.c)
 *     ??0CpuManager@@QEAA@XZ @ 0x140052EA8 (--0CpuManager@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAA@IMMMI@Z @ 0x14000AB7C (--0-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElementTra.c)
 */

__int64 __fastcall GraphStreamingResourceManager::HandleRegistrations::HandleRegistrations(
        GraphStreamingResourceManager::HandleRegistrations *this,
        __int64 a2)
{
  __int64 v2; // r10

  ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>(
    (__int64)this,
    a2,
    0.75,
    0.25,
    SLODWORD(FLOAT_2_25));
  return v2;
}
