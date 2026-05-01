/*
 * XREFs of ?ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x18012FC60
 * Callers:
 *     <none>
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C4EC4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18012FE34 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::ShouldCreateComponent(
        CImmersiveShellCreationBehavior *this,
        unsigned int a2,
        int *a3,
        struct _GUID *a4)
{
  int v4; // ebx
  __int64 v5; // rsi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  struct _GUID **v12; // rdi
  unsigned int v13; // eax
  unsigned __int8 (*v14)(void); // rax
  HKEY *v15; // rax
  BOOL v16; // edi
  int phkResult; // [rsp+20h] [rbp-1A8h]
  HKEY hKey[2]; // [rsp+30h] [rbp-198h] BYREF
  OLECHAR sz[40]; // [rsp+40h] [rbp-188h] BYREF
  WCHAR SubKey[128]; // [rsp+90h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v4 = 0;
  v5 = a2;
  *a3 = 0;
  *a4 = 0LL;
  *(_OWORD *)hKey = 0LL;
  if ( !*((_DWORD *)this + 8) )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 8, GetCurrentThreadId(), 0);
  if ( *((_DWORD *)this + 8) != GetCurrentThreadId() )
  {
    v9 = -2147417842;
    v10 = 903LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)v9,
      phkResult);
    return v9;
  }
  if ( (unsigned int)v5 >= 0x92 )
  {
    v9 = -2147483637;
    v10 = 904LL;
    goto LABEL_5;
  }
  v12 = (struct _GUID **)(&off_1807BAE60 + 4 * v5);
  *a4 = **v12;
  v13 = *((_DWORD *)v12 + 3);
  if ( v12[2] )
    v13 = ((__int64 (__fastcall *)(_QWORD))v12[2])(v13);
  if ( (v13 & s_exclusionsInEffect) == 0 )
  {
    v14 = (unsigned __int8 (*)(void))v12[3];
    if ( !v14 || v14() )
    {
      if ( ((_BYTE)v12[1] & 1) != 0 )
      {
        StringFromGUID2(*v12, sz, 39);
        StringCchPrintfW(SubKey, 0x80uLL, L"SOFTWARE\\Classes\\CLSID\\%s", sz);
        hKey[0] = 0LL;
        v15 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(hKey);
        v16 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 1u, v15) == 0;
        if ( hKey[0] )
          RegCloseKey(hKey[0]);
        v4 = v16;
      }
      else
      {
        v4 = 1;
      }
    }
  }
  *a3 = v4;
  return 0LL;
}
