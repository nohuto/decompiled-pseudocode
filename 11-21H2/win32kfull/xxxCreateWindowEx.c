/*
 * XREFs of xxxCreateWindowEx @ 0x1C0043E80
 * Callers:
 *     NtUserCreateWindowEx @ 0x1C00657B0 (NtUserCreateWindowEx.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C0080464 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00D22F8 (xxxCreateWindowStation.c)
 *     xxxCsDdeInitialize @ 0x1C010D64C (xxxCsDdeInitialize.c)
 *     xxxAddShadow @ 0x1C012DDE0 (xxxAddShadow.c)
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z @ 0x1C0002DA0 (-TraceChildWindowDpiTelemetry@@YAXPEAUtagWND@@0W4_CHILD_WINDOW_DPI_TELEMETRY@@@Z.c)
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     SetVisible @ 0x1C001FE88 (SetVisible.c)
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ConstrainWindowSIZERECT @ 0x1C0025550 (ConstrainWindowSIZERECT.c)
 *     PtiCurrentShared @ 0x1C00418E4 (PtiCurrentShared.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0048EF8 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x1C00490B4 (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     GetRedirectionBitmap @ 0x1C0049330 (GetRedirectionBitmap.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C004D894 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C004EC00 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     xxxUpdateInputHangInfo @ 0x1C00574C0 (xxxUpdateInputHangInfo.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C005F8D8 (-HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z.c)
 *     DereferenceClass @ 0x1C005FE40 (DereferenceClass.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0060FF4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     RegisterDefaultClass @ 0x1C0061D64 (RegisterDefaultClass.c)
 *     xxxCheckFullScreen @ 0x1C0061F88 (xxxCheckFullScreen.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C006355C (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _DestroyMenu @ 0x1C0063B20 (_DestroyMenu.c)
 *     SetTiledRect @ 0x1C006458C (SetTiledRect.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0064708 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     xxxAdjustSize @ 0x1C00686A8 (xxxAdjustSize.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C006986C (DwmAsyncChildStyleChange.c)
 *     ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x1C006A534 (-ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z.c)
 *     DwmChildRectChange @ 0x1C006BCDC (DwmChildRectChange.c)
 *     CalcWindowFullScreen @ 0x1C006C0E8 (CalcWindowFullScreen.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     NeedsWindowEdge @ 0x1C006DC54 (NeedsWindowEdge.c)
 *     GetInheritedMonitor @ 0x1C006F4F4 (GetInheritedMonitor.c)
 *     LinkWindow @ 0x1C006F9A0 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     GetClassPtr @ 0x1C0070980 (GetClassPtr.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     UnlinkWindow @ 0x1C0072CAC (UnlinkWindow.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     xxxInheritWindowMonitor @ 0x1C0075834 (xxxInheritWindowMonitor.c)
 *     ValidateNewParent @ 0x1C0075A78 (ValidateNewParent.c)
 *     IsTopLevelParent @ 0x1C0075B70 (IsTopLevelParent.c)
 *     ValidateParentDepth @ 0x1C0075C2C (ValidateParentDepth.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C007709C (xxxClientAllocWindowClassExtraBytes.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007B464 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     MapClientNeuterToClientPfn @ 0x1C007F75C (MapClientNeuterToClientPfn.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C0080464 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C0081DAC (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     PWInsertAfter @ 0x1C0082404 (PWInsertAfter.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C0082554 (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0082580 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     GetNonChildAncestor @ 0x1C00825AC (GetNonChildAncestor.c)
 *     DwmAsyncOwnerChange @ 0x1C00825E4 (DwmAsyncOwnerChange.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0085304 (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     DwmAsyncChildCreate @ 0x1C0098CB4 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C0098E00 (DwmGetClassStyle.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C009AF58 (UpdateTopLevelWindowDPITransform.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C009CA7C (SetWindowSubtreeCoreWindowStatus.c)
 *     IsImmersiveAppIORestricted @ 0x1C009CB44 (IsImmersiveAppIORestricted.c)
 *     IsValidBandForProcess @ 0x1C009D1C0 (IsValidBandForProcess.c)
 *     zzzAttachThreadInput @ 0x1C009D530 (zzzAttachThreadInput.c)
 *     xxxCreateClassSmIcon @ 0x1C00A2E38 (xxxCreateClassSmIcon.c)
 *     xxxClientLoadMenu @ 0x1C00A3310 (xxxClientLoadMenu.c)
 *     xxxLoadUserApiHook @ 0x1C00A4130 (xxxLoadUserApiHook.c)
 *     xxxGetSystemMenu @ 0x1C00BC098 (xxxGetSystemMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00BC910 (RtlInitUnicodeStringOrId.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00C20C0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C00C2450 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00CA760 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     SetMinimize @ 0x1C00CB6A0 (SetMinimize.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00E3FF8 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00E7390 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     RtlInitLargeAnsiString @ 0x1C00E8A3C (RtlInitLargeAnsiString.c)
 *     xxxSendSizeMessage @ 0x1C00F2578 (xxxSendSizeMessage.c)
 *     GetThreadDesktopWindow @ 0x1C00F26A0 (GetThreadDesktopWindow.c)
 *     RECTFromSIZERECT @ 0x1C00F512C (RECTFromSIZERECT.c)
 *     ClassLock @ 0x1C00F56D8 (ClassLock.c)
 *     CheckGrantedAccess @ 0x1C00F5C8C (CheckGrantedAccess.c)
 *     ReferenceClass @ 0x1C00F8130 (ReferenceClass.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C00F8378 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00FD674 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00FD738 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00FDE78 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1C00FE6DC (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     ?IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z @ 0x1C00FECFC (-IsChildWindowDpiIsolationEnabled@@YA_NPEAUtagWND@@0@Z.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00FF710 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     GetAppCompatFlags @ 0x1C01027E0 (GetAppCompatFlags.c)
 *     RegisterIconTitleClass @ 0x1C0104B1C (RegisterIconTitleClass.c)
 *     ValidateOwnerDepth @ 0x1C0107718 (ValidateOwnerDepth.c)
 *     IsValidBand @ 0x1C0107F88 (IsValidBand.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C01095CC (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     UserGetLastError @ 0x1C0113B5C (UserGetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0159CDC (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C015A258 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C015A278 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     _lambda_fcfb12fcc043a8c73fe9205729fe4b4e_::operator() @ 0x1C015C28C (_lambda_fcfb12fcc043a8c73fe9205729fe4b4e_--operator().c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ??1AtomicExecutionCheck@@QEAA@XZ @ 0x1C01CC410 (--1AtomicExecutionCheck@@QEAA@XZ.c)
 *     GetTopMostInsertAfter @ 0x1C01CC97C (GetTopMostInsertAfter.c)
 *     HasMessageRootWindow @ 0x1C0210758 (HasMessageRootWindow.c)
 *     ?TraceLoggingCreateWindowFailed@@YAXI_K@Z @ 0x1C021E54C (-TraceLoggingCreateWindowFailed@@YAXI_K@Z.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C0238468 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C0238BAC (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     _W32ExceptionHandler @ 0x1C025A1E4 (_W32ExceptionHandler.c)
 */

