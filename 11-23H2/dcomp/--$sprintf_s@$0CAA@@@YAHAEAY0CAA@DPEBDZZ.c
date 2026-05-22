/*
 * XREFs of ??$sprintf_s@$0CAA@@@YAHAEAY0CAA@DPEBDZZ @ 0x18018470C
 * Callers:
 *     ?AddDataSourcePropertyId@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@IW4AnimationPropertyKind@2345@@Z @ 0x18018473C (-AddDataSourcePropertyId@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@IW.c)
 * Callees:
 *     vsprintf_s @ 0x180096AD4 (vsprintf_s.c)
 */

int sprintf_s<512>(char *a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vsprintf_s(a1, 0x200uLL, a2, va);
}
