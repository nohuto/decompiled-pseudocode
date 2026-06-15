/*
 * XREFs of ??$?4VCStreamConnectionManager@@@?$weak_ptr@VCStreamConnectionManager@@@std@@QEAAAEAV01@AEBV?$shared_ptr@VCStreamConnectionManager@@@1@@Z @ 0x18005A024
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180059A40 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18004B0A0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 *std::weak_ptr<CStreamConnectionManager>::operator=<CStreamConnectionManager>()
{
  std::_Ref_count_base *v0; // rax
  __int64 v1; // rcx
  std::_Ref_count_base *v2; // rdx
  std::_Ref_count_base *v3; // rcx

  v0 = qword_1801D01E8;
  v1 = 0LL;
  v2 = 0LL;
  if ( qword_1801D01E8 )
  {
    v1 = g_streamMonitorManager;
    _InterlockedIncrement((volatile signed __int32 *)qword_1801D01E8 + 3);
    v2 = v0;
  }
  g_weakStreamMonitorManager = v1;
  v3 = qword_1801D01F8;
  qword_1801D01F8 = v2;
  if ( v3 )
    std::_Ref_count_base::_Decwref(v3);
  return &g_weakStreamMonitorManager;
}
