/*
 * XREFs of ?Clear@GpuProfileData@TelemetryTraceLogger@Utils@Spectre@@QEAAXXZ @ 0x180032AC8
 * Callers:
 *     ?SendPerformanceSummary@Engine@1Spectre@@IEAAXXZ @ 0x18003691C (-SendPerformanceSummary@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Utils::TelemetryTraceLogger::GpuProfileData::Clear(__int64 ***this)
{
  __int64 *j; // rax
  __int64 **v2; // rcx
  __int64 *i; // rcx
  __int64 *v4; // rdx

  j = **this;
  while ( !*((_BYTE *)j + 25) )
  {
    *((_DWORD *)j + 10) = -8388609;
    *(__int64 *)((char *)j + 44) = 2139095039LL;
    j[7] = 0LL;
    v2 = (__int64 **)j[2];
    if ( *((_BYTE *)v2 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v4 = *v2;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v4 + 25); v4 = (__int64 *)*v4 )
        j = v4;
    }
  }
}
