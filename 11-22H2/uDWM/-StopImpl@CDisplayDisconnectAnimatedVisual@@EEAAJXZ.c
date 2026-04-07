/*
 * XREFs of ?StopImpl@CDisplayDisconnectAnimatedVisual@@EEAAJXZ @ 0x1800B91E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CDisplayDisconnectAnimatedVisual::StopImpl(CDisplayDisconnectAnimatedVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al

  v2 = *((_QWORD *)this + 55);
  *((_QWORD *)this + 55) = 0LL;
  if ( v2 )
    CBaseObject::Release((CBaseObject *)(v2 + 8));
  v3 = *((_QWORD *)this + 56);
  *((_QWORD *)this + 56) = 0LL;
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( v4 )
      v5 = 1;
    CDesktopManager::s_fTimelineDirty = v5;
  }
  return 0LL;
}
