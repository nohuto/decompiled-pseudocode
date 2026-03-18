/*
 * XREFs of ?EnsureDxDisplayModeChangedEvent@CRenderTargetManager@@AEAAJXZ @ 0x18002A648
 * Callers:
 *     ?PostPresent@CRenderTargetManager@@QEAA_N_N@Z @ 0x18007E068 (-PostPresent@CRenderTargetManager@@QEAA_N_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRenderTargetManager::EnsureDxDisplayModeChangedEvent(CRenderTargetManager *this)
{
  signed int v1; // ebx
  char *v2; // rdi
  HANDLE v3; // rax
  signed int LastError; // eax
  unsigned int v6; // ecx
  _SECURITY_ATTRIBUTES EventAttributes; // [rsp+30h] [rbp-28h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (char *)this + 528;
  SecurityDescriptor = 0LL;
  if ( ((*((_QWORD *)this + 66) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    EventAttributes.lpSecurityDescriptor = 0LL;
    EventAttributes.bInheritHandle = 0;
    EventAttributes.nLength = 24;
    SetLastError(0);
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(L"D:(A;;0x00100002;;;WD)", 1u, &SecurityDescriptor, 0LL) )
    {
      v3 = CreateEventW(&EventAttributes, 1, 0, L"DWM_DX_FULLSCREEN_TRANSITION_EVENT");
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v2,
        v3);
    }
    else
    {
      LastError = GetLastError();
      v1 = LastError;
      if ( LastError > 0 )
        v1 = (unsigned __int16)LastError | 0x80070000;
      if ( v1 >= 0 )
        v1 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v1, 0x1Cu, 0LL);
    }
    if ( SecurityDescriptor )
      LocalFree(SecurityDescriptor);
  }
  return (unsigned int)v1;
}
