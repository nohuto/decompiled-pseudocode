/*
 * XREFs of ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18002C3D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_93f12587be75daec396af0a75fadd596_::operator() @ 0x18002C590 (_lambda_93f12587be75daec396af0a75fadd596_--operator().c)
 *     ?GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z @ 0x18002C604 (-GetSizeConstraintOverrides@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@000@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EACA0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800ED4D4 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x180313FAC (-AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z.c)
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
  struct tagSIZE v12; // rdx
  LONG cy; // eax
  LONG cx; // ecx
  LONG v15; // edx
  LONG v16; // r8d
  int v17; // eax
  unsigned int v18; // ebx
  LONG v19; // ecx
  LONG v20; // edx
  LONG v21; // r8d
  LONG v22; // r9d
  __int64 v24; // rdx
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // eax
  LONG v28; // eax
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // eax
  struct tagSIZE *v33; // [rsp+20h] [rbp-40h]
  struct tagSIZE v34; // [rsp+30h] [rbp-30h] BYREF
  struct tagSIZE v35; // [rsp+38h] [rbp-28h] BYREF
  struct tagSIZE v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+48h] [rbp-18h] BYREF
  struct tagSIZE v38; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v39; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct tagSIZE v41; // [rsp+90h] [rbp+30h] BYREF

  v8 = (RTL_SRWLOCK *)((char *)this + 48);
  AcquireSRWLockShared((PSRWLOCK)this + 6);
  if ( *((_QWORD *)this + 29) )
    v9 = *((_QWORD *)this + 29);
  else
    v9 = *(_QWORD *)((char *)this + 220);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  v35 = 0LL;
  v41 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  SizeConstraintOverrides = CWinRTApplicationView::GetSizeConstraintOverrides(this, &v35, &v41, &v36, &v34);
  v11 = SizeConstraintOverrides;
  if ( SizeConstraintOverrides >= 0 )
  {
    v37 = 0LL;
    v39 = &v37;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v38);
    v12 = v38;
    if ( v38 )
      lambda_93f12587be75daec396af0a75fadd596_::operator()(&v39);
    ((void (__fastcall *)(_QWORD, _QWORD))Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease)(
      &v38,
      v12);
    if ( a3 )
    {
      cy = v41.cy;
      cx = v41.cx;
      v15 = v35.cy;
      v16 = v35.cx;
      if ( (v35.cx <= 0 || v35.cy <= 0) && (v41.cx <= 0 || v41.cy <= 0) )
      {
        LODWORD(v33) = (_DWORD)a3;
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, CWinRTApplicationView *))(*(_QWORD *)v37 + 40LL))(
                v37,
                v9,
                a2,
                this);
        v18 = v17;
        if ( v17 < 0 )
        {
          v24 = 477LL;
          goto LABEL_58;
        }
      }
      else
      {
        *a3 = 0LL;
        if ( v16 > 0 && v15 > 0 )
        {
          v38 = v35;
          v17 = CWinRTApplicationView::AdjustSizeForChrome(this, &v38, a2);
          v18 = v17;
          if ( v17 < 0 )
          {
            v24 = 462LL;
LABEL_58:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v24,
              (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
              (const char *)(unsigned int)v17,
              (int)v33);
            goto LABEL_17;
          }
          v25 = v38.cx;
          if ( a3->cx > v38.cx )
            v25 = a3->cx;
          a3->cx = v25;
          v26 = v38.cy;
          if ( a3->cy > v38.cy )
            v26 = a3->cy;
          a3->cy = v26;
          cy = v41.cy;
          cx = v41.cx;
        }
        if ( cx > 0 && cy > 0 )
        {
          v33 = &v38;
          v17 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE, _QWORD, CWinRTApplicationView *))(*(_QWORD *)v37 + 40LL))(
                  v37,
                  v41,
                  a2,
                  this);
          v18 = v17;
          if ( v17 < 0 )
          {
            v24 = 470LL;
            goto LABEL_58;
          }
          v27 = v38.cx;
          if ( a3->cx > v38.cx )
            v27 = a3->cx;
          a3->cx = v27;
          v28 = v38.cy;
          if ( a3->cy > v38.cy )
            v28 = a3->cy;
          a3->cy = v28;
        }
      }
    }
    if ( a4 )
    {
      v19 = v34.cy;
      v20 = v34.cx;
      v21 = v36.cy;
      v22 = v36.cx;
      if ( (v36.cx <= 0 || v36.cy <= 0) && (v34.cx <= 0 || v34.cy <= 0) )
      {
        v38.cx = GetSystemMetrics(59);
        v38.cy = GetSystemMetrics(60);
        *a4 = v38;
      }
      else
      {
        v38 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        *a4 = (struct tagSIZE)0x7FFFFFFF7FFFFFFFLL;
        if ( v22 > 0 && v21 > 0 )
        {
          v38 = v36;
          v17 = CWinRTApplicationView::AdjustSizeForChrome(this, &v38, a2);
          v18 = v17;
          if ( v17 < 0 )
          {
            v24 = 490LL;
            goto LABEL_58;
          }
          v29 = v38.cx;
          if ( a4->cx < v38.cx )
            v29 = a4->cx;
          a4->cx = v29;
          v30 = v38.cy;
          if ( a4->cy < v38.cy )
            v30 = a4->cy;
          a4->cy = v30;
          v19 = v34.cy;
          v20 = v34.cx;
        }
        if ( v20 > 0 && v19 > 0 )
        {
          v33 = &v38;
          v17 = (*(__int64 (__fastcall **)(__int64, struct tagSIZE, _QWORD, CWinRTApplicationView *))(*(_QWORD *)v37 + 40LL))(
                  v37,
                  v34,
                  a2,
                  this);
          v18 = v17;
          if ( v17 < 0 )
          {
            v24 = 498LL;
            goto LABEL_58;
          }
          v31 = v38.cx;
          if ( a4->cx < v38.cx )
            v31 = a4->cx;
          a4->cx = v31;
          v32 = v38.cy;
          if ( a4->cy < v38.cy )
            v32 = a4->cy;
          a4->cy = v32;
        }
      }
    }
    v18 = 0;
LABEL_17:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v37);
    return v18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C1,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
    (const char *)(unsigned int)SizeConstraintOverrides,
    (int)v33);
  return v11;
}
