/*
 * XREFs of ?GenerateWindowArrangementDropEffect@TabletModeDragPattern@@YAJPEAUIApplicationView@@PEAUIAppLayout@@W4ARRANGEMENT_ACTION@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x180524028
 * Callers:
 *     ?UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z @ 0x18051D45C (-UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z.c)
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x180523D1C (TabletModeDragPattern--GenerateStringWithMap.c)
 *     ?GetViewAtIndex@TabletModeDragPattern@@YAJPEAUIAppLayout@@IPEAPEAUIApplicationView@@@Z @ 0x180524250 (-GetViewAtIndex@TabletModeDragPattern@@YAJPEAUIAppLayout@@IPEAPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 TabletModeDragPattern::GenerateWindowArrangementDropEffect(
        ApplicationViewHelpers *a1,
        TabletModeDragPattern *a2,
        int a3,
        __int64 a4,
        ...)
{
  unsigned int v7; // edi
  _QWORD *v8; // r13
  char v9; // r15
  ApplicationViewHelpers *v10; // r8
  int v11; // ebp
  unsigned int v12; // esi
  unsigned int v13; // eax
  struct IApplicationView **v14; // r9
  int ViewAtIndex; // eax
  int v16; // ebx
  __int64 v17; // rdx
  unsigned int v19; // eax
  struct IApplicationView **v20; // r9
  unsigned int AddressOf; // eax
  struct IApplicationView **v22; // r9
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  ApplicationViewHelpers *v24; // [rsp+80h] [rbp+8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+20h]
  _QWORD *v26; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  va_list va1; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v26 = va_arg(va1, _QWORD *);
  v25 = a4;
  v7 = 0;
  v8 = v26;
  *v26 = 0LL;
  v9 = 0;
  v24 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
  v10 = 0LL;
  v26 = 0LL;
  v11 = 1;
  if ( a3 == 1 )
  {
    if ( (*(unsigned int (__fastcall **)(TabletModeDragPattern *, ApplicationViewHelpers *, _QWORD))(*(_QWORD *)a2 + 184LL))(
           a2,
           a1,
           0LL) )
    {
      v12 = 2008;
    }
    else
    {
      v12 = 2010;
      v9 = 1;
      AddressOf = (unsigned int)Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)va);
      ViewAtIndex = TabletModeDragPattern::GetViewAtIndex(a2, 0LL, AddressOf, v22);
      v16 = ViewAtIndex;
      if ( ViewAtIndex < 0 )
      {
        v17 = 149LL;
        goto LABEL_17;
      }
    }
LABEL_13:
    v10 = (ApplicationViewHelpers *)v26;
    if ( v26 )
      v11 = 2;
    goto LABEL_15;
  }
  if ( a3 == 2 )
  {
    if ( (*(unsigned int (__fastcall **)(TabletModeDragPattern *, ApplicationViewHelpers *, _QWORD))(*(_QWORD *)a2 + 184LL))(
           a2,
           a1,
           0LL) )
    {
      v12 = 2009;
    }
    else
    {
      v12 = 2011;
      v9 = 1;
      v19 = (unsigned int)Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)va);
      ViewAtIndex = TabletModeDragPattern::GetViewAtIndex(a2, 0LL, v19, v20);
      v16 = ViewAtIndex;
      if ( ViewAtIndex < 0 )
      {
        v17 = 163LL;
        goto LABEL_17;
      }
    }
    goto LABEL_13;
  }
  if ( a3 <= 2 )
    goto LABEL_19;
  if ( a3 <= 4 )
  {
    v9 = 1;
    v12 = 2007;
    v13 = (unsigned int)Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)va);
    ViewAtIndex = TabletModeDragPattern::GetViewAtIndex(a2, (struct IAppLayout *)(a3 != 3), v13, v14);
    v16 = ViewAtIndex;
    if ( ViewAtIndex < 0 )
    {
      v17 = 172LL;
      goto LABEL_17;
    }
    goto LABEL_13;
  }
  if ( a3 == 5 )
  {
    v12 = 2005;
    goto LABEL_15;
  }
  if ( a3 == 6 )
  {
    v12 = 2006;
LABEL_15:
    ViewAtIndex = TabletModeDragPattern::GenerateStringWithMap(v11, a1, v10, v25, v12, v9, v8);
    v16 = ViewAtIndex;
    if ( ViewAtIndex >= 0 )
    {
LABEL_18:
      v7 = v16;
      goto LABEL_19;
    }
    v17 = 188LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
      (const char *)(unsigned int)ViewAtIndex);
    goto LABEL_18;
  }
LABEL_19:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)va);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v24);
  return v7;
}
