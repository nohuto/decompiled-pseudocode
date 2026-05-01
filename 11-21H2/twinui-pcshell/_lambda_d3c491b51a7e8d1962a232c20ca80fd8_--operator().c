/*
 * XREFs of _lambda_d3c491b51a7e8d1962a232c20ca80fd8_::operator() @ 0x1800C5380
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d3c491b51a7e8d1962a232c20ca80fd8__&_::Run @ 0x1800C5370 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d3c491b51a7e8d1962a232c20ca80fd8__-_--Run.c)
 * Callees:
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x1800C5434 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     ??4?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C64F4 (--4-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

void __fastcall lambda_d3c491b51a7e8d1962a232c20ca80fd8_::operator()(__int64 a1)
{
  int *v2; // rbx
  CCriticalFailureHandler *v3; // rcx
  __int64 v4; // rdx
  unsigned __int64 *v5; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v6; // [rsp+28h] [rbp-10h]
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(int **)a1;
  *v2 = CApplicationFrameService::_CreateFrameManager(*(_QWORD *)(a1 + 8), **(unsigned int **)(a1 + 16));
  if ( !**(_DWORD **)(a1 + 16) )
  {
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v7) >= 0 )
      {
        switch ( v7 )
        {
          case 2u:
            *v2 = -2023406815;
            break;
          case 3u:
            *v2 = -2023406814;
            break;
          case 4u:
            *v2 = -2147418094;
            break;
          case 5u:
            *v2 = -2147022986;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
    }
    if ( *v2 < 0 && *v2 != -2147024882 && *v2 != -2144862209 )
      CCriticalFailureHandler::HandleFailure(
        v3,
        v2,
        L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        0x4BFu,
        v5,
        v6);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(*(_QWORD *)v4 + 196LL) = ((**(int **)a1 >> 31) & 0xFFFFFFFE) + 2;
  WakeByAddressAll((PVOID)(*(_QWORD *)v4 + 196LL));
  if ( **(int **)a1 >= 0 )
    Microsoft::WRL::ComPtr<IOSTaskCompletion>::operator=(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 8) + 176LL);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
