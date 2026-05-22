/*
 * XREFs of ?IsAnimationNameValid@@YA_NPEAUHSTRING__@@_N@Z @ 0x18006F4E8
 * Callers:
 *     ??$InsertProperty@UPropertySetVector3Value@@UD2DVector3@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DVector3@@@Z @ 0x180004A7C (--$InsertProperty@UPropertySetVector3Value@@UD2DVector3@@@CompositionPropertySet@Composition@UI@.c)
 *     ??$InsertProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DVector4@@@Z @ 0x18000A55C (--$InsertProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composition@UI@.c)
 *     ??$InsertProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DVector2@@@Z @ 0x18000FA50 (--$InsertProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composition@UI@.c)
 *     ??$InsertProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DMatrix@@@Z @ 0x18006EE54 (--$InsertProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI.c)
 *     ??$InsertProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBU_D3DCOLORVALUE@@@Z @ 0x18006F034 (--$InsertProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@U.c)
 *     ??$InsertProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEB_N@Z @ 0x180092B28 (--$InsertProperty@UPropertySetBooleanValue@@_N@CompositionPropertySet@Composition@UI@Windows@@AE.c)
 *     ??$InsertProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DQuaternion@@@Z @ 0x180147C80 (--$InsertProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CompositionPropertySet@Compositi.c)
 * Callees:
 *     <none>
 */

char __fastcall IsAnimationNameValid(HSTRING a1, char a2)
{
  const unsigned __int16 *StringRawBuffer; // rax

  StringRawBuffer = 0LL;
  if ( a1 )
    StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  return IsAnimationNameValid(StringRawBuffer, a2);
}