__int64 __fastcall xxxCreateWindowEx(
        int a1,
        wchar_t *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        struct tagWND *a10,
        __int64 a11,
        void *a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        int a16,
        __int64 a17)
{
  struct tagWND *ThreadDesktopWindow; // r13
  int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebx
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // edi
  int v27; // edx
  __int64 ProcessSequenceNumber; // r12
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  AtomicExecutionCheck *v32; // rcx
  __int64 v34; // rcx
  unsigned int v35; // r14d
  __int64 v36; // rbx
  __int64 *ClassPtr; // rax
  wchar_t *v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // r8
  unsigned int v41; // r14d
  __int64 v42; // rax
  ULONG_PTR v43; // r14
  tagObjLock *v44; // rax
  unsigned int CurrentThreadDpiHostingBehavior; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  struct tagWND *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rcx
  int v52; // ebx
  __int64 v53; // r8
  int v54; // ecx
  int v55; // edx
  __int64 v56; // rbx
  __int64 *v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdx
  int v60; // eax
  LONG v61; // ebx
  LONG v62; // edi
  _QWORD *v63; // rax
  _QWORD *v64; // rax
  LONG v65; // eax
  LONG v66; // ecx
  int v67; // edx
  int v68; // eax
  __int64 *InheritedMonitor; // r9
  __int64 v70; // rcx
  _DWORD *v71; // rax
  _DWORD *v72; // rcx
  __int64 v73; // r8
  struct _KPROCESS *v74; // rbx
  int *v75; // rax
  void *v76; // rax
  char v77; // di
  __int64 v78; // rax
  SIZE_T v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // r8
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // r8
  int v87; // ebx
  __int64 v88; // rdx
  int AppCompatFlags; // eax
  char v90; // bl
  __int64 v91; // r8
  int v92; // eax
  __int64 ThreadWin32Thread; // rax
  int v94; // eax
  int v95; // r13d
  __int32 v96; // edi
  int v97; // r12d
  __int32 v98; // ebx
  __int32 v99; // r12d
  __int32 v100; // edi
  int v101; // r9d
  __int64 v102; // rdx
  int v103; // ecx
  __int64 v104; // rcx
  struct tagMONITOR *v105; // rax
  __int64 v106; // rbx
  __int64 v107; // rcx
  _DWORD *v108; // rax
  _DWORD *v109; // rcx
  _DWORD *v110; // rax
  __int32 v111; // edx
  __int16 v112; // ax
  int v113; // eax
  _DWORD *v114; // rcx
  __int32 v115; // eax
  unsigned __int64 v116; // xmm0_8
  int v117; // r12d
  int v118; // edi
  _DWORD *v119; // rcx
  __int32 v120; // eax
  __int64 v121; // rcx
  char v122; // al
  __int64 v123; // r12
  ULONG_PTR v124; // rcx
  __int64 v125; // rax
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  void *v128; // rcx
  char v129; // di
  __int64 v130; // rcx
  struct tagWND *NonChildAncestor; // rdi
  ULONG_PTR v132; // rbx
  __int64 v133; // rdx
  __int64 v134; // rcx
  unsigned int v135; // eax
  int v136; // edx
  __int64 v137; // rax
  __int64 KernelEvent; // rax
  struct tagWND *v139; // rcx
  ULONG_PTR v140; // rdi
  __int64 v141; // rdx
  __int64 v142; // rbx
  unsigned int v143; // eax
  NTSTATUS v144; // eax
  ULONG v145; // eax
  __int64 v146; // rcx
  struct tagWND *v147; // rdx
  __int64 v148; // rax
  __int64 v149; // rcx
  struct tagWND *v150; // rdx
  __int64 v151; // rcx
  int v152; // eax
  int v153; // eax
  __int64 v154; // rax
  __int64 *v155; // rbx
  __int64 v156; // rcx
  __int64 v157; // rdx
  _DWORD *v158; // rax
  _DWORD *v159; // rcx
  _DWORD *v160; // rax
  int v161; // eax
  __int64 v162; // rcx
  __int64 StyleWindow; // rbx
  __int64 CacheDC; // rax
  __int64 v165; // rcx
  unsigned int v166; // ebx
  int v167; // ebx
  __int64 v168; // r9
  __int64 v169; // rdx
  struct tagCLS *v170; // rbx
  __int64 v171; // rax
  unsigned __int128 v172; // rax
  unsigned int v173; // ecx
  __int64 SystemMenu; // rax
  _QWORD *v175; // rcx
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r8
  struct tagWND *v179; // rcx
  struct tagWND *DefaultImeWindow; // rax
  __int64 v181; // rdx
  __int64 v182; // rbx
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // r8
  int v187; // r8d
  __int64 v188; // rcx
  _QWORD *v189; // rcx
  __int64 v190; // rdx
  __int64 v191; // r8
  __int64 v192; // rax
  unsigned __int64 v193; // rbx
  __int64 v194; // rax
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r8
  int v198; // r15d
  int v199; // eax
  __int64 TopMostInsertAfter; // rax
  __int64 v201; // r9
  __int64 v202; // rdx
  int v203; // edx
  int v204; // r8d
  struct tagCLS *v205; // rbx
  __int64 v206; // rax
  void *v207; // rax
  void *v208; // rax
  __int64 v209; // rcx
  unsigned int v210; // ebx
  char v211; // al
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // rcx
  ULONG_PTR v215; // rcx
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 v218; // r8
  __int64 v219; // r8
  __int64 v220; // rcx
  unsigned int v221; // eax
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // r8
  struct tagCLS *v225; // rbx
  __int64 v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // r8
  __int64 v230; // rax
  __int64 v231; // rbx
  char v232[8]; // [rsp+60h] [rbp-448h] BYREF
  __int64 v233; // [rsp+68h] [rbp-440h] BYREF
  _BYTE v234[4]; // [rsp+70h] [rbp-438h] BYREF
  unsigned int v235; // [rsp+74h] [rbp-434h]
  __int32 v236; // [rsp+78h] [rbp-430h]
  unsigned __int16 v237; // [rsp+7Ch] [rbp-42Ch]
  __int32 v238; // [rsp+80h] [rbp-428h]
  int v239; // [rsp+84h] [rbp-424h]
  int v240; // [rsp+88h] [rbp-420h]
  int v241; // [rsp+8Ch] [rbp-41Ch]
  _QWORD v242[2]; // [rsp+90h] [rbp-418h] BYREF
  unsigned int v243; // [rsp+A0h] [rbp-408h]
  int v244; // [rsp+A8h] [rbp-400h]
  _BYTE v245[2]; // [rsp+ACh] [rbp-3FCh] BYREF
  __int16 v246; // [rsp+AEh] [rbp-3FAh] BYREF
  __int128 v247; // [rsp+B0h] [rbp-3F8h] BYREF
  int v248; // [rsp+C0h] [rbp-3E8h]
  _QWORD v249[2]; // [rsp+C8h] [rbp-3E0h] BYREF
  _QWORD *v250; // [rsp+D8h] [rbp-3D0h]
  int v251; // [rsp+E0h] [rbp-3C8h]
  int v252; // [rsp+E4h] [rbp-3C4h]
  int v253; // [rsp+E8h] [rbp-3C0h]
  int v254; // [rsp+ECh] [rbp-3BCh]
  int v255; // [rsp+F0h] [rbp-3B8h]
  int v256; // [rsp+F4h] [rbp-3B4h]
  __int64 v257; // [rsp+F8h] [rbp-3B0h]
  int v258; // [rsp+100h] [rbp-3A8h]
  unsigned int WindowCloakStateComponentUIAware; // [rsp+104h] [rbp-3A4h]
  wchar_t *Str1; // [rsp+108h] [rbp-3A0h]
  int v261; // [rsp+110h] [rbp-398h]
  int v262; // [rsp+114h] [rbp-394h]
  int v263; // [rsp+118h] [rbp-390h]
  __int16 v264; // [rsp+11Ch] [rbp-38Ch]
  int v265; // [rsp+120h] [rbp-388h]
  void *v266; // [rsp+128h] [rbp-380h]
  __int128 v267; // [rsp+130h] [rbp-378h] BYREF
  int v268; // [rsp+144h] [rbp-364h]
  int v269; // [rsp+148h] [rbp-360h]
  int ClassStyle; // [rsp+14Ch] [rbp-35Ch]
  int v271; // [rsp+150h] [rbp-358h]
  int v272; // [rsp+154h] [rbp-354h]
  int v273; // [rsp+158h] [rbp-350h]
  int v274; // [rsp+15Ch] [rbp-34Ch]
  __int64 v275; // [rsp+160h] [rbp-348h]
  __int64 v276; // [rsp+168h] [rbp-340h]
  struct tagWND *v277; // [rsp+170h] [rbp-338h]
  int v278; // [rsp+178h] [rbp-330h]
  int v279; // [rsp+180h] [rbp-328h]
  __int64 v280; // [rsp+188h] [rbp-320h]
  _QWORD v281[2]; // [rsp+190h] [rbp-318h] BYREF
  __int64 v282; // [rsp+1A0h] [rbp-308h] BYREF
  wchar_t *v283; // [rsp+1A8h] [rbp-300h]
  __int64 v284; // [rsp+1B0h] [rbp-2F8h]
  __int64 v285; // [rsp+1B8h] [rbp-2F0h]
  _QWORD v286[2]; // [rsp+1C0h] [rbp-2E8h] BYREF
  _OWORD v287[7]; // [rsp+1D0h] [rbp-2D8h] BYREF
  _QWORD v288[2]; // [rsp+240h] [rbp-268h] BYREF
  __int128 v289; // [rsp+250h] [rbp-258h] BYREF
  __m128i v290; // [rsp+260h] [rbp-248h]
  __int128 v291; // [rsp+270h] [rbp-238h] BYREF
  __int64 v292; // [rsp+280h] [rbp-228h]
  __int128 v293; // [rsp+288h] [rbp-220h] BYREF
  __int64 v294; // [rsp+298h] [rbp-210h]
  int v295[2]; // [rsp+2A0h] [rbp-208h]
  __int64 v296; // [rsp+2A8h] [rbp-200h]
  int v297; // [rsp+2B4h] [rbp-1F4h]
  __int128 v298; // [rsp+2B8h] [rbp-1F0h] BYREF
  __int64 v299; // [rsp+2C8h] [rbp-1E0h]
  __int128 v300; // [rsp+2D0h] [rbp-1D8h] BYREF
  __int64 v301; // [rsp+2E0h] [rbp-1C8h]
  _QWORD v302[4]; // [rsp+2E8h] [rbp-1C0h] BYREF
  _QWORD v303[5]; // [rsp+308h] [rbp-1A0h] BYREF
  __int128 v304; // [rsp+330h] [rbp-178h] BYREF
  __int128 v305; // [rsp+340h] [rbp-168h] BYREF
  __int128 v306; // [rsp+350h] [rbp-158h] BYREF
  __int128 v307; // [rsp+360h] [rbp-148h] BYREF
  __int64 v308; // [rsp+370h] [rbp-138h]
  __int128 v309; // [rsp+378h] [rbp-130h] BYREF
  __int64 v310; // [rsp+388h] [rbp-120h]
  __int128 v311; // [rsp+390h] [rbp-118h] BYREF
  __int128 v312; // [rsp+3A0h] [rbp-108h] BYREF
  char v313[16]; // [rsp+3B0h] [rbp-F8h] BYREF
  char v314[16]; // [rsp+3C0h] [rbp-E8h] BYREF
  char v315[16]; // [rsp+3D0h] [rbp-D8h] BYREF
  char v316[16]; // [rsp+3E0h] [rbp-C8h] BYREF
  char v317[16]; // [rsp+3F0h] [rbp-B8h] BYREF
  __int128 v318; // [rsp+400h] [rbp-A8h] BYREF
  struct tagRECT v319; // [rsp+410h] [rbp-98h] BYREF
  __int64 v320[8]; // [rsp+420h] [rbp-88h] BYREF

  v280 = a4;
  v276 = a3;
  Str1 = a2;
  v252 = a1;
  v269 = a1;
  v282 = (__int64)a2;
  v284 = a4;
  ThreadDesktopWindow = a10;
  v286[0] = a10;
  v266 = a12;
  v281[0] = a13;
  v263 = 0;
  v278 = 0;
  v262 = 0;
  v258 = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v242);
  v318 = 0LL;
  v247 = 0LL;
  v254 = 5;
  v279 = 5;
  v275 = 0LL;
  memset(v287, 0, sizeof(v287));
  v233 = gptiCurrent;
  v291 = 0LL;
  v292 = 0LL;
  v298 = 0LL;
  v299 = 0LL;
  v300 = 0LL;
  v301 = 0LL;
  v293 = 0LL;
  v294 = 0LL;
  v255 = 0;
  v256 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v19 = 0;
  v239 = 0;
  v267 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v249, a11);
  v241 = 0;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v234);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
    goto LABEL_31;
  }
  v23 = a1 & 0x7FFFFFFF;
  if ( a1 >= 0 )
    v23 = a1;
  v24 = 800;
  if ( a1 >= 0 )
    LOWORD(v24) = 0;
  v261 = v24;
  v246 = v24;
  v25 = *(_QWORD *)(v233 + 456);
  v285 = v25;
  *(_QWORD *)&v289 = v25;
  if ( a10 )
  {
    if ( *((_QWORD *)a10 + 3) != v25 )
      goto LABEL_31;
  }
  v248 = a16;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*(_QWORD *)(v233 + 424)) )
    {
LABEL_45:
      v31 = 5LL;
      goto LABEL_32;
    }
    v19 = 1;
    v239 = 1;
  }
  if ( (a16 & 2) != 0 && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(v233 + 424)) )
    goto LABEL_45;
  v26 = a14;
  if ( a14 )
  {
    if ( !(unsigned int)IsValidBand(a14, v20, v21, v22) )
      goto LABEL_31;
    if ( a14 == 15 )
      goto LABEL_31;
    v27 = *(_DWORD *)(*(_QWORD *)(v233 + 424) + 820LL);
    if ( (v27 & 0x30) == 0x10 && (v27 & 0x200) == 0 && a14 == 1 && !v19 && !(unsigned int)HasMessageRootWindow(a10) )
      goto LABEL_31;
  }
  LODWORD(ProcessSequenceNumber) = HIWORD(a5) & 0xC000;
  v265 = ProcessSequenceNumber;
  v264 = HIWORD(a5) & 0xC000;
  v251 = (_WORD)ProcessSequenceNumber == 0x4000;
  v274 = v251;
  if ( (_WORD)ProcessSequenceNumber != 0x4000 )
  {
    if ( (unsigned int)ShouldSetNoOwner(*(_QWORD *)(v233 + 424), a10) )
      ThreadDesktopWindow = 0LL;
    v286[0] = ThreadDesktopWindow;
  }
  if ( !ThreadDesktopWindow || (LOBYTE(v29) = IsDesktopWindow((__int64)ThreadDesktopWindow), v29) )
  {
    if ( a14 )
      goto LABEL_44;
    if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(v233 + 424)) )
    {
      v239 = 1;
      v26 = 15;
    }
    else
    {
      if ( (*(_DWORD *)(v34 + 820) & 2) == 0 || (v23 & 8) == 0 )
      {
        v26 = 1;
        a14 = 1;
        goto LABEL_44;
      }
      v26 = 2;
    }
    a14 = v26;
    goto LABEL_44;
  }
  v30 = *((_QWORD *)ThreadDesktopWindow + 5);
  v239 = *(_BYTE *)(v30 + 232) & 0x40;
  if ( !a14 )
  {
    v26 = *(_DWORD *)(v30 + 236);
    a14 = v26;
    goto LABEL_44;
  }
  if ( a14 != *(_DWORD *)(v30 + 236) )
  {
LABEL_31:
    v31 = 87LL;
LABEL_32:
    UserSetLastError(v31);
    goto LABEL_33;
  }
