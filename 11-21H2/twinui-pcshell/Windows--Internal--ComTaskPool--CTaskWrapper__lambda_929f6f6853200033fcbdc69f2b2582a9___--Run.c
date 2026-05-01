/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_929f6f6853200033fcbdc69f2b2582a9___::Run @ 0x180338C10
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateNexusEnabledWnf@GamingOverlayExperienceManager@@AEAAX_N@Z @ 0x1800E2994 (-UpdateNexusEnabledWnf@GamingOverlayExperienceManager@@AEAAX_N@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_929f6f6853200033fcbdc69f2b2582a9___::Run(
        __int64 a1)
{
  GamingOverlayExperienceManager *v1; // rbx

  v1 = *(GamingOverlayExperienceManager **)(a1 + 16);
  GamingOverlayExperienceManager::UpdateNexusEnabledWnf(v1, 0);
  GamingOverlayExperienceManager::UpdateGamepadIntervalValues(v1);
}
