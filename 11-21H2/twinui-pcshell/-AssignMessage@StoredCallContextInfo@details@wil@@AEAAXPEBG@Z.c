/*
 * XREFs of ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x18022B030
 * Callers:
 *     _lambda_31520e38682400c193ecfa4924368fd9_::operator() @ 0x180074E7C (_lambda_31520e38682400c193ecfa4924368fd9_--operator().c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18013751C (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAA.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180137594 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z @ 0x18022F15C (-SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z.c)
 * Callees:
 *     memcpy_s_1 @ 0x18022B0C0 (memcpy_s_1.c)
 */

void __fastcall wil::details::StoredCallContextInfo::AssignMessage(
        wil::details::StoredCallContextInfo *this,
        const unsigned __int16 *a2)
{
  __int64 v2; // rax
  __int64 v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // rax

  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  if ( v2 )
  {
    v5 = 2 * v2 + 2;
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 0, v5);
    *((_QWORD *)this + 2) = v7;
    if ( v7 )
    {
      *((_BYTE *)this + 24) = 1;
      memcpy_s_1(v7, v5, a2, v5);
    }
  }
}
