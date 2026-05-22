/*
 * XREFs of _Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects_::_1_::dtor$0 @ 0x1800C1231
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects_::_1_::dtor_0(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)(a2 + 128), a2, a3);
}
