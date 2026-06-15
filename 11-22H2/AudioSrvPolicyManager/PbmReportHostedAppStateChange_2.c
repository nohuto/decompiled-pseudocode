/*
 * XREFs of PbmReportHostedAppStateChange_2 @ 0x180031C80
 * Callers:
 *     <none>
 * Callees:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18000EBE0 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall PbmReportHostedAppStateChange_2(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        PickerHostContextManager **a5)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = PickerHostContextManager::OnHostedAppStateChanged(a2, a3, a1, a4, a5);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7E,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