LABEL_44:
  v268 = v239;
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(v233 + 424), v26, ThreadDesktopWindow) )
    goto LABEL_45;
  v235 = v23;
  v243 = v23;
  if ( (v23 & 0x400000) != 0 )
    goto LABEL_56;
  if ( ThreadDesktopWindow )
  {
    v235 = v23;
    v243 = v23;
    if ( (_WORD)ProcessSequenceNumber == 0x4000 )
    {
      v235 = v23;
      v243 = v23;
      if ( (*(_BYTE *)(*((_QWORD *)ThreadDesktopWindow + 5) + 26LL) & 0x50) == 0x40 )
      {
        v35 = v23 | 0x400000;
LABEL_51:
        v235 = v35;
        v243 = v35;
        goto LABEL_58;
      }
    }
LABEL_56:
    v35 = v235;
    goto LABEL_58;
  }
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v235 = v23;
    v243 = v23;
    if ( (_WORD)Str1 == 0x8002 )
    {
      v35 = v23;
      goto LABEL_58;
    }
  }
  v35 = v23;
  v235 = v23;
  v243 = v23;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 824) & 1) != 0 )
  {
    v35 = v23 | 0x400000;
    goto LABEL_51;
  }
LABEL_58:
  if ( (v35 & 0x2200000) == 0x2200000 )
    goto LABEL_31;
  if ( *(_QWORD *)(v233 + 592) && !(unsigned int)CheckGrantedAccess(*(unsigned int *)(v233 + 888), 2LL) )
  {
LABEL_33:
    v32 = (AtomicExecutionCheck *)v234;
LABEL_34:
    AtomicExecutionCheck::~AtomicExecutionCheck(v32);
    goto LABEL_35;
  }
  if ( (_WORD)ProcessSequenceNumber == 0x4000 )
  {
    if ( !ThreadDesktopWindow )
    {
      v31 = 1406LL;
      goto LABEL_32;
    }
    if ( !(unsigned int)ValidateParentDepth(0LL, ThreadDesktopWindow) )
      goto LABEL_31;
  }
  AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)v234);
  v244 = a9;
  v240 = a8;
  v238 = a7;
  v236 = a6;
  while ( 1 )
  {
    v36 = v276;
    if ( (v276 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v245);
      if ( (int)RtlStringCchCopyW((char *)gawchAtomScratch, 256LL, *(char **)(v36 + 8)) < 0 )
      {
        LOWORD(v36) = 0;
        v237 = 0;
        v256 = 1;
      }
      else
      {
        LOWORD(v36) = UserFindAtom(gawchAtomScratch);
        v237 = v36;
      }
      AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)v245);
    }
    else
    {
      v237 = v276;
    }
    if ( (_WORD)v36 )
      break;
