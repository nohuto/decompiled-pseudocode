/*
 * XREFs of _HapticsDevice::UpdateBamoProperties_::_1_::dtor$18 @ 0x18018F3DA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HapticsDevice::UpdateBamoProperties_::_1_::dtor_18(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)(a2 + 48), a2, a3, a4);
}
