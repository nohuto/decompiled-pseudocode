/*
 * XREFs of ?FindLeastRecentlyActivatedItem@PPILayoutOperation@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x1805140AC
 * Callers:
 *     ?QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z @ 0x180514438 (-QueryInsertApp@PPILayoutOperation@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002E638 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PPILayoutOperation::FindLeastRecentlyActivatedItem(
        PPILayoutOperation *this,
        struct IApplicationView **a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int64 v7; // rsi
  struct IApplicationView *v8; // rdi
  __int64 v9; // rbx
  struct IApplicationView *v11; // [rsp+20h] [rbp-29h] BYREF
  __int64 v12; // [rsp+28h] [rbp-21h] BYREF
  __int64 v13; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-11h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-9h] BYREF
  __int64 v16; // [rsp+50h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *a2 = 0LL;
  v12 = 0LL;
  v3 = *((_QWORD *)this + 8);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 128LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  v5 = v4(v3, &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = 0LL;
    v8 = 0LL;
    v11 = 0LL;
    while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v12 + 24LL))(v12, 1LL, v15) >= 0 )
    {
      v9 = v16;
      v13 = v16;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
      if ( (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v9 + 184LL))(v9, &v14) >= 0
        && (!v8 || v14 < v7) )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v11, &v13);
        v7 = v14;
        v8 = v11;
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v13);
    }
    if ( v8 )
    {
      v11 = 0LL;
      *a2 = v8;
    }
    v6 = 0;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v11);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE7,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppilayoutoperation.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  return v6;
}
