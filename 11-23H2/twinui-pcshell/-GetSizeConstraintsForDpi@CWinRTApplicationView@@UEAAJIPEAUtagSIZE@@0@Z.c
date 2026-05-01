/*
 * XREFs of ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x1800559A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z @ 0x180055B60 (-GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z.c)
 *     _lambda_93f12587be75daec396af0a75fadd596_::operator() @ 0x180055C54 (_lambda_93f12587be75daec396af0a75fadd596_--operator().c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x1803CF5CC (-AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetSizeConstraintsForDpi(
        CWinRTApplicationView *this,
        unsigned int a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  RTL_SRWLOCK *v8; // r15
  __int64 v9; // rbx
  int SizeConstraintOverrides; // eax
  unsigned int v11; // r15d
  LONG cy; // eax
  LONG cx; // ecx
  LONG v14; // edx
  LONG v15; // r8d
  int v16; // eax
  unsigned int v17; // ebx
  LONG v18; // ecx
  LONG v19; // edx
  LONG v20; // r8d
  LONG v21; // r9d
  __int64 v23; // rdx
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // eax
  LONG v28; // eax
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // eax
  struct tagSIZE *v32; // [rsp+20h] [rbp-40h]
  struct tagSIZE v33; // [rsp+30h] [rbp-30h] BYREF
  struct tagSIZE v34; // [rsp+38h] [rbp-28h] BYREF
  struct tagSIZE v35; // [rsp+40h] [rbp-20h] BYREF
  __int64 v36; // [rsp+48h] [rbp-18h] BYREF
  struct tagSIZE v37; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v38; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct tagSIZE v40; // [rsp+90h] [rbp+30h] BYREF

  v8 = (RTL_SRWLOCK *)((char *)this + 48);
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  if ( *((_QWORD *)this + 29) )
    v9 = *((_QWORD *)this + 29);
  else
    v9 = *(_QWORD *)((char *)this + 220);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  v34 = 0LL;
  v40 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  SizeConstraintOverrides = CWinRTApplicationView::GetSizeConstraintOverrides(this, &v34, &v40, &v35, &v33);
  v11 = SizeConstraintOverrides;
  if ( SizeConstraintOverrides >= 0 )
  {
    v36 = 0LL;
    v38 = &v36;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v37);
    if ( v37 )
      lambda_93f12587be75daec396af0a75fadd596_::operator()(&v38);
    Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v37);
    if ( a3 )
    {
      cy = v40.cy;
      cx = v40.cx;
      v14 = v34.cy;
      v15 = v34.cx;
      if ( (v34.cx <= 0 || v34.cy <= 0) && (v40.cx <= 0 || v40.cy <= 0) )
      {
        LODWORD(v32) = (_DWORD)a3;
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *))(*(_QWORD *)v36 + 40LL))(
                v36,
                v9,
                a2,
                this);
        v17 = v16;
        if ( v16 < 0 )
        {
          v23 = 463LL;
          goto LABEL_58;
        }
      }
      else
      {
        *a3 = 0LL;
        if ( v15 > 0 && v14 > 0 )
        {
          v37 = v34;
          v16 = CWinRTApplicationView::AdjustSizeForChrome(this, &v37, a2);
          v17 = v16;
          if ( v16 < 0 )
          {
            v23 = 448LL;
LABEL_58:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v23,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
              (const char *)(unsigned int)v16,
              (int)v32);
            goto LABEL_17;
          }
          v24 = v37.cx;
          if ( a3->cx > v37.cx )
            v24 = a3->cx;
          a3->cx = v24;
          v25 = v37.cy;
          if ( a3->cy > v37.cy )
            v25 = a3->cy;
          a3->cy = v25;
          cy = v40.cy;
          cx = v40.cx;
        }
        if ( cx > 0 && cy > 0 )
        {
          v32 = &v37;
          v16 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE, _QWORD, CWinRTApplicationView *))(*(_QWORD *)v36 + 40LL))(
                  v36,
                  v40,
                  a2,
                  this);
          v17 = v16;
          if ( v16 < 0 )
          {
            v23 = 456LL;
            goto LABEL_58;
          }
          v26 = v37.cx;
          if ( a3->cx > v37.cx )
            v26 = a3->cx;
          a3->cx = v26;
          v27 = v37.cy;
          if ( a3->cy > v37.cy )
            v27 = a3->cy;
          a3->cy = v27;
        }
      }
    }
    if ( a4 )
    {
      v18 = v33.cy;
      v19 = v33.cx;
      v20 = v35.cy;
      v21 = v35.cx;
      if ( (v35.cx <= 0 || v35.cy <= 0) && (v33.cx <= 0 || v33.cy <= 0) )
      {
        v37.cx = GetSystemMetrics(59);
        v37.cy = GetSystemMetrics(60);
        *a4 = v37;
      }
      else
      {
        v37 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        *a4 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        if ( v21 > 0 && v20 > 0 )
        {
          v37 = v35;
          v16 = CWinRTApplicationView::AdjustSizeForChrome(this, &v37, a2);
          v17 = v16;
          if ( v16 < 0 )
          {
            v23 = 476LL;
            goto LABEL_58;
          }
          v28 = v37.cx;
          if ( a4->cx < v37.cx )
            v28 = a4->cx;
          a4->cx = v28;
          v29 = v37.cy;
          if ( a4->cy < v37.cy )
            v29 = a4->cy;
          a4->cy = v29;
          v18 = v33.cy;
          v19 = v33.cx;
        }
        if ( v19 > 0 && v18 > 0 )
        {
          v32 = &v37;
          v16 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE, _QWORD, CWinRTApplicationView *))(*(_QWORD *)v36 + 40LL))(
                  v36,
                  v33,
                  a2,
                  this);
          v17 = v16;
          if ( v16 < 0 )
          {
            v23 = 484LL;
            goto LABEL_58;
          }
          v30 = v37.cx;
          if ( a4->cx < v37.cx )
            v30 = a4->cx;
          a4->cx = v30;
          v31 = v37.cy;
          if ( a4->cy < v37.cy )
            v31 = a4->cy;
          a4->cy = v31;
        }
      }
    }
    v17 = 0;
LABEL_17:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v36);
    return v17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B3,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)SizeConstraintOverrides,
    (int)v32);
  return v11;
}
