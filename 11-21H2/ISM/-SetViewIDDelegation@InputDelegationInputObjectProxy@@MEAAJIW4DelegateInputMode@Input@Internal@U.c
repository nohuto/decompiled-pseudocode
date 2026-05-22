/*
 * XREFs of ?SetViewIDDelegation@InputDelegationInputObjectProxy@@MEAAJIW4DelegateInputMode@Input@Internal@UI@Windows@@@Z @ 0x1801288C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18000BFFC (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x18008BF88 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::SetViewIDDelegation(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        const char *a4)
{
  unsigned int v5; // ebx
  ForegroundManager *ForegroundManager; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = a2;
  if ( !*(_QWORD *)(a1 + 72) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      100LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\inputdelegation\\ser"
               "ver\\inputdelegationinputobjectproxy.cpp",
      a4);
  if ( (a3 & 0xE) != 0 && (a3 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 68) = a2;
  }
  else if ( !a2 )
  {
    v5 = *(_DWORD *)(a1 + 68);
  }
  ForegroundManager = ISMStatics::GetForegroundManager();
  ForegroundManager::SetInputDelegation(ForegroundManager, *(struct InputSite **)(a1 + 72), 0, (const char *)v5, a3);
  return 0LL;
}
