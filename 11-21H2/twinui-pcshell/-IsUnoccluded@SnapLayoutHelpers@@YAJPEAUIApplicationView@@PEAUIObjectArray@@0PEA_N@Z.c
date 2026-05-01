/*
 * XREFs of ?IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z @ 0x1805A6F8C
 * Callers:
 *     ?GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@PEAPEAU3@@Z @ 0x1805939D0 (-GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@P.c)
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@@Z @ 0x180599D64 (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeOcclusionErrorThresholdForView@SnapLayoutHelpers@@YAHPEAUIApplicationView@@@Z @ 0x1805A1FF0 (-ComputeOcclusionErrorThresholdForView@SnapLayoutHelpers@@YAHPEAUIApplicationView@@@Z.c)
 *     ?IntersectsWithErrorThreshold@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@0H@Z @ 0x1805A6B04 (-IntersectsWithErrorThreshold@SnapLayoutHelpers@@YA_NAEBUCRect@Geometry@@0H@Z.c)
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
  struct IUnknown *v21; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-40h] BYREF
  int v23; // [rsp+3Ch] [rbp-3Ch] BYREF
  RECT rcSrc1; // [rsp+40h] [rbp-38h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  *(_BYTE *)a4 = 0;
  rcSrc2 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IUnknown *, RECT *))this->lpVtbl[5].AddRef)(this, &rcSrc2);
  if ( v8 < 0 )
  {
    v9 = 193LL;
    goto LABEL_3;
  }
  v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v22);
  if ( v8 < 0 )
  {
    v9 = 197LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v11 = 0;
  for ( i = 0; i < v22; ++i )
  {
    v13 = !v11;
    if ( v11 )
      goto LABEL_25;
    v21 = 0LL;
    v14 = *(__int64 (__fastcall **)(struct IApplicationView *, _QWORD, GUID *, struct IUnknown **))(*(_QWORD *)a2 + 32LL);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
    v15 = v14(a2, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v21);
    v8 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCA,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
        (const char *)(unsigned int)v15);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
      return (unsigned int)v8;
    }
    if ( (unsigned int)SHIsSameObject(v21, this) )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
      break;
    }
    if ( !(unsigned int)SHIsSameObject(v21, a3) )
    {
      rcSrc1 = 0LL;
      v16 = ((__int64 (__fastcall *)(struct IUnknown *, RECT *))v21->lpVtbl[5].AddRef)(v21, &rcSrc1);
      v17 = retaddr;
      if ( v16 >= 0 )
      {
        v16 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v21->lpVtbl[3].Release)(v21, &v23);
        v17 = retaddr;
        if ( v16 >= 0 )
        {
          v11 = 0;
          if ( v23 )
          {
            if ( rcSrc1.left < rcSrc1.right && rcSrc1.top < rcSrc1.bottom )
            {
              v20 = SnapLayoutHelpers::ComputeOcclusionErrorThresholdForView((SnapLayoutHelpers *)v21, v19);
              if ( SnapLayoutHelpers::IntersectsWithErrorThreshold(
                     &rcSrc1,
                     &rcSrc2,
                     (const struct Geometry::CRect *)v20) )
              {
                v11 = 1;
              }
            }
          }
          goto LABEL_23;
        }
        v18 = 218LL;
      }
      else
      {
        v18 = 217LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v17,
        (void *)v18,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
        (const char *)(unsigned int)v16);
    }
LABEL_23:
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
  }
  v13 = !v11;
LABEL_25:
  *(_BYTE *)a4 = v13;
  return 0LL;
}
