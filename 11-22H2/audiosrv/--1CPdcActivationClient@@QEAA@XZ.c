/*
 * XREFs of ??1CPdcActivationClient@@QEAA@XZ @ 0x180111A78
 * Callers:
 *     _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$0 @ 0x18007CDDC (_CPowerReferenceManager--CPowerReferenceManager_--_1_--dtor$0.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180119A6C (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CPdcActivationClient::~CPdcActivationClient(CPdcActivationClient *this)
{
  int v2; // eax
  void *v3; // rcx

  if ( *(_QWORD *)this )
  {
    v2 = Pdcv2ActivationClientUnregister() | 0x10000000;
    if ( v2 < 0 )
      AudSrvTraceLoggingErrorHelper("CPdcActivationClient::~CPdcActivationClient", 26, v2);
    *(_QWORD *)this = 0LL;
  }
  _Mtx_destroy_in_situ((CPdcActivationClient *)((char *)this + 32));
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 3) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
