/*
 * XREFs of ?ReportPerf@MPCPerfCounter@@AEAAX_K@Z @ 0x1800CA424
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x1800C7C90 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$MPCPerfCounter_ReportPerf@AEAKAEAIAEAM@ISMTracing@@SAXAEAKAEAIAEAM@Z @ 0x1800CA168 (--$MPCPerfCounter_ReportPerf@AEAKAEAIAEAM@ISMTracing@@SAXAEAKAEAIAEAM@Z.c)
 */

void __fastcall MPCPerfCounter::ReportPerf(MPCPerfCounter *this, __int64 a2)
{
  __int64 v2; // r8
  float v5; // xmm1_4
  __int64 v6; // rax
  bool v7; // zf
  float v8; // xmm1_4

  v2 = *((_QWORD *)this + 5);
  if ( v2 < 0 )
  {
    v6 = *((_QWORD *)this + 5) & 1LL | (*((_QWORD *)this + 5) >> 1);
    v5 = (float)(int)v6 + (float)(int)v6;
  }
  else
  {
    v5 = (float)(int)v2;
  }
  v7 = *((_BYTE *)this + 4) == 0;
  v8 = v5 / *(float *)this;
  *((float *)this + 2) = v8;
  if ( !v7 )
    DbgPrint(
      "MPCPerfCounter::ReportPerf   deviceId=%d, providerType=%d, avgReportsPerSec=%d.%03d\n",
      *((_DWORD *)this + 3),
      *((_DWORD *)this + 4),
      (int)v8,
      (int)(float)((float)(v8 * 1000.0) - (float)(1000 * (int)v8)));
  ISMTracing::MPCPerfCounter_ReportPerf<unsigned long &,unsigned int &,float &>(
    (unsigned int *)this + 3,
    (unsigned int *)this + 4,
    (float *)this + 2);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = a2;
}
