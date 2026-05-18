/*
 * XREFs of ??$?0AEAY0BE@$$CBDV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$0A@@?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@QEAA@AEAY0BE@$$CBD$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18002D5F8
 * Callers:
 *     ?SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ @ 0x18003670C (-SendEngineInitializedTelemetry@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

_QWORD *__fastcall std::pair<std::string const,std::string>::pair<std::string const,std::string>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax

  std::string::string(a1, (__int64)"Integer Result Code");
  a1[4] = 0LL;
  a1[6] = 0LL;
  a1[7] = 0LL;
  *((_OWORD *)a1 + 2) = *(_OWORD *)a3;
  *((_OWORD *)a1 + 3) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_BYTE *)a3 = 0;
  result = a1;
  *(_QWORD *)(a3 + 24) = 15LL;
  return result;
}
