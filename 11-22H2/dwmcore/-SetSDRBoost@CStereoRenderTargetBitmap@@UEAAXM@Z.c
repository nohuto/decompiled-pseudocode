/*
 * XREFs of ?SetSDRBoost@CStereoRenderTargetBitmap@@UEAAXM@Z @ 0x1802B6030
 * Callers:
 *     ?SetSDRBoost@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAXM@Z @ 0x180123C00 (-SetSDRBoost@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAXM@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CStereoRenderTargetBitmap::SetSDRBoost(CStereoRenderTargetBitmap *this, float a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 40LL))(*((_QWORD *)this + 6));
  CRenderTargetBitmap::SetSDRBoost(this, a2);
}
