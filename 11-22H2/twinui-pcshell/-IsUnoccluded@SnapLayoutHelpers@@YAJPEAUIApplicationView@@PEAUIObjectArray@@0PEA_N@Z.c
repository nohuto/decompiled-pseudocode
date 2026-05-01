/*
 * XREFs of ?IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z @ 0x180673F6C
 * Callers:
 *     ?GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@PEAPEAU3@@Z @ 0x180660DB0 (-GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@P.c)
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18066817C (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeOcclusionErrorThresholdForView@SnapRectHelpers@@YAHPEAUIApplicationView@@@Z @ 0x180677E18 (-ComputeOcclusionErrorThresholdForView@SnapRectHelpers@@YAHPEAUIApplicationView@@@Z.c)
 *     ?IntersectsWithErrorThreshold@SnapRectHelpers@@YA_NAEBUCRect@Geometry@@0H@Z @ 0x180677E7C (-IntersectsWithErrorThreshold@SnapRectHelpers@@YA_NAEBUCRect@Geometry@@0H@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLayoutHelpers::IsUnoccluded(
        struct IUnknown *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IApplicationView *a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  bool v11; // di
  unsigned int i; // esi
  bool v13; // zf
  __int64 (__fastcall *v14)(struct IApplicationView *, _QWORD, GUID *, struct IUnknown **); // rbx
  int v15; // eax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  struct IApplicationView *v19; // rdx
  unsigned int v20; // eax
  int v21; // r9d
  struct IUnknown *v22; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-40h] BYREF
  int v24; // [rsp+3Ch] [rbp-3Ch] BYREF
  RECT rcSrc1; // [rsp+40h] [rbp-38h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  *(_BYTE *)a4 = 0;
  rcSrc2 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IUnknown *, RECT *))this->lpVtbl[5].AddRef)(this, &rcSrc2);
  if ( v8 < 0 )
  {
    v9 = 243LL;
    goto LABEL_3;
  }
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v23);
  if ( v8 < 0 )
  {
    v9 = 247LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v11 = 0;
  for ( i = 0; i < v23; ++i )
  {
    v13 = !v11;
    if ( v11 )
      goto LABEL_25;
    v22 = 0LL;
    v14 = *(__int64 (__fastcall **)(struct IApplicationView *, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
    v15 = v14(a2, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v22);
    v8 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFC,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
      return (unsigned int)v8;
    }
    if ( (unsigned int)SHIsSameObject(v22, this) )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
      break;
    }
    if ( !(unsigned int)SHIsSameObject(v22, a3) )
    {
      rcSrc1 = 0LL;
      v16 = ((__int64 (__fastcall *)(struct IUnknown *, RECT *))v22->lpVtbl[5].AddRef)(v22, &rcSrc1);
      v17 = retaddr;
      if ( v16 >= 0 )
      {
        v16 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v22->lpVtbl[3].Release)(v22, &v24);
        v17 = retaddr;
        if ( v16 >= 0 )
        {
          v11 = 0;
          if ( v24 )
          {
            if ( rcSrc1.left < rcSrc1.right && rcSrc1.top < rcSrc1.bottom )
            {
              v20 = SnapRectHelpers::ComputeOcclusionErrorThresholdForView((SnapRectHelpers *)v22, v19);
              if ( SnapRectHelpers::IntersectsWithErrorThreshold(
                     &rcSrc1,
                     &rcSrc2,
                     (const struct Geometry::CRect *)v20,
                     v21) )
              {
                v11 = 1;
              }
            }
          }
          goto LABEL_23;
        }
        v18 = 268LL;
      }
      else
      {
        v18 = 267LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v17,
        (void *)v18,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
        (const char *)(unsigned int)v16);
    }
LABEL_23:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
  }
  v13 = !v11;
LABEL_25:
  *(_BYTE *)a4 = v13;
  return 0LL;
}
