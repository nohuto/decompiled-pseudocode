/*
 * XREFs of ?_Change_array@?$vector@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@V?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@std@@@std@@AEAAXQEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@_K1@Z @ 0x180184AC8
 * Callers:
 *     ??$_Emplace_reallocate@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@?$vector@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@V?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@std@@@std@@QEAAPEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@QEAU234567@$$QEAU234567@@Z @ 0x180184590 (--$_Emplace_reallocate@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@std@@@std@@YAXPEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@QEAU123456@AEAV?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@0@@Z @ 0x180122410 (--$_Destroy_range@V-$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@W.c)
 */

void __fastcall std::vector<Windows::UI::Composition::Private::DataSourceReader::DataSourcePropertyInfo>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  HSTRING *v6; // rcx

  v6 = *(HSTRING **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Windows::UI::Composition::Private::DataSourceReader::DataSourcePropertyInfo>>(
      v6,
      *(HSTRING **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
