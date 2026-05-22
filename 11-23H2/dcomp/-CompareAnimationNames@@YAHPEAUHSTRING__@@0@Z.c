/*
 * XREFs of ?CompareAnimationNames@@YAHPEAUHSTRING__@@0@Z @ 0x18006F204
 * Callers:
 *     ??$InsertProperty@UPropertySetScalarValue@@M@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBM@Z @ 0x18004C620 (--$InsertProperty@UPropertySetScalarValue@@M@CompositionPropertySet@Composition@UI@Windows@@AEAA.c)
 *     ?GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@Z @ 0x18006EDD4 (-GetPropertyIdFromName@CompositionPropertySet@Composition@UI@Windows@@AEAA_NPEAUHSTRING__@@PEAI@.c)
 *     ??$InsertProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DMatrix@@@Z @ 0x18006EE54 (--$InsertProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI.c)
 *     ??$InsertProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBU_D3DCOLORVALUE@@@Z @ 0x18006F034 (--$InsertProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@U.c)
 *     ?AddDataSourcePropertyId@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@IW4AnimationPropertyKind@2345@@Z @ 0x18018473C (-AddDataSourcePropertyId@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@IW.c)
 *     ?GetAnimatablePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@345@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180184970 (-GetAnimatablePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareAnimationNames(HSTRING a1, HSTRING a2)
{
  PCWSTR StringRawBuffer; // rbx
  PCWSTR v4; // rax
  char v5; // dl
  unsigned __int8 v6; // cl
  int v7; // ecx
  __int64 result; // rax

  if ( a1 )
    StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  else
    StringRawBuffer = 0LL;
  if ( a2 )
    v4 = WindowsGetStringRawBuffer(a2, 0LL);
  else
    v4 = 0LL;
  if ( !StringRawBuffer || (v5 = 0, !*StringRawBuffer) )
    v5 = 1;
  if ( !v4 || (v6 = 0, !*v4) )
    v6 = 1;
  if ( v5 )
    return (unsigned int)v6 - 1;
  if ( v6 )
    return 1LL;
  v7 = _wcsicmp_l(StringRawBuffer, v4, 0LL);
  result = 0xFFFFFFFFLL;
  if ( v7 >= -1 )
  {
    result = (unsigned int)v7;
    if ( v7 > 1 )
      return 1LL;
  }
  return result;
}
