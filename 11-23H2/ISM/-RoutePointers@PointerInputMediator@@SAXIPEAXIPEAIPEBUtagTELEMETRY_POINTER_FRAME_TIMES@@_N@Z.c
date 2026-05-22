/*
 * XREFs of ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x18005B2A8
 * Callers:
 *     ?SetManipulationInputTarget@@YAHIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x180096850 (-SetManipulationInputTarget@@YAHIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800F8EA0 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x1800FB290 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal.c)
 * Callees:
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180059188 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _lambda_cbb0572903586b210ab412e06022c998_::operator()_unsigned_long_ @ 0x18005AFAC (_lambda_cbb0572903586b210ab412e06022c998_--operator()_unsigned_long_.c)
 *     ??$emplace_back@UPointerFrame@PointerInputMediator@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?A_T$$QEAUPointerFrame@PointerInputMediator@@@Z @ 0x18005AFE0 (--$emplace_back@UPointerFrame@PointerInputMediator@@@-$deque@UPointerFrame@PointerInputMediator@.c)
 *     ?RouteInput@PointerInputMediator@@CAXIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x18005B250 (-RouteInput@PointerInputMediator@@CAXIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@H@Z.c)
 *     memmove_0 @ 0x18006592C (memmove_0.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18009822C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800A0290 (-terminate@details@gsl@@YAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800B952C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$emplace_back@AEAI@?$vector@IV?$allocator@I@std@@@std@@QEAA?A_TAEAI@Z @ 0x1800FC69C (--$emplace_back@AEAI@-$vector@IV-$allocator@I@std@@@std@@QEAA-A_TAEAI@Z.c)
 *     ??0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z @ 0x1800FC968 (--0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x1800FCC5C (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x1800FCD00 (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 *     ??C?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEBAPEAUPointerFrame@PointerInputMediator@@XZ @ 0x1800FCE60 (--C-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@s.c)
 *     ?at@?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAAAEAUContactData@PointerInputMediator@@AEBI@Z @ 0x1800FD538 (-at@-$unordered_map@IUContactData@PointerInputMediator@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800FD644 (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18011DC70 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PointerInputMediator::RoutePointers(
        int a1,
        void *a2,
        unsigned int a3,
        unsigned int *a4,
        const struct tagTELEMETRY_POINTER_FRAME_TIMES *a5,
        bool a6)
{
  unsigned int *v6; // r12
  unsigned int v7; // r14d
  int v8; // r15d
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  wil::details::in1diag3 *v11; // r9
  __int64 *v12; // rdi
  __int64 v13; // r8
  __int64 i; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned int *v22; // r14
  unsigned int *v23; // r12
  __int64 v24; // rcx
  _DWORD *j; // rax
  __int64 v26; // rax
  gsl::details *v27; // rcx
  const char *v28; // r9
  int v29; // r14d
  unsigned int *v30; // r15
  unsigned int *v31; // r13
  __int64 v32; // r14
  unsigned int v33; // r12d
  _DWORD *k; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  const char *v38; // r9
  _DWORD *m; // rax
  char v40; // al
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // r10
  __int64 v44; // r9
  __int64 *v45; // rbx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 n; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned int ii; // esi
  __int64 v53; // rdi
  unsigned int v54; // edx
  unsigned int v55; // ebx
  __int64 v56; // rax
  char *v57; // rdx
  HANDLE v58; // rsi
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  _QWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  _QWORD *v72; // rbx
  unsigned int v73; // [rsp+40h] [rbp-C0h] BYREF
  int v74; // [rsp+44h] [rbp-BCh]
  unsigned int *v75; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v76; // [rsp+50h] [rbp-B0h]
  HANDLE hSourceHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v78; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v79; // [rsp+68h] [rbp-98h]
  __int64 v80; // [rsp+70h] [rbp-90h]
  void *v81; // [rsp+78h] [rbp-88h] BYREF
  char v82; // [rsp+80h] [rbp-80h]
  __int64 v83; // [rsp+88h] [rbp-78h]
  _QWORD v84[3]; // [rsp+90h] [rbp-70h] BYREF
  char v85[24]; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v86; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v87; // [rsp+C4h] [rbp-3Ch]
  char v88[184]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v89; // [rsp+180h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v6 = a4;
  v75 = a4;
  v7 = a3;
  v76 = a3;
  hSourceHandle = a2;
  v8 = a1;
  v74 = a1;
  v81 = &PointerInputMediator::s_frameQueueLock;
  std::_Mutex_base::lock((std::_Mutex_base *)&PointerInputMediator::s_frameQueueLock);
  v82 = 1;
  v10 = qword_180268D48;
  v11 = (wil::details::in1diag3 *)qword_180268D50;
  v12 = (__int64 *)PointerInputMediator::s_frameQueue;
  if ( PointerInputMediator::s_frameQueue )
    v13 = *(_QWORD *)PointerInputMediator::s_frameQueue;
  else
    v13 = 0LL;
  for ( i = qword_180268D48; i != qword_180268D48 + qword_180268D50; ++i )
  {
    v9 = *(_DWORD **)(*(_QWORD *)(v13 + 8) + 8 * (i & (*(_QWORD *)(v13 + 16) - 1LL)));
    if ( *v9 == v8 )
      goto LABEL_9;
  }
  MicrosoftTelemetryAssertTriggeredNoArgs(v9, qword_180268D48, v13);
  v11 = (wil::details::in1diag3 *)qword_180268D50;
  v10 = qword_180268D48;
LABEL_9:
  if ( (wil::details::in1diag3 *)i != (wil::details::in1diag3 *)((char *)v11 + v10) )
  {
    if ( v12 )
      v15 = *v12;
    else
      v15 = 0LL;
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8 * (i & (*(_QWORD *)(v15 + 16) - 1LL)));
    v83 = *(_QWORD *)(v16 + 152);
    if ( *(_BYTE *)(v16 + 160) )
    {
      *(_BYTE *)(v16 + 160) = 0;
      v17 = qword_180268D48;
      v18 = qword_180268D48 + qword_180268D50;
      while ( v17 != v18 )
      {
        v19 = *(_QWORD *)(qword_180268D38 + 8 * (v17 & (qword_180268D40 - 1)));
        if ( *(_DWORD *)v19 == v8 )
          break;
        if ( *(_QWORD *)(v19 + 152) == *(_QWORD *)(v16 + 152) )
        {
          v20 = (__int64)(*(_QWORD *)(v19 + 200) - *(_QWORD *)(v19 + 192)) >> 2;
          if ( v20 != *(_DWORD *)(v19 + 4) )
          {
            if ( *(int *)(v19 + 164) <= 0 )
              MicrosoftTelemetryAssertTriggeredNoArgs(v20, v10, v13);
            if ( (*(_DWORD *)(v19 + 164))-- == 1 )
            {
              v22 = *(unsigned int **)(v19 + 168);
              v23 = *(unsigned int **)(v19 + 176);
              while ( v22 != v23 )
              {
                v24 = *v22;
                v73 = *v22;
                v10 = *(_QWORD *)(v19 + 200);
                for ( j = *(_DWORD **)(v19 + 192); j != (_DWORD *)v10; ++j )
                {
                  if ( *j == (_DWORD)v24 )
                    goto LABEL_29;
                }
                MicrosoftTelemetryAssertTriggeredNoArgs(v24, v10, v13);
                std::vector<unsigned int>::emplace_back<unsigned int &>(v19 + 192, &v73);
                v26 = std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v19 + 216, &v73);
                *(_QWORD *)v26 = 0LL;
                *(_WORD *)(v26 + 16) = 256;
LABEL_29:
                ++v22;
              }
              v11 = retaddr;
              if ( (__int64)(*(_QWORD *)(v19 + 200) - *(_QWORD *)(v19 + 192)) >> 2 != *(_DWORD *)(v19 + 4) )
                wil::details::in1diag3::_FailFast_Unexpected(
                  retaddr,
                  (void *)0xF8,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\point"
                       "erinputmediator.cpp",
                  (const char *)retaddr);
            }
          }
          v8 = v74;
        }
        ++v17;
      }
      v6 = v75;
      v7 = v76;
    }
    *(_OWORD *)(v16 + 8) = *(_OWORD *)a5;
    *(_OWORD *)(v16 + 24) = *((_OWORD *)a5 + 1);
    *(_OWORD *)(v16 + 40) = *((_OWORD *)a5 + 2);
    *(_OWORD *)(v16 + 56) = *((_OWORD *)a5 + 3);
    *(_OWORD *)(v16 + 72) = *((_OWORD *)a5 + 4);
    *(_OWORD *)(v16 + 88) = *((_OWORD *)a5 + 5);
    *(_OWORD *)(v16 + 104) = *((_OWORD *)a5 + 6);
    *(_OWORD *)(v16 + 120) = *((_OWORD *)a5 + 7);
    *(_OWORD *)(v16 + 136) = *((_OWORD *)a5 + 8);
    gsl::details::extent_type<-1>::extent_type<-1>(&v78, v7, v13, (__int64)v11);
    if ( v78 == -1 || (v29 = 0, !v6) && v78 )
    {
      gsl::details::terminate(v27);
      __debugbreak();
    }
    v30 = v6;
    v31 = &v6[v78];
    if ( v6 != v31 )
    {
      v32 = v16 + 216;
      do
      {
        v33 = *v30;
        v73 = *v30;
        for ( k = *(_DWORD **)(v16 + 192); k != *(_DWORD **)(v16 + 200); ++k )
        {
          if ( *k == v33 )
          {
            if ( !*(_BYTE *)(std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v16 + 216, &v73) + 17) )
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x10F,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\pointer"
                     "inputmediator.cpp",
                v38);
            MicrosoftTelemetryAssertTriggeredNoArgs(v36, v35, v37);
            memmove_0(k, k + 1, *(_QWORD *)(v16 + 200) - (_QWORD)(k + 1));
            *(_QWORD *)(v16 + 200) -= 4LL;
            v32 = v16 + 216;
            break;
          }
        }
        for ( m = *(_DWORD **)(v16 + 168); ; ++m )
        {
          if ( m == *(_DWORD **)(v16 + 176) )
          {
            v40 = 1;
            goto LABEL_52;
          }
          if ( *m == v33 )
            break;
        }
        v40 = 0;
LABEL_52:
        if ( v40 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x11E,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\pointerinputmediator.cpp",
            v28);
        std::vector<unsigned int>::emplace_back<unsigned int &>(v16 + 192, &v73);
        v41 = std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v32, &v73);
        *(_QWORD *)v41 = hSourceHandle;
        *(_BYTE *)(v41 + 16) = a6;
        *(_BYTE *)(v41 + 17) = 0;
        ++v30;
      }
      while ( v30 != v31 );
      v6 = v75;
      v29 = 0;
    }
    if ( (__int64)(*(_QWORD *)(v16 + 200) - *(_QWORD *)(v16 + 192)) >> 2 > (unsigned __int64)*(unsigned int *)(v16 + 4) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x126,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\pointerinputmediator.cpp",
        v28);
    if ( PointerInputMediator::s_routingFrames )
    {
      v43 = qword_180268D50;
      v44 = qword_180268D48;
      v45 = (__int64 *)PointerInputMediator::s_frameQueue;
    }
    else
    {
      PointerInputMediator::s_routingFrames = 1;
      v42 = v83;
      while ( 1 )
      {
        v43 = qword_180268D50;
        v44 = qword_180268D48;
        v45 = (__int64 *)PointerInputMediator::s_frameQueue;
        if ( !qword_180268D50 )
          break;
        v46 = qword_180268D48 + qword_180268D50;
        v47 = PointerInputMediator::s_frameQueue ? *(_QWORD *)PointerInputMediator::s_frameQueue : 0LL;
        for ( n = qword_180268D48;
              n != v46
           && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 8) + 8 * (n & (*(_QWORD *)(v47 + 16) - 1LL))) + 152LL) != v42;
              ++n )
        {
          ;
        }
        v79 = 0LL;
        v78 = PointerInputMediator::s_frameQueue;
        v80 = n;
        if ( n == v46 )
          break;
        v49 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::operator->(
                &v78,
                v47,
                v46,
                qword_180268D48);
        if ( (__int64)(*(_QWORD *)(v49 + 200) - *(_QWORD *)(v49 + 192)) >> 2 != *(_DWORD *)(v49 + 4) )
          break;
        if ( v45 )
          v50 = *v45;
        else
          v50 = 0LL;
        PointerInputMediator::PointerFrame::PointerFrame(
          &v86,
          *(_QWORD *)(*(_QWORD *)(v50 + 8) + 8 * (n & (*(_QWORD *)(v50 + 16) - 1LL))));
        v79 = 0LL;
        v78 = (__int64)v45;
        v80 = n + 1;
        v84[1] = 0LL;
        v84[0] = v45;
        v84[2] = n;
        std::deque<PointerInputMediator::PointerFrame>::erase(v51, v85, v84, &v78);
        v75 = &v86;
        _Mtx_unlock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
        v82 = 0;
        for ( ii = 0; ii < v87; v29 = 0 )
        {
          v53 = lambda_cbb0572903586b210ab412e06022c998_::operator()_unsigned_long_((__int64 *)&v75, ii);
          v54 = ii + 1;
          if ( ii + 1 < v87 )
          {
            v55 = ii + 1;
            do
            {
              v56 = lambda_cbb0572903586b210ab412e06022c998_::operator()_unsigned_long_((__int64 *)&v75, v54);
              if ( *(_QWORD *)v56 != *(_QWORD *)v53 )
                break;
              if ( *(_BYTE *)(v56 + 16) != *(_BYTE *)(v53 + 16) )
                break;
              if ( ((*(_QWORD *)(v56 + 8) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
                break;
              ++v29;
              v54 = ++v55;
            }
            while ( v55 < v87 );
          }
          v57 = *(char **)(v53 + 8);
          if ( (unsigned __int64)(v57 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            v57 = *(char **)v53;
          PointerInputMediator::RouteInput(
            v86,
            v57,
            (unsigned int)(v29 + 1),
            (unsigned int *)(v89 + 4LL * ii),
            (struct tagTELEMETRY_POINTER_FRAME_TIMES *)v88,
            *(unsigned __int8 *)(v53 + 16));
          ii += v29 + 1;
        }
        std::_Mutex_base::lock((std::_Mutex_base *)&PointerInputMediator::s_frameQueueLock);
        v82 = 1;
        if ( (unsigned __int64)qword_180268CD0 < 0x40 )
          std::deque<PointerInputMediator::PointerFrame>::emplace_back<PointerInputMediator::PointerFrame>(
            PointerInputMediator::s_frameLookaside,
            (__int64)&v86);
        PointerInputMediator::PointerFrame::~PointerFrame((PointerInputMediator::PointerFrame *)&v86);
      }
      PointerInputMediator::s_routingFrames = 0;
    }
    v58 = hSourceHandle;
    if ( hSourceHandle )
    {
      v59 = v44 + v43;
      if ( v45 )
        v60 = *v45;
      else
        v60 = 0LL;
      while ( v44 != v59 )
      {
        if ( **(_DWORD **)(*(_QWORD *)(v60 + 8) + 8 * (v44 & (*(_QWORD *)(v60 + 16) - 1LL))) == v74 )
        {
          if ( v45 )
            v61 = *v45;
          else
            v61 = 0LL;
          v62 = *(_QWORD *)(*(_QWORD *)(v61 + 8) + 8 * (v44 & (*(_QWORD *)(v61 + 16) - 1LL)));
          CurrentProcess = GetCurrentProcess();
          v64 = GetCurrentProcess();
          DuplicateHandle(v64, v58, CurrentProcess, &hSourceHandle, 0, 0, 2u);
          if ( !hSourceHandle )
            MicrosoftTelemetryAssertTriggeredNoArgs(v66, v65, v67);
          v68 = (_QWORD *)std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v62 + 216, v6);
          v72 = v68 + 1;
          if ( (HANDLE)*v68 != v58 || (unsigned __int64)(*v72 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
            MicrosoftTelemetryAssertTriggeredNoArgs(v70, v69, v71);
          wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
            v72,
            hSourceHandle);
          break;
        }
        ++v44;
      }
    }
  }
  std::unique_lock<std::mutex>::~unique_lock<std::mutex>(&v81);
}
