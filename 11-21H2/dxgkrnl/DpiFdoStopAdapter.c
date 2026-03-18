/*
 * XREFs of DpiFdoStopAdapter @ 0x1C038B430
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C0389B60 (DpiFdoHandleStopDevice.c)
 *     DpiKsrStopAdapter @ 0x1C03945BC (DpiKsrStopAdapter.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x1C0396A78 (DpiLdaStopAllAdaptersInChain.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C01F3488 (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiPnpNotifyGdi @ 0x1C01F5E0C (DpiPnpNotifyGdi.c)
 *     DxgkStartPnPTransition @ 0x1C01FD15C (DxgkStartPnPTransition.c)
 *     DxgkCompletePnPTransition @ 0x1C0217CD4 (DxgkCompletePnPTransition.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BE1F8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkStartPnPStop @ 0x1C02C572C (DxgkStartPnPStop.c)
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C030AB20 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 *     DpiDestroyBlockList @ 0x1C0387E4C (DpiDestroyBlockList.c)
 *     DpiFdoDetermineAffectedSession @ 0x1C0388968 (DpiFdoDetermineAffectedSession.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0389018 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C03890C0 (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoIsDevicePresent @ 0x1C038A94C (DpiFdoIsDevicePresent.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C038BB74 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     ?DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0390508 (-DpiBrightnessStopDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiDxgkDdiStopDevice @ 0x1C039727C (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStopAdapter(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *DeviceExtension; // rdi
  __int64 v5; // r13
  bool v6; // zf
  __int64 v7; // rax
  unsigned int v8; // r12d
  unsigned __int64 v9; // rsi
  void *started; // rbx
  DXGADAPTER *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // r8d
  __int64 *i; // rdx
  __int64 *v17; // rcx
  __int128 *v18; // rax
  DXGADAPTER *v19; // rcx
  DXGGLOBAL *Global; // rax
  int IsDevicePresent; // eax
  char v22; // r14
  int v23; // esi
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  char v29[8]; // [rsp+30h] [rbp-A9h] BYREF
  __int128 v30; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v31; // [rsp+48h] [rbp-91h]
  _QWORD v32[10]; // [rsp+50h] [rbp-89h] BYREF
  _DWORD v33[8]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-19h]
  __int64 v35; // [rsp+C8h] [rbp-11h]
  __int64 v36; // [rsp+D0h] [rbp-9h]
  int v37; // [rsp+D8h] [rbp-1h]
  int v38; // [rsp+DCh] [rbp+3h]
  __int64 v39; // [rsp+E0h] [rbp+7h]

  v29[0] = 0;
  memset(v32, 0, 0x48uLL);
  DeviceExtension = (char *)a1->DeviceExtension;
  v5 = *((_QWORD *)DeviceExtension + 5);
  *(_DWORD *)&DeviceExtension[4 * ((*((_DWORD *)DeviceExtension + 69))++ & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v6 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  *((_DWORD *)DeviceExtension + 60) = *((_DWORD *)DeviceExtension + 59);
  *((_DWORD *)DeviceExtension + 59) = 4;
  if ( v6 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v7 = *((_QWORD *)DeviceExtension + 334);
    v32[0] = 0x480000001ELL;
    v8 = (unsigned int)a1 & 0xFFFF00;
    HIDWORD(v32[6]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v32[1], 0, 36);
    LODWORD(v32[6]) = 36;
    v32[7] = 0LL;
    v32[8] = v7;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32, *((_QWORD *)DeviceExtension + 716));
    KeWaitForSingleObject(DeviceExtension + 4120, Executive, 0, 0, 0LL);
    v9 = DpiFdoDetermineAffectedSession(*((_QWORD *)DeviceExtension + 3));
    started = DxgkStartPnPTransition(0LL, v9);
    if ( !started )
      WdLogSingleEntry1(6LL, -1073741670LL);
    if ( *((_DWORD *)DeviceExtension + 996) != 3 )
    {
      v11 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 487);
      if ( v11 )
        DxgkStartPnPStop(v11);
    }
    if ( (DeviceExtension[3904] & 1) != 0 || (struct _DEVICE_OBJECT *)qword_1C01304A8 == a1 )
    {
      v12 = *((_QWORD *)DeviceExtension + 6);
      v13 = *((_QWORD *)DeviceExtension + 5);
      v30 = 0LL;
      LODWORD(v30) = 83886077;
      v31 = 0LL;
      v14 = DpiDxgkDdiDisplayDetectControl((__int64)DeviceExtension, v13, v12, (unsigned int *)&v30);
      if ( v14 < 0 )
        WdLogSingleEntry2(2LL, *(_QWORD *)(v5 + 1128), v14);
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      AcquireMiniportListMutex();
      if ( (struct _DEVICE_OBJECT *)qword_1C01304B0 == a1 )
      {
        LOBYTE(word_1C013049C) = 0;
        qword_1C01304B0 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C01304A8 == a1 )
      {
        word_1C013049C = 0;
        qword_1C01304A8 = 0LL;
      }
      _InterlockedExchange64(&qword_1C01304D8, 0LL);
      KeReleaseMutex(Mutex, 0);
      if ( (DeviceExtension[3904] & 1) != 0 )
        DpiPnpNotifyGdi((__int64)a1, 0, (__int64)started, v9, 0, a2);
      else
        DxgkCompletePnPTransition(started);
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
    }
    else
    {
      DxgkCompletePnPTransition(started);
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2744), 0);
    if ( DeviceExtension[5664] )
    {
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 353, 0);
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 353);
    }
    if ( *((_QWORD *)DeviceExtension + 346) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2760), 0);
    if ( *((_QWORD *)DeviceExtension + 350) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2792), 0);
    if ( *((_QWORD *)DeviceExtension + 352) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2808), 0);
    if ( *((_QWORD *)DeviceExtension + 356) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2840), 0);
    if ( *((_QWORD *)DeviceExtension + 354) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2824), 0);
    if ( *((_QWORD *)DeviceExtension + 358) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2856), 0);
    if ( *((_QWORD *)DeviceExtension + 348) )
      IoSetDeviceInterfaceState((PUNICODE_STRING)(DeviceExtension + 2776), 0);
    if ( DeviceExtension[1152] && dword_1C01307F4 != -1 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)(DeviceExtension + 3304), 1u);
      v15 = 0;
      for ( i = (__int64 *)*((_QWORD *)DeviceExtension + 456); v15 < *((_DWORD *)DeviceExtension + 916); i = v17 )
      {
        v17 = (__int64 *)*i;
        if ( *i == *((_QWORD *)DeviceExtension + 456) )
          break;
        if ( *((_DWORD *)i + 126) == dword_1C01307F4 )
        {
          v18 = (__int128 *)i[116];
          if ( v18 )
          {
            xmmword_1C0130770 = *v18;
            xmmword_1C0130780 = v18[1];
            xmmword_1C0130790 = v18[2];
            xmmword_1C01307A0 = v18[3];
            xmmword_1C01307B0 = v18[4];
            xmmword_1C01307C0 = v18[5];
            xmmword_1C01307D0 = v18[6];
            xmmword_1C01307E0 = v18[7];
            v17 = (__int64 *)*i;
          }
        }
        ++v15;
      }
      ExReleaseResourceLite((PERESOURCE)(DeviceExtension + 3304));
      KeLeaveCriticalRegion();
    }
    DpiFdoDestroyRelatedObjects((__int64)a1, a2);
    DpiBrightnessStopDevice(a1);
    DpiDestroyBlockList((__int64)DeviceExtension);
    if ( *((_DWORD *)DeviceExtension + 996) != 3 )
    {
      v19 = (DXGADAPTER *)*((_QWORD *)DeviceExtension + 487);
      if ( v19 && *((_DWORD *)v19 + 50) != 2 && *((_DWORD *)v19 + 50) != 4 )
        DXGADAPTER::Stop(v19, 0, 0);
      Global = DXGGLOBAL_GetGlobal();
      DXGGLOBAL::NotifyAdapterRemoval(Global);
    }
    KeSetEvent((PRKEVENT)DeviceExtension + 147, 0, 0);
  }
  else
  {
    v32[0] = 0x4000000006LL;
    v8 = (unsigned int)a1 & 0xFFFF00;
    HIDWORD(v32[6]) = (unsigned int)a1 & 0xFFFF00;
    memset(&v32[1], 0, 36);
    LODWORD(v32[6]) = 36;
    v32[7] = 0LL;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32, 0x200000000LL);
  }
  IsDevicePresent = DpiFdoIsDevicePresent((__int64)DeviceExtension, v29);
  v22 = v29[0];
  v23 = -1073741637;
  if ( IsDevicePresent < 0 )
    v22 = 1;
  v24 = 0x200000000LL;
  if ( DeviceExtension[1152] )
  {
    if ( v22 )
    {
      v25 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      v33[0] = 30;
      v23 = v25;
      v35 = 0LL;
      v33[1] = 72;
      v6 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
      v39 = *((_QWORD *)DeviceExtension + 334);
      v34 = 0LL;
      memset(&v33[2], 0, 24);
      v36 = 98LL;
      v37 = v25;
      v38 = 0;
      if ( v6 && *((_DWORD *)DeviceExtension + 5) == 2 )
        v26 = *((_QWORD *)DeviceExtension + 716);
      else
        v26 = 0x200000000LL;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v33, v26);
      if ( v23 < 0 || DWORD2(xmmword_1C0130760) != dword_1C01307F4 )
        memset(&xmmword_1C0130770, 0, 0x80uLL);
    }
    else
    {
      dword_1C01307F0 = 2;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DeviceExtension[3904] &= ~4u;
  if ( v22 && v23 < 0 )
    DpiDxgkDdiStopDevice(v5, *((_QWORD *)DeviceExtension + 6));
  if ( *((_QWORD *)DeviceExtension + 171) )
    DpiFdoDisconnectInterrupt((__int64)a1);
  v27 = *((_QWORD *)DeviceExtension + 61);
  if ( v27 )
  {
    PoFxUnregisterDevice(v27);
    *(_QWORD *)(*((_QWORD *)DeviceExtension + 487) + 2904LL) = 0LL;
    *((_QWORD *)DeviceExtension + 61) = 0LL;
  }
  memset(v32, 0, 0x48uLL);
  v32[0] = 0x4000000006LL;
  memset(&v32[1], 0, 36);
  LODWORD(v32[6]) = 36;
  HIDWORD(v32[6]) = v8;
  v32[7] = 1LL;
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    v24 = *((_QWORD *)DeviceExtension + 716);
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32, v24);
}
