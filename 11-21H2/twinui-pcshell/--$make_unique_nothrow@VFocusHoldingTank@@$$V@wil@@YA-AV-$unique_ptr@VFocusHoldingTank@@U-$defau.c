/*
 * XREFs of ??$make_unique_nothrow@VFocusHoldingTank@@$$V@wil@@YA?AV?$unique_ptr@VFocusHoldingTank@@U?$default_delete@VFocusHoldingTank@@@wistd@@@wistd@@XZ @ 0x18044E560
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180047F50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x18044D1D8 (--0FocusHoldingTank@@QEAA@PEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
FocusHoldingTank **__fastcall wil::make_unique_nothrow<FocusHoldingTank,>(FocusHoldingTank **a1)
{
  void *v2; // rcx
  FocusHoldingTank *v3; // rax

  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = 0LL;
  if ( v2 )
    v3 = FocusHoldingTank::FocusHoldingTank((LONG_PTR)v2, 0LL);
  *a1 = v3;
  return a1;
}
