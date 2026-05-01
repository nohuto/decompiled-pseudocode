/*
 * XREFs of ?GenerateWindowArrangementDropEffect@TabletModeDragPattern@@YAJPEAUIApplicationView@@PEAUIAppLayout@@W4ARRANGEMENT_ACTION@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x1805DCA00
 * Callers:
 *     ?UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z @ 0x1805D5AF8 (-UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x1805DC6F4 (TabletModeDragPattern--GenerateStringWithMap.c)
 *     ?GetViewAtIndex@TabletModeDragPattern@@YAJPEAUIAppLayout@@IPEAPEAUIApplicationView@@@Z @ 0x1805DCC18 (-GetViewAtIndex@TabletModeDragPattern@@YAJPEAUIAppLayout@@IPEAPEAUIApplicationView@@@Z.c)
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
  ApplicationViewHelpers *v8; // r13
  char v9; // r15
  unsigned int v10; // esi
  int ViewAtIndex; // eax
  int v12; // ebx
  __int64 v13; // rdx
  struct IApplicationView **v15; // r9
  struct IApplicationView **v16; // r9
  struct IApplicationView **v17; // r9
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  ApplicationViewHelpers *v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+98h] [rbp+58h]
  ApplicationViewHelpers *v21; // [rsp+A0h] [rbp+60h] BYREF
  va_list va; // [rsp+A0h] [rbp+60h]
  va_list va1; // [rsp+A8h] [rbp+68h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v21 = va_arg(va1, ApplicationViewHelpers *);
  v20 = a4;
  v7 = 0;
  v8 = v21;
  *(_QWORD *)v21 = 0LL;
  v9 = 0;
  v19 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
  v21 = 0LL;
  switch ( a3 )
  {
    case 1:
      if ( (*(unsigned int (__fastcall **)(TabletModeDragPattern *, ApplicationViewHelpers *))(*(_QWORD *)a2 + 184LL))(
             a2,
             a1) )
      {
        v10 = 2008;
      }
      else
      {
        v10 = 2010;
        v9 = 1;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)va);
        ViewAtIndex = TabletModeDragPattern::GetViewAtIndex(a2, 0LL, (unsigned int)va, v17);
        v12 = ViewAtIndex;
        if ( ViewAtIndex < 0 )
        {
          v13 = 149LL;
          goto LABEL_10;
        }
      }
      goto LABEL_8;
    case 2:
      if ( (*(unsigned int (__fastcall **)(TabletModeDragPattern *, ApplicationViewHelpers *))(*(_QWORD *)a2 + 184LL))(
             a2,
             a1) )
      {
        v10 = 2009;
      }
      else
      {
        v10 = 2011;
        v9 = 1;
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)va);
        ViewAtIndex = TabletModeDragPattern::GetViewAtIndex(a2, 0LL, (unsigned int)va, v16);
        v12 = ViewAtIndex;
        if ( ViewAtIndex < 0 )
        {
          v13 = 163LL;
          goto LABEL_10;
        }
      }
      goto LABEL_8;
    case 3:
    case 4:
      v9 = 1;
      v10 = 2007;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)va);
      ViewAtIndex = TabletModeDragPattern::GetViewAtIndex(a2, (struct IAppLayout *)(a3 != 3), (unsigned int)va, v15);
      v12 = ViewAtIndex;
      if ( ViewAtIndex < 0 )
      {
        v13 = 172LL;
        goto LABEL_10;
      }
LABEL_8:
      ViewAtIndex = TabletModeDragPattern::GenerateStringWithMap(
                      (unsigned int)(v21 != 0LL) + 1,
                      a1,
                      v21,
                      v20,
                      v10,
                      v9,
                      v8);
      v12 = ViewAtIndex;
      if ( ViewAtIndex >= 0 )
      {
LABEL_11:
        v7 = v12;
        break;
      }
      v13 = 188LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)ViewAtIndex);
      goto LABEL_11;
    case 5:
      v10 = 2005;
      goto LABEL_8;
    case 6:
      v10 = 2006;
      goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)va);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
  return v7;
}
