/*
 * XREFs of ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x180029070
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1b237cfa226cb7a358646b393456f6b8__&_ @ 0x1800293DC (Windows--Internal--ComTaskPool--QueueTask__lambda_1b237cfa226cb7a358646b393456f6b8__-_.c)
 *     ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x1800294D0 (-SetActive@ForegroundStaging@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800896BC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUn_ea_1800896BC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMultitaskingViewServiceProvider::QueueTask(__int64 a1, struct _RTL_CRITICAL_SECTION *a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // r15d
  int v8; // ebx
  HWND ForegroundWindow; // rax
  int v10; // eax
  unsigned int v11; // ebx
  struct _RTL_CRITICAL_SECTION *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  int v18; // eax
  __int64 v19; // rdx
  DWORD dwProcessId; // [rsp+20h] [rbp-59h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+28h] [rbp-51h] BYREF
  __int64 v22; // [rsp+30h] [rbp-49h] BYREF
  __int64 v23; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-39h] BYREF
  tagGUITHREADINFO pgui; // [rsp+50h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v6 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 96));
  v21 = v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v6, 1LL);
  LODWORD(v22) = v7;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v11 = -2147019873;
    v19 = 219LL;
    goto LABEL_23;
  }
  if ( (a3 & 3) != 0 )
  {
    v8 = a3 & 2;
    ForegroundWindow = GetForegroundWindow();
    if ( !ForegroundWindow
      || !GetWindowThreadProcessId(ForegroundWindow, &dwProcessId)
      || dwProcessId != GetCurrentProcessId()
      || v8 )
    {
      v18 = ForegroundStaging::SetActive((ForegroundStaging *)(a1 + 152));
      v11 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x20A,
          (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v18,
          dwProcessId);
        v19 = 223LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)v11,
          dwProcessId);
        goto LABEL_17;
      }
    }
    pgui.cbSize = 72;
    memset_0(&pgui.flags, 0, 0x44uLL);
    if ( GetGUIThreadInfo(0, &pgui) && (pgui.flags & 4) != 0 )
      SendNotifyMessageW(pgui.hwndMenuOwner, 0x1Fu, 0LL, 0LL);
  }
  v24[0] = 0LL;
  dwProcessId = 2;
  v21 = a2;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
          v24,
          &GUID_0d1b8579_c52e_4207_89b3_9726ce949410,
          &v21,
          &dwProcessId);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5,
      (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v10,
      dwProcessId);
  }
  else
  {
    v23 = 0LL;
    v12 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 64);
    dwProcessId = 2;
    v21 = v12;
    v13 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            &v23,
            &GUID_537b455d_1240_433b_82af_10929138b8be,
            &v21,
            &dwProcessId);
    v11 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE7,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v13,
        dwProcessId);
    }
    else
    {
      v21 = (struct _RTL_CRITICAL_SECTION *)v24[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
      v22 = v23;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
      v16 = Windows::Internal::ComTaskPool::QueueTask__lambda_1b237cfa226cb7a358646b393456f6b8____(
              v15,
              v14,
              *(unsigned int *)(a1 + 160),
              &v21);
      v11 = v16;
      if ( v16 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF4,
          (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v16,
          dwProcessId);
      else
        v11 = 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v24);
LABEL_17:
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return v11;
}
