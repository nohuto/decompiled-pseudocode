/*
 * XREFs of _lambda_0cfa17de80a192d7104afc8a843b7ae2_::operator() @ 0x180206BB4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2___::Run @ 0x18020B880 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0cfa17de80a192d7104afc8a843b7ae2___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C386C (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800E15CC (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18010D7E0 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801D8F2C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1802DB81A (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18050942C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?Stop@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x180518768 (-Stop@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18051B7D8 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18051C0FC (-ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?ViewInfoDuplicated@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18051C194 (-ViewInfoDuplicated@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_0cfa17de80a192d7104afc8a843b7ae2_::operator()(_QWORD *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnViewCreated *v2; // r12
  std::_Ref_count_base *v3; // rcx
  __int64 v4; // rsi
  std::_Ref_count_base *v5; // r14
  char v6; // r15
  int v7; // eax
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  const struct _tlgProvider_t *v12; // rax
  int v13; // edi
  __int64 v14; // rax
  struct IUnknown ***v15; // rcx
  struct IUnknown ***v16; // rdi
  int v17; // r13d
  struct IUnknown ***v18; // r12
  int v19; // eax
  __int64 v21; // [rsp+40h] [rbp-69h] BYREF
  __int128 v22; // [rsp+48h] [rbp-61h]
  _QWORD *v23; // [rsp+58h] [rbp-51h]
  char v24; // [rsp+60h] [rbp-49h]
  _BYTE v25[144]; // [rsp+70h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  __int64 v27; // [rsp+110h] [rbp+67h] BYREF
  struct IInspectable *v28; // [rsp+118h] [rbp+6Fh] BYREF
  RTL_SRWLOCK *v29; // [rsp+120h] [rbp+77h] BYREF
  __int64 StringRawBuffer; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = (TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)(a1 + 5);
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 5),
    (wil::ActivityThreadWatcher *)v25);
  v22 = 0LL;
  v3 = (std::_Ref_count_base *)a1[4];
  if ( v3 && std::_Ref_count_base::_Incref_nz(v3) )
  {
    v4 = a1[3];
    *(_QWORD *)&v22 = v4;
    v5 = (std::_Ref_count_base *)a1[4];
    *((_QWORD *)&v22 + 1) = v5;
  }
  else
  {
    v5 = (std::_Ref_count_base *)*((_QWORD *)&v22 + 1);
    v4 = v22;
  }
  if ( !v4 )
  {
    TouchKeyboardExperienceTelemetryLogger::OnViewCreated::Stop(v2, *((_DWORD *)a1 + 90));
    v11 = 0;
    goto LABEL_29;
  }
  v23 = a1;
  v6 = 1;
  v24 = 1;
  v28 = 0LL;
  v7 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 1), &v28);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x151B,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  if ( v28 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1[2] + 424LL, (__int64)&v29);
    v9 = TouchKeyboardExperienceManager::InitializeViewInfoIfNeeded(
           (TouchKeyboardExperienceManager *)a1[2],
           (struct KBViewInfo *)v4);
    v11 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1528,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v29);
      goto LABEL_23;
    }
    v12 = TouchKeyboardExperienceTraceLogging::Provider(v10);
    v13 = (int)v12;
    if ( *(_DWORD *)v12 > 5u )
    {
      LODWORD(v27) = *(_DWORD *)(v4 + 104);
      StringRawBuffer = (__int64)WindowsGetStringRawBuffer(*(HSTRING *)(v4 + 112), 0LL);
      v21 = (__int64)"viewInfo created";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v13,
        (int)&dword_18085D728,
        (__int64)&v21,
        (__int64)&StringRawBuffer,
        (__int64)&v27);
    }
    v14 = a1[2];
    v15 = *(struct IUnknown ****)(v14 + 440);
    v16 = *(struct IUnknown ****)(v14 + 432);
    StringRawBuffer = ((char *)v15 - (char *)v16) >> 4;
    v17 = 0;
    if ( v16 != v15 )
    {
      v18 = v15;
      do
      {
        if ( (unsigned int)SHIsSameObject(**v16, *(struct IUnknown **)v4) )
          ++v17;
        v16 += 2;
      }
      while ( v16 != v18 );
      v2 = (TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)(a1 + 5);
      if ( v17 > 1 )
        TouchKeyboardExperienceTelemetryLogger::ViewInfoDuplicated();
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v29);
    v6 = 0;
    v8 = StringRawBuffer;
  }
  else
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
    v8 = *((_DWORD *)a1 + 90);
  }
  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::Stop(v2, v8);
  v11 = 0;
LABEL_23:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v28);
  if ( v6 )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 344LL))(*a1, 0LL);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1516,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
    TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed();
  }
LABEL_29:
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v25);
  return v11;
}
