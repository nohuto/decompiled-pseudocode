/*
 * XREFs of ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@N@Z @ 0x1800AF448
 * Callers:
 *     ?GetVector3AsString@ISMTracing@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAUVector3@Numerics@Foundation@Windows@@@Z @ 0x1800AD2A0 (-GetVector3AsString@ISMTracing@@SA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 * Callees:
 *     sprintf_s @ 0x18004B100 (sprintf_s.c)
 *     _scprintf @ 0x18004B158 (_scprintf.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@_KD@Z @ 0x1800ACFF0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@_KD@Z.c)
 */

char *__fastcall std::to_string(char *a1, double a2)
{
  size_t v3; // rdi
  char *v4; // rcx

  v3 = scprintf("%f", a2);
  std::string::string(a1, v3);
  v4 = a1;
  if ( *((_QWORD *)a1 + 3) >= 0x10uLL )
    v4 = *(char **)a1;
  sprintf_s(v4, v3 + 1, "%f", a2);
  return a1;
}
