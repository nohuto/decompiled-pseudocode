/*
 * XREFs of ??1?$ComPtr@VForegroundManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800818F0
 * Callers:
 *     _ForegroundManager::Create_::_1_::dtor$0 @ 0x18005507A (_ForegroundManager--Create_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ForegroundManager>::~ComPtr<ForegroundManager>(volatile signed __int32 **a1)
{
  return Microsoft::WRL::ComPtr<ForegroundManager>::InternalRelease(a1);
}
