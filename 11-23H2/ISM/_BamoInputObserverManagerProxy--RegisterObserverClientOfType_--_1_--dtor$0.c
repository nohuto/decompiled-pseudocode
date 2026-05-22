/*
 * XREFs of _BamoInputObserverManagerProxy::RegisterObserverClientOfType_::_1_::dtor$0 @ 0x180130BA7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BamoInputObserverManagerProxy::RegisterObserverClientOfType_::_1_::dtor_0(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)(a2 + 48), a2, a3);
}
