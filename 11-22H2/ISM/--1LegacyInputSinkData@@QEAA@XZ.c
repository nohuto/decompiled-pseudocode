/*
 * XREFs of ??1LegacyInputSinkData@@QEAA@XZ @ 0x180070B30
 * Callers:
 *     _InputSiteManager::GetInputSiteFromInputSinkData_::_1_::dtor$3 @ 0x18007141B (_InputSiteManager--GetInputSiteFromInputSinkData_--_1_--dtor$3.c)
 *     _InputSiteManager::GetOrCreateInputSiteFromInputSinkHandle_::_1_::dtor$0 @ 0x18007159E (_InputSiteManager--GetOrCreateInputSiteFromInputSinkHandle_--_1_--dtor$0.c)
 *     _InputSiteManager::GetInputSiteFromInputSinkHandle_::_1_::dtor$0 @ 0x18014D2FB (_InputSiteManager--GetInputSiteFromInputSinkHandle_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall LegacyInputSinkData::~LegacyInputSinkData(
        LegacyInputSinkData *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx

  if ( *((char *)this + 8) != -1LL && *((_BYTE *)this + 8) )
  {
    v4 = *(_QWORD *)this;
    if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v4, a2, a3, a4);
  }
}
