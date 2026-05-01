/*
 * XREFs of ??$make_unique_nothrow@VFocusHoldingTank@@$$V@wil@@YA?AV?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@XZ @ 0x180504580
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18003BB20 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x1805035C8 (--0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
FocusHoldingTank **__fastcall wil::make_unique_nothrow<FocusHoldingTank,>(FocusHoldingTank **a1)
{
  FocusHoldingTank *v2; // rbx
  void *v3; // rax

  v2 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v2 = FocusHoldingTank::FocusHoldingTank((LONG_PTR)v3, 0LL);
  *a1 = v2;
  return a1;
}
