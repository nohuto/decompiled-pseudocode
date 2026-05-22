/*
 * XREFs of ?SetProcessIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x180142F90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x180026B3C (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800A3070 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::SetProcessIDDelegation(
        __int64 a1,
        int a2,
        unsigned int a3,
        const char *a4)
{
  int v5; // ebx
  ForegroundManager *ForegroundManager; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = a2;
  if ( !*(_QWORD *)(a1 + 72) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x7C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\inputdelegation\\server\\"
           "inputdelegationinputobjectproxy.cpp",
      a4);
  if ( (a3 & 0xE) != 0 && (a3 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 64) = a2;
  }
  else if ( !a2 )
  {
    v5 = *(_DWORD *)(a1 + 64);
  }
  ForegroundManager = ISMStatics::GetForegroundManager();
  ForegroundManager::SetInputDelegation(ForegroundManager, *(struct InputSite **)(a1 + 72), v5, 0LL, a3);
  return 0LL;
}
