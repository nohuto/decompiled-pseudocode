/*
 * XREFs of _BamoInputDeliveryServerProxy::RegisterInputAttemptedClient_::_1_::dtor$0 @ 0x18013E199
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall BamoInputDeliveryServerProxy::RegisterInputAttemptedClient_::_1_::dtor_0(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)(a2 + 48), a2, a3);
}
