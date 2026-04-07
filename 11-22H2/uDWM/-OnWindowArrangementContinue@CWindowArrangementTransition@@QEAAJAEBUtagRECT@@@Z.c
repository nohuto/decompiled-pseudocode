/*
 * XREFs of ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z @ 0x1801060A4
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18010B804 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180025580 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AdjustTargetRect@CAcrylicSheet@@QEAAJPEAUtagRECT@@@Z @ 0x1800A2A68 (-AdjustTargetRect@CAcrylicSheet@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x1800A2BEC (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementContinue(
        CWindowArrangementTransition *this,
        const struct tagRECT *a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // r8
  int v7; // eax
  __m256i v9; // [rsp+38h] [rbp-39h] BYREF
  __m256i v10; // [rsp+68h] [rbp-9h] BYREF
  __int64 v11; // [rsp+88h] [rbp+17h]
  struct tagRECT v12; // [rsp+98h] [rbp+27h] BYREF

  v3 = 0;
  if ( *((_BYTE *)this + 16) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 544LL);
    if ( v4 )
    {
      v9.m256i_i32[0] = 5;
      v12 = *a2;
      memset(&v9.m256i_u64[1], 0, 24);
      v5 = CAcrylicSheet::AdjustTargetRect(this, &v12);
      v3 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x50u);
        return v3;
      }
      v10 = v9;
      v11 = *((_QWORD *)&_xmm + 1);
      v7 = CAcrylicSheet::AnimateRect(v4, &v12, v6, 0, (__int64)&v10);
      v3 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x51u);
        return v3;
      }
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&UdwmGlassSheetAnimation_Update,
        a3,
        1LL,
        (__int64)&v12);
  }
  return v3;
}
