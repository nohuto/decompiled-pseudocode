/*
 * XREFs of ?InitializePrivilegedOperationsForIam@PrivilegedOperationsService@@QEAAJPEAUIPrivilegedOperationsConsumer@@@Z @ 0x18006EE10
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x1800DC650 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x18006F844 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedDesktopOperations@@VC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall PrivilegedOperationsService::InitializePrivilegedOperationsForIam(
        PrivilegedOperationsService *this,
        struct IPrivilegedOperationsConsumer *a2)
{
  struct PrivilegedOperationsService *v2; // r14
  __int64 *v4; // rdi
  CCriticalFailureHandler *v5; // rcx
  int v6; // ebx
  unsigned __int64 *v8; // [rsp+20h] [rbp-59h]
  unsigned __int64 *v9; // [rsp+28h] [rbp-51h]
  int v10; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v11[3]; // [rsp+34h] [rbp-45h] BYREF
  _OWORD v12[7]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = PrivilegedOperationsService::s_this;
  v4 = (__int64 *)v12;
  v12[0] = GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8;
  v12[1] = GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9;
  v12[2] = GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
  v12[3] = GUID_cff9d0aa_981b_42f3_923e_ccc6c2588bc9;
  v12[4] = GUID_c3bafd5f_1336_4556_b89f_7f96bba71aa6;
  v12[5] = GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
  v12[6] = GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b;
  while ( 1 )
  {
    v6 = PrivilegedOperationsServiceBase<CPrivilegedDesktopOperations,CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
           (char *)v2 + 168,
           a2,
           v4);
    v10 = v6;
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      if ( (int)SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", v11) < 0 )
      {
LABEL_7:
        CRVPrivate::cfhImmersiveShellStartup = 1;
        goto LABEL_3;
      }
      switch ( v11[0] )
      {
        case 2u:
          v6 = -2023406815;
          break;
        case 3u:
          v6 = -2023406814;
          break;
        case 4u:
          v6 = -2147418094;
          break;
        case 5u:
          v6 = -2147022986;
          break;
        default:
          goto LABEL_7;
      }
      v10 = v6;
      goto LABEL_7;
    }
LABEL_3:
    if ( v6 < 0 )
    {
      if ( v6 != -2147024882 && v6 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v5,
          &v10,
          L"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
          0x32Au,
          v8,
          v9);
        v6 = v10;
      }
      if ( v6 < 0 )
        break;
    }
    v4 += 2;
    if ( v4 == &v13 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32A,
    (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v6,
    (int)v8);
  return (unsigned int)v6;
}