LABEL_75:
    if ( v256
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v38 = Str1)
        : (v38 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v38)) )
    {
      UserSetLastError(1407LL);
      goto LABEL_35;
    }
    v256 = 1;
    v26 = a14;
    v35 = v235;
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v232);
  ClassPtr = (__int64 *)GetClassPtr((unsigned __int16)v36, *(_QWORD *)(v233 + 424), v266);
  if ( !ClassPtr )
    goto LABEL_74;
  v39 = *ClassPtr;
  if ( *ClassPtr != *(_QWORD *)v242[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v242);
    if ( v39 )
    {
      v242[0] = *(_QWORD *)(v39 + 128);
      ++*(_DWORD *)(v242[0] + 8LL);
    }
    else
    {
      v242[0] = gSmartObjNullRef;
    }
  }
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v242[0] + 8LL) + 6LL) & 1) != 0 && (unsigned int)PsGetWin32KFilterSet() == 5 )
    goto LABEL_91;
  if ( (unsigned int)NeedsWindowEdge(a5, v35, a15 >= 0x400u) )
    v41 = v35 | 0x100;
  else
    v41 = v35 & 0xFFFFFEFF;
  v243 = v41;
  v235 = v41;
  LOBYTE(v40) = 1;
  v42 = HMAllocObject(v233, v285, v40);
  v257 = v42;
  v43 = v42;
  v277 = (struct tagWND *)v42;
  if ( !v42 )
  {
    if ( (unsigned int)UserGetLastError() == 8 )
      TraceLoggingCreateWindowFailed(
        1u,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    goto LABEL_91;
  }
  tagObjLock::LockInitialize((tagObjLock *)(v42 + 56));
  v44 = (tagObjLock *)Win32AllocPoolZInit(32LL, 1752200021LL);
  *(_QWORD *)(v43 + 144) = v44;
  if ( !v44 )
  {
    tagObjLock::LockUnInitializeThreadCreator((tagObjLock *)(v43 + 56));
    HMFreeObject(v43);
LABEL_91:
    v32 = (AtomicExecutionCheck *)v232;
    goto LABEL_34;
  }
  tagObjLock::LockInitialize(v44);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 16) + 424LL) + 820LL) & 0x1000000) != 0 )
    *(_DWORD *)(v43 + 324) |= 1u;
  *(_QWORD *)(*(_QWORD *)(v43 + 40) + 296LL) = 0LL;
  *(_QWORD *)(v43 + 280) = 0LL;
  *(_QWORD *)(*(_QWORD *)(v43 + 40) + 168LL) = 0LL;
  CurrentThreadDpiHostingBehavior = W32GetCurrentThreadDpiHostingBehavior();
  v47 = CurrentThreadDpiHostingBehavior;
  *(_DWORD *)(*(_QWORD *)(v43 + 40) + 292LL) = CurrentThreadDpiHostingBehavior;
  if ( (_WORD)ProcessSequenceNumber != 0x4000
    || !ThreadDesktopWindow
    || ThreadDesktopWindow == (struct tagWND *)GetThreadDesktopWindow(0LL) )
  {
    goto LABEL_107;
  }
  v48 = 0LL;
  v49 = PtiCurrentShared();
  if ( v49 )
  {
    v50 = *(_QWORD *)(v49 + 456);
    if ( v50 )
      v48 = *(struct tagWND **)(v50 + 104);
  }
  if ( ThreadDesktopWindow == v48
    || (v47 = *(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 2) + 424LL), *(_QWORD *)(v233 + 424) != v47)
    || IsChildWindowDpiIsolationEnabled(0LL, ThreadDesktopWindow) )
  {
LABEL_107:
    *(_DWORD *)(*(_QWORD *)(v43 + 40) + 288LL) = W32GetCurrentThreadDpiAwarenessContext(v47, v46);
    if ( (*(_DWORD *)(*(_QWORD *)(v43 + 40) + 288LL) & 0x4000000F) == 0
      && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 0x40) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(v43 + 40) + 288LL) |= 0x40000000u;
    }
  }
  else
  {
    v51 = *(unsigned int *)(*((_QWORD *)ThreadDesktopWindow + 5) + 288LL);
    *(_DWORD *)(*(_QWORD *)(v43 + 40) + 288LL) = v51;
    v52 = *(_DWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 288LL);
    if ( (((unsigned __int8)v52 ^ (unsigned __int8)W32GetCurrentThreadDpiAwarenessContext(v51, v46)) & 0xF) != 0 )
      TraceChildWindowDpiTelemetry(v43, (__int64)ThreadDesktopWindow, 0);
  }
  v53 = *(_QWORD *)(v43 + 40);
  v54 = *(_DWORD *)(v53 + 288);
  LOBYTE(v55) = v54;
  if ( (v54 & 0xF) == 2 && (v54 & 0xF0) == 0x20 )
  {
    *(_DWORD *)(v43 + 320) |= 0x180000u;
    v55 = *(_DWORD *)(v53 + 288);
  }
  if ( (v55 & 0xF) == 3 )
    *(_DWORD *)(v43 + 320) |= 0x80000u;
  tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(v43 + 136, *(_QWORD *)v242[0]);
  *(_DWORD *)(*(_QWORD *)(v43 + 40) + 28LL) = a5 & 0xEFFFFFFF;
  *(_DWORD *)(*(_QWORD *)(v43 + 40) + 24LL) = v235 & 0xFDF7FFFF;
  *(_DWORD *)(*(_QWORD *)(v43 + 40) + 200LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v242[0] + 8LL) + 80LL);
  *(_DWORD *)(*(_QWORD *)(v43 + 40) + 248LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v242[0] + 8LL) + 84LL);
  if ( !(unsigned int)ReferenceClass(*(_QWORD *)v242[0], v43) )
    goto LABEL_116;
  v56 = *(_QWORD *)(v43 + 136);
  if ( v56 != *(_QWORD *)v242[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v242);
    if ( v56 )
    {
      v242[0] = *(_QWORD *)(v56 + 128);
      ++*(_DWORD *)(v242[0] + 8LL);
    }
    else
    {
      v242[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned int)ClassLock(*(_QWORD *)v242[0], &v293) )
  {
    DereferenceClass(*(struct tagPROCESSINFO **)(v233 + 424));
LABEL_116:
    HMFreeObject(v43);
LABEL_74:
    AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)v232);
    goto LABEL_75;
  }
  *(_QWORD *)(*(_QWORD *)(v43 + 40) + 224LL) = a17;
  if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v242[0] + 8LL) + 2LL) == *(_WORD *)(gpsi + 868LL) )
  {
    *(_QWORD *)(*(_QWORD *)(v43 + 40) + 208LL) = 0LL;
  }
  else
  {
    v57 = *(__int64 **)(v233 + 792);
    if ( v57 )
      v58 = *v57;
    else
      v58 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v43 + 40) + 208LL) = v58;
  }
  *(_DWORD *)(*(_QWORD *)(v43 + 40) + 236LL) = v26;
  v59 = *(_QWORD *)(v43 + 40);
  if ( *(_DWORD *)(v59 + 236) == 1 )
    v60 = 0;
  else
    v60 = IsTopLevelParent(ThreadDesktopWindow);
  if ( v60 )
    *(_DWORD *)(v59 + 24) |= 8u;
  if ( v239 )
    SetOrClrWF(1LL, v43, 55360LL, 0LL);
  ++*(_DWORD *)(v233 + 896);
  memset(v287, 0, sizeof(v287));
  DWORD2(v287[4]) = v235;
  *((_QWORD *)&v287[0] + 1) = v266;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v252 >= 0 )
    {
      *(_QWORD *)&v287[4] = *((_QWORD *)Str1 + 1);
      v287[6] = *(_OWORD *)Str1;
    }
    else
    {
      *(_QWORD *)&v287[4] = *(_QWORD *)(*(_QWORD *)v242[0] + 104LL);
      if ( (*(_QWORD *)&v287[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString(&v287[6]);
    }
  }
  else
  {
    *(_QWORD *)&v287[4] = Str1;
  }
  if ( v280 )
  {
    *((_QWORD *)&v287[3] + 1) = *(_QWORD *)(v280 + 8);
    v287[5] = *(_OWORD *)v280;
  }
  LODWORD(v287[3]) = a5;
  v61 = v236;
  v62 = v238;
  *((_QWORD *)&v287[2] + 1) = __PAIR64__(v236, v238);
  *(_QWORD *)&v287[2] = __PAIR64__(v240, v244);
  if ( ThreadDesktopWindow )
    *((_QWORD *)&v287[1] + 1) = *(_QWORD *)ThreadDesktopWindow;
  else
    *((_QWORD *)&v287[1] + 1) = 0LL;
  if ( (_WORD)ProcessSequenceNumber == 0x4000 )
  {
    v63 = v250;
    if ( !v250 )
      v63 = *(_QWORD **)v249[0];
    *(_QWORD *)&v287[1] = v63;
    *(_DWORD *)(*(_QWORD *)(v43 + 40) + 24LL) |= *(_DWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 24LL) & 0xC4000000;
  }
  else if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v249) )
  {
    *(_QWORD *)&v287[1] = 0LL;
  }
  else
  {
    v64 = v250;
    if ( !v250 )
      v64 = *(_QWORD **)v249[0];
    *(_QWORD *)&v287[1] = *v64;
  }
  *(_QWORD *)&v287[0] = v281[0];
  *(_QWORD *)&v291 = *(_QWORD *)(v233 + 416);
  *(_QWORD *)(v233 + 416) = &v291;
  *((_QWORD *)&v291 + 1) = v43;
  HMLockObject(v43);
  *(_QWORD *)&v319.left = 0LL;
  if ( v61 == 0x80000000 || v61 == 0x8000 )
  {
    v65 = 0;
    v319.left = 0;
  }
  else
  {
    v65 = v61;
    v319.left = v61;
  }
  if ( v62 == 0x80000000 || (v66 = v62, v62 == 0x8000) )
    v66 = 0;
  v319.top = v66;
  v67 = v240;
  if ( v240 == 0x80000000 || v240 == 0x8000 )
    v67 = 0;
  v319.right = v67 + v65;
  v68 = v244;
  if ( v244 == 0x80000000 || v244 == 0x8000 )
    v68 = 0;
  v319.bottom = v66 + v68;
  InheritedMonitor = (__int64 *)GetInheritedMonitor((struct tagWND *)v43);
  if ( InheritedMonitor )
  {
    v253 = 1;
  }
  else
  {
    v253 = 0;
    if ( ThreadDesktopWindow )
      InheritedMonitor = (__int64 *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 256LL));
  }
  if ( InheritedMonitor || (InheritedMonitor = (__int64 *)MonitorFromRect(&v319), v70 = 0LL, InheritedMonitor) )
    v70 = *InheritedMonitor;
  *(_QWORD *)(*(_QWORD *)(v43 + 40) + 256LL) = v70;
  *(_DWORD *)(*(_QWORD *)(v43 + 40) + 284LL) = *(unsigned __int16 *)(InheritedMonitor[5] + 60);
  v71 = (_DWORD *)InheritedMonitor[16];
  *(_QWORD *)(v43 + 288) = v71;
  ++*v71;
  *(_QWORD *)(v43 + 296) = 0LL;
  if ( (_WORD)ProcessSequenceNumber != 0x4000
    || IsDpiBoundaryBetweenWindows((const struct tagWND *)v43, ThreadDesktopWindow) )
  {
    UpdateTopLevelWindowDPITransform(v43, InheritedMonitor);
  }
  if ( (_WORD)ProcessSequenceNumber == 0x4000 )
  {
    if ( ThreadDesktopWindow )
    {
      *(_WORD *)(*(_QWORD *)(v43 + 40) + 286LL) = *(_WORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 286LL);
      v72 = (_DWORD *)*((_QWORD *)ThreadDesktopWindow + 37);
      if ( v72 )
      {
        *(_QWORD *)(v43 + 296) = v72;
        ++*v72;
      }
    }
  }
  v73 = *(_QWORD *)(v43 + 24);
  if ( v73 )
  {
    v312 = *(_OWORD *)LockPointer(v317, v43 + 104, *(_QWORD *)(v73 + 104));
    HMAssignmentLock(&v312, 0LL);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v43) )
  {
    if ( (_WORD)ProcessSequenceNumber != 0x4000
      && (!ThreadDesktopWindow
       || ThreadDesktopWindow != *(struct tagWND **)(*((_QWORD *)ThreadDesktopWindow + 3) + 104LL)) )
    {
      GetThreadDesktopWindow(0LL);
    }
    memset(v320, 0, sizeof(v320));
    _GetWindowCompositionInfo((const struct tagWND *)v43, (struct WINDOWCOMPOSITIONINFO *)v320);
    v74 = *(struct _KPROCESS **)(**(_QWORD **)(v43 + 16) + 544LL);
    ProcessSequenceNumber = PsGetProcessSequenceNumber(v74);
    *(_QWORD *)v295 = PsGetProcessId(v74);
    v296 = ***(_QWORD ***)(*(_QWORD *)(v43 + 24) + 8LL);
    ClassStyle = DwmGetClassStyle(v43);
    v75 = *(int **)(v43 + 40);
    v271 = v75[58];
    v272 = v75[6];
    v273 = v75[7];
    v76 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildCreate(
      v76,
      v272,
      v271,
      ClassStyle,
      (__int64)v320,
      v296,
      (__int64)&v319,
      v295[0],
      ProcessSequenceNumber);
    LOWORD(ProcessSequenceNumber) = v265;
  }
  *(_QWORD *)(*(_QWORD *)(v43 + 40) + 32LL) = v266;
  *(_QWORD *)(*(_QWORD *)(v43 + 40) + 120LL) = MapClientNeuterToClientPfn(
                                                 *(_QWORD *)v242[0],
                                                 0LL,
                                                 (unsigned __int16)v261);
  SetOrClrWF(*(_WORD *)(*(_QWORD *)(*(_QWORD *)v242[0] + 8LL) + 6LL) & 1, v43, 516LL, 1LL);
  AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)v232);
  v77 = *(_BYTE *)(*(_QWORD *)(v43 + 40) + 18LL) & 4;
  v302[0] = &v291;
  v302[1] = v242;
  v302[2] = &v293;
  v302[3] = &v233;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v242[0] + 8LL) + 84LL) )
  {
    v78 = Win32AllocPoolZInit(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)v242[0] + 8LL) + 84LL), 1937208149LL);
    *(_QWORD *)(v43 + 280) = v78;
    if ( !v78 )
    {
      v241 = 5;
LABEL_194:
      lambda_fcfb12fcc043a8c73fe9205729fe4b4e_::operator()(v302);
      goto LABEL_75;
    }
  }
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && !v77 )
  {
    *(_DWORD *)(*(_QWORD *)(v43 + 40) + 200LL) = (*(_DWORD *)(*(_QWORD *)(v43 + 40) + 200LL) + 7) & 0xFFFFFFF8;
    *(_DWORD *)(*(_QWORD *)(v43 + 40) + 200LL) += 32;
  }
  v79 = *(unsigned int *)(*(_QWORD *)(v43 + 40) + 200LL);
  if ( !(_DWORD)v79 )
    goto LABEL_208;
  v82 = xxxClientAllocWindowClassExtraBytes(v79);
  if ( !v82 )
  {
    v241 = 2;
    if ( *(_DWORD *)(v43 + 8) != 1 )
      goto LABEL_484;
    goto LABEL_194;
  }
  if ( (unsigned int)IsWindowBeingDestroyed(v43) )
    goto LABEL_484;
  if ( (*(_BYTE *)(((__int64 (*)(void))_HMPheFromObject)() + 25) & 1) != 0 )
    goto LABEL_484;
  v81 = *(_QWORD *)(v43 + 40);
  if ( *(_QWORD *)(v81 + 296) )
    goto LABEL_484;
  if ( (*(_DWORD *)(v81 + 232) & 0x10) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v81);
    v81 = *(_QWORD *)(v43 + 40);
  }
  *(_QWORD *)(v81 + 296) = v82;
