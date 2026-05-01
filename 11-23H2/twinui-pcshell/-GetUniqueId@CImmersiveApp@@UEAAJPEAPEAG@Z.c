/*
 * XREFs of ?GetUniqueId@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x1800414F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800C55FC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::GetUniqueId(CImmersiveApp *this, unsigned __int16 **a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 (__fastcall *v5)(char *, __int64 *); // rdi
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  unsigned __int16 *v9; // rax
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-30h]
  int v13; // [rsp+20h] [rbp-30h]
  unsigned __int16 *v14; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h]
  __int64 v16; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v18; // [rsp+80h] [rbp+30h] BYREF
  int v19; // [rsp+88h] [rbp+38h] BYREF
  PSRWLOCK v20; // [rsp+90h] [rbp+40h]

  *a2 = 0LL;
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v20 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v18 = 0LL;
  v5 = *(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 3) + 496LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  v6 = v5((char *)this + 24, &v18);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 1553LL;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 24LL))(v18, &v19);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      v13 = v19;
      v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
             &v14,
             L"%s+%u+%p",
             *((_QWORD *)this + 62),
             *((unsigned int *)this + 126));
      v7 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x618,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v8,
          v13);
      }
      else
      {
        v9 = v14;
        v14 = 0LL;
        v16 = 0LL;
        v15 = 0LL;
        *a2 = v9;
        v7 = 0;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v14);
      goto LABEL_6;
    }
    v11 = 1556LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)v6,
    v12);
LABEL_6:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v7;
}
