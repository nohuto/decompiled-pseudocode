/*
 * XREFs of ?GetUniqueId@BamoDataSourcePrincipal@@UEAAAEBU_LUID@@XZ @ 0x180023480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct _LUID *__fastcall BamoDataSourcePrincipal::GetUniqueId(BamoDataSourcePrincipal *this)
{
  return (const struct _LUID *)((char *)this + 48);
}
