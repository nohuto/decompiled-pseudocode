/*
 * XREFs of ?OnShellHookMessageTask@BroadcastDVRComponent@@AEAAXF@Z @ 0x1803DA414
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___::Run @ 0x1803DB6B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cb7dc9aacdd84c31e99625f95c4eec33___--Run.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_NPEAPEAUHWND__@@3AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180082EC0 (-EvaluateIfViewIsGame@BroadcastDVRComponent@@AEAAXPEAUIApplicationView@@PEAUGameConfigInfo@@PEA_.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?BroadcastDVRComponent_OnShellHookMessageTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x1803D624C (-BroadcastDVRComponent_OnShellHookMessageTask@GameDVRTraceProvider@@SAXIPEBG@Z.c)
 *     ?SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture@Media@Windows@@PEAUHWND__@@K_NPEA_NPEAUBroadcastDVRActiveAppInfo@@@Z @ 0x1803DBBC4 (-SendShellNotificationToDVR@BroadcastDVRComponent@@QEAAJW4ShellNotificationType@Internal@Capture.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall BroadcastDVRComponent::OnShellHookMessageTask(BroadcastDVRComponent *this, __int16 a2)
{
  int v2; // edi
  struct IApplicationView *v4; // rbx
  const unsigned __int16 *v5; // rdx
  __int64 v6; // rsi
  HWND DesktopWindow; // r15
  HWND v8; // r9
  char v9; // r12
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // ebx
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
  __int64 v28; // rdx
  int v29; // [rsp+20h] [rbp-48h]
  struct IApplicationView *v30; // [rsp+40h] [rbp-28h] BYREF
  __int64 v31; // [rsp+48h] [rbp-20h] BYREF
  std::_Ref_count_base *v32; // [rsp+50h] [rbp-18h]
  HWND v33; // [rsp+B0h] [rbp+48h] BYREF
  bool v34; // [rsp+B8h] [rbp+50h] BYREF
  void *v35; // [rsp+C0h] [rbp+58h] BYREF
  LPVOID pv; // [rsp+C8h] [rbp+60h] BYREF

  v2 = a2;
  v4 = (struct IApplicationView *)*((_QWORD *)this + 38);
  v30 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
  std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
    &v31,
    (_QWORD *)this + 39);
  v33 = 0LL;
  v35 = 0LL;
  switch ( v2 )
  {
    case '7':
      v5 = L"APPCOMMAND_OPEN_GAMEBAR";
      break;
    case '8':
      v5 = L"APPCOMMAND_TOGGLE_RECORD";
      break;
    case '9':
      v5 = L"APPCOMMAND_RECORD_CLIP";
      break;
    case ':':
      v5 = L"APPCOMMAND_TAKE_SCREENSHOT";
      break;
    case ';':
      v5 = L"APPCOMMAND_TOGGLE_INDICATOR";
      break;
    case '<':
      v5 = L"APPCOMMAND_TOGGLE_MICROPHONE";
      break;
    case '=':
      v5 = L"APPCOMMAND_TOGGLE_CAMERA";
      break;
    case '>':
      v5 = L"APPCOMMAND_TOGGLE_BROADACST";
      break;
    default:
      v5 = L"UNKNOWN";
      break;
  }
  GameDVRTraceProvider::BroadcastDVRComponent_OnShellHookMessageTask(v2, v5);
  v6 = v31;
  if ( v4 )
  {
    if ( *(_BYTE *)(v31 + 17) )
      goto LABEL_68;
    if ( !*(_QWORD *)v31 )
    {
      v34 = 0;
      pv = 0LL;
      BroadcastDVRComponent::EvaluateIfViewIsGame((__int64)this, v4, v31 + 16, (char *)&v34, &v33, &v35, &pv);
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
    v9 = *(_BYTE *)(v6 + 16);
    v15 = *(_DWORD *)(v6 + 56);
    v34 = (v15 & 2) != 0;
    v16 = (v9 != 0) | 0x40;
    if ( !*(_BYTE *)(v6 + 18) )
      v16 = v9 != 0;
    v17 = v16 | 2;
    if ( (v15 & 8) == 0 )
      v17 = v16;
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
    v9 = 0;
    v34 = 1;
    v10 = (*((_BYTE *)this + 449) != 0 ? 98 : 96) | 4;
    if ( !*((_BYTE *)this + 450) )
      v10 = *((_BYTE *)this + 449) != 0 ? 98 : 96;
    v11 = v10 | 8;
    if ( !*((_BYTE *)this + 451) )
      v11 = v10;
    v12 = v11 | 0x10;
    if ( !*((_BYTE *)this + 452) )
      v12 = v11;
  }
  if ( DesktopWindow )
  {
    WindowLongW = GetWindowLongW(v8, -16);
    if ( WindowLongW )
    {
      if ( (WindowLongW & 0x20000000) == 0 )
      {
        v21 = v2 - 55;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
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
                        goto LABEL_68;
                      v28 = 31LL;
                      goto LABEL_65;
                    }
                    v28 = 30LL;
                  }
                  else
                  {
                    v28 = 29LL;
                  }
                }
                else
                {
                  v28 = 28LL;
                }
                if ( !v9 )
                  goto LABEL_68;
                goto LABEL_65;
              }
              v28 = 27LL;
            }
            else
            {
              v28 = 26LL;
            }
          }
          else
          {
            v28 = 25LL;
          }
        }
        else
        {
          v28 = 24LL;
        }
LABEL_65:
        LOBYTE(v29) = 0;
        BroadcastDVRComponent::SendShellNotificationToDVR(this, v28, DesktopWindow, v12, v29, &v34, 0LL);
        if ( v34 && v6 )
          *(_DWORD *)(v6 + 56) |= 2u;
      }
    }
  }
LABEL_68:
  if ( v32 )
    std::_Ref_count_base::_Decref(v32);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v30);
}
