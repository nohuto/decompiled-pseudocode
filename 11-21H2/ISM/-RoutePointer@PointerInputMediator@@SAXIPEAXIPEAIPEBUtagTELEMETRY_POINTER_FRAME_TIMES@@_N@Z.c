/*
 * XREFs of ?RoutePointer@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x1800E3A64
 * Callers:
 *     ?SetManipulationInputTarget@@YAHIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x18007F8F0 (-SetManipulationInputTarget@@YAHIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800DF220 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x1800E1C10 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18004C898 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FailFastOnMissedRouting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D24C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FailFastOnMissedRouting@@@details@wil@@QE.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180080EA8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 *     _lambda_1b129953cda80efb4930f0cde1460e8b_::operator()_unsigned_long_ @ 0x1800E2B28 (_lambda_1b129953cda80efb4930f0cde1460e8b_--operator()_unsigned_long_.c)
 *     ??$emplace_back@AEAI@?$vector@IV?$allocator@I@std@@@std@@QEAAAEAIAEAI@Z @ 0x1800E2ED8 (--$emplace_back@AEAI@-$vector@IV-$allocator@I@std@@@std@@QEAAAEAIAEAI@Z.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800E3190 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediat.c)
 *     ??0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z @ 0x1800E32CC (--0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z.c)
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x1800E37BC (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 *     ?FindFrame@PointerInputMediator@@CA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@I@Z @ 0x1800E39B4 (-FindFrame@PointerInputMediator@@CA-AV-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPo.c)
 *     ?at@?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAAAEAUContactData@PointerInputMediator@@AEBI@Z @ 0x1800E473C (-at@-$unordered_map@IUContactData@PointerInputMediator@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800E4818 (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180101F3C (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PointerInputMediator::RoutePointer(
        int a1,
        void *a2,
        unsigned int a3,
        unsigned int *a4,
        const struct tagTELEMETRY_POINTER_FRAME_TIMES *a5,
        bool a6)
{
  unsigned int *v6; // r15
  unsigned int v7; // r14d
  HANDLE v8; // r13
  unsigned int v10; // r12d
  int v11; // eax
  __int64 v12; // r8
  wil::details::in1diag3 *v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  _DWORD **v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rdx
  int *v22; // r15
  int *v23; // r13
  int v24; // ecx
  _DWORD *i; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  const char *v30; // r9
  unsigned int *v31; // rdi
  unsigned int *v32; // r14
  unsigned int v33; // ecx
  _DWORD *j; // rax
  char v35; // al
  _DWORD *k; // rax
  char v37; // al
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // r9
  _QWORD *v41; // r8
  __int64 v42; // r11
  __int64 v43; // rdx
  __int64 m; // r10
  _QWORD *v45; // rdx
  int v46; // r12d
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // r9
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 n; // rsi
  int v57; // r14d
  unsigned int v58; // edx
  unsigned int v59; // edi
  __int64 v60; // rax
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // r10
  _QWORD *v64; // rdx
  _QWORD *v65; // rax
  __int64 v66; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  _QWORD *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 *v76; // rbx
  unsigned int v77; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE TargetHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v79; // [rsp+50h] [rbp-B0h] BYREF
  int v80; // [rsp+54h] [rbp-ACh]
  __int128 v81; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v82; // [rsp+68h] [rbp-98h]
  unsigned int *v83; // [rsp+70h] [rbp-90h]
  __int64 v84; // [rsp+78h] [rbp-88h]
  _QWORD v85[4]; // [rsp+80h] [rbp-80h] BYREF
  char v86; // [rsp+A0h] [rbp-60h]
  __int64 v87[3]; // [rsp+A8h] [rbp-58h] BYREF
  char v88[24]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v89[3]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int v90; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v91; // [rsp+F4h] [rbp-Ch]
  char v92[176]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v93; // [rsp+1A8h] [rbp+A8h]
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+158h]

  v6 = a4;
  v83 = a4;
  v7 = a3;
  v77 = a3;
  v8 = a2;
  TargetHandle = a2;
  v80 = a1;
  v10 = 0;
  v79 = 0;
  v85[3] = &PointerInputMediator::s_frameQueueLock;
  v86 = 0;
  v11 = _Mtx_lock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
  if ( v11 )
  {
    std::_Throw_C_error(v11);
    __debugbreak();
  }
  v86 = 1;
  PointerInputMediator::FindFrame(&v81, a1);
  v14 = *((_QWORD *)&xmmword_180242FA0 + 1);
  if ( v82 == *((_QWORD *)&xmmword_180242FA0 + 1) + qword_180242FB0 )
  {
LABEL_108:
    _Mtx_unlock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
    return;
  }
  v15 = v81;
  if ( (_QWORD)v81 )
    v15 = *(_QWORD *)v81;
  v16 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8 * (v82 & (*(_QWORD *)(v15 + 16) - 1LL)));
  v84 = *(_QWORD *)(v16 + 152);
  if ( *(_BYTE *)(v16 + 272) )
  {
    v17 = *((_QWORD *)&xmmword_180242FA0 + 1) + qword_180242FB0;
    for ( v85[0] = *((_QWORD *)&xmmword_180242FA0 + 1) + qword_180242FB0; v14 != v17; v17 = v85[0] )
    {
      v18 = *(_QWORD *)(*((_QWORD *)&PointerInputMediator::s_frameQueue + 1) + 8 * (v14 & (xmmword_180242FA0 - 1)));
      if ( *(_DWORD *)v18 == v80 )
        break;
      if ( *(_QWORD *)(v18 + 152) == *(_QWORD *)(v16 + 152) )
      {
        v19 = (_DWORD **)(v18 + 184);
        v20 = *(_QWORD *)(v18 + 192);
        v21 = *(unsigned int *)(v18 + 4);
        if ( (v20 - *(_QWORD *)(v18 + 184)) >> 2 != v21 )
        {
          v22 = *(int **)(v18 + 160);
          v23 = *(int **)(v18 + 168);
          if ( v22 != v23 )
          {
            do
            {
              v24 = *v22;
              v79 = *v22;
              for ( i = *v19; i != *(_DWORD **)(v18 + 192); ++i )
              {
                if ( *i == v24 )
                  goto LABEL_18;
              }
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_FailFastOnMissedRouting>::ReportUsage(
                `wil::Feature<__WilFeatureTraits_Feature_FailFastOnMissedRouting>::GetImpl'::`2'::impl,
                0,
                v12,
                (__int64)v13);
              std::vector<unsigned int>::emplace_back<unsigned int &>(v18 + 184, &v79);
              v26 = std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v18 + 208, &v79);
              *(_QWORD *)v26 = 0LL;
              *(_BYTE *)(v26 + 16) = 0;
LABEL_18:
              ++v22;
            }
            while ( v22 != v23 );
            v20 = *(_QWORD *)(v18 + 192);
            LODWORD(v21) = *(_DWORD *)(v18 + 4);
          }
          v13 = retaddr;
          if ( (v20 - (__int64)*v19) >> 2 != (unsigned int)v21 )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              202LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\point"
                       "erinputmediator.cpp",
              (const char *)retaddr);
        }
      }
      ++v14;
    }
    v8 = TargetHandle;
    v6 = v83;
    v7 = v77;
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
  gsl::details::extent_type<-1>::extent_type<-1>(v85, v7, v12, (__int64)v13);
  if ( v85[0] != -1LL && (v6 || !v85[0]) )
  {
    v31 = v6;
    v32 = &v6[v85[0]];
    if ( v6 != v32 )
    {
      do
      {
        v33 = *v31;
        v77 = *v31;
        for ( j = *(_DWORD **)(v16 + 184); ; ++j )
        {
          if ( j == *(_DWORD **)(v16 + 192) )
          {
            v35 = 0;
            goto LABEL_33;
          }
          if ( *j == v33 )
            break;
        }
        v35 = 1;
LABEL_33:
        if ( v35 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            215LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\pointer"
                     "inputmediator.cpp",
            (const char *)retaddr);
        for ( k = *(_DWORD **)(v16 + 160); ; ++k )
        {
          if ( k == *(_DWORD **)(v16 + 168) )
          {
            v37 = 1;
            goto LABEL_40;
          }
          if ( *k == v33 )
            break;
        }
        v37 = 0;
LABEL_40:
        if ( v37 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            219LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\pointer"
                     "inputmediator.cpp",
            (const char *)retaddr);
        std::vector<unsigned int>::emplace_back<unsigned int &>(v16 + 184, &v77);
        v38 = std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v16 + 208, &v77);
        *(_QWORD *)v38 = v8;
        *(_BYTE *)(v38 + 16) = a6;
        ++v31;
      }
      while ( v31 != v32 );
      v6 = v83;
    }
    if ( (__int64)(*(_QWORD *)(v16 + 192) - *(_QWORD *)(v16 + 184)) >> 2 > (unsigned __int64)*(unsigned int *)(v16 + 4) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        226LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\pointerinputmediator.cpp",
        v30);
    if ( PointerInputMediator::s_routingFrames )
    {
      v39 = qword_180242FB0;
      v40 = *((_QWORD *)&xmmword_180242FA0 + 1);
      v41 = (_QWORD *)PointerInputMediator::s_frameQueue;
    }
    else
    {
      PointerInputMediator::s_routingFrames = 1;
      while ( 1 )
      {
        v39 = qword_180242FB0;
        v40 = *((_QWORD *)&xmmword_180242FA0 + 1);
        v41 = (_QWORD *)PointerInputMediator::s_frameQueue;
        if ( !qword_180242FB0 )
          break;
        v42 = *((_QWORD *)&xmmword_180242FA0 + 1) + qword_180242FB0;
        v43 = (_QWORD)PointerInputMediator::s_frameQueue ? *(_QWORD *)PointerInputMediator::s_frameQueue : 0LL;
        for ( m = *((_QWORD *)&xmmword_180242FA0 + 1);
              m != v42
           && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) + 8 * (m & (*(_QWORD *)(v43 + 16) - 1LL))) + 152LL) != v84;
              ++m )
        {
          ;
        }
        v81 = 0LL;
        if ( (_QWORD)PointerInputMediator::s_frameQueue )
        {
          v45 = *(_QWORD **)PointerInputMediator::s_frameQueue;
          if ( *(_QWORD *)PointerInputMediator::s_frameQueue )
            v45 = (_QWORD *)*v45;
          *(_QWORD *)&v81 = v45;
        }
        else
        {
          v45 = (_QWORD *)v81;
        }
        v82 = m;
        v46 = v10 | 1;
        if ( m == v42 )
          break;
        v47 = v45 ? *v45 : 0LL;
        v48 = *(_QWORD *)(*(_QWORD *)(v47 + 8) + 8 * (m & (*(_QWORD *)(v47 + 16) - 1LL)));
        v49 = v45 ? *v45 : 0LL;
        if ( (__int64)(*(_QWORD *)(v48 + 192) - *(_QWORD *)(v48 + 184)) >> 2 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 8) + 8 * (m & (*(_QWORD *)(v49 + 16) - 1LL)))
                                                                                          + 4LL) )
          break;
        v10 = v46 & 0xFFFFFFFE;
        if ( v45 )
          v50 = (_QWORD *)*v45;
        else
          v50 = 0LL;
        PointerInputMediator::PointerFrame::PointerFrame((__int64)&v90, *(_QWORD *)(v50[1] + 8 * (m & (v50[2] - 1LL))));
        v51 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
                v87,
                (__int64)&v81);
        v52 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
                v85,
                (__int64)v51);
        ++v52[2];
        std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
          &v81,
          (__int64)v52);
        v54 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>(
                v89,
                v53);
        std::deque<PointerInputMediator::PointerFrame>::erase(v55, v88, v54, &v81);
        TargetHandle = &v90;
        _Mtx_unlock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
        v86 = 0;
        for ( n = 0LL; (unsigned int)n < v91; n = (unsigned int)(v57 + n + 1) )
        {
          v39 = lambda_1b129953cda80efb4930f0cde1460e8b_::operator()_unsigned_long_((__int64 *)&TargetHandle, n);
          v57 = 0;
          v58 = n + 1;
          if ( (int)n + 1 < v91 )
          {
            v59 = n + 1;
            do
            {
              v60 = lambda_1b129953cda80efb4930f0cde1460e8b_::operator()_unsigned_long_((__int64 *)&TargetHandle, v58);
              if ( *(_QWORD *)v60 != *(_QWORD *)v39 )
                break;
              if ( *(_BYTE *)(v60 + 16) != *(_BYTE *)(v39 + 16) )
                break;
              if ( ((*(_QWORD *)(v60 + 8) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
                break;
              ++v57;
              v58 = ++v59;
            }
            while ( v59 < v91 );
          }
          v61 = *(_QWORD *)(v39 + 8);
          if ( (unsigned __int64)(v61 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            v61 = *(_QWORD *)v39;
          NtUserSetManipulationInputTarget(
            v90,
            v61,
            (unsigned int)(v57 + 1),
            v93 + 4 * n,
            v92,
            *(unsigned __int8 *)(v39 + 16));
        }
        v62 = _Mtx_lock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
        if ( v62 )
        {
          std::_Throw_C_error(v62);
          break;
        }
        v86 = 1;
        PointerInputMediator::PointerFrame::~PointerFrame((PointerInputMediator::PointerFrame *)&v90);
      }
      PointerInputMediator::s_routingFrames = 0;
    }
    if ( v8 )
    {
      v63 = v40 + v39;
      if ( v41 )
        v64 = (_QWORD *)*v41;
      else
        v64 = 0LL;
      while ( v40 != v63 && **(_DWORD **)(v64[1] + 8 * (v40 & (v64[2] - 1LL))) != v80 )
        ++v40;
      v65 = 0LL;
      if ( v41 )
      {
        v65 = (_QWORD *)*v41;
        if ( *v41 )
          v65 = (_QWORD *)*v65;
      }
      if ( v40 != v63 )
      {
        if ( v65 )
          v65 = (_QWORD *)*v65;
        v66 = *(_QWORD *)(v65[1] + 8 * (v40 & (v65[2] - 1LL)));
        CurrentProcess = GetCurrentProcess();
        v68 = GetCurrentProcess();
        DuplicateHandle(v68, v8, CurrentProcess, &TargetHandle, 0, 0, 2u);
        if ( !TargetHandle )
          MicrosoftTelemetryAssertTriggeredNoArgs(v70, v69, v71);
        v72 = (_QWORD *)std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v66 + 208, v6);
        v76 = v72 + 1;
        if ( (HANDLE)*v72 != v8 || (unsigned __int64)(*v76 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          MicrosoftTelemetryAssertTriggeredNoArgs(v74, v73, v75);
        wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
          v76,
          (__int64)TargetHandle);
      }
    }
    goto LABEL_108;
  }
  _o_terminate(v28, v27, v29, v30);
  PointerInputMediator::RoutePointer_::_1_::dtor_0();
}
