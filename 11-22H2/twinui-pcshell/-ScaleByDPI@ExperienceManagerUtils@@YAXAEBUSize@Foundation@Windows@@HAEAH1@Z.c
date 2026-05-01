/*
 * XREFs of ?ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z @ 0x180749334
 * Callers:
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180447B3C (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExperienceManagerUtils::ScaleByDPI(
        ExperienceManagerUtils *this,
        const struct Windows::Foundation::Size *a2,
        int *a3,
        int *a4)
{
  int v6; // esi

  v6 = (int)a2;
  *a3 = MulDiv((int)*(float *)this, (int)a2, 96);
  *a4 = MulDiv((int)*((float *)this + 1), v6, 96);
}
