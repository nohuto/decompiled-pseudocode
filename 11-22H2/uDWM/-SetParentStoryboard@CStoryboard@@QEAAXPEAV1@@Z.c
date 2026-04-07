/*
 * XREFs of ?SetParentStoryboard@CStoryboard@@QEAAXPEAV1@@Z @ 0x18000F950
 * Callers:
 *     ?OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@PEAU2@@Z @ 0x18000D750 (-OnBeginTransitionRequestFromStoryboard@CAnimationScheduler@@QEAAJHPEBU_GUID@@PEAVCStoryboard@@P.c)
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x18000E264 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x18000DB94 (-Release@CStoryboard@@QEAAKXZ.c)
 */

void __fastcall CStoryboard::SetParentStoryboard(CStoryboard *this, struct CStoryboard *a2)
{
  CStoryboard *v4; // rcx

  v4 = (CStoryboard *)*((_QWORD *)this + 11);
  if ( v4 )
    CStoryboard::Release(v4);
  *((_QWORD *)this + 11) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
}
