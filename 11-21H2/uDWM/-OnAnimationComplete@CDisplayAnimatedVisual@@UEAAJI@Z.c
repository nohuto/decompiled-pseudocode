/*
 * XREFs of ?OnAnimationComplete@CDisplayAnimatedVisual@@UEAAJI@Z @ 0x1800B4E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplayAnimatedVisual::OnAnimationComplete(CDisplayAnimatedVisual *this)
{
  __int64 *v1; // rbx
  int v2; // edi

  v1 = (__int64 *)((char *)this - 288);
  v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 36) + 224LL))((char *)this - 288);
  if ( v2 < 0 )
    CDisplayAnimatedVisual::Stop(v1, 0);
  return (unsigned int)v2;
}