LABEL_208:
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 || v77 )
  {
    v87 = v252;
  }
  else
  {
    v84 = *(_QWORD *)(v43 + 40);
    v85 = *(_QWORD *)(v84 + 296);
    v86 = *(int *)(v84 + 200);
    v284 = *(_QWORD *)(v84 + 120);
    *(_QWORD *)(v86 + v85 - 32) = v284;
    v87 = v252;
    if ( v252 >= 0 )
      v88 = *(_QWORD *)(gpsi + 768LL);
    else
      v88 = *(_QWORD *)(gpsi + 576LL);
    *(_QWORD *)(*(_QWORD *)(v43 + 40) + 120LL) = v88;
  }
  if ( *(_QWORD *)(*(_QWORD *)v242[0] + 80LL)
    && !*(_QWORD *)(*(_QWORD *)v242[0] + 112LL)
    && (unsigned int)PsGetWin32KFilterSet() != 5 )
  {
    xxxCreateClassSmIcon(v242);
  }
  SetOrClrWF(1LL, v43, (unsigned __int16)v261, 1LL);
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v242[0] + 8LL) + 6LL) & 2) != 0
    || v87 < 0
    && (v237 == *(_WORD *)(gpsi + 868LL)
     || v237 == *(_WORD *)(gpsi + 878LL)
     || v237 == *(_WORD *)(gpsi + 882LL)
     || v237 == *(_WORD *)(gpsi + 904LL)
     || v237 == *(_WORD *)(gpsi + 870LL)
     || v237 == *(_WORD *)(gpsi + 874LL)
     || v237 == *(_WORD *)(gpsi + 880LL)
     || v237 == *(_WORD *)(gpsi + 898LL)
     || v237 == *(_WORD *)(gpsi + 872LL)) )
  {
    SetOrClrWF(1LL, v43, 520LL, 1LL);
  }
  AppCompatFlags = GetAppCompatFlags(v233);
  v90 = AppCompatFlags;
  if ( (AppCompatFlags & 0x8000000) != 0 )
  {
    SetOrClrWF(1LL, v43, 1032LL, 1LL);
    v235 &= 0x3Fu;
    DWORD2(v287[4]) = BYTE8(v287[4]) & 0x3F;
  }
  *(_WORD *)(*(_QWORD *)(v43 + 40) + 40LL) = 0;
  if ( a15 < 0x30Au )
  {
    if ( (v90 & 0x40) != 0 )
    {
      v91 = 1600LL;
LABEL_239:
      SetOrClrWF(1LL, v43, v91, 1LL);
    }
  }
  else
  {
    SetOrClrWF(1LL, v43, 1281LL, 1LL);
    if ( a15 >= 0x400u )
    {
      SetOrClrWF(1LL, v43, 1282LL, 1LL);
      if ( a15 >= 0x500u )
      {
        v91 = 1284LL;
        goto LABEL_239;
      }
    }
  }
  if ( a15 <= *(_WORD *)(v233 + 636) )
    v92 = *(_DWORD *)(v233 + 636);
  else
    v92 = a15;
  *(_DWORD *)(v43 + 256) = v92;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *(_DWORD *)(ThreadWin32Thread + 632) <= 0x9900u )
    v94 = *(_DWORD *)(ThreadWin32Thread + 648);
  else
    v94 = 0;
  if ( (v94 & 0x10000000) != 0 )
    SetOrClrWF(1LL, v43, 2688LL, 1LL);
  if ( gihmodUserApiHook >= 0 )
    xxxLoadUserApiHook();
  if ( (unsigned int)WantImeWindow(ThreadDesktopWindow, (struct tagWND *)v43) )
  {
    *(_DWORD *)(v43 + 320) |= 0x20000000u;
    ++*(_DWORD *)(v233 + 904);
  }
  if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v233 + 464) + 16LL) | *(_BYTE *)(v233 + 680)) & 0x40) != 0 )
  {
    v282 = (__int64)v287;
    v283 = 0LL;
    if ( (unsigned int)xxxCallHook(3, *(_QWORD *)v43, (__int64)&v282, 5) )
    {
      v95 = 6;
      goto LABEL_485;
    }
    v96 = HIDWORD(v287[2]);
    v236 = HIDWORD(v287[2]);
    v238 = DWORD2(v287[2]);
    v97 = DWORD1(v287[2]);
    v240 = DWORD1(v287[2]);
    v244 = v287[2];
    Str1 = v283;
  }
  else
  {
    Str1 = 0LL;
    v96 = v236;
    v97 = v240;
  }
  v81 = *(_QWORD *)(v43 + 40);
  if ( (*(_BYTE *)(v81 + 31) & 0xC0) != 0x40 )
  {
    LODWORD(v80) = 0;
    v239 = 0;
    goto LABEL_261;
  }
  v80 = 1LL;
  v239 = 1;
  if ( !ThreadDesktopWindow )
    goto LABEL_484;
