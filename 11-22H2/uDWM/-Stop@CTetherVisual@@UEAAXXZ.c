/*
 * XREFs of ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800E3FF0
 * Callers:
 *     ??1CTetherVisual@@MEAA@XZ @ 0x1800E3834 (--1CTetherVisual@@MEAA@XZ.c)
 *     ?SnapToAnchor@CTetherVisual@@QEAAJXZ @ 0x1800E3E30 (-SnapToAnchor@CTetherVisual@@QEAAJXZ.c)
 *     ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800E3F38 (-Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z.c)
 *     ?UpdateTransition@CTetherVisual@@MEAAJXZ @ 0x1800E4420 (-UpdateTransition@CTetherVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?StopTimer@CTetherVisual@@MEAAJXZ @ 0x1800E40C0 (-StopTimer@CTetherVisual@@MEAAJXZ.c)
 */

void __fastcall CTetherVisual::Stop(CTetherVisual *this)
{
  __int64 v2; // r8
  _BYTE v3[16]; // [rsp+30h] [rbp-28h] BYREF

  CRenderDataVisual::ClearInstructions(this);
  CTetherVisual::StopTimer(this);
  if ( *((_BYTE *)this + 424) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmTetherVisual_End,
      v2,
      1LL,
      (__int64)v3);
  *((_BYTE *)this + 424) = 0;
}
