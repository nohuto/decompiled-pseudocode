/*
 * XREFs of ?Start@CTetherVisual@@QEAAJAEBUtagPOINT@@0@Z @ 0x1800E3F38
 * Callers:
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x1800B1630 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Stop@CTetherVisual@@UEAAXXZ @ 0x1800E3FF0 (-Stop@CTetherVisual@@UEAAXXZ.c)
 *     ?UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z @ 0x1800E43B0 (-UpdatePosition@CTetherVisual@@QEAAJPEBUtagPOINT@@0@Z.c)
 */

__int64 __fastcall CTetherVisual::Start(CTetherVisual *this, const struct tagPOINT *a2, const struct tagPOINT *a3)
{
  int updated; // eax
  unsigned int v7; // ebx
  _BYTE v9[16]; // [rsp+30h] [rbp-38h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&UdwmTetherVisual_Start,
      (__int64)a3,
      1LL,
      (__int64)v9);
  *((_BYTE *)this + 424) = 1;
  updated = CTetherVisual::UpdatePosition(this, a2, a3);
  v7 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x10Bu);
    CTetherVisual::Stop(this);
  }
  return v7;
}
