/*
 * XREFs of ?GetUniqueId@BamoDataProviderPrincipal@@UEAAAEBU_LUID@@XZ @ 0x18002C120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct _LUID *__fastcall BamoDataProviderPrincipal::GetUniqueId(BamoDataProviderPrincipal *this)
{
  return (const struct _LUID *)((char *)this + 48);
}
