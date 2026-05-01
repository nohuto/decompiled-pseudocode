/*
 * XREFs of ?RepositionToVerticalTarget@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapRegion@@W4Edge@1@PEAUISnappedWindow@@PEAU23@@Z @ 0x1805A739C
 * Callers:
 *     ?GetRectForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEAUISnappedWindow@@W4SnapLayoutFlags@1@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@_NPEAUtagRECT@@6PEAUSMART_FILL_OUTPUT@1@@Z @ 0x1805A568C (-GetRectForRegion@SnapLayoutHelpers@@YAJW4SnapRegion@@PEAUISnappedWindow@@W4SnapLayoutFlags@1@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SnapLayoutHelpers::RepositionToVerticalTarget(
        RECT *a1,
        int a2,
        int a3,
        __int64 a4,
        struct tagRECT *lprc)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  LONG v10; // ecx
  int v12; // [rsp+20h] [rbp-48h] BYREF
  LONG v13; // [rsp+24h] [rbp-44h]
  int v14; // [rsp+28h] [rbp-40h]
  LONG v15; // [rsp+2Ch] [rbp-3Ch]
  RECT rcSrc; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( a3 != 1 && a3 != 4 )
  {
    v8 = -2147024809;
    v9 = 1521LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)v8);
    return v8;
  }
  rcSrc = *a1;
  SetRectEmpty(lprc);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a4 + 48LL))(a4, &v12);
  if ( v12 >= v14 || (v10 = v15, v13 >= v15) )
  {
    v8 = -2147418113;
    v9 = 1526LL;
    goto LABEL_17;
  }
  if ( a2 > 0 )
  {
    if ( a2 <= 3 )
    {
      if ( a3 == 1 )
        v10 = v13;
      rcSrc.bottom = v10;
    }
    else if ( (unsigned int)(a2 - 5) <= 2 )
    {
      if ( a3 == 1 )
        v10 = v13;
      rcSrc.top = v10;
    }
  }
  CopyRect(lprc, &rcSrc);
  return 0LL;
}
