/*
 * XREFs of ??$_Destroy_range@V?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@std@@@std@@YAXPEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@QEAU123456@AEAV?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@0@@Z @ 0x180122410
 * Callers:
 *     ??_EDataSourceReader@Private@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180123F70 (--_EDataSourceReader@Private@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??$_Uninitialized_move@PEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@V?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@std@@@std@@YAPEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@QEAU123456@0PEAU123456@AEAV?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@0@@Z @ 0x1801846A4 (--$_Uninitialized_move@PEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Window.c)
 *     ?_Change_array@?$vector@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@V?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@std@@@std@@AEAAXQEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@_K1@Z @ 0x180184AC8 (-_Change_array@-$vector@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall std::_Destroy_range<std::allocator<Windows::UI::Composition::Private::DataSourceReader::DataSourcePropertyInfo>>(
        HSTRING *a1,
        HSTRING *a2)
{
  HSTRING *v3; // rbx
  HRESULT result; // eax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = WindowsDeleteString(*v3);
      *v3 = 0LL;
      v3 += 2;
    }
    while ( v3 != a2 );
  }
  return result;
}
