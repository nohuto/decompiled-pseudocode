/*
 * XREFs of ?RaiseRoOriginateOnWilExceptions@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18000E8D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RaiseRoOriginateOnWilExceptions(wil::details *this, const struct wil::FailureInfo *a2)
{
  bool v2; // bl
  FARPROC ProcAddress; // rax
  __int64 v5; // rax
  BSTR v6[2]; // [rsp+30h] [rbp-10h] BYREF
  HMODULE phModule; // [rsp+60h] [rbp+20h] BYREF
  __int64 *v8; // [rsp+68h] [rbp+28h] BYREF
  BSTR bstrString; // [rsp+70h] [rbp+30h] BYREF
  BSTR v10; // [rsp+78h] [rbp+38h] BYREF

  v2 = 1;
  if ( *(_DWORD *)this <= 1u )
  {
    v8 = 0LL;
    if ( (unsigned int)GetRestrictedErrorInfo(&v8, a2) )
      goto LABEL_3;
    LODWORD(phModule) = *((_DWORD *)this + 2);
    v5 = *v8;
    bstrString = 0LL;
    v10 = 0LL;
    v6[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, BSTR *, HMODULE *, BSTR *, BSTR *))(v5 + 24))(
           v8,
           v6,
           &phModule,
           &v10,
           &bstrString) >= 0 )
      v2 = *((_DWORD *)this + 2) != (_DWORD)phModule;
    if ( bstrString )
      SysFreeString(bstrString);
    if ( v10 )
      SysFreeString(v10);
    if ( v6[0] )
      SysFreeString(v6[0]);
    if ( v2 )
    {
LABEL_3:
      phModule = 0LL;
      if ( GetModuleHandleExW(0, L"api-ms-win-core-winrt-error-l1-1-1.dll", &phModule) )
      {
        ProcAddress = GetProcAddress(phModule, "RoOriginateError");
        if ( ProcAddress )
          ((void (__fastcall *)(_QWORD, _QWORD))ProcAddress)(*((unsigned int *)this + 2), 0LL);
      }
      if ( phModule )
        FreeLibrary(phModule);
    }
    else
    {
      if ( !v8 )
        return;
      SetRestrictedErrorInfo();
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64 *))(*v8 + 16))(v8);
  }
}
