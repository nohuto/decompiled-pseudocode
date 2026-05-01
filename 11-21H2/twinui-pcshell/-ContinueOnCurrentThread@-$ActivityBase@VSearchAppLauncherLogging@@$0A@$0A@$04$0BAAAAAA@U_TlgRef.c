/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18019E800
 * Callers:
 *     _lambda_6e59436657fdc730ce46c13d2be9f9a3_::operator() @ 0x18019C240 (_lambda_6e59436657fdc730ce46c13d2be9f9a3_--operator().c)
 *     _lambda_b9b326c89cb8166a780ad4ef449f4933_::operator() @ 0x18019C64C (_lambda_b9b326c89cb8166a780ad4ef449f4933_--operator().c)
 *     _lambda_e09b1650d30d60aee5c16df43a188659_::operator() @ 0x18019CD40 (_lambda_e09b1650d30d60aee5c16df43a188659_--operator().c)
 * Callees:
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180137594 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 */

// Hidden C++ exception states: #wind=1
wil::ActivityThreadWatcher *__fastcall wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        struct wil::details::IFailureCallback *a1,
        wil::ActivityThreadWatcher *this)
{
  _DWORD *v3; // r8

  v3 = (_DWORD *)*((_QWORD *)a1 + 6);
  if ( *v3 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      this,
      a1,
      (const struct wil::details::StoredCallContextInfo *)(v3 + 10));
  }
  else
  {
    *(_OWORD *)this = 0LL;
    *((_OWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    *((_QWORD *)this + 8) = 0LL;
  }
  return this;
}