LABEL_261:
  if ( (_DWORD)v80 != v251 )
  {
    v250 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v249, 0LL);
    v81 = *(_QWORD *)(v257 + 40);
    LODWORD(v80) = v239;
  }
  if ( (*(_BYTE *)(v81 + 31) & 0xC0) != 0 )
  {
    v251 = 0;
    if ( v96 == 0x80000000 || v96 == 0x8000 )
    {
      v236 = 0;
      v238 = 0;
    }
    if ( v97 == 0x80000000 || v97 == 0x8000 )
    {
      v240 = 0;
      v244 = 0;
    }
  }
  else
  {
    v251 = 1;
  }
  v98 = v236;
  v99 = v236;
  *(_QWORD *)&v247 = __PAIR64__(v238, v236);
  v100 = v238;
  *((_QWORD *)&v247 + 1) = __PAIR64__(v244, v240);
  if ( (_DWORD)v80 )
  {
    v267 = *(_OWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 104LL);
    if ( IsDpiBoundaryBetweenWindows((const struct tagWND *)v43, ThreadDesktopWindow) )
    {
      *(_DWORD *)(v43 + 224) = 0;
      *(_DWORD *)(v43 + 228) = 0;
      LogicalToPhysicalInPlaceRectWithSubpixel(ThreadDesktopWindow, &v267, v43 + 224);
      PhysicalToLogicalInPlaceRectWithSubpixel(v43, &v267, v43 + 224);
      v98 = v99;
    }
    if ( ThreadDesktopWindow != (struct tagWND *)GetDesktopWindow(v43) )
    {
      v99 = v98 + v267;
      LODWORD(v247) = v98 + v267;
      v100 = v101 + DWORD1(v267);
      DWORD1(v247) = v101 + DWORD1(v267);
    }
    Str1 = (wchar_t *)1;
  }
  if ( v251 )
  {
    SetOrClrWF(1LL, v43, 3844LL, 1LL);
    v263 = 192;
    if ( (*(_BYTE *)(*(_QWORD *)(v43 + 40) + 21LL) & 2) != 0 )
      SetOrClrWF(1LL, v43, 2305LL, 1LL);
    SetOrClrWF(1LL, v43, 16LL, 1LL);
    v102 = 0x8000LL;
    if ( (v98 == 0x80000000 || v98 == 0x8000) && v100 != 0x80000000 )
    {
      v103 = v254;
      if ( v100 != 0x8000 )
        v103 = v100;
      v254 = v103;
    }
    if ( !v253 && (v98 == 0x80000000 || v98 == 0x8000 || v240 == 0x80000000 || v240 == 0x8000) )
    {
      v104 = *(_QWORD *)(*(_QWORD *)(v233 + 424) + 696LL);
      if ( v104 )
      {
        v105 = (struct tagMONITOR *)ValidateHmonitor(v104, 0x8000LL);
        goto LABEL_293;
      }
      if ( ThreadDesktopWindow )
      {
        v105 = _MonitorFromWindowInternal(ThreadDesktopWindow, 2u, 0);
LABEL_293:
        v106 = (__int64)v105;
      }
      else
      {
        v106 = 0LL;
      }
      if ( !v106 )
      {
        v106 = *(_QWORD *)(GetDispInfo() + 96);
        goto LABEL_300;
      }
    }
    else
    {
      v106 = 0LL;
LABEL_300:
      if ( !v106 )
      {
        v106 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(v43 + 40) + 256LL), v102);
        if ( !v106 )
        {
          if ( v253 )
            v106 = GetInheritedMonitor((struct tagWND *)v43);
          else
            v106 = 0LL;
          if ( v106 || (v106 = MonitorFromRect((struct tagRECT *)(*(_QWORD *)(v43 + 40) + 88LL)), v107 = 0LL, v106) )
            v107 = *(_QWORD *)v106;
          *(_QWORD *)(*(_QWORD *)(v43 + 40) + 256LL) = v107;
          *(_WORD *)(*(_QWORD *)(v43 + 40) + 284LL) = *(_WORD *)(*(_QWORD *)(v106 + 40) + 60LL);
          v108 = *(_DWORD **)(v43 + 288);
          if ( v108 )
          {
            --*v108;
            v109 = *(_DWORD **)(v43 + 288);
            if ( !*v109 )
              Win32FreePool(v109);
            *(_QWORD *)(v43 + 288) = 0LL;
          }
          v110 = *(_DWORD **)(v106 + 128);
          *(_QWORD *)(v43 + 288) = v110;
          ++*v110;
          UpdateTopLevelWindowDPITransform(v43, v106);
        }
      }
    }
    SetTiledRect(v43, &v318, v106);
    v111 = v236;
    if ( v236 == 0x80000000 || v236 == 0x8000 )
    {
      v114 = *(_DWORD **)(v233 + 424);
      if ( (v114[202] & 4) != 0 )
      {
        v258 = 1;
        v111 = v114[198];
        v115 = v114[199];
      }
      else
      {
        v111 = v318;
        v115 = DWORD1(v318);
      }
      v100 = v115;
      v238 = v115;
      *(_QWORD *)&v247 = __PAIR64__(v115, v111);
      v99 = v111;
      v236 = v111;
      v113 = 1;
    }
    else
    {
      v112 = *(_WORD *)(v106 + 74);
      if ( v112 )
        *(_WORD *)(v106 + 74) = v112 - 1;
      v113 = v262;
    }
    if ( v240 == 0x80000000 || v240 == 0x8000 )
    {
      v119 = *(_DWORD **)(v233 + 424);
      if ( (v119[202] & 2) != 0 )
      {
        v258 = 1;
        DWORD2(v247) = v119[200];
        v120 = v119[201];
      }
      else
      {
        DWORD2(v247) = DWORD2(v318) - v111;
        v120 = HIDWORD(v318) - v238;
      }
      HIDWORD(v247) = v120;
    }
    else if ( v113 )
    {
      v290 = *(__m128i *)GetMonitorRect(v313, v106);
      v116 = _mm_srli_si128(v290, 8).m128i_u64[0];
      v117 = v240 + v99 - v116;
      v118 = v244 + v100 - HIDWORD(v116);
      if ( v117 > 0 )
      {
        v236 -= v117;
        LODWORD(v247) = v236;
        if ( v236 < v290.m128i_i32[0] )
        {
          v236 = v290.m128i_i32[0];
          LODWORD(v247) = v290.m128i_i32[0];
        }
      }
      if ( v118 > 0 )
      {
        v238 -= v118;
        DWORD1(v247) = v238;
        if ( v238 < v290.m128i_i32[1] )
        {
          v238 = v290.m128i_i32[1];
          DWORD1(v247) = v290.m128i_i32[1];
        }
      }
    }
  }
  if ( v258 )
    *(_DWORD *)(*(_QWORD *)(v233 + 424) + 808LL) &= 0xFFFFFFF9;
  v121 = *(_QWORD *)(v43 + 40);
  v122 = *(_BYTE *)(v121 + 31) & 0xC0;
  if ( v122 == (char)0x80 || v122 == -64 )
  {
    SetOrClrWF(1LL, v43, 3844LL, 1LL);
    v123 = v257;
    v121 = *(_QWORD *)(v257 + 40);
  }
  else
  {
    v123 = v257;
  }
  *(_WORD *)(v121 + 30) |= v263;
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v249) && !v239 && *(_QWORD *)(*(_QWORD *)v242[0] + 96LL) )
  {
    v289 = 0LL;
    v124 = v43;
    if ( *(_QWORD *)(v43 + 104) )
      v124 = *(_QWORD *)(v43 + 104);
    zzzLockDisplayAreaAndInvalidateDCCache(v124, 16LL);
    RtlInitUnicodeStringOrId(&v289, *(_QWORD *)(*(_QWORD *)v242[0] + 96LL));
    v125 = xxxClientLoadMenu(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v242[0] + 8LL) + 64LL), &v289);
    v250 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v249, v125);
    if ( (*(_BYTE *)(*(_QWORD *)(v43 + 40) + 31LL) & 0xC0) != 0x40 && !(unsigned int)IsWindowBeingDestroyed(v43) )
    {
      if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v249) )
      {
        *(_QWORD *)&v287[1] = 0LL;
      }
      else
      {
        v127 = v250;
        if ( !v250 )
          v127 = *(_QWORD **)v249[0];
        *(_QWORD *)&v287[1] = *v127;
      }
      goto LABEL_350;
    }
    v128 = v250;
    if ( !v250 )
      v128 = *(void **)v249[0];
    DestroyMenu(v128);
    v250 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v249, 0LL);
LABEL_484:
    v95 = v241;
