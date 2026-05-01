/*
 * XREFs of SystemSettings::Keyboard::LoadPolicy @ 0x1800A2C9C
 * Callers:
 *     ??0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ @ 0x1800A78F0 (--0TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAA@XZ.c)
 *     ?UpdateOrganizationSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXXZ @ 0x18051BB78 (-UpdateOrganizationSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@QEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 SystemSettings::Keyboard::LoadPolicy()
{
  unsigned int v0; // ebx
  int Policy; // eax
  __int64 v2; // rcx
  int v4[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v7 = 0LL;
  v4[0] = 1;
  v4[1] = 2;
  v0 = -1;
  Policy = PolicyManager_GetPolicy(L"TextInput", L"EnableTouchKeyboardAutoInvokeInDesktopMode", v4, &v7);
  if ( Policy < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9A,
      (unsigned int)"shellcommon\\internal\\shell\\inc\\TouchKeyboardTapInvokeSetting.h",
      (const char *)(unsigned int)Policy,
      v4[0]);
    v2 = v7;
  }
  else
  {
    v2 = v7;
    if ( *(_DWORD *)(v7 + 4) )
    {
      v0 = 0;
      if ( *(_DWORD *)(v7 + 16) )
      {
        LOBYTE(v0) = *(_DWORD *)(v7 + 16) == 2;
        ++v0;
      }
    }
  }
  if ( v2 )
    PolicyManager_FreeGetPolicyData();
  return v0;
}
