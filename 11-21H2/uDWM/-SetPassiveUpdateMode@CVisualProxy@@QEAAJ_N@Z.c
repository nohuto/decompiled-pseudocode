/*
 * XREFs of ?SetPassiveUpdateMode@CVisualProxy@@QEAAJ_N@Z @ 0x1801009B8
 * Callers:
 *     ?SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18001FF60 (-SetPassiveUpdateMode@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?Initialize@CProjectionBorderVisual@@MEAAJXZ @ 0x1800D0750 (-Initialize@CProjectionBorderVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualProxy::SetPassiveUpdateMode(CVisualProxy *this, char a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = *((_QWORD *)this + 2);
  v4 = *(_QWORD *)(v2 + 16);
  v5 = *(unsigned int *)(v2 + 24);
  LOBYTE(v2) = a2;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 496LL))(v4, v5, v2);
}