LABEL_485:
    v167 = *(_BYTE *)(*(_QWORD *)(v43 + 40) + 31LL) & 0x10;
    if ( v255 )
      ThreadUnlock1(v81, v80, v83);
    SetOrClrWF(1LL, v43, 1152LL, 1LL);
    SetOrClrWF(1LL, v43, 896LL, 1LL);
    if ( v167 )
      SetVisible((struct tagWND *)v43, 0);
    if ( *(_QWORD *)(v43 + 104) )
    {
      if ( v167 )
        zzzLockDisplayAreaAndInvalidateDCCache(*(_QWORD *)(v43 + 104), 16LL);
      if ( (*(_BYTE *)(*(_QWORD *)(v43 + 40) + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(v43) )
      {
        v169 = *(_QWORD *)(v168 + 16);
        if ( v233 != v169 )
          zzzAttachThreadInput(*(_QWORD *)(v43 + 16), v169, 0LL);
      }
      UnlinkWindow((struct tagWND *)v43);
    }
    v170 = *(struct tagCLS **)v242[0];
    v171 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(v171 + 16) = v293;
    ClassUnlockWorker(v170);
    xxxFreeWindow((struct tagWND *)v43);
    if ( v95 )
    {
      v172 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
      v173 = v95;
LABEL_554:
      TraceLoggingCreateWindowFailed(v173, *((unsigned __int64 *)&v172 + 1));
      goto LABEL_35;
    }
    goto LABEL_35;
  }
LABEL_350:
  v81 = *(_QWORD *)(v43 + 40);
  if ( (*(_BYTE *)(v81 + 31) & 0xC0) == 0x40 )
  {
    v126 = v250;
    if ( !v250 )
    {
      v126 = *(_QWORD **)v249[0];
      v81 = *(_QWORD *)(v123 + 40);
    }
    *(_QWORD *)(v81 + 320) = v126;
    *(_QWORD *)(*(_QWORD *)(v43 + 40) + 152LL) = 0LL;
    *(_QWORD *)(v43 + 168) = 0LL;
  }
  else
  {
    *(_QWORD *)(v81 + 320) = 0LL;
    LockWndMenuWorker(v43, 0LL, v249);
  }
  LOBYTE(v81) = *(_BYTE *)(*(_QWORD *)(v43 + 40) + 31LL) & 0xC0;
  if ( (_BYTE)v81 == 64 )
  {
    if ( !ThreadDesktopWindow )
      goto LABEL_484;
    if ( (v248 & 2) != 0 )
    {
LABEL_364:
      UserSetLastError(87LL);
      goto LABEL_484;
    }
  }
  else
  {
    v129 = v248;
    if ( (v248 & 4) != 0 )
    {
      LOBYTE(v83) = 1;
      CoreWindowProp::ChangeRole(v43, 1LL, v83);
    }
    v304 = *(_OWORD *)LockPointer(v314, v43 + 200, v43);
    HMAssignmentLock(&v304, 0LL);
    if ( (unsigned int)IsTopLevelParent(ThreadDesktopWindow) )
    {
      v132 = v43 + 120;
      *(_QWORD *)(*(_QWORD *)(v43 + 40) + 64LL) = 0LL;
      v288[0] = v43 + 120;
      v288[1] = 0LL;
      HMAssignmentLock(v288, 0LL);
    }
    else
    {
      NonChildAncestor = (struct tagWND *)GetNonChildAncestor(v130);
      if ( !(unsigned int)ValidateOwnerDepth(v43, NonChildAncestor) )
        goto LABEL_364;
      if ( NonChildAncestor )
      {
        *(_DWORD *)(*(_QWORD *)(v43 + 40) + 236LL) = *(_DWORD *)(*((_QWORD *)NonChildAncestor + 5) + 236LL);
        SetOrClrWF(*(_BYTE *)(*((_QWORD *)NonChildAncestor + 5) + 232LL) & 0x40, v43, 55360LL, 1LL);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(NonChildAncestor);
      }
      v132 = v43 + 120;
      v305 = *(_OWORD *)LockPointer(v315, v43 + 120, NonChildAncestor);
      HMAssignmentLock(&v305, 0LL);
      if ( *(_QWORD *)(v43 + 120)
        && ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v132 + 40LL) + 24LL) & 8) != 0
         || *(_DWORD *)(*(_QWORD *)(v43 + 40) + 236LL) != 1) )
      {
        SetOrClrWF(1LL, v43, 2056LL, 1LL);
      }
      if ( v237 != *(_WORD *)(gpsi + 898LL) )
      {
        if ( *(_QWORD *)v132 )
        {
          v133 = *(_QWORD *)(*(_QWORD *)v132 + 16LL);
          if ( v133 != v233 )
            zzzAttachThreadInput(v233, v133, 1LL);
        }
      }
      v129 = v248;
    }
    if ( !*(_QWORD *)v132 && !(unsigned int)CoreWindowProp::IsComponent((const struct tagWND *)v43) )
    {
      if ( (v134 = *(_QWORD *)(v43 + 40), v135 = *(_DWORD *)(v134 + 236), v135 <= 0xF)
        && (v136 = 44800, _bittest(&v136, v135))
        || (*(_BYTE *)(v134 + 232) & 0x40) != 0 )
      {
        WindowCloakStateComponentUIAware = 2;
      }
    }
    if ( !ThreadDesktopWindow
      || ThreadDesktopWindow != *(struct tagWND **)(*((_QWORD *)ThreadDesktopWindow + 3) + 104LL) )
    {
      ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(0LL);
      *(_QWORD *)&v298 = *(_QWORD *)(v233 + 416);
      *(_QWORD *)(v233 + 416) = &v298;
      *((_QWORD *)&v298 + 1) = ThreadDesktopWindow;
      if ( ThreadDesktopWindow )
        HMLockObject(ThreadDesktopWindow);
      v255 = 1;
    }
    if ( (v129 & 2) != 0 )
    {
      if ( *(_QWORD *)(v233 + 1392) )
        goto LABEL_364;
      SetOrClrWF(1LL, v43, 55424LL, 1LL);
      *(_DWORD *)(v233 + 1256) |= 0x40000u;
      *(_DWORD *)(*(_QWORD *)(v233 + 432) + 388LL) |= 0x2000000u;
      v137 = v233;
      if ( !*(_QWORD *)(v233 + 1384) )
      {
        KernelEvent = CreateKernelEvent(1LL, 0LL);
        v81 = v233;
        *(_QWORD *)(v233 + 1384) = KernelEvent;
        v137 = v233;
        if ( !*(_QWORD *)(v233 + 1384) )
        {
          v95 = 7;
          goto LABEL_485;
        }
      }
      v281[0] = v137 + 1392;
      v281[1] = v43;
      HMAssignmentLock(v281, 0LL);
    }
  }
  if ( (unsigned __int8)tagWND::HasState(v43, 0x1000000LL) )
  {
    v275 = *(_QWORD *)(v43 + 104);
    UnlinkWindow(v139);
  }
  if ( !(unsigned int)IsTopLevelParent(ThreadDesktopWindow) )
  {
    *(_DWORD *)(*(_QWORD *)(v43 + 40) + 236LL) = *(_DWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 236LL);
    SetOrClrWF(*(_BYTE *)(*((_QWORD *)ThreadDesktopWindow + 5) + 232LL) & 0x40, v43, 55360LL, 1LL);
  }
  if ( ThreadDesktopWindow && !(unsigned int)ValidateNewParent(v43, ThreadDesktopWindow) )
  {
    v95 = 9;
    goto LABEL_485;
  }
  v140 = v43 + 104;
  v306 = *(_OWORD *)LockPointer(v316, v43 + 104, ThreadDesktopWindow);
  HMAssignmentLock(&v306, 0LL);
  if ( ThreadDesktopWindow )
    v141 = (unsigned int)-__CFSHR__(*(_DWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 232LL), 10);
  else
    v141 = 0LL;
  SetWindowSubtreeCoreWindowStatus(v43, v141);
  v142 = *(_QWORD *)(v43 + 40);
  if ( (*(_DWORD *)(v142 + 288) & 0xF) == 2 )
  {
    *(_DWORD *)(v142 + 232) = *(_DWORD *)(v142 + 232) & 0xFFFFFBFF | (ShouldUseLogPixelsForWindowMetrics((struct tagWND *)v43) << 10);
    v142 = *(_QWORD *)(v123 + 40);
  }
  if ( (*(_BYTE *)(v142 + 21) & 1) == 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v242[0] + 8LL) + 8LL) & 0x80u) != 0
    && (*(_BYTE *)(*((_QWORD *)ThreadDesktopWindow + 5) + 31LL) & 2) == 0 )
  {
    SetOrClrWF(0LL, v43, 3846LL, 1LL);
  }
  v143 = WindowCloakStateComponentUIAware;
  if ( (WindowCloakStateComponentUIAware & 2) == 0 )
    *(_DWORD *)(v43 + 320) |= 0x800u;
  if ( v143 )
  {
    v144 = zzzSetWindowCompositionCloak((struct tagWND *)v43, 0LL, v143);
    if ( v144 < 0 )
    {
      v145 = RtlNtStatusToDosError(v144);
      UserSetLastError(v145);
      v95 = 8;
      goto LABEL_485;
    }
  }
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v246);
  if ( v275 )
    zzzLockDisplayAreaAndInvalidateDCCache(v275, 16LL);
  if ( ThreadDesktopWindow )
    zzzLockDisplayAreaAndInvalidateDCCache(ThreadDesktopWindow, 16LL);
  AtomicExecutionCheck::~AtomicExecutionCheck((AtomicExecutionCheck *)&v246);
  if ( (*(_BYTE *)(*(_QWORD *)(v43 + 40) + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(v43) )
  {
    v147 = *(struct tagWND **)v140;
    if ( *(_QWORD *)v140 )
    {
      if ( v233 != *((_QWORD *)v147 + 2) )
      {
        if ( ThreadDesktopWindow != v147 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v146);
          v147 = *(struct tagWND **)(v123 + 104);
        }
        zzzAttachThreadInput(v233, *((_QWORD *)v147 + 2), 1LL);
        v148 = 0LL;
        v149 = *(_QWORD *)(v43 + 24);
        if ( v149 )
          v148 = *(_QWORD *)(v149 + 104);
        v150 = *(struct tagWND **)v140;
        if ( *(_QWORD *)v140 != v148
          && (((unsigned __int8)*(_DWORD *)(*((_QWORD *)v150 + 5) + 288LL) ^ *(_BYTE *)(*(_QWORD *)(v43 + 40) + 288LL)) & 0xF) != 0
          && !IsChildWindowDpiIsolationEnabled((struct tagWND *)v43, v150) )
        {
          xxxForceUpdateProcessDpiAwarenessContext(
            (struct tagWND *)v43,
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v140 + 40LL) + 288LL));
        }
      }
    }
  }
  if ( v276 != (unsigned __int16)gatomMessage && v276 != 32769 && v276 != 32774 && !*(_DWORD *)(v233 + 896) )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v233 + 448) + 20LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    xxxUpdateInputHangInfo(0LL);
  }
  xxxAdjustSize((struct tagWND *)v43);
  ConstrainWindowSIZERECT((__int64)&v247);
  if ( *(_QWORD *)(v43 + 24) )
  {
    v151 = *(_QWORD *)(v43 + 40);
    if ( (*(_BYTE *)(v151 + 31) & 0x40) == 0 && *(char *)(v151 + 24) >= 0 )
      xxxCheckFullScreen((struct tagWND *)v43, (struct tagSIZERECT *)&v247);
  }
  v152 = DWORD2(v247);
  if ( SDWORD2(v247) < 0 )
    v152 = 0;
  DWORD2(v247) = v152;
  v153 = HIDWORD(v247);
  if ( v247 < 0 )
    v153 = 0;
  HIDWORD(v247) = v153;
  RECTFromSIZERECT(*(_QWORD *)(v43 + 40) + 88LL, &v247);
  if ( v239 )
  {
    v154 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)ThreadDesktopWindow + 5) + 256LL));
