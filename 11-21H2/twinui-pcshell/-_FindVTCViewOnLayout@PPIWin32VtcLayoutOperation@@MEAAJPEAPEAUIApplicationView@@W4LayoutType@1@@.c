/*
 * XREFs of ?_FindVTCViewOnLayout@PPIWin32VtcLayoutOperation@@MEAAJPEAPEAUIApplicationView@@W4LayoutType@1@@Z @ 0x180516630
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIAppLayoutBuilder@@@?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x180514634 (--$As@UIAppLayoutBuilder@@@-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PPIWin32VtcLayoutOperation::_FindVTCViewOnLayout(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rax
  int v9; // eax
  __int128 v11; // [rsp+20h] [rbp-50h]
  __int64 (__fastcall **v12)(); // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+38h] [rbp-38h]
  __int64 (__fastcall ***v14)(); // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v16; // [rsp+90h] [rbp+20h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+38h] BYREF

  v5 = a1[8];
  if ( a3 == 1 )
  {
    v17 = 0LL;
    v6 = Microsoft::WRL::ComPtr<IAppLayout>::As<IAppLayoutBuilder>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a1 + 7,
           &v17);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E5,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
      return v7;
    }
    v5 = v17;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  }
  v16 = 0LL;
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1;
  *(_QWORD *)&v11 = a1;
  *((_QWORD *)&v11 + 1) = &v16;
  v12 = off_180663A20;
  v13 = v11;
  v14 = &v12;
  v9 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64 (__fastcall ***)()))v8[22])(a1, v5, &v12);
  v7 = v9;
  if ( v9 >= 0 )
  {
    if ( v16 && (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 168))(a1) )
    {
      if ( a2 )
      {
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v16);
        *a2 = v16;
      }
      v7 = 0;
    }
    else
    {
      v7 = -2147023728;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F3,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\ppiwin32vtclayoutoperation.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v16);
  return v7;
}
