/*
 * XREFs of ?ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x1800CA6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008EA60 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800CA828 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::ShouldCreateComponent(
        CImmersiveShellCreationBehavior *this,
        unsigned int a2,
        int *a3,
        struct _GUID *a4)
{
  __int64 v6; // rsi
  int v8; // ebx
  unsigned __int8 (*v9)(void); // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  HKEY phkResult[2]; // [rsp+30h] [rbp-1A8h] BYREF
  OLECHAR sz[40]; // [rsp+40h] [rbp-198h] BYREF
  WCHAR SubKey[128]; // [rsp+90h] [rbp-148h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v6 = a2;
  v8 = 0;
  *a3 = 0;
  *(_OWORD *)phkResult = 0LL;
  *a4 = 0LL;
  if ( !*((_DWORD *)this + 8) )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 8, GetCurrentThreadId(), 0);
  if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
  {
    v11 = -2147417842;
    v12 = 747LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)v11);
    return v11;
  }
  if ( (unsigned int)v6 >= 0x8E )
  {
    v11 = -2147483637;
    v12 = 748LL;
    goto LABEL_14;
  }
  *a4 = *(struct _GUID *)*(&off_180628510 + 3 * v6);
  v9 = (unsigned __int8 (*)(void))*(&off_180628510 + 3 * v6 + 2);
  if ( !v9 || v9() )
  {
    if ( (*(_BYTE *)(&off_180628510 + 3 * v6 + 1) & 1) != 0 )
    {
      StringFromGUID2((const GUID *const)*(&off_180628510 + 3 * v6), sz, 39);
      StringCchPrintfW(SubKey, 0x80uLL, L"SOFTWARE\\Classes\\CLSID\\%s", sz);
      phkResult[0] = 0LL;
      LOBYTE(v8) = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 1u, phkResult) == 0;
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(phkResult);
    }
    else
    {
      v8 = 1;
    }
  }
  *a3 = v8;
  return 0LL;
}
