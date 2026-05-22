/*
 * XREFs of ??1LegacyInputSinkData@@QEAA@XZ @ 0x18004DA4C
 * Callers:
 *     _InputSiteManager::GetInputSiteFromInputSinkHandle_::_1_::dtor$0 @ 0x18004DF0E (_InputSiteManager--GetInputSiteFromInputSinkHandle_--_1_--dtor$0.c)
 *     _InputSiteManager::GetOrCreateInputSiteFromInputSinkHandle_::_1_::dtor$0 @ 0x18004E07D (_InputSiteManager--GetOrCreateInputSiteFromInputSinkHandle_--_1_--dtor$0.c)
 *     _InputSiteManager::GetInputSiteFromInputSinkData_::_1_::dtor$3 @ 0x180057540 (_InputSiteManager--GetInputSiteFromInputSinkData_--_1_--dtor$3.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 */

void __fastcall LegacyInputSinkData::~LegacyInputSinkData(
        LegacyInputSinkData *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( *((char *)this + 8) != -1LL )
  {
    if ( *((_BYTE *)this + 8) )
      wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
        (__int64 *)this,
        a2,
        a3,
        a4);
  }
}
