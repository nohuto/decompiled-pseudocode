/*
 * XREFs of ?HasLazyRequest@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x18004B7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBaseStreamGroupProxy::HasLazyRequest(CBaseStreamGroupProxy *this)
{
  return *((_DWORD *)this + 36) != 0;
}
