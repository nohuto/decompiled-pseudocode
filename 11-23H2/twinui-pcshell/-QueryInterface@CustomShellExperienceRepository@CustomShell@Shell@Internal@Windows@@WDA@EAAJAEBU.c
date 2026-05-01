/*
 * XREFs of ?QueryInterface@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180293590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::QueryInterface(
           (Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *)(a1 - 48),
           a2,
           a3);
}
