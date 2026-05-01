/*
 * XREFs of ?_ProcessNextOperation@CAppViewManager@@AEAAJXZ @ 0x1803B7D88
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d8d2db46f898e0ad7843c45335dab43b___::Run @ 0x1802D0A10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d8d2db46f898e0ad7843c45335dab43b___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerInputAppRequestedResizeEventArgs@23456@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800678F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_15946b0ccefc41d95148340e59a95271___1_long___lambda_15946b0ccefc41d95148340e59a95271___ @ 0x1802D0566 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802D0566.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@VComPtrCompareHelper@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1803B0DE0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@$0PPPPPPPO@V-.c)
 *     ?_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1803B5374 (-_AddDelayedOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::_ProcessNextOperation(CAppViewManager *this)
{
  __int64 v2; // rdi
  RTL_SRWLOCK *v3; // rbx
  unsigned __int64 *v4; // rax
  __int64 v5; // rsi
  char v6; // r15
  unsigned __int64 v7; // rdx
  char *Event; // rsi
  signed int Error; // ebx
  __int64 *v10; // rax
  volatile int *v11; // rdx
  struct IAsyncCallback *v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v15[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+90h] [rbp+38h] BYREF
  unsigned __int64 UnbiasedTime; // [rsp+98h] [rbp+40h] BYREF
  __int64 pvParam; // [rsp+A0h] [rbp+48h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+50h] BYREF

  v2 = 0LL;
  v20 = 0LL;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = (unsigned __int64 *)*((_QWORD *)this + 17);
  v5 = *v4;
  if ( *v4 )
  {
    UnbiasedTime = *v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&UnbiasedTime);
    v2 = v5;
    UnbiasedTime = 0LL;
    v20 = v5;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&UnbiasedTime);
  }
  CTSimpleArray<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>,ComPtrCompareHelper,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<WeakReference::IWeakReference>>>::RemoveAt(
    (_QWORD *)this + 17,
    0LL);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  pvParam = 8LL;
  if ( SystemParametersInfoW(0x48u, 8u, &pvParam, 0) && HIDWORD(pvParam) )
  {
    v6 = 1;
    QueryUnbiasedInterruptTime(&UnbiasedTime);
    v7 = (UnbiasedTime - *((_QWORD *)this + 22)) / 0x2710;
    if ( (unsigned int)v7 < 0x1C2 )
      Sleep(450 - v7);
  }
  else
  {
    v6 = 0;
  }
  Event = (char *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  v15[1] = (__int64)Event;
  if ( Event )
  {
    v17 = 0;
  }
  else
  {
    Error = ResultFromKnownLastError();
    v17 = Error;
    if ( Error < 0 )
      goto LABEL_21;
  }
  v16[0] = v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v16);
  v16[1] = (__int64)Event;
  v16[2] = (__int64)&v17;
  v10 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_15946b0ccefc41d95148340e59a95271___1_long___lambda_15946b0ccefc41d95148340e59a95271___(
          (__int64 *)&UnbiasedTime,
          v16);
  v12 = (struct IAsyncCallback *)*v10;
  v15[0] = *v10;
  *v10 = 0LL;
  v13 = UnbiasedTime;
  if ( UnbiasedTime )
  {
    UnbiasedTime = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedResizeEventArgs *>>::Release(
      v13,
      v11);
  }
  v17 = CAppViewManager::_AddDelayedOperation(this, v12);
  if ( v17 >= 0 )
  {
    WaitForSingleObjectEx(Event, 0xFFFFFFFF, 0);
    if ( v17 == 1 )
    {
      if ( v6 )
        QueryUnbiasedInterruptTime((PULONGLONG)this + 22);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v15);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v16);
  Error = v17;
LABEL_21:
  if ( (unsigned __int64)(Event - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(Event);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
  return (unsigned int)Error;
}
