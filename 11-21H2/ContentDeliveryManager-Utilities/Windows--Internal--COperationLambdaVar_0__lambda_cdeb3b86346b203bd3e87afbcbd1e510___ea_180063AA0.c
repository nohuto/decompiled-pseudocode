/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_cdeb3b86346b203bd3e87afbcbd1e510__Windows::Internal::CNoResult_::Run @ 0x180063AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@W4EventNotificationType@2@@Z @ 0x180061BA0 (-ProcessCreativeEvent@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEA.c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_cdeb3b86346b203bd3e87afbcbd1e510__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  int v3; // ebx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  if ( a3 >= 0 )
    v3 = *(_DWORD *)(a1 + 112);
  if ( a2 == 1 && v3 >= 0 )
  {
    v4 = ContentManagement::ContentManagementService::ProcessCreativeEvent(
           *(_QWORD *)(a1 + 8) + 48LL,
           *(_DWORD *)(a1 + 24),
           *(HSTRING *)(a1 + 32),
           *(HSTRING *)(a1 + 48),
           *(HSTRING *)(a1 + 64),
           *(_QWORD *)(a1 + 80),
           *(_QWORD *)(a1 + 96),
           1);
    v3 = v4;
    if ( v4 >= 0 )
      return 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x173,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v4);
  }
  return (unsigned int)v3;
}
