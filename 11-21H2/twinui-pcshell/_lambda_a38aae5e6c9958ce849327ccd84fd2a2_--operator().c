/*
 * XREFs of _lambda_a38aae5e6c9958ce849327ccd84fd2a2_::operator() @ 0x180139528
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a38aae5e6c9958ce849327ccd84fd2a2___::Run @ 0x180139500 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_a38aae5e6c9958ce849327ccd84fd2a2___--.c)
 * Callees:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800C2E84 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z @ 0x180139680 (-PushLightweightPropertiesToWindow@LightweightPropertySet@@QEAAXPEAUHWND__@@@Z.c)
 *     ??$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEBKAEAK@Z @ 0x1801396F8 (--$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__.c)
 *     ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180139854 (--4-$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_polic.c)
 *     ??1Completer@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAA@XZ @ 0x18017976C (--1Completer@-$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_a38aae5e6c9958ce849327ccd84fd2a2_::operator()(__int64 *a1)
{
  __int64 v2; // rbx
  int *v3; // r14
  HWND v4; // rdi
  _DWORD *v5; // rcx
  int *v6; // rsi
  HWND Ancestor; // rax
  WINBOOL fPending; // [rsp+20h] [rbp-68h] BYREF
  DWORD WindowThreadProcessId; // [rsp+24h] [rbp-64h] BYREF
  union _RTL_RUN_ONCE *v11; // [rsp+28h] [rbp-60h] BYREF
  int v12; // [rsp+30h] [rbp-58h]
  LPVOID Context[2]; // [rsp+40h] [rbp-48h] BYREF
  struct tagRECT Rect; // [rsp+50h] [rbp-38h] BYREF

  v2 = *a1;
  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
    *a1 + 128,
    *(_QWORD *)a1[1]);
  v3 = (int *)a1[2];
  if ( *(_DWORD *)(v2 + 296) != *v3 )
  {
    v4 = (HWND)*v3;
    *(_QWORD *)&Rect.left = v4;
    Context[0] = 0LL;
    if ( __std_init_once_begin_initialize(
           &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           Context)
      && fPending )
    {
      v11 = &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper;
      Context[0] = &qword_1807B4370;
      qword_1807B4370 = (__int64)&IamTraceLogging::`vftable';
      atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
      v12 = 0;
      wil::details::static_lazy<ViewManagerInteropTraceLogging>::Completer::~Completer(&v11);
    }
    v5 = (_DWORD *)*((_QWORD *)Context[0] + 1);
    if ( v5 && *v5 )
    {
      WindowThreadProcessId = GetWindowThreadProcessId(v4, (LPDWORD)&fPending);
      LODWORD(Context[0]) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 288LL))(v2 + 16);
      ViewManagerInteropTraceLogging::WindowCreated<unsigned int,HWND__ * const &,unsigned long const &,unsigned long &>(
        Context,
        &Rect,
        &WindowThreadProcessId,
        &fPending);
    }
    v6 = (int *)a1[3];
    if ( *v6 == 1 )
    {
      GetWindowBand(v4, v2 + 508);
      GetWindowRect(v4, &Rect);
      *(float *)(v2 + 488) = (float)Rect.left;
      *(float *)(v2 + 492) = (float)Rect.top;
      *(float *)(v2 + 496) = (float)(Rect.right - Rect.left);
      *(float *)(v2 + 500) = (float)(Rect.bottom - Rect.top);
      Ancestor = GetAncestor(v4, 1u);
      if ( Ancestor )
      {
        *(struct tagRECT *)Context = Rect;
        if ( MapWindowPoints(0LL, Ancestor, (LPPOINT)Context, 2u) )
        {
          *(float *)(v2 + 488) = (float)SLODWORD(Context[0]);
          *(float *)(v2 + 492) = (float)SHIDWORD(Context[0]);
          *(float *)(v2 + 496) = (float)(LODWORD(Context[1]) - LODWORD(Context[0]));
          *(float *)(v2 + 500) = (float)(HIDWORD(Context[1]) - HIDWORD(Context[0]));
        }
      }
      *(_BYTE *)(v2 + 504) = 1;
      EnumPropsExW(v4, (PROPENUMPROCEXW)LightweightPropertySet::s_PropEnumCallback, v2 + 200);
    }
    else
    {
      LightweightPropertySet::PushLightweightPropertiesToWindow((LightweightPropertySet *)(v2 + 200), v4);
    }
    if ( IsWindowVisible(v4) )
      WindowWrapperBase::SetWindowId((_QWORD *)v2, *v3, *v6);
  }
  return 0LL;
}
