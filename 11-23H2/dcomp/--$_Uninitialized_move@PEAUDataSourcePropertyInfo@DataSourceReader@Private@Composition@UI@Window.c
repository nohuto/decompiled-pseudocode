/*
 * XREFs of ??$_Uninitialized_move@PEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@V?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@std@@@std@@YAPEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@QEAU123456@0PEAU123456@AEAV?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@0@@Z @ 0x1801846A4
 * Callers:
 *     ??$_Emplace_reallocate@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@?$vector@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@V?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@std@@@std@@QEAAPEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@QEAU234567@$$QEAU234567@@Z @ 0x180184590 (--$_Emplace_reallocate@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@std@@@std@@YAXPEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@QEAU123456@AEAV?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@0@@Z @ 0x180122410 (--$_Destroy_range@V-$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@W.c)
 */

HSTRING *__fastcall std::_Uninitialized_move<Windows::UI::Composition::Private::DataSourceReader::DataSourcePropertyInfo *>(
        _DWORD *a1,
        _DWORD *a2,
        HSTRING *a3)
{
  _DWORD *v4; // r8
  char *v5; // r9
  int v6; // eax

  if ( a1 != a2 )
  {
    v4 = a1 + 3;
    v5 = (char *)((char *)a3 - (char *)a1);
    do
    {
      *a3 = *(HSTRING *)(v4 - 3);
      a3 += 2;
      v6 = *(v4 - 1);
      *(_QWORD *)(v4 - 3) = 0LL;
      *(_DWORD *)((char *)v4 + (_QWORD)v5 - 4) = v6;
      *(_DWORD *)&v5[(_QWORD)v4] = *v4;
      *(_QWORD *)(v4 - 1) = 0LL;
      v4 += 4;
    }
    while ( v4 - 3 != a2 );
  }
  std::_Destroy_range<std::allocator<Windows::UI::Composition::Private::DataSourceReader::DataSourcePropertyInfo>>(
    a3,
    a3);
  return a3;
}
