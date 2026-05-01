/*
 * XREFs of ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x180180C80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ @ 0x180181114 (-_RegisterForLauncherVisibilityNotifications@CImmersiveMode@@AEAAJXZ.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801811AC (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x180192BD4 (-s_CreateInstance@CMonitorNotificationHelper@@SAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v9)(struct IImmersiveMonitorManager *, GUID *, __int64 *); // rbx
  int v10; // ebx
  __int64 (__fastcall *v11)(struct IImmersiveMonitorManager *, __int64 *); // rbx
  unsigned int v12; // esi
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **); // rdi
  LSTATUS ValueW; // eax
  int v16; // ecx
  char v17; // dl
  bool v18; // sf
  bool v20; // zf
  void *v21; // [rsp+40h] [rbp-28h] BYREF
  __int64 v22[2]; // [rsp+48h] [rbp-20h] BYREF
  int v23; // [rsp+58h] [rbp-10h]
  __int64 pvData; // [rsp+B0h] [rbp+48h] BYREF
  DWORD pdwType; // [rsp+B8h] [rbp+50h] BYREF
  struct IImmersiveMonitor *pcbData; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+60h] BYREF

  v6 = (CImmersiveMode *)((char *)this - 88);
  v7 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 96) & -(__int64)(this != (CImmersiveMode *)88));
  v22[1] = (__int64)v7;
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v23 = v8;
  if ( *((struct IFallbackWindow **)this + 32) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IFallbackWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    pvData = *((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = a2;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&pvData);
  }
  v22[0] = 0LL;
  v9 = **a3;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v22);
  v10 = v9((struct IImmersiveMonitorManager *)a3, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, v22);
  if ( v10 >= 0 )
  {
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    v10 = CMonitorNotificationHelper::s_CreateInstance(
            (struct IImmersiveMonitorNotification *)(((unsigned __int64)this + 48) & -(__int64)(v6 != 0LL)),
            (const struct _GUID *)this + 3,
            &v21);
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v22[0] + 24LL))(
              v22[0],
              v21,
              (char *)this + 272);
      if ( v10 >= 0 )
      {
        v10 = CImmersiveMode::_RegisterForLauncherVisibilityNotifications(v6);
        if ( v10 >= 0 )
        {
          v27 = 0LL;
          v11 = (__int64 (__fastcall *)(struct IImmersiveMonitorManager *, __int64 *))(*a3)[14];
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
          v10 = v11((struct IImmersiveMonitorManager *)a3, &v27);
          if ( v10 >= 0 )
          {
            v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v27 + 24LL))(v27, &pvData);
            if ( v10 >= 0 )
            {
              v12 = 0;
              do
              {
                if ( v12 >= (unsigned int)pvData )
                  break;
                pcbData = 0LL;
                v13 = v27;
                v14 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v27 + 32LL);
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pcbData);
                v10 = v14(v13, v12, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &pcbData);
                if ( v10 >= 0 )
                {
                  v10 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, DWORD *))(*(_QWORD *)pcbData + 48LL))(
                          pcbData,
                          &pdwType);
                  if ( v10 >= 0 )
                  {
                    if ( pdwType )
                      CImmersiveMode::_RegisterDesktopVisibilitySource(v6, pcbData);
                  }
                }
                Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pcbData);
                ++v12;
              }
              while ( v10 >= 0 );
            }
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v27);
        }
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    if ( v10 >= 0 )
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
      v16 = ValueW;
      if ( ValueW )
      {
        v17 = pvData;
        if ( ValueW != 234 )
          goto LABEL_22;
LABEL_23:
        v18 = 1;
LABEL_24:
        if ( !v18 )
          *((_BYTE *)this + 144) = v17;
        goto LABEL_26;
      }
      if ( pdwType == 4 )
      {
        if ( (unsigned int)pvData <= 1 )
        {
          v16 = 0;
          v20 = (_DWORD)pvData == 1;
LABEL_32:
          v17 = v20;
LABEL_22:
          v18 = v16 < 0;
          if ( v16 <= 0 )
            goto LABEL_24;
          goto LABEL_23;
        }
      }
      else if ( (_DWORD)pcbData == 4 && (unsigned __int16)(pvData - 48) <= 1u )
      {
        v16 = 0;
        v20 = (_WORD)pvData == 49;
        goto LABEL_32;
      }
      v17 = pvData;
      goto LABEL_23;
    }
  }
LABEL_26:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v22);
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return (unsigned int)v10;
}
