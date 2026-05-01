/*
 * XREFs of ??B?$ComPtr@UICortanaExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x1801983E0
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18003BB20 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?Prelaunch@XamlLauncher@@UEAAJXZ @ 0x1801982C0 (-Prelaunch@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::ICortanaExperienceManager>::operator int Microsoft::WRL::Details::BoolStruct::*(
        _QWORD *a1)
{
  return (unsigned int)(*a1 != 0LL) - 1;
}
