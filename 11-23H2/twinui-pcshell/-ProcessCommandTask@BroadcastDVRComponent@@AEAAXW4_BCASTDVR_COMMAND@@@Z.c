/*
 * XREFs of ?ProcessCommandTask@BroadcastDVRComponent@@AEAAXW4_BCASTDVR_COMMAND@@@Z @ 0x1803DA8E4
 * Callers:
 *     ?ProcessShowBroadcastUIForDeveloperTask@BroadcastDVRComponent@@AEAAXK@Z @ 0x1803DAC34 (-ProcessShowBroadcastUIForDeveloperTask@BroadcastDVRComponent@@AEAAXK@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b70c5209c5676cb8296daabd8d05eee7___::Run @ 0x1803DB670 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b70c5209c5676cb8296daabd8d05eee7___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180082EC0 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x1803D6388 (-BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z.c)
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803DBBC4 (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall BroadcastDVRComponent::ProcessCommandTask(__int64 a1, int a2)
{
  struct IApplicationView *v4; // rbx
  const unsigned __int16 *v5; // rdx
  __int64 v6; // rsi
  HWND DesktopWindow; // r12
  HWND v8; // r9
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // r15d
  void *v13; // rbx
  unsigned __int64 v14; // r8
  int v15; // r8d
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  LONG WindowLongW; // eax
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v29; // [rsp+20h] [rbp-48h]
  struct IApplicationView *v30; // [rsp+40h] [rbp-28h] BYREF
  __int64 v31; // [rsp+48h] [rbp-20h] BYREF
  std::_Ref_count_base *v32; // [rsp+50h] [rbp-18h]
  HWND v33; // [rsp+B0h] [rbp+48h] BYREF
  bool v34; // [rsp+B8h] [rbp+50h] BYREF
  void *v35; // [rsp+C0h] [rbp+58h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp+60h] BYREF

  v4 = *(struct IApplicationView **)(a1 + 304);
  v30 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v31,
    (_QWORD *)(a1 + 312));
  v33 = 0LL;
  v35 = 0LL;
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1:
        v5 = L"RECORD_THAT";
        break;
      case 2:
        v5 = L"START_RECORD";
        break;
      case 3:
        v5 = L"STOP_RECORD";
        break;
      case 4:
        v5 = L"TAKE_SCREENSHOT";
        break;
      case 5:
        v5 = L"START_BROADCAST";
        break;
      case 6:
        v5 = L"STOP_BROADCAST";
        break;
      case 9:
        v5 = L"DEVELOPER_START_BROADCAST";
        break;
      default:
        v5 = L"UNKNOWN";
        break;
    }
  }
  else
  {
    v5 = L"OPEN_GAMEBAR";
  }
  GameDVRTraceProvider::BroadcastDVRComponent_ProcessCommandTask(a2, v5);
  v6 = v31;
  if ( v4 )
  {
    if ( *(_BYTE *)(v31 + 17) )
      goto LABEL_72;
    if ( !*(_QWORD *)v31 )
    {
      v34 = 0;
      pv = 0LL;
      BroadcastDVRComponent::EvaluateIfViewIsGame(a1, v4, v31 + 16, (char *)&v34, &v33, &v35, &pv);
      *(_QWORD *)v6 = v33;
      *(_QWORD *)(v6 + 8) = v35;
      v13 = pv;
      if ( pv )
      {
        v14 = -1LL;
        do
          ++v14;
        while ( *((_WORD *)pv + v14) );
        std::wstring::assign((char *)(v6 + 72), pv, v14);
      }
      if ( v13 )
        CoTaskMemFree(v13);
    }
    DesktopWindow = *(HWND *)v6;
    v8 = *(HWND *)(v6 + 8);
    v15 = *(_DWORD *)(v6 + 56);
    v34 = (v15 & 2) != 0;
    v16 = (*(_BYTE *)(v6 + 16) != 0) | 0x40;
    if ( !*(_BYTE *)(v6 + 18) )
      v16 = *(_BYTE *)(v6 + 16) != 0;
    v17 = v16 | 2;
    if ( (v15 & 8) == 0 )
      v17 = v16;
    v11 = 16;
    v18 = v17 | 4;
    if ( (v15 & 0x10) == 0 )
      v18 = v17;
    v19 = v18 | 8;
    if ( (v15 & 0x20) == 0 )
      v19 = v18;
    v12 = v19 | 0x10;
    if ( (v15 & 0x40) == 0 )
      v12 = v19;
  }
  else
  {
    DesktopWindow = GetDesktopWindow();
    v8 = DesktopWindow;
    v34 = 1;
    v9 = (*(_BYTE *)(a1 + 449) != 0 ? 98 : 96) | 4;
    if ( !*(_BYTE *)(a1 + 450) )
      v9 = *(_BYTE *)(a1 + 449) != 0 ? 98 : 96;
    v10 = v9 | 8;
    if ( !*(_BYTE *)(a1 + 451) )
      v10 = v9;
    v11 = 16;
    v12 = v10 | 0x10;
    if ( !*(_BYTE *)(a1 + 452) )
      v12 = v10;
  }
  if ( DesktopWindow )
  {
    WindowLongW = GetWindowLongW(v8, -16);
    if ( WindowLongW )
    {
      if ( (WindowLongW & 0x20000000) == 0 )
      {
        if ( a2 > 5 )
        {
          v24 = a2 - 6;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  if ( v27 != 1 )
                    goto LABEL_72;
                  v11 = 25;
                }
                else
                {
                  v11 = 23;
                }
              }
              else
              {
                v11 = 22;
              }
            }
            else
            {
              v11 = 21;
            }
          }
          else
          {
            v11 = 20;
          }
        }
        else if ( a2 == 5 )
        {
          v11 = 19;
        }
        else if ( a2 )
        {
          v21 = a2 - 1;
          if ( v21 )
          {
            v22 = v21 - 1;
            if ( v22 )
            {
              v23 = v22 - 1;
              if ( v23 )
              {
                if ( v23 != 1 )
                  goto LABEL_72;
                v11 = 18;
              }
              else
              {
                v11 = 17;
              }
            }
          }
          else
          {
            v11 = 15;
          }
        }
        else
        {
          v11 = 14;
        }
        LOBYTE(v29) = 0;
        BroadcastDVRComponent::SendShellNotificationToDVR(a1, v11, DesktopWindow, v12, v29, &v34, 0LL);
        if ( v34 && v6 )
          *(_DWORD *)(v6 + 56) |= 2u;
      }
    }
  }
LABEL_72:
  if ( v32 )
    std::_Ref_count_base::_Decref(v32);
  return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v30);
}
