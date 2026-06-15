/*
 * XREFs of ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180059350
 * Callers:
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180047DB8 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudioDGGetStartupStatus_RPC_WithWait@@YAJPEAX@Z @ 0x1800593AC (-AudioDGGetStartupStatus_RPC_WithWait@@YAJPEAX@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180059990 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?WpRpcBindingFree@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180065978 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-WpRpcBindingFree@details@wil@@YAX0@ZU-$i.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::CheckADGStartupStatus(HANDLE *this)
{
  int ADGProcessBindingHandle; // eax
  signed int v3; // ebx
  DWORD v5; // eax
  signed int LastError; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD ExitCode; // [rsp+38h] [rbp+10h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+40h] [rbp+18h] BYREF

  Binding = 0LL;
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&Binding);
  v3 = ADGProcessBindingHandle;
  if ( ADGProcessBindingHandle < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
      (const char *)(unsigned int)ADGProcessBindingHandle);
  }
  else
  {
    while ( 1 )
    {
      v3 = AudioDGGetStartupStatus_RPC_WithWait(Binding);
      if ( v3 >= 0 )
        break;
      v5 = WaitForSingleObjectEx(this[11], 0, 0);
      if ( v5 != 258 )
      {
        if ( !v5 )
        {
          if ( GetExitCodeProcess(this[11], &ExitCode) )
            LastError = ExitCode;
          else
            LastError = GetLastError();
          if ( LastError != 259 )
          {
            if ( LastError > 0 )
              v3 = (unsigned __int16)LastError | 0x80070000;
            else
              v3 = LastError;
          }
        }
        break;
      }
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::WpRpcBindingFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&Binding);
  return (unsigned int)v3;
}
