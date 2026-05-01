/*
 * XREFs of ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1800C3490
 * Callers:
 *     _lambda_532033d5f85a25734111ea1682d58830_::operator() @ 0x1800C25B8 (_lambda_532033d5f85a25734111ea1682d58830_--operator().c)
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800C2B08 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1800C2E84 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     _lambda_c2e383000fb9a79ec8225e5d53436605_::operator() @ 0x1800C3468 (_lambda_c2e383000fb9a79ec8225e5d53436605_--operator().c)
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800295B4 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x1800C30D0 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x1801350E4 (--$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogg.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

ULONG __fastcall WindowWrapperBase::PushBoundsToWindow(_QWORD **a1, char a2)
{
  ULONG result; // eax
  char v5; // si
  UINT uFlags; // r10d
  __int64 *v7; // rdi
  int v8; // r15d
  int v9; // r12d
  int *v10; // rbx
  int v11; // eax
  char v12; // r13
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rdx
  void (*v16)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v17; // [rsp+48h] [rbp-69h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-61h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-59h] BYREF
  int v20; // [rsp+5Ch] [rbp-55h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v22; // [rsp+70h] [rbp-41h]
  __int64 v23; // [rsp+78h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-29h] BYREF
  void *v25; // [rsp+98h] [rbp-19h]
  int v26; // [rsp+A0h] [rbp-11h]
  int v27; // [rsp+A4h] [rbp-Dh]
  __int64 *v28; // [rsp+A8h] [rbp-9h]
  __int64 v29; // [rsp+B0h] [rbp-1h]
  int *v30; // [rsp+B8h] [rbp+7h]
  __int64 v31; // [rsp+C0h] [rbp+Fh]
  int *v32; // [rsp+C8h] [rbp+17h]
  __int64 v33; // [rsp+D0h] [rbp+1Fh]

  result = (*(__int64 (__fastcall **)(_QWORD *))(*a1[35] + 216LL))(a1[35]);
  if ( *((_BYTE *)a1 + 504) )
  {
    if ( *((_DWORD *)a1 + 74) )
    {
      result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[15])(a1);
      if ( (_BYTE)result )
      {
        if ( !((unsigned __int8 (__fastcall *)(_QWORD **))(*a1)[14])(a1) )
          a2 &= ~2u;
        v5 = 1;
        uFlags = 2 * ((a2 & 1) == 0) + 82964;
        if ( (a2 & 2) == 0 )
          uFlags |= 1u;
        result = SetWindowPos(
                   (HWND)*((int *)a1 + 74),
                   0LL,
                   (int)*((float *)a1 + 122),
                   (int)*((float *)a1 + 123),
                   (int)*((float *)a1 + 124),
                   (int)*((float *)a1 + 125),
                   uFlags);
        if ( result )
        {
          v7 = (__int64 *)(a1 + 45);
          v8 = (int)*((float *)a1 + 125);
          v9 = (int)*((float *)a1 + 124);
          v10 = (int *)(a1 + 46);
          v11 = *v10;
          v12 = *v10 == 0;
          if ( __PAIR64__(v8, v9) != *(__int64 *)((char *)v7 + 28) )
          {
            if ( *((_BYTE *)v7 + 24) )
            {
              v17 = *v10;
              *v10 = v11 | 2;
              ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
                v7,
                &v17,
                v10);
            }
            BeginLayoutUpdate(*v7);
            Context = (LPVOID)__PAIR64__(v8, v9);
            *(__int64 *)((char *)v7 + 28) = __PAIR64__(v8, v9);
          }
          ++v7[2];
          ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
            v7,
            v7 + 2,
            (char *)v7 + 28,
            v7 + 4);
          v13 = *v10;
          *v10 |= 8u;
          Context = 0LL;
          if ( __std_init_once_begin_initialize(
                 &`ViewManagerInteropLogging::Instance'::`2'::wrapper,
                 0,
                 &fPending,
                 &Context)
            && fPending )
          {
            *(_QWORD *)&EventDescriptor.Id = &`ViewManagerInteropLogging::Instance'::`2'::wrapper;
            Context = &qword_1807B4348;
            qword_1807B4348 = (__int64)&ShellScreenClippingLogging::`vftable';
            qword_1807B4360 = (__int64)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
            atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
            LODWORD(EventDescriptor.Keyword) = 0;
            wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(
              (LPINIT_ONCE *)&EventDescriptor,
              v15,
              v16);
          }
          result = (unsigned int)Context;
          v14 = *((_QWORD *)Context + 1);
          if ( *(_DWORD *)v14 > 5u )
          {
            v17 = *v10;
            v20 = v13;
            v23 = *v7;
            v32 = &v17;
            v33 = 4LL;
            v30 = &v20;
            v31 = 4LL;
            v28 = &v23;
            v29 = 8LL;
            *(_DWORD *)&EventDescriptor.Id = 184549376;
            *(_DWORD *)&EventDescriptor.Level = 5;
            EventDescriptor.Keyword = 0LL;
            UserData.Ptr = *(_QWORD *)(v14 + 8);
            UserData.Size = *(unsigned __int16 *)UserData.Ptr;
            UserData.Reserved = 2;
            v25 = &unk_1806B2C8E;
            v26 = 66;
            v27 = 1;
            v22 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
            result = EventWriteTransfer(*(_QWORD *)(v14 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
          }
          if ( !*v7 || *v10 )
            v5 = 0;
          if ( v12 != v5 )
            return std::_Func_class<void,bool>::operator()((__int64)(v7 + 5), v5);
        }
      }
    }
  }
  return result;
}
