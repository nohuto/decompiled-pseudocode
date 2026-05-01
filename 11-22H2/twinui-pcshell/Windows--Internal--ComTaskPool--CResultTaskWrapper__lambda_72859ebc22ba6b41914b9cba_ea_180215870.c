/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___::Run @ 0x180215870
 * Callers:
 *     <none>
 * Callees:
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801D8F2C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     _lambda_7770875614ee63995071a34c12ae761b_::operator() @ 0x1802153A8 (_lambda_7770875614ee63995071a34c12ae761b_--operator().c)
 */

// Hidden C++ exception states: #wind=1
int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  _BYTE v5[88]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 16),
    (wil::ActivityThreadWatcher *)v5);
  v2 = lambda_7770875614ee63995071a34c12ae761b_::operator()(*(HSTRING ***)(a1 + 336));
  v3 = v2;
  if ( v2 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A9,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v2);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v5);
  result = *(int **)(a1 + 344);
  *result = v3;
  return result;
}
