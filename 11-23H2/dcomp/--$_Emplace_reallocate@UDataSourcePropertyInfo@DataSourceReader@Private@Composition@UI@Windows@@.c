/*
 * XREFs of ??$_Emplace_reallocate@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@?$vector@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@V?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@std@@@std@@QEAAPEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@QEAU234567@$$QEAU234567@@Z @ 0x180184590
 * Callers:
 *     ?AddDataSourcePropertyId@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@IW4AnimationPropertyKind@2345@@Z @ 0x18018473C (-AddDataSourcePropertyId@DataSourceReader@Private@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@IW.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180042A28 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Uninitialized_move@PEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@V?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@std@@@std@@YAPEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@QEAU123456@0PEAU123456@AEAV?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@0@@Z @ 0x1801846A4 (--$_Uninitialized_move@PEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Window.c)
 *     ?_Change_array@?$vector@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@V?$allocator@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@@std@@@std@@AEAAXQEAUDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@@_K1@Z @ 0x180184AC8 (-_Change_array@-$vector@UDataSourcePropertyInfo@DataSourceReader@Private@Composition@UI@Windows@.c)
 */

unsigned __int64 __fastcall std::vector<Windows::UI::Composition::Private::DataSourceReader::DataSourcePropertyInfo>::_Emplace_reallocate<Windows::UI::Composition::Private::DataSourceReader::DataSourcePropertyInfo>(
        const char *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *(_QWORD *)a1;
  v6 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v9 = v6 + 1;
  v10 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  v15 = v13;
  v16 = v13;
  *(_QWORD *)v14 = *(_QWORD *)a3;
  v17 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)a3 = 0LL;
  *(_DWORD *)(v14 + 8) = v17;
  *(_DWORD *)(v14 + 12) = *(_DWORD *)(a3 + 12);
  *(_QWORD *)(a3 + 8) = 0LL;
  v18 = *((_QWORD *)a1 + 1);
  v19 = *(_QWORD *)a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<Windows::UI::Composition::Private::DataSourceReader::DataSourcePropertyInfo *>(
      v19,
      a2,
      v13);
    v18 = *((_QWORD *)a1 + 1);
    v16 = v14 + 16;
    v19 = a2;
  }
  std::_Uninitialized_move<Windows::UI::Composition::Private::DataSourceReader::DataSourcePropertyInfo *>(v19, v18, v16);
  std::vector<Windows::UI::Composition::Private::DataSourceReader::DataSourcePropertyInfo>::_Change_array(
    a1,
    v15,
    v9,
    v3);
  return v14;
}
