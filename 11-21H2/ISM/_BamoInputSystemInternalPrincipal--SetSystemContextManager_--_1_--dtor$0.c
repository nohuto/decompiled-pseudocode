/*
 * XREFs of _BamoInputSystemInternalPrincipal::SetSystemContextManager_::_1_::dtor$0 @ 0x180123117
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BamoInputSystemInternalPrincipal::SetSystemContextManager_::_1_::dtor_0(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)(a2 + 48), a2, a3);
}
