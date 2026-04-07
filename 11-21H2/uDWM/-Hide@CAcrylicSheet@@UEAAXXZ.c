/*
 * XREFs of ?Hide@CAcrylicSheet@@UEAAXXZ @ 0x18009A670
 * Callers:
 *     ?StopAnimations@CAcrylicSheet@@QEAAJXZ @ 0x18009B280 (-StopAnimations@CAcrylicSheet@@QEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A190 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CAcrylicSheet::Hide(CAcrylicSheet *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v1 = (__int64 *)((char *)this - 296);
  CVisual::SetOpacity((CAcrylicSheet *)((char *)this - 296), 0.0);
  v2 = *v1;
  v3 = 0;
  v4 = 0;
  (*(void (__fastcall **)(__int64 *, int *))(v2 + 96))(v1, &v3);
}
