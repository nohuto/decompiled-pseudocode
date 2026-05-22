/*
 * XREFs of ??1AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x1801116F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Microsoft::WRL::AgileRef::~AgileRef(__int64 *this)
{
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(this);
}
