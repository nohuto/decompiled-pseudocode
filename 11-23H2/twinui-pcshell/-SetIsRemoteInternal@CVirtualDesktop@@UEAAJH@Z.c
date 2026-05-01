/*
 * XREFs of ?SetIsRemoteInternal@CVirtualDesktop@@UEAAJH@Z @ 0x1801C42D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktop::SetIsRemoteInternal(CVirtualDesktop *this, int a2)
{
  *((_DWORD *)this + 28) = a2;
  return 0LL;
}
