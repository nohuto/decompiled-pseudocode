/*
 * XREFs of ?OnAnimationComplete@CThumbnailTransition@@UEAAJI@Z @ 0x1800E4810
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x1800E4B10 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailTransition::OnAnimationComplete(CThumbnailTransition *this, int a2)
{
  if ( *((_DWORD *)this + 4) == a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)this - 2);
    CThumbnailTransition::StopAnimation((CThumbnailTransition *)((char *)this - 16));
    *((_DWORD *)this + 4) = -1;
    CBaseObject::Release((CThumbnailTransition *)((char *)this - 16));
  }
  return 0LL;
}
