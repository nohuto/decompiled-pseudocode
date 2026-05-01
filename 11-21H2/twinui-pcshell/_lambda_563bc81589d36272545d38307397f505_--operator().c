/*
 * XREFs of _lambda_563bc81589d36272545d38307397f505_::operator() @ 0x180091848
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_563bc81589d36272545d38307397f505___::Run @ 0x180091820 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_563bc81589d36272545d38307397f505___--.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18013AA90 (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ??$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x180146494 (--$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUH.c)
 *     ??1Completer@?$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAA@XZ @ 0x18017976C (--1Completer@-$static_lazy@VViewManagerInteropTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_563bc81589d36272545d38307397f505_::operator()(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int16 v4; // ax
  const union _RM_ACTIVITY_IMPORTANCE *v5; // r13
  int v6; // eax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // esi
  _DWORD *v11; // rcx
  ViewManagerInteropTraceLogging *v12; // rcx
  _DWORD *v13; // rcx
  HWND *v14; // rsi
  DWORD WindowThreadProcessId; // eax
  union _RTL_RUN_ONCE *v16; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  WINBOOL fPending; // [rsp+70h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+78h] [rbp+10h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+20h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*a1 + 280LL) + 200LL))(*(_QWORD *)(*a1 + 280LL), &SRWLock);
  if ( *(_QWORD *)(*a1 + 136LL) != *(_QWORD *)a1[1] )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context)
      && fPending )
    {
      v16 = &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B4370;
      qword_1807B4370 = (__int64)&IamTraceLogging::`vftable';
      atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
      v17 = 0;
      wil::details::static_lazy<ViewManagerInteropTraceLogging>::Completer::~Completer(&v16);
    }
    v13 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( v13 && *v13 )
    {
      fPending = 0;
      v14 = (HWND *)a1[1];
      if ( *v14 )
      {
        WindowThreadProcessId = GetWindowThreadProcessId(*v14, (LPDWORD)&fPending);
        v14 = (HWND *)a1[1];
      }
      else
      {
        WindowThreadProcessId = 0;
      }
      LODWORD(Context) = WindowThreadProcessId;
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*a1 + 16LL) + 288LL))(*a1 + 16LL);
      ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int,HWND__ * &,unsigned long const &,unsigned long &>(
        &v21,
        v14,
        &Context,
        &fPending,
        v16);
    }
  }
  v2 = *a1;
  v3 = *(_QWORD *)a1[1];
  *(_QWORD *)(*a1 + 136LL) = v3;
  if ( (*(_BYTE *)a1[2] & 1) != 0 || !v3 )
    v4 = 0;
  else
    v4 = 128;
  *(_WORD *)(v2 + 252) &= ~0x80u;
  *(_WORD *)(v2 + 252) |= v4;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 280) + 216LL))(*(_QWORD *)(v2 + 280));
  if ( !*(_BYTE *)(v2 + 572) )
  {
    v5 = (const union _RM_ACTIVITY_IMPORTANCE *)(v2 + 252);
    if ( *(_DWORD *)(v2 + 256) != *(_DWORD *)(v2 + 252) )
    {
      v8 = *(_QWORD *)(v2 + 104);
      if ( v8 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xBAD,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v9,
            (int)v16);
        *(_DWORD *)(v2 + 256) = *(_DWORD *)v5;
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 288LL))(v2 + 16);
        Context = 0LL;
        if ( __std_init_once_begin_initialize(
               &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
               0,
               &fPending,
               &Context)
          && fPending )
        {
          v16 = &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper;
          Context = &qword_1807B4370;
          qword_1807B4370 = (__int64)&IamTraceLogging::`vftable';
          atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
          v17 = 0;
          wil::details::static_lazy<ViewManagerInteropTraceLogging>::Completer::~Completer(&v16);
        }
        v11 = (_DWORD *)*((_QWORD *)Context + 1);
        if ( v11 && *v11 )
        {
          Context = 0LL;
          if ( __std_init_once_begin_initialize(
                 &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
                 0,
                 &fPending,
                 &Context)
            && fPending )
          {
            v16 = &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper;
            Context = &qword_1807B4370;
            qword_1807B4370 = (__int64)&IamTraceLogging::`vftable';
            atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
            v17 = 0;
            wil::details::static_lazy<ViewManagerInteropTraceLogging>::Completer::~Completer(&v16);
          }
          ViewManagerInteropTraceLogging::CommitImportanceVector_(v12, v10, v5);
        }
      }
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 280LL) + 248LL))(
         *(_QWORD *)(*a1 + 280LL),
         (*a1 + 16LL) & -(__int64)(*a1 != 0LL));
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9E6,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v6,
      (int)v16);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
