/*
 * XREFs of ?IsReleased@ResourceSetClientProxy@@UEBA_NXZ @ 0x18001FE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ResourceSetClientProxy::IsReleased(ResourceSetClientProxy *this)
{
  return *((_DWORD *)this + 120) == 2;
}
