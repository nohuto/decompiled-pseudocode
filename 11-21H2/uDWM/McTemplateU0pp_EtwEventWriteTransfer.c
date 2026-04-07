/*
 * XREFs of McTemplateU0pp_EtwEventWriteTransfer @ 0x180048B68
 * Callers:
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18004873C (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800488C8 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x1800EA26C (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800EF294 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180034B10 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 McTemplateU0pp_EtwEventWriteTransfer(__int64 a1, __int64 a2, ...)
{
  _QWORD v3[3]; // [rsp+30h] [rbp-48h] BYREF
  int v4; // [rsp+48h] [rbp-30h]
  int v5; // [rsp+4Ch] [rbp-2Ch]
  va_list v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+5Ch] [rbp-1Ch]
  va_list va; // [rsp+90h] [rbp+18h]
  __int64 v10; // [rsp+90h] [rbp+18h] BYREF
  va_list va1; // [rsp+98h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy((va_list)&v3[2], va);
  v5 = 0;
  v4 = 8;
  va_copy(v6, va1);
  v8 = 0;
  v7 = 8;
  return McGenEventWrite_EtwEventWriteTransfer(Microsoft_Windows_Dwm_Udwm_Provider_Context, a2, v10, 3, (__int64)v3);
}
