/*
 * XREFs of ?StopMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ @ 0x1801E3C00
 * Callers:
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x18006C810 (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x18012D02C (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ?Close@CJumpViewExperienceManager@@UEAAJXZ @ 0x1801AC640 (-Close@CJumpViewExperienceManager@@UEAAJXZ.c)
 *     ?OnViewCloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180448EF0 (-OnViewCloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180448FC0 (-OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CJumpViewExperienceManager::StopMouseHoverHook(CJumpViewExperienceManager *this)
{
  HHOOK v2; // rcx
  _BYTE v3[36]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (HHOOK)*((_QWORD *)this + 64);
  if ( v2 )
    UnhookWindowsHookEx(v2);
  *(_WORD *)v3 = 0;
  *((_QWORD *)this + 64) = 0LL;
  memset(&v3[4], 0, 32);
  g_hoverState = *(_OWORD *)v3;
  xmmword_18098D5D0 = *(_OWORD *)&v3[16];
  unk_18098D5E0 = 0u;
}