LABEL_453:
    v155 = (__int64 *)v154;
  }
  else
  {
    if ( v253 )
    {
      v154 = GetInheritedMonitor((struct tagWND *)v43);
      goto LABEL_453;
    }
    v155 = 0LL;
  }
  if ( v155 || (v155 = (__int64 *)MonitorFromRect((struct tagRECT *)(*(_QWORD *)(v43 + 40) + 88LL)), v156 = 0LL, v155) )
    v156 = *v155;
  v157 = *(_QWORD *)(v43 + 40);
  if ( v156 != *(_QWORD *)(v157 + 256) )
  {
    *(_QWORD *)(v157 + 256) = v156;
    *(_WORD *)(*(_QWORD *)(v43 + 40) + 284LL) = *(_WORD *)(v155[5] + 60);
    v158 = *(_DWORD **)(v43 + 288);
    if ( v158 )
    {
      --*v158;
      v159 = *(_DWORD **)(v43 + 288);
      if ( !*v159 )
        Win32FreePool(v159);
      *(_QWORD *)(v43 + 288) = 0LL;
    }
    v160 = (_DWORD *)v155[16];
    *(_QWORD *)(v43 + 288) = v160;
    ++*v160;
    if ( !v239 )
      UpdateTopLevelWindowDPITransform(v43, v155);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v43 + 40) + 27LL) & 0x20) != 0 && GetRedirectionBitmap(v43) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    v161 = RecreateRedirectionBitmap((struct tagWND *)v43, 0, 0LL);
    v162 = *(_QWORD *)(gpDispInfo + 40LL);
    if ( v161 < 0 )
    {
      GreUnlockVisRgn(v162);
      v95 = 3;
      goto LABEL_485;
    }
    GreUnlockVisRgn(v162);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v242[0] + 8LL) + 8LL) & 0x20) != 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v242[0] + 8LL) + 8LL) & 0x40) != 0 && !*(_QWORD *)(*(_QWORD *)v242[0] + 40LL) )
  {
    StyleWindow = GetStyleWindow(v43, 2848LL);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    CacheDC = CreateCacheDC(v43, StyleWindow != 0 ? 49152 : 0x8000, 0LL);
    v165 = *(_QWORD *)(gpDispInfo + 40LL);
    if ( !CacheDC )
    {
      GreUnlockVisRgn(v165);
      v95 = 10;
      goto LABEL_485;
    }
    GreUnlockVisRgn(v165);
  }
  v166 = v235;
  if ( (v235 & 0x80000) != 0
    && (*(_BYTE *)(*(_QWORD *)(v43 + 40) + 26LL) & 8) == 0
    && (int)xxxSetLayeredWindow((struct tagWND *)v43) < 0 )
  {
    v95 = 11;
    goto LABEL_485;
  }
  if ( (v166 & 0x2000000) != 0 && !GetStyleWindow(*(_QWORD *)(v43 + 104), 2818LL) )
  {
    SetOrClrWF(1LL, v43, 2818LL, 1LL);
    if ( (int)SetRedirectedWindow((struct tagWND *)v43, 2) < 0 )
    {
      SetOrClrWF(0LL, v43, 2818LL, 1LL);
      v95 = 12;
      goto LABEL_485;
    }
  }
  *((_QWORD *)&v287[2] + 1) = __PAIR64__(v236, v238);
  *(_QWORD *)&v287[2] = __PAIR64__(v240, v244);
  if ( !xxxSendMessage(v43, 129LL, 0LL, v287) )
    goto LABEL_484;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v43 + 136) + 8LL) + 9LL) & 2) != 0 )
  {
    SystemMenu = xxxGetSystemMenu((struct tagWND *)v43);
    v250 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v249, SystemMenu);
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v249) )
    {
      v307 = 0LL;
      v308 = 0LL;
      v175 = v250;
      if ( !v250 )
        v175 = *(_QWORD **)v249[0];
      ThreadLock(v175, &v307);
      xxxRemoveDeleteMenuHelper(v249, 5LL, 1024LL, 1LL);
      xxxRemoveDeleteMenuHelper(v249, 5LL, 1024LL, 1LL);
      ThreadUnlock1(v177, v176, v178);
    }
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v43 + 40) + 18LL) & 2) != 0
    && (!*((_QWORD *)&v287[5] + 1) || LODWORD(v287[5]) || *(_QWORD *)(v43 + 184)) )
  {
    v311 = 0LL;
    *((_QWORD *)&v287[3] + 1) = *(_QWORD *)(v43 + 184);
    v287[5] = *(_OWORD *)tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                           (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v43 + 184),
                           (struct _LARGE_UNICODE_STRING *)&v311);
  }
  if ( (*gpsi & 4) != 0 && !*(_QWORD *)(v233 + 784) && (unsigned __int8)tagWND::HasState(v43, 0x20000000LL) )
  {
    DefaultImeWindow = xxxCreateDefaultImeWindow(v179, v237, v266);
    v286[0] = v233 + 784;
    v286[1] = DefaultImeWindow;
    HMAssignmentLock(v286, 0LL);
    v181 = v233;
    v182 = *(_QWORD *)(v233 + 784);
    if ( v182 )
    {
      v303[2] = 0LL;
      v183 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v303[0] = *(_QWORD *)(v183 + 416);
      *(_QWORD *)(v183 + 416) = v303;
      v303[1] = v182;
      HMLockObject(v182);
      xxxSendMessage(*(_QWORD *)(v233 + 784), 647LL, 33LL, 0LL);
      ThreadUnlock1(v185, v184, v186);
      v181 = v233;
    }
    v187 = (**(_DWORD **)(v181 + 480) >> 6) & 1;
    v297 = v187;
    v188 = *(_QWORD *)(v181 + 784);
    if ( v188 && v187 )
    {
      v309 = 0LL;
      v310 = 0LL;
      ThreadLock(v188, &v309);
      xxxSendMessage(*(_QWORD *)(v233 + 784), 647LL, 25LL, *(_QWORD *)(*(_QWORD *)(v233 + 440) + 40LL));
      v189 = *(_QWORD **)(v233 + 480);
      *v189 &= ~0x40uLL;
      ThreadUnlock1(v189, v190, v191);
    }
  }
  if ( ThreadDesktopWindow
    && ((*(_DWORD *)(v43 + 320) & 0x1000000) == 0 || *(struct tagWND **)(v43 + 104) == ThreadDesktopWindow) )
  {
    v192 = PWInsertAfter(Str1);
    v193 = v192;
    if ( (unsigned __int64)(v192 - 2) <= 0xFFFFFFFFFFFFFFFBuLL && *(_QWORD *)(v192 + 104) != *(_QWORD *)(v43 + 104) )
      v193 = v239 != 0;
    v194 = *(_QWORD *)(v43 + 120);
    if ( v194 )
    {
      *(_DWORD *)(*(_QWORD *)(v43 + 40) + 236LL) = *(_DWORD *)(*(_QWORD *)(v194 + 40) + 236LL);
      SetOrClrWF(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v43 + 120) + 40LL) + 232LL) & 0x40, v43, 55360LL, 1LL);
    }
    if ( !(unsigned int)ValidateNewParent(v43, ThreadDesktopWindow) )
    {
      v198 = 9;
      goto LABEL_548;
    }
    UnlinkWindow((struct tagWND *)v43);
    v196 = *(_QWORD *)(v43 + 40);
    if ( (*(_BYTE *)(v196 + 31) & 0xC0) != 0x40
      && ThreadDesktopWindow != *(struct tagWND **)(*((_QWORD *)ThreadDesktopWindow + 3) + 104LL) )
    {
      if ( (*(_BYTE *)(v196 + 24) & 8) != 0 )
      {
        if ( gHardErrorHandler )
        {
          TopMostInsertAfter = GetTopMostInsertAfter(v43);
          if ( TopMostInsertAfter )
            v193 = TopMostInsertAfter;
        }
      }
      else
      {
        if ( !v193 )
          goto LABEL_536;
        v199 = 0;
        if ( v193 >= 0xFFFFFFFFFFFFFFFEuLL || v193 == 1 )
          v199 = 1;
        if ( !v199 && (*(_BYTE *)(*(_QWORD *)(v193 + 40) + 24LL) & 8) != 0 )
LABEL_536:
          v193 = (unsigned __int64)CalcForegroundInsertAfterComponentUIAware((struct tagWND *)v43);
      }
    }
    if ( v193 >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      v198 = 13;
      goto LABEL_548;
    }
    LinkWindow((struct tagWND *)v43);
    zzzLockDisplayAreaAndInvalidateDCCache(ThreadDesktopWindow, 16LL);
  }
  v201 = *(_QWORD *)(v43 + 40);
  v202 = v201;
  if ( (*(_BYTE *)(v201 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(*((_QWORD *)ThreadDesktopWindow + 5) + 26LL) & 0x40) != 0 )
  {
    v203 = *(_DWORD *)(v201 + 96);
    v204 = *(_DWORD *)(v201 + 88);
    *(_DWORD *)(v201 + 96) = v267 + DWORD2(v267) - v204;
    *(_DWORD *)(*(_QWORD *)(v43 + 40) + 88LL) = v204 + *(_DWORD *)(*(_QWORD *)(v43 + 40) + 96LL) - v203;
    v202 = *(_QWORD *)(v257 + 40);
  }
  v318 = *(_OWORD *)(v202 + 88);
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(v43, 0, 0, 0LL, 1, 0);
  *(_OWORD *)(*(_QWORD *)(v43 + 40) + 104LL) = v318;
  if ( xxxSendMessage(v43, 1LL, 0LL, v287) != -1 )
  {
    SetOrClrWF(1LL, v43, 1920LL, 1LL);
    xxxConsiderPreferredDpiChange((struct tagWND *)v43);
    if ( (unsigned int)IsWindowDesktopComposed(v43) )
    {
      v207 = (void *)ReferenceDwmApiPort();
      DwmAsyncChildStyleChange(v207);
      DwmChildRectChange(v43);
      DirtyVisRgnTrackers((struct tagWND *)v43);
      v208 = (void *)ReferenceDwmApiPort();
      DwmAsyncOwnerChange(v208);
    }
    xxxWindowEvent(0x8000u, 0);
    v209 = *(_QWORD *)(v43 + 40);
    if ( (*(_BYTE *)(v209 + 16) & 0x10) == 0 )
    {
      xxxSendSizeMessage(v43);
      if ( ThreadDesktopWindow && (struct tagWND *)GetDesktopWindow(v43) != ThreadDesktopWindow )
      {
        LODWORD(v318) = v318 - v267;
        DWORD1(v318) -= DWORD1(v267);
      }
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v43, 0, 0, 0LL, 1, 0);
      v209 = *(_QWORD *)(v257 + 40);
    }
    v210 = gdwPUDFlags & 0x10000 | 1;
    v211 = *(_BYTE *)(v209 + 31);
    if ( (v211 & 0x20) != 0 )
    {
      SetMinimize((struct tagWND *)v43);
      v212 = 7LL;
    }
    else
    {
      if ( (v211 & 1) == 0 )
        goto LABEL_567;
      SetOrClrWF(0LL, v43, 3841LL, 1LL);
      v210 = gdwPUDFlags & 0x10000 | 0x11;
      v212 = 3LL;
    }
    xxxMinMaximize(v43, v212, v210);
LABEL_567:
    CalcWindowFullScreen((struct tagWND *)v43);
    v213 = *(_QWORD *)(v43 + 40);
    if ( (*(_BYTE *)(v213 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(v213 + 24) & 4) == 0 )
    {
      v214 = *(_QWORD *)(v43 + 104);
      if ( v214 )
      {
        *(_QWORD *)&v300 = *(_QWORD *)(v233 + 416);
        *(_QWORD *)(v233 + 416) = &v300;
        *((_QWORD *)&v300 + 1) = v214;
        HMLockObject(v214);
        v215 = *(_QWORD *)(v43 + 104);
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v215, 0, 0, 0LL, 1, 0);
        ThreadUnlock1(v217, v216, v218);
      }
    }
    xxxInheritWindowMonitor((ShellWindowManagement *)v43);
    if ( (a5 & 0x10000000) != 0 )
      xxxShowWindow((struct tagWND *)v43, v254 | gdwPUDFlags & 0x10000);
    v220 = *(_QWORD *)(v43 + 40);
    if ( (*(_BYTE *)(v220 + 31) & 0xC0) == 0 || (*(_BYTE *)(v220 + 26) & 4) != 0 )
    {
      v221 = *(_DWORD *)(*(_QWORD *)(v233 + 424) + 692LL);
      if ( v221 )
      {
        xxxSendMessage(v43, 50LL, v221, 0LL);
        *(_DWORD *)(*(_QWORD *)(v233 + 424) + 692LL) = 0;
      }
    }
    WindowMargins::CheckForChanges(v43, 0LL, v219);
    if ( v255 )
      ThreadUnlock1(v223, v222, v224);
    v225 = *(struct tagCLS **)v242[0];
    v226 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(v226 + 16) = v293;
    ClassUnlockWorker(v225);
    v230 = ThreadUnlock1(v228, v227, v229);
    v231 = v230;
    if ( !v230 || (*(_BYTE *)(_HMPheFromObject(v230) + 25) & 1) != 0 )
      v231 = 0LL;
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v249);
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v242);
    return v231;
  }
  v198 = v241;
LABEL_548:
  if ( v255 )
    ThreadUnlock1(v196, v195, v197);
  if ( ThreadUnlock1(v196, v195, v197) )
    xxxDestroyWindow(v43);
  v205 = *(struct tagCLS **)v242[0];
  v206 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v206 + 16) = v293;
  ClassUnlockWorker(v205);
  if ( v198 )
  {
    v172 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
    v173 = v198;
    goto LABEL_554;
  }
LABEL_35:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v249);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v242);
  return 0LL;
}
