/*
 * XREFs of ?v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1804C8180
 * Callers:
 *     ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180237380 (-v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationSt.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_RecreateShrinkableVisual@CShrinkButtonElement@@IEAAJXZ @ 0x1804C7EF0 (-_RecreateShrinkableVisual@CShrinkButtonElement@@IEAAJXZ.c)
 *     ?_SetShrink@CShrinkButtonElement@@IEAAXXZ @ 0x1804C8088 (-_SetShrink@CShrinkButtonElement@@IEAAXXZ.c)
 */

void __fastcall CShrinkButtonElement::v_LayoutChildren(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // r11
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // edx
  _DWORD v9[4]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(__int64 **)(a1 + 88);
  v6 = a2;
  v7 = *v3;
  v8 = *(_DWORD *)(a1 + 60);
  v9[0] = *(_DWORD *)(a1 + 56);
  v9[2] = v9[0] + 1;
  v9[1] = v8;
  v9[3] = v8 + 1;
  (*(void (__fastcall **)(__int64 *, _DWORD *, __int64, __int64))(v7 + 24))(v3, v9, v6, a3);
  if ( *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56) != *(_DWORD *)(a1 + 256)
    || *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60) != *(_DWORD *)(a1 + 260) )
  {
    CShrinkButtonElement::_RecreateShrinkableVisual((CShrinkButtonElement *)a1);
  }
  CShrinkButtonElement::_SetShrink((CShrinkButtonElement *)a1);
}
