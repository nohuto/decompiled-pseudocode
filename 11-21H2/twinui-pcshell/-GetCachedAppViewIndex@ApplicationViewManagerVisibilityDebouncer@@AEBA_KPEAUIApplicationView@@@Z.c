/*
 * XREFs of ?GetCachedAppViewIndex@ApplicationViewManagerVisibilityDebouncer@@AEBA_KPEAUIApplicationView@@@Z @ 0x1800EAB90
 * Callers:
 *     ?ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z @ 0x1800EAB10 (-ClearCachedAppView@ApplicationViewManagerVisibilityDebouncer@@AEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::GetCachedAppViewIndex(
        ApplicationViewManagerVisibilityDebouncer *this,
        struct IUnknown *a2)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  int v6; // ebx
  __int64 result; // rax
  struct IUnknown *v8; // [rsp+70h] [rbp+30h] BYREF
  __int64 v9; // [rsp+80h] [rbp+40h] BYREF
  __int64 v10; // [rsp+88h] [rbp+48h] BYREF

  v10 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( *((_QWORD *)this + 25) )
  {
    while ( 1 )
    {
      v9 = 0LL;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
      v8 = *(struct IUnknown **)(*((_QWORD *)this + 24) + 8 * v5);
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
      v6 = SHIsSameObject(v8, a2) == 0;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v8);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v9);
      if ( !v6 )
        break;
      if ( (unsigned __int64)++v5 >= *((_QWORD *)this + 25) )
        goto LABEL_2;
    }
    v4 = v5;
  }
  else
  {
LABEL_2:
    v6 = -2147319765;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v10);
  result = -1LL;
  if ( v6 >= 0 )
    return v4;
  return result;
}
