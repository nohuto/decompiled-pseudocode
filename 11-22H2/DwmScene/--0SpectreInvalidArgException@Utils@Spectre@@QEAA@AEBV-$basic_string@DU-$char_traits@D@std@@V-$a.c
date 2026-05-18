/*
 * XREFs of ??0SpectreInvalidArgException@Utils@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001E3A4
 * Callers:
 *     ??$AddCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneData@112@XZ @ 0x18002DBBC (--$AddCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneDat.c)
 *     ??$GetCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneData@112@XZ @ 0x18002DF5C (--$GetCustomData@UEngineSceneData@Engine@2Spectre@@@Scene@Engine@Spectre@@QEAAAEAUEngineSceneDat.c)
 *     ??$AddCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180061D78 (--$AddCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 *     ??$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUViewerSceneData@ViewerEngine@12@XZ @ 0x180062848 (--$GetCustomData@UViewerSceneData@ViewerEngine@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAAEAUVi.c)
 *     ?GetDomain@IConfigurationManager@Utils@Spectre@@UEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x1800DBD60 (-GetDomain@IConfigurationManager@Utils@Spectre@@UEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V.c)
 * Callees:
 *     ??0SpectreException@Utils@Spectre@@QEAA@JAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001C3DC (--0SpectreException@Utils@Spectre@@QEAA@JAEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 */

_QWORD *__fastcall Spectre::Utils::SpectreInvalidArgException::SpectreInvalidArgException(_QWORD *a1, const char *a2)
{
  Spectre::Utils::SpectreException::SpectreException((__int64)a1, -2147024809, a2, 0);
  *a1 = &Spectre::Utils::SpectreInvalidArgException::`vftable';
  return a1;
}
