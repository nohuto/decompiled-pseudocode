/*
 * XREFs of ?OnAnimationComplete@CDisplayAnimatedVisual@@UEAAJI@Z @ 0x1800B8160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x1800B8484 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::OnAnimationComplete(CDisplayAnimatedVisual *this)
{
  char *v1; // rbx
  int v2; // edi

  v1 = (char *)this - 288;
  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 36) + 232LL))((char *)this - 288);
  if ( v2 < 0 )
    CDisplayAnimatedVisual::Stop(v1, 0LL);
  return (unsigned int)v2;
}
