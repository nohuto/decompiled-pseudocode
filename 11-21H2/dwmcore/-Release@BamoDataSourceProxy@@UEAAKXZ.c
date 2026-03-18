/*
 * XREFs of ?Release@BamoDataSourceProxy@@UEAAKXZ @ 0x1801BCF10
 * Callers:
 *     ?Release@BamoDataSourceProxy@@W7EAAKXZ @ 0x180106D90 (-Release@BamoDataSourceProxy@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataSourceProxy::Release(BamoDataSourceProxy *this)
{
  return (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 8LL))((char *)this + 16);
}
