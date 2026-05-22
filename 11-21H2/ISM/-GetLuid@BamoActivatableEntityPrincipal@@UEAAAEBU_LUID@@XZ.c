/*
 * XREFs of ?GetLuid@BamoActivatableEntityPrincipal@@UEAAAEBU_LUID@@XZ @ 0x180021C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct _LUID *__fastcall BamoActivatableEntityPrincipal::GetLuid(BamoActivatableEntityPrincipal *this)
{
  return (const struct _LUID *)((char *)this + 64);
}
