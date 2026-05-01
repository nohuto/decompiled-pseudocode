/*
 * XREFs of ?_SetShrink@CShrinkButtonElement@@IEAAXXZ @ 0x1805829E8
 * Callers:
 *     ?v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180582AE0 (-v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboa.c)
 *     ?v_SetRenderMode@CShrinkButtonElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z @ 0x180582BC0 (-v_SetRenderMode@CShrinkButtonElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@.c)
 *     ?v_SetRenderMode@SwitchItemThumbnailElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z @ 0x1805874C0 (-v_SetRenderMode@SwitchItemThumbnailElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElem.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x180582674 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 */

void __fastcall CShrinkButtonElement::_SetShrink(CShrinkButtonElement *this)
{
  double v2; // xmm7_8
  int v3; // eax
  LONG v4; // ecx
  LONG v5; // eax
  struct tagRECT rc; // [rsp+30h] [rbp-48h] BYREF

  v2 = DOUBLE_1_0;
  LOBYTE(v3) = CMultitaskingViewButtonElement::_CalcButtonRenderMode((__int64)this);
  if ( v3 == 2 )
    v2 = *((double *)this + 29);
  v4 = *((_DWORD *)this + 64);
  v5 = *((_DWORD *)this + 65);
  rc.left = 0;
  rc.top = 0;
  rc.right = v4;
  rc.bottom = v5;
  InflateRect(&rc, (int)((double)v4 * (1.0 - v2) * -0.5), (int)((double)v5 * (1.0 - v2) * -0.5));
  (*(void (__fastcall **)(_QWORD, struct tagRECT *, __int64))(**((_QWORD **)this + 33) + 24LL))(
    *((_QWORD *)this + 33),
    &rc,
    3LL);
}
