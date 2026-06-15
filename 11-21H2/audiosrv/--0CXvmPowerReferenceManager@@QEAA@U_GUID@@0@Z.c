/*
 * XREFs of ??0CXvmPowerReferenceManager@@QEAA@U_GUID@@0@Z @ 0x180103A40
 * Callers:
 *     ??$?0$$CBU_GUID@@$$CBU0@@?$_Ref_count_obj2@VCXvmPowerReferenceManager@@@std@@QEAA@$$QEBU_GUID@@0@Z @ 0x180103374 (--$-0$$CBU_GUID@@$$CBU0@@-$_Ref_count_obj2@VCXvmPowerReferenceManager@@@std@@QEAA@$$QEBU_GUID@@0.c)
 * Callees:
 *     _lambda_17850cba0e30ba9ebf8604b2ceae4101_::operator() @ 0x180103D14 (_lambda_17850cba0e30ba9ebf8604b2ceae4101_--operator().c)
 */

// Hidden C++ exception states: #wind=3
CXvmPowerReferenceManager *__fastcall CXvmPowerReferenceManager::CXvmPowerReferenceManager(
        char *pv,
        struct _GUID *a2,
        struct _GUID *a3)
{
  char *v7; // [rsp+38h] [rbp+10h] BYREF

  *(_OWORD *)pv = 0LL;
  *((_OWORD *)pv + 1) = 0LL;
  *((_DWORD *)pv + 8) = 0;
  _Mtx_init_in_situ((_Mtx_t)(pv + 40), 2);
  *((_QWORD *)pv + 15) = 0LL;
  *((_QWORD *)pv + 16) = 0LL;
  *((_QWORD *)pv + 17) = 0LL;
  *((struct _GUID *)pv + 1) = *a3;
  *(struct _GUID *)pv = *a2;
  v7 = pv;
  lambda_17850cba0e30ba9ebf8604b2ceae4101_::operator()(&v7);
  if ( *((_QWORD *)pv + 16) )
    *((_QWORD *)pv + 15) = CreateThreadpoolTimer(
                             (PTP_TIMER_CALLBACK)lambda_a5b20f628b6b681ff62fc21fdf557568_::_lambda_invoker_cdecl_,
                             pv,
                             0LL);
  return (CXvmPowerReferenceManager *)pv;
}
