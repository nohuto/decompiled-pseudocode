/*
 * XREFs of PiDcHandleCustomDeviceEvent @ 0x1407DB16C
 * Callers:
 *     PnpProcessCustomDeviceEvent @ 0x1407DB110 (PnpProcessCustomDeviceEvent.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14022B114 (RtlStringCbCopyW.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D9C30 (_wcsicmp.c)
 *     _CmGetDeviceRegProp @ 0x1406CD48C (_CmGetDeviceRegProp.c)
 *     PiPnpRtlEndOperation @ 0x1407889BC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140788BC0 (PiPnpRtlBeginOperation.c)
 *     PnpQueryDeviceRelations @ 0x140795110 (PnpQueryDeviceRelations.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14079B254 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmIsLocalMachineContainer @ 0x14085D8A8 (_CmIsLocalMachineContainer.c)
 *     PiDcContainerRequiresConfiguration @ 0x140877D90 (PiDcContainerRequiresConfiguration.c)
 *     _CmMoveBaseContainer @ 0x140A64808 (_CmMoveBaseContainer.c)
 */

__int64 __fastcall PiDcHandleCustomDeviceEvent(__int64 a1)
{
  __int64 v1; // rdx
  int DeviceRelations; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  _DWORD *v7; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v9; // eax
  _DWORD *v10; // rcx
  bool v11; // r14
  __int64 i; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  int DeviceRegProp; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdi
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v21[3]; // [rsp+44h] [rbp-BCh] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszSrc[40]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Str2[40]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str1[40]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t v26[40]; // [rsp+150h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  DeviceRelations = 0;
  v20 = 0;
  memset(v21, 0, sizeof(v21));
  v4 = *(_QWORD *)(v1 + 4);
  P = 0LL;
  v5 = v4 - *(_QWORD *)&GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(v1 + 12) - *(_QWORD *)GUID_TARGET_DEVICE_TRANSPORT_RELATIONS_CHANGED.Data4;
  if ( !v5 )
  {
    DeviceRelations = PiPnpRtlBeginOperation((__int64 **)&P);
    if ( DeviceRelations >= 0 )
    {
      DeviceRelations = PnpQueryDeviceRelations(*(_QWORD *)(a1 + 152), 6, 0LL, (__int64)&v21[1]);
      if ( DeviceRelations >= 0 )
      {
        v7 = *(_DWORD **)&v21[1];
        if ( !*(_QWORD *)&v21[1] )
        {
LABEL_38:
          if ( P )
            PiPnpRtlEndOperation((PVOID **)P);
          return (unsigned int)DeviceRelations;
        }
        if ( !**(_DWORD **)&v21[1] )
        {
LABEL_35:
          if ( v7 )
          {
            v19 = 0LL;
            if ( *v7 )
            {
              do
              {
                ObfDereferenceObject(*(PVOID *)&v7[2 * v19 + 2]);
                v7 = *(_DWORD **)&v21[1];
                v19 = (unsigned int)(v19 + 1);
              }
              while ( (unsigned int)v19 < **(_DWORD **)&v21[1] );
            }
          }
          goto LABEL_38;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        v20 = 78;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    a1 + 168,
                    0LL,
                    37,
                    (__int64)v21,
                    (__int64)Str1,
                    (__int64)&v20,
                    0) >= 0
          && v21[0] == 1
          && v20 == 78 )
        {
          DeviceRelations = CmGetDeviceContainerIdFromBase(*(__int64 *)&PiPnpRtlCtx, a1 + 168, Str1, Str2);
          if ( DeviceRelations >= 0 )
          {
            v9 = wcsicmp(Str1, Str2);
            v10 = *(_DWORD **)&v21[1];
            v11 = v9 != 0;
            for ( i = 0LL; (unsigned int)i < *v10; i = (unsigned int)(i + 1) )
            {
              v13 = *(_QWORD *)&v10[2 * i + 2];
              if ( v13 )
              {
                v14 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
                if ( v14 )
                {
                  v15 = *(_QWORD *)(v14 + 48);
                  if ( v15 )
                  {
                    v20 = 78;
                    DeviceRegProp = CmGetDeviceRegProp(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      v15,
                                      0LL,
                                      37,
                                      (__int64)v21,
                                      (__int64)v26,
                                      (__int64)&v20,
                                      0);
                    DeviceRelations = DeviceRegProp;
                    if ( DeviceRegProp != -1073741275 )
                    {
                      if ( DeviceRegProp < 0 || v21[0] != 1 || v20 != 78 )
                        goto LABEL_32;
                      DeviceRelations = CmGetDeviceContainerIdFromBase(*(__int64 *)&PiPnpRtlCtx, v15, v26, pszSrc);
                      if ( DeviceRelations < 0 )
                        break;
                      if ( !v11 )
                      {
                        DeviceRelations = CmMoveBaseContainer(v17, Str1, Str2, pszSrc);
                        PiDcContainerRequiresConfiguration(pszSrc);
                        if ( DeviceRelations < 0 )
                          break;
                        DeviceRelations = RtlStringCbCopyW(Str2, 0x4EuLL, pszSrc);
                        if ( DeviceRelations < 0 )
                          break;
                        v11 = 1;
                      }
                      if ( wcsicmp(pszSrc, Str2) )
                      {
                        if ( !(unsigned __int8)CmIsLocalMachineContainer(*(_QWORD *)&PiPnpRtlCtx) )
                        {
                          DeviceRelations = CmMoveBaseContainer(v18, v26, pszSrc, Str2);
                          PiDcContainerRequiresConfiguration(Str2);
                          if ( DeviceRelations < 0 )
                            break;
                        }
                      }
                    }
                    v10 = *(_DWORD **)&v21[1];
                  }
                }
              }
            }
          }
        }
        else
        {
LABEL_32:
          DeviceRelations = -1073739509;
        }
        ExReleaseResourceLite(&PnpRegistryDeviceResource);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
    }
    v7 = *(_DWORD **)&v21[1];
    goto LABEL_35;
  }
  return (unsigned int)DeviceRelations;
}
