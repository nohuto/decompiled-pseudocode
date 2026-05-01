/*
 * XREFs of CCrashDetector::StartMonitoringThreadOfWindow__lambda_687e5053c587afc072c764cc8235e711___ @ 0x1803FC0EC
 * Callers:
 *     _lambda_b1ccbe0050df59b1c7585372b6aa23ae_::operator() @ 0x1803FC320 (_lambda_b1ccbe0050df59b1c7585372b6aa23ae_--operator().c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CCrashDetector::StartMonitoringThreadOfWindow__lambda_687e5053c587afc072c764cc8235e711___(
        PVOID pv,
        HWND hWnd,
        _QWORD *a3)
{
  struct CCrashDetector::CHandler *v6; // rax
  struct CCrashDetector::CHandler *v7; // r8

  v6 = (struct CCrashDetector::CHandler *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = off_1806438C8;
    *((_QWORD *)v6 + 1) = *a3;
  }
  else
  {
    v7 = 0LL;
  }
  return CCrashDetector::_StartMonitoringThreadOfWindow(pv, hWnd, v7);
}
