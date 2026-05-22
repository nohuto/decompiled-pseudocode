/*
 * XREFs of ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x180067818
 * Callers:
 *     ?SetManipulationInputTarget@@YAHIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1800A9110 (-SetManipulationInputTarget@@YAHIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x180107920 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x180109D20 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18005A9C4 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _lambda_cbb0572903586b210ab412e06022c998_::operator()_unsigned_long_ @ 0x18006750C (_lambda_cbb0572903586b210ab412e06022c998_--operator()_unsigned_long_.c)
 *     ??$emplace_back@UPointerFrame@PointerInputMediator@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?A_T$$QEAUPointerFrame@PointerInputMediator@@@Z @ 0x180067540 (--$emplace_back@UPointerFrame@PointerInputMediator@@@-$deque@UPointerFrame@PointerInputMediator@.c)
 *     ?RouteInput@PointerInputMediator@@CAXIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x1800677B0 (-RouteInput@PointerInputMediator@@CAXIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18006DB30 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     memmove_0 @ 0x1800793AC (memmove_0.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800AA804 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800B27E0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800CA67C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??$emplace_back@AEAI@?$vector@IV?$allocator@I@std@@@std@@QEAA?A_TAEAI@Z @ 0x18010B12C (--$emplace_back@AEAI@-$vector@IV-$allocator@I@std@@@std@@QEAA-A_TAEAI@Z.c)
 *     ??0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z @ 0x18010B3F8 (--0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18010B6EC (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x18010B790 (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 *     ??C?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEBAPEAUPointerFrame@PointerInputMediator@@XZ @ 0x18010B8F0 (--C-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@s.c)
 *     ?FindFrame@PointerInputMediator@@CA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@I@Z @ 0x18010B97C (-FindFrame@PointerInputMediator@@CA-AV-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPo.c)
 *     ?at@?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAAAEAUContactData@PointerInputMediator@@AEBI@Z @ 0x18010C058 (-at@-$unordered_map@IUContactData@PointerInputMediator@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x18010C164 (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PointerInputMediator::RoutePointers(
        unsigned int a1,
        void *a2,
        int a3,
        unsigned int *a4,
        const struct tagTELEMETRY_POINTER_FRAME_TIMES *a5,
        bool a6)
{
  unsigned int *v6; // r15
  unsigned int v7; // r14d
  HANDLE v8; // r12
  __int64 v10; // r8
  wil::details::in1diag3 *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rcx
  unsigned int *v19; // r14
  unsigned int *v20; // r12
  __int64 v21; // rcx
  _DWORD *i; // rax
  __int64 v23; // rax
  gsl::details *v24; // rcx
  const char *v25; // r9
  int *v26; // r14
  unsigned int *v27; // r13
  __int64 v28; // r15
  int v29; // r12d
  _DWORD *j; // rbx
  const char *v31; // r9
  _DWORD *k; // rax
  char v33; // al
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // r10
  __int64 v37; // r9
  __int64 *v38; // rbx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 m; // rdi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  unsigned int n; // esi
  __int64 v46; // rbx
  int v47; // r14d
  unsigned int v48; // edx
  unsigned int v49; // edi
  __int64 v50; // rax
  char *v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rcx
  _QWORD *v61; // rbx
  int v63; // [rsp+44h] [rbp-BCh] BYREF
  int v64; // [rsp+48h] [rbp-B8h]
  HANDLE TargetHandle; // [rsp+50h] [rbp-B0h] BYREF
  int v66; // [rsp+58h] [rbp-A8h]
  unsigned int v67; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v68; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+68h] [rbp-98h]
  __int64 v70; // [rsp+70h] [rbp-90h]
  unsigned int *v71; // [rsp+78h] [rbp-88h]
  void *v72; // [rsp+80h] [rbp-80h] BYREF
  char v73; // [rsp+88h] [rbp-78h]
  __int64 v74; // [rsp+90h] [rbp-70h]
  __int64 v75; // [rsp+98h] [rbp-68h]
  _QWORD v76[3]; // [rsp+A0h] [rbp-60h] BYREF
  char v77[24]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v78; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v79; // [rsp+D4h] [rbp-2Ch]
  char v80[184]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v81; // [rsp+190h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v6 = a4;
  v71 = a4;
  v7 = a3;
  v64 = a3;
  v8 = a2;
  TargetHandle = a2;
  v72 = &PointerInputMediator::s_frameQueueLock;
  std::_Mutex_base::lock((std::_Mutex_base *)&PointerInputMediator::s_frameQueueLock);
  v73 = 1;
  PointerInputMediator::FindFrame(&v68, a1);
  if ( v70 != qword_1802780D0 + qword_1802780C8 )
  {
    if ( v68 )
      v12 = *(_QWORD *)v68;
    else
      v12 = 0LL;
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8 * (v70 & (*(_QWORD *)(v12 + 16) - 1LL)));
    v74 = v13;
    v75 = *(_QWORD *)(v13 + 152);
    if ( *(_BYTE *)(v13 + 160) )
    {
      *(_BYTE *)(v13 + 160) = 0;
      v14 = qword_1802780C8;
      v15 = qword_1802780C8 + qword_1802780D0;
      v68 = qword_1802780C8 + qword_1802780D0;
      while ( v14 != v15 )
      {
        v16 = *(_QWORD *)(qword_1802780B8 + 8 * (v14 & (qword_1802780C0 - 1)));
        if ( *(_DWORD *)v16 == a1 )
          break;
        if ( *(_QWORD *)(v16 + 152) == *(_QWORD *)(v13 + 152) )
        {
          v17 = (__int64)(*(_QWORD *)(v16 + 200) - *(_QWORD *)(v16 + 192)) >> 2;
          if ( v17 != *(_DWORD *)(v16 + 4) )
          {
            if ( *(int *)(v16 + 164) <= 0 )
            {
              v63 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgs(v17, 0x20000LL, 218LL);
            }
            if ( (*(_DWORD *)(v16 + 164))-- == 1 )
            {
              v19 = *(unsigned int **)(v16 + 168);
              v20 = *(unsigned int **)(v16 + 176);
              if ( v19 != v20 )
              {
                do
                {
                  v21 = *v19;
                  v67 = *v19;
                  for ( i = *(_DWORD **)(v16 + 192); i != *(_DWORD **)(v16 + 200); ++i )
                  {
                    if ( *i == (_DWORD)v21 )
                      goto LABEL_21;
                  }
                  v66 = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgs(v21, 0x20000LL, 238LL);
                  std::vector<unsigned int>::emplace_back<unsigned int &>(v16 + 192, &v67);
                  v23 = std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v16 + 216, &v67);
                  *(_QWORD *)v23 = 0LL;
                  *(_WORD *)(v23 + 16) = 256;
LABEL_21:
                  ++v19;
                }
                while ( v19 != v20 );
                v13 = v74;
                v15 = v68;
              }
              v11 = retaddr;
              if ( (__int64)(*(_QWORD *)(v16 + 200) - *(_QWORD *)(v16 + 192)) >> 2 != *(_DWORD *)(v16 + 4) )
                wil::details::in1diag3::_FailFast_Unexpected(
                  retaddr,
                  (void *)0xF8,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\point"
                       "erinputmediator.cpp",
                  (const char *)retaddr);
            }
          }
        }
        ++v14;
      }
      v8 = TargetHandle;
      v6 = v71;
      v7 = v64;
    }
    *(_OWORD *)(v13 + 8) = *(_OWORD *)a5;
    *(_OWORD *)(v13 + 24) = *((_OWORD *)a5 + 1);
    *(_OWORD *)(v13 + 40) = *((_OWORD *)a5 + 2);
    *(_OWORD *)(v13 + 56) = *((_OWORD *)a5 + 3);
    *(_OWORD *)(v13 + 72) = *((_OWORD *)a5 + 4);
    *(_OWORD *)(v13 + 88) = *((_OWORD *)a5 + 5);
    *(_OWORD *)(v13 + 104) = *((_OWORD *)a5 + 6);
    *(_OWORD *)(v13 + 120) = *((_OWORD *)a5 + 7);
    *(_OWORD *)(v13 + 136) = *((_OWORD *)a5 + 8);
    gsl::details::extent_type<-1>::extent_type<-1>(&v68, v7, v10, (__int64)v11);
    if ( v68 == -1 || !v6 && v68 )
    {
      gsl::details::terminate(v24);
      __debugbreak();
    }
    v26 = (int *)v6;
    v27 = &v6[v68];
    if ( v6 != v27 )
    {
      v28 = v13 + 216;
      do
      {
        v29 = *v26;
        v63 = *v26;
        for ( j = *(_DWORD **)(v13 + 192); j != *(_DWORD **)(v13 + 200); ++j )
        {
          if ( *j == v29 )
          {
            if ( !*(_BYTE *)(std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v13 + 216, &v63) + 17) )
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x10F,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\pointer"
                     "inputmediator.cpp",
                v31);
            v64 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgs(0LL, 0x20000LL, 278LL);
            memmove_0(j, j + 1, *(_QWORD *)(v13 + 200) - (_QWORD)(j + 1));
            *(_QWORD *)(v13 + 200) -= 4LL;
            v28 = v13 + 216;
            break;
          }
        }
        for ( k = *(_DWORD **)(v13 + 168); ; ++k )
        {
          if ( k == *(_DWORD **)(v13 + 176) )
          {
            v33 = 1;
            goto LABEL_43;
          }
          if ( *k == v29 )
            break;
        }
        v33 = 0;
LABEL_43:
        if ( v33 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x11E,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\pointerinputmediator.cpp",
            v25);
        std::vector<unsigned int>::emplace_back<unsigned int &>(v13 + 192, &v63);
        v34 = std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v28, &v63);
        v8 = TargetHandle;
        *(_QWORD *)v34 = TargetHandle;
        *(_BYTE *)(v34 + 16) = a6;
        *(_BYTE *)(v34 + 17) = 0;
        ++v26;
      }
      while ( v26 != (int *)v27 );
      v6 = v71;
    }
    if ( (__int64)(*(_QWORD *)(v13 + 200) - *(_QWORD *)(v13 + 192)) >> 2 > (unsigned __int64)*(unsigned int *)(v13 + 4) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x126,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\pointerinputmediator.cpp",
        v25);
    if ( PointerInputMediator::s_routingFrames )
    {
      v36 = qword_1802780D0;
      v37 = qword_1802780C8;
      v38 = (__int64 *)PointerInputMediator::s_frameQueue;
    }
    else
    {
      PointerInputMediator::s_routingFrames = 1;
      v35 = v75;
      while ( 1 )
      {
        v36 = qword_1802780D0;
        v37 = qword_1802780C8;
        v38 = (__int64 *)PointerInputMediator::s_frameQueue;
        if ( !qword_1802780D0 )
          break;
        v39 = qword_1802780C8 + qword_1802780D0;
        v40 = PointerInputMediator::s_frameQueue ? *(_QWORD *)PointerInputMediator::s_frameQueue : 0LL;
        for ( m = qword_1802780C8;
              m != v39
           && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) + 8 * (m & (*(_QWORD *)(v40 + 16) - 1LL))) + 152LL) != v35;
              ++m )
        {
          ;
        }
        v69 = 0LL;
        v68 = PointerInputMediator::s_frameQueue;
        v70 = m;
        if ( m == v39 )
          break;
        v42 = std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::operator->(
                &v68,
                v40,
                v39,
                qword_1802780C8);
        if ( (__int64)(*(_QWORD *)(v42 + 200) - *(_QWORD *)(v42 + 192)) >> 2 != *(_DWORD *)(v42 + 4) )
          break;
        if ( v38 )
          v43 = *v38;
        else
          v43 = 0LL;
        PointerInputMediator::PointerFrame::PointerFrame(
          &v78,
          *(_QWORD *)(*(_QWORD *)(v43 + 8) + 8 * (m & (*(_QWORD *)(v43 + 16) - 1LL))));
        v69 = 0LL;
        v68 = (__int64)v38;
        v70 = m + 1;
        v76[1] = 0LL;
        v76[0] = v38;
        v76[2] = m;
        std::deque<PointerInputMediator::PointerFrame>::erase(v44, v77, v76, &v68);
        TargetHandle = &v78;
        _Mtx_unlock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
        v73 = 0;
        for ( n = 0; n < v79; n += v47 + 1 )
        {
          v46 = lambda_cbb0572903586b210ab412e06022c998_::operator()_unsigned_long_((__int64 *)&TargetHandle, n);
          v47 = 0;
          v48 = n + 1;
          if ( n + 1 < v79 )
          {
            v49 = n + 1;
            do
            {
              v50 = lambda_cbb0572903586b210ab412e06022c998_::operator()_unsigned_long_((__int64 *)&TargetHandle, v48);
              if ( *(_QWORD *)v50 != *(_QWORD *)v46 )
                break;
              if ( *(_BYTE *)(v50 + 16) != *(_BYTE *)(v46 + 16) )
                break;
              if ( ((*(_QWORD *)(v50 + 8) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
                break;
              ++v47;
              v48 = ++v49;
            }
            while ( v49 < v79 );
          }
          v51 = *(char **)(v46 + 8);
          if ( (unsigned __int64)(v51 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            v51 = *(char **)v46;
          PointerInputMediator::RouteInput(
            v78,
            v51,
            (unsigned int)(v47 + 1),
            (unsigned int *)(v81 + 4LL * n),
            (struct tagTELEMETRY_POINTER_FRAME_TIMES *)v80,
            *(unsigned __int8 *)(v46 + 16));
        }
        std::_Mutex_base::lock((std::_Mutex_base *)&PointerInputMediator::s_frameQueueLock);
        v73 = 1;
        if ( (unsigned __int64)qword_180278058 < 0x40 )
          std::deque<PointerInputMediator::PointerFrame>::emplace_back<PointerInputMediator::PointerFrame>(
            PointerInputMediator::s_frameLookaside,
            (__int64)&v78);
        PointerInputMediator::PointerFrame::~PointerFrame((PointerInputMediator::PointerFrame *)&v78);
      }
      PointerInputMediator::s_routingFrames = 0;
      v6 = v71;
    }
    if ( v8 )
    {
      v52 = v37 + v36;
      if ( v38 )
        v53 = *v38;
      else
        v53 = 0LL;
      while ( v37 != v52 )
      {
        if ( **(_DWORD **)(*(_QWORD *)(v53 + 8) + 8 * (v37 & (*(_QWORD *)(v53 + 16) - 1LL))) == a1 )
        {
          if ( v38 )
            v54 = *v38;
          else
            v54 = 0LL;
          v55 = *(_QWORD *)(*(_QWORD *)(v54 + 8) + 8 * (v37 & (*(_QWORD *)(v54 + 16) - 1LL)));
          CurrentProcess = GetCurrentProcess();
          v57 = GetCurrentProcess();
          DuplicateHandle(v57, v8, CurrentProcess, &TargetHandle, 0, 0, 2u);
          if ( !TargetHandle )
            MicrosoftTelemetryAssertTriggeredArgs(v58, 0x20000LL, 416LL);
          v59 = (_QWORD *)std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v55 + 216, v6);
          v61 = v59 + 1;
          if ( (HANDLE)*v59 != v8 || (unsigned __int64)(*v61 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
            MicrosoftTelemetryAssertTriggeredArgs(v60, 0x20000LL, 419LL);
          wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
            v61,
            TargetHandle);
          break;
        }
        ++v37;
      }
    }
  }
  std::unique_lock<std::mutex>::~unique_lock<std::mutex>(&v72);
}
