/*
 * XREFs of ?ActivateInstance@?$SimpleActivationFactory@VCustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1803163C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::SimpleActivationFactory<Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository,0>::ActivateInstance(
        __int64 a1,
        __int64 *a2)
{
  return Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository,IInspectable,>(a2);
}
