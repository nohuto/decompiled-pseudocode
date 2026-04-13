/*
 * XREFs of ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800E7A5C
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x1800B07A0 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x1800B12D0 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 * Callees:
 *     IsOpenStateExplicitPresent @ 0x180023754 (IsOpenStateExplicitPresent.c)
 *     ??$__invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x1800273F8 (--$__invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180044550 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180063830 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetSoftLandingFolderForUser(HANDLE hToken, WCHAR *lpPathName, __int64 a3)
{
  __int64 v5; // rax
  const char *v6; // r9
  __int64 v7; // rbx
  const char *v9; // r9
  unsigned int LastError; // edi
  HRESULT v11; // eax
  unsigned int v12; // r14d
  const char *v13; // r9
  DWORD v14; // edi
  const char *v15; // r9
  const char *v16; // r9
  __int64 (__fastcall *v17[2])(_QWORD); // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v19; // [rsp+60h] [rbp+30h] BYREF
  __int64 v20; // [rsp+68h] [rbp+38h] BYREF

  v19 = a3;
  if ( !IsOpenStateExplicitPresent() || !IsOpenStateExplicitPresent() )
    return 2147942527LL;
  v5 = OpenStateExplicit(hToken, L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy");
  v7 = v5;
  if ( !v5 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x17,
             (int)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
             v6);
  v19 = 260LL;
  if ( !(unsigned int)GetStateFolder(v5, 1LL, lpPathName, &v19) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1A,
                  (int)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
                  v9);
    v20 = v7;
    v17[0] = CloseState;
    wistd::__invoke<int (*)(void *),void * &>(v17, &v20);
    return LastError;
  }
  v19 = 260LL;
  v11 = PathCchCombine(lpPathName, 0x104uLL, lpPathName, L"Tips");
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( !ImpersonateLoggedOnUser(hToken) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x20,
                    (int)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
                    v13);
      v20 = v7;
      v17[0] = CloseState;
      wistd::__invoke<int (*)(void *),void * &>(v17, &v20);
      return LastError;
    }
    if ( CreateDirectoryW(lpPathName, 0LL) || (v14 = GetLastError(), v14 == 183) )
    {
      if ( !RevertToSelf() )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x2C,
                      (int)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
                      v16);
        v20 = v7;
        v17[0] = CloseState;
        wistd::__invoke<int (*)(void *),void * &>(v17, &v20);
        return LastError;
      }
    }
    else
    {
      if ( !RevertToSelf() )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x27,
                      (int)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
                      v15);
        v20 = v7;
        v17[0] = CloseState;
        wistd::__invoke<int (*)(void *),void * &>(v17, &v20);
        return LastError;
      }
      if ( v14 )
      {
        LastError = wil::details::in1diag3::Return_Win32(
                      retaddr,
                      40LL,
                      (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
                      (const char *)v14);
        v20 = v7;
        v17[0] = CloseState;
        wistd::__invoke<int (*)(void *),void * &>(v17, &v20);
        return LastError;
      }
    }
    v20 = v7;
    v17[0] = CloseState;
    wistd::__invoke<int (*)(void *),void * &>(v17, &v20);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (__int64)"onecoreuap\\shell\\twinui\\softlanding\\published\\softlandingcampaign.cpp",
      (const char *)(unsigned int)v11);
    v20 = v7;
    v17[0] = CloseState;
    wistd::__invoke<int (*)(void *),void * &>(v17, &v20);
    return v12;
  }
}
