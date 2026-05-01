/*
 * XREFs of ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x180049364
 * Callers:
 *     ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x180049160 (-EnsureFramePool@CApplicationFrameService@@UEAAJXZ.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x1801BD070 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x1801BF2E0 (-EndFrameRecovery@CApplicationFrameService@@UEAAXXZ.c)
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000E158 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d3c491b51a7e8d1962a232c20ca80fd8__&_ @ 0x18004945C (Windows--Internal--ComTaskPool--QueueTask__lambda_d3c491b51a7e8d1962a232c20ca80fd8__-_.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameManagerState@CApplicationFrameService@@W401@@Z @ 0x1803BAF1C (--$WaitOnAddressNotEqualHelper@W4FrameManagerState@CApplicationFrameService@@@@YAXPEAW4FrameMana.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationFrameService::_EnsureFrameManager(__int64 a1, int a2, __int64 *a3)
{
  _DWORD *v5; // rdi
  int v6; // esi
  char v7; // bl
  unsigned int UniqueContext; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  CCriticalFailureHandler *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ebx
  CCriticalFailureHandler *v16; // rcx
  signed int v17; // eax
  unsigned __int64 *v18; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v21[6]; // [rsp+38h] [rbp-30h] BYREF
  int v22; // [rsp+A0h] [rbp+38h] BYREF
  int v23; // [rsp+A8h] [rbp+40h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+50h] BYREF

  v23 = a2;
  *a3 = 0LL;
  v22 = -2147023728;
  v25 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (_DWORD *)(a1 + 196);
  v6 = *(_DWORD *)(a1 + 196);
  if ( v6 )
  {
    v7 = 0;
    if ( v6 == 2 )
    {
      v22 = 0;
      Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v25, (__int64 *)(a1 + 176));
    }
  }
  else
  {
    v7 = 1;
    *v5 = 1;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( !v7 )
  {
    if ( v6 != 1 )
      goto LABEL_5;
    WaitOnAddressNotEqualHelper<enum CApplicationFrameService::FrameManagerState>(v5);
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v17 = *v5 != 2 ? 0x80070490 : 0;
    v22 = v17;
    if ( v23 )
      goto LABEL_46;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_42:
      if ( v17 >= 0 )
        goto LABEL_47;
      if ( v17 != -2147024882 && v17 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v16,
          &v22,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x4E5u,
          v18,
          v19);
        v17 = v22;
      }
LABEL_46:
      if ( v17 < 0 )
      {
LABEL_48:
        ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
        goto LABEL_5;
      }
LABEL_47:
      Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v25, (__int64 *)(a1 + 176));
      goto LABEL_48;
    }
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v24) >= 0 )
    {
      switch ( v24 )
      {
        case 2u:
          v17 = -2023406815;
          goto LABEL_39;
        case 3u:
          v17 = -2023406814;
          goto LABEL_39;
        case 4u:
          v17 = -2147418094;
          goto LABEL_39;
        case 5u:
          v17 = -2147022986;
LABEL_39:
          v22 = v17;
LABEL_41:
          CRVPrivate::cfhImmersiveShellStartup = 1;
          goto LABEL_42;
      }
    }
    v17 = v22;
    goto LABEL_41;
  }
  v20 = a1;
  v21[0] = &v22;
  v21[1] = a1;
  v21[2] = &v23;
  v21[3] = &v20;
  v21[4] = &v25;
  UniqueContext = SHTaskPoolGetUniqueContext();
  v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_d3c491b51a7e8d1962a232c20ca80fd8____(
          v10,
          v9,
          UniqueContext,
          v21);
  if ( v11 < 0 )
  {
    v22 = v11;
    if ( v23 )
    {
LABEL_26:
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      *(_DWORD *)(v20 + 196) = 0;
      WakeByAddressAll((PVOID)(v20 + 196));
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      goto LABEL_5;
    }
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_22:
      if ( v11 < 0 && v11 != -2147024882 && v11 != -2144862209 )
        CCriticalFailureHandler::HandleFailure(
          v12,
          &v22,
          L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
          0x4D3u,
          v18,
          v19);
      goto LABEL_26;
    }
    if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v24) >= 0 )
    {
      switch ( v24 )
      {
        case 2u:
          v11 = -2023406815;
          goto LABEL_19;
        case 3u:
          v11 = -2023406814;
          goto LABEL_19;
        case 4u:
          v11 = -2147418094;
          goto LABEL_19;
        case 5u:
          v11 = -2147022986;
LABEL_19:
          v22 = v11;
LABEL_21:
          CRVPrivate::cfhImmersiveShellStartup = 1;
          goto LABEL_22;
      }
    }
    v11 = v22;
    goto LABEL_21;
  }
LABEL_5:
  v13 = v25;
  v25 = 0LL;
  *a3 = v13;
  v14 = v22;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
  return v14;
}
