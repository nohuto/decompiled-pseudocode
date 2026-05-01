/*
 * XREFs of ?Advise@FocusHoldingTank@@QEAAXPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x180503954
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18003BB20 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     <none>
 */

void __fastcall FocusHoldingTank::Advise(
        FocusHoldingTank *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2)
{
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::ICortanaExperienceManager>::operator=(
    (__int64 *)this + 2,
    (__int64)a2);
}
