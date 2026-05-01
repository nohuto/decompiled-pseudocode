/*
 * XREFs of ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x1800B5E00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1800B6134 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ @ 0x1800B81AC (-_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18015BE84 (-s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CImmersiveMode::CompleteInitialization(
        CImmersiveMode *this,
        struct IFallbackWindow *a2,
        __int64 (__fastcall ***a3)(struct IImmersiveMonitorManager *, GUID *, __int64 *))
{
  CImmersiveMode *v6; // r15
  struct _RTL_CRITICAL_SECTION *v7; // r12
  int v8; // r13d
  struct IFallbackWindow *v9; // rcx
  __int64 (__fastcall *v10)(struct IImmersiveMonitorManager *, GUID *, __int64 *); // rbx
  int v11; // ebx
  __int64 (__fastcall *v12)(struct IImmersiveMonitorManager *, __int64 *); // rbx
  unsigned int v13; // esi
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **); // rdi
  LSTATUS ValueW; // eax
  signed int v17; // ecx
  char v18; // al
  bool v20; // zf
  void *v21; // [rsp+40h] [rbp-28h] BYREF
  __int64 v22[2]; // [rsp+48h] [rbp-20h] BYREF
  int v23; // [rsp+58h] [rbp-10h]
  struct IFallbackWindow *pvData; // [rsp+B0h] [rbp+48h] BYREF
  DWORD pdwType; // [rsp+B8h] [rbp+50h] BYREF
  struct IImmersiveMonitor *pcbData; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+60h] BYREF

  v6 = (CImmersiveMode *)((char *)this - 88);
  v7 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 96) & -(__int64)(this != (CImmersiveMode *)88));
  v22[1] = (__int64)v7;
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v7, 1LL);
  v23 = v8;
  v9 = (struct IFallbackWindow *)*((_QWORD *)this + 32);
  if ( v9 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IFallbackWindow *))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = (struct IFallbackWindow *)*((_QWORD *)this + 32);
    }
    pvData = v9;
    *((_QWORD *)this + 32) = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&pvData);
  }
  v22[0] = 0LL;
  v10 = **a3;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v22);
  v11 = v10((struct IImmersiveMonitorManager *)a3, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, v22);
  if ( v11 >= 0 )
  {
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    v11 = CMonitorNotificationHelper::s_CreateInstance(
            (struct IImmersiveMonitorNotification *)(((unsigned __int64)this + 48) & -(__int64)(v6 != 0LL)),
            (const struct _GUID *)this + 3,
            &v21);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v22[0] + 24LL))(
              v22[0],
              v21,
              (char *)this + 272);
      if ( v11 >= 0 )
      {
        v11 = CImmersiveMode::_RegisterForLauncherVisibilityNotifications(v6);
        if ( v11 >= 0 )
        {
          v27 = 0LL;
          v12 = (__int64 (__fastcall *)(struct IImmersiveMonitorManager *, __int64 *))(*a3)[14];
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
          v11 = v12((struct IImmersiveMonitorManager *)a3, &v27);
          if ( v11 >= 0 )
          {
            v11 = (*(__int64 (__fastcall **)(__int64, struct IFallbackWindow **))(*(_QWORD *)v27 + 24LL))(v27, &pvData);
            if ( v11 >= 0 )
            {
              v13 = 0;
              do
              {
                if ( v13 >= (unsigned int)pvData )
                  break;
                pcbData = 0LL;
                v14 = v27;
                v15 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v27 + 32LL);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pcbData);
                v11 = v15(v14, v13, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &pcbData);
                if ( v11 >= 0 )
                {
                  v11 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, DWORD *))(*(_QWORD *)pcbData + 48LL))(
                          pcbData,
                          &pdwType);
                  if ( v11 >= 0 )
                  {
                    if ( pdwType )
                      CImmersiveMode::_RegisterDesktopVisibilitySource(v6, pcbData);
                  }
                }
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pcbData);
                ++v13;
              }
              while ( v11 >= 0 );
            }
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
        }
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    if ( v11 >= 0 )
    {
      *((_BYTE *)this + 144) = 1;
      pdwType = 0;
      LODWORD(pcbData) = 4;
      ValueW = RegGetValueW(
                 HKEY_LOCAL_MACHINE,
                 L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\DAMVisibility",
                 L"Enabled",
                 0x10000012u,
                 &pdwType,
                 &pvData,
                 (LPDWORD)&pcbData);
      v17 = ValueW;
      if ( ValueW )
      {
        if ( ValueW == 234 )
        {
          LOWORD(v17) = 13;
        }
        else if ( ValueW <= 0 )
        {
LABEL_24:
          v18 = (char)pvData;
          goto LABEL_25;
        }
LABEL_23:
        v17 = (unsigned __int16)v17 | 0x80070000;
        goto LABEL_24;
      }
      LOWORD(v17) = 13;
      if ( pdwType == 4 )
      {
        if ( (unsigned int)pvData > 1 )
          goto LABEL_23;
        v17 = 0;
        v20 = (_DWORD)pvData == 1;
      }
      else
      {
        if ( (_DWORD)pcbData != 4 || (unsigned __int16)((_WORD)pvData - 48) > 1u )
          goto LABEL_23;
        v17 = 0;
        v20 = (_WORD)pvData == 49;
      }
      v18 = v20;
LABEL_25:
      if ( v17 >= 0 )
        *((_BYTE *)this + 144) = v18;
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v22);
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return (unsigned int)v11;
}
