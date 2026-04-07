/*
 * XREFs of ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJAEBUtagRECT@@@Z @ 0x180100A64
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180104E2C (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetArrangementSheet@CWindowArrangementTransition@@AEAAPEAUIArrangementSheet@@XZ @ 0x180100A20 (-GetArrangementSheet@CWindowArrangementTransition@@AEAAPEAUIArrangementSheet@@XZ.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementContinue(
        CWindowArrangementTransition *this,
        const struct tagRECT *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  struct IArrangementSheet *ArrangementSheet; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct IArrangementSheet *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r8
  __m256i v16; // [rsp+38h] [rbp-59h] BYREF
  __m256i v17; // [rsp+68h] [rbp-29h] BYREF
  __int64 v18; // [rsp+88h] [rbp-9h]
  __int128 v19; // [rsp+98h] [rbp+7h] BYREF
  _BYTE v20[16]; // [rsp+A8h] [rbp+17h] BYREF

  v4 = 0;
  if ( *((_BYTE *)this + 24) )
  {
    v16.m256i_i32[0] = 5;
    v19 = (__int128)*a2;
    memset(&v16.m256i_u64[1], 0, 24);
    ArrangementSheet = CWindowArrangementTransition::GetArrangementSheet(this, (__int64)a2, a3, a4);
    (**(void (__fastcall ***)(struct IArrangementSheet *, __int128 *))ArrangementSheet)(ArrangementSheet, &v19);
    v10 = CWindowArrangementTransition::GetArrangementSheet(this, v7, v8, v9);
    v11 = *(_QWORD *)v10;
    v17 = v16;
    v18 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)_xmm, (__m128d)_xmm);
    v13 = (*(__int64 (__fastcall **)(struct IArrangementSheet *, __int128 *, __int64, __m256i *))(v11 + 24))(
            v10,
            &v19,
            v12,
            &v17);
    v4 = v13;
    if ( v13 >= 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (__int64)&UdwmGlassSheetAnimation_Update,
          v14,
          1,
          (__int64)v20);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xADu);
    }
  }
  return v4;
}
