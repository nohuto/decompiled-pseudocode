/*
 * XREFs of _lambda_31520e38682400c193ecfa4924368fd9_::operator() @ 0x180074E7C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___::Run @ 0x180074DB0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e77611733156e07a25f619698f3ee1ef___--Run.c)
 * Callees:
 *     ?_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ @ 0x180074E38 (-_FixDialogsIfNeeded@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180075104 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x1800778A4 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007CC80 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x18022B030 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 *     WPP_SF_Ld @ 0x1802F1954 (WPP_SF_Ld.c)
 *     ??$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z @ 0x18030C51C (--$ClosedFrameShown@PEBG@CFramePresentationTelemetry@@SAX$$QEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_31520e38682400c193ecfa4924368fd9_::operator()(unsigned int *a1)
{
  unsigned int *v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rcx
  int v6; // r15d
  char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v13; // [rsp+30h] [rbp-29h] BYREF
  __int64 v14; // [rsp+38h] [rbp-21h]
  __int128 v15; // [rsp+40h] [rbp-19h] BYREF
  LPVOID lpMem[2]; // [rsp+50h] [rbp-9h]
  __int128 v17; // [rsp+60h] [rbp+7h] BYREF
  __int64 v18; // [rsp+70h] [rbp+17h]
  int v19; // [rsp+78h] [rbp+1Fh]
  __int128 *v20; // [rsp+80h] [rbp+27h]
  __int64 v21; // [rsp+C0h] [rbp+67h] BYREF
  char v22; // [rsp+C8h] [rbp+6Fh] BYREF

  v2 = a1 + 4;
  v3 = *((_QWORD *)a1 + 8);
  if ( *(_DWORD *)v3 == 1 )
  {
    LOBYTE(lpMem[1]) = 0;
    LODWORD(v15) = *(_DWORD *)(v3 + 40);
    *((_QWORD *)&v15 + 1) = *(_QWORD *)(v3 + 48);
    if ( *(_BYTE *)(v3 + 64) )
      wil::details::StoredCallContextInfo::AssignMessage(
        (wil::details::StoredCallContextInfo *)&v15,
        *(const unsigned __int16 **)(v3 + 56));
    else
      lpMem[0] = *(LPVOID *)(v3 + 56);
    *(_QWORD *)&v17 = 0LL;
    *((_QWORD *)&v17 + 1) = v2;
    v18 = 0LL;
    v19 = 0;
    v20 = &v15;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)&v17);
  }
  else
  {
    v15 = 0LL;
    *(_OWORD *)lpMem = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0;
    v20 = 0LL;
  }
  if ( !IsWindowVisible(*(HWND *)(*((_QWORD *)a1 + 1) + 128LL)) )
  {
    v10 = *((_QWORD *)a1 + 1);
    if ( **(_QWORD **)(v10 + 104) )
    {
      if ( !*a1 )
      {
        v21 = *(_QWORD *)(v10 + 608);
        CFramePresentationTelemetry::ClosedFrameShown<unsigned short const *>(&v21);
        ShowWindowAsync(*(HWND *)(*((_QWORD *)a1 + 1) + 128LL), 4);
      }
    }
  }
  if ( *((_BYTE *)a1 + 5) )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 208LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
      0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 56LL))(
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
    *a1);
  if ( *((_BYTE *)a1 + 5) )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 120LL) + 208LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 120LL),
      1LL);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_2c90db7e24993e53cb0c5ea1cdf0809e_Traceguids,
      *a1,
      *(_DWORD *)(*((_QWORD *)a1 + 1) + 48LL));
  v4 = *((_QWORD *)a1 + 1);
  v5 = **(_QWORD **)(v4 + 104);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 208LL))(
      v5,
      *(_QWORD *)(v4 + 128),
      (unsigned int)(*(_DWORD *)(v4 + 224) != 0) + 4);
    v4 = *((_QWORD *)a1 + 1);
  }
  v6 = *a1;
  v13 = v4;
  v14 = 0LL;
  v7 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 64LL))(v4, &v21);
  v8 = 0LL;
  if ( &v22 != v7 )
  {
    v8 = *(_QWORD *)v7;
    *(_QWORD *)v7 = 0LL;
  }
  v14 = v8;
  v9 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v6 == *(_DWORD *)(v4 + 224) )
    *(_BYTE *)(v4 + 552) = 1;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)&v13);
  CFrameApplicationPresentation::_FixDialogsIfNeeded(*((CFrameApplicationPresentation **)a1 + 1));
  if ( *((_BYTE *)a1 + 4) )
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr + 24LL))(
      CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
      *(_QWORD *)(*((_QWORD *)a1 + 1) + 128LL),
      0LL);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v2);
  if ( v19 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v17);
  if ( LOBYTE(lpMem[1]) )
  {
    v11 = lpMem[0];
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v11);
  }
}
