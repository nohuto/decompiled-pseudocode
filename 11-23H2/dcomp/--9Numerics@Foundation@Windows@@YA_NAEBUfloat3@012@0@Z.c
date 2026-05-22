/*
 * XREFs of ??9Numerics@Foundation@Windows@@YA_NAEBUfloat3@012@0@Z @ 0x180011FB4
 * Callers:
 *     ?NotifyFromAnchor_Updated_Callback@CompositionIsland@Composition@UI@Windows@@IEAAXMUfloat3@Numerics@Foundation@4@@Z @ 0x18006AFA8 (-NotifyFromAnchor_Updated_Callback@CompositionIsland@Composition@UI@Windows@@IEAAXMUfloat3@Numer.c)
 *     ?NotifyFromEnvironment_ChangeValues_Callback@CompositionIsland@Composition@UI@Windows@@QEAAXUfloat3@Numerics@Foundation@4@MM@Z @ 0x180112E48 (-NotifyFromEnvironment_ChangeValues_Callback@CompositionIsland@Composition@UI@Windows@@QEAAXUflo.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Foundation::Numerics::operator!=(float *a1, float *a2)
{
  return *a1 != *a2 || a1[1] != a2[1] || a1[2] != a2[2];
}
