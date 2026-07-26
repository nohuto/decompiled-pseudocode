/*
 * XREFs of ndisIfDeleteCompartment @ 0x1C00B865C
 * Callers:
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C00B8B4C (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B9100 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_l @ 0x1C00248A0 (WPP_RECORDER_SF_l.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002547C (WPP_RECORDER_SF_dd_ea_1C002547C.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002BFE8 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002F998 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ndisNsiScheduleCompartmentBlockChangeNotification @ 0x1C0037E88 (ndisNsiScheduleCompartmentBlockChangeNotification.c)
 *     Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage @ 0x1C0037F44 (Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0038580 (memset.c)
 *     WPP_RECORDER_SF_Ll @ 0x1C00B921C (WPP_RECORDER_SF_Ll_ea_1C00B921C.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C0110010 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfDeregisterInterface @ 0x1C0110130 (NdisIfDeregisterInterface.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C011A724 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisWaitForEvent@@YAXPEAU_KEVENT@@@Z @ 0x1C012B50C (-ndisWaitForEvent@@YAXPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall ndisIfDeleteCompartment(unsigned int a1)
{
  int v2; // ebx
  char v3; // di
  KIRQL v4; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  int v6; // edx
  __int64 v7; // rsi
  int v8; // ecx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rax
  NET_IFTYPE v17; // bx
  __int64 v18; // rdi
  NDIS_STATUS v19; // eax
  KIRQL v20; // di
  __int64 v21; // r8
  _QWORD *v22; // rdx
  void **v23; // r14
  PVOID *v24; // rdi
  PVOID v25; // rcx
  void **v26; // rax
  KIRQL v27; // al
  int v29; // [rsp+28h] [rbp-E0h]
  struct _KEVENT Event; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A8h]
  _QWORD v32[10]; // [rsp+68h] [rbp-A0h] BYREF
  struct _KEVENT v33; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v34[132]; // [rsp+D8h] [rbp-30h] BYREF

  v2 = 0;
  memset(v32, 0, 0x48uLL);
  memset(v34, 0, sizeof(v34));
  v3 = 0;
  v31 = 0LL;
  memset(&v33, 0, sizeof(v33));
  Event.Header.WaitListHead = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_l(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x10u,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v7 = (__int64)CompartmentBlock;
  if ( !CompartmentBlock )
    goto LABEL_4;
  if ( *((_DWORD *)CompartmentBlock + 4) == 1 )
    goto LABEL_28;
  v8 = *((_DWORD *)CompartmentBlock + 10);
  if ( (v8 & 8) != 0 )
  {
LABEL_4:
    v2 = -1073741072;
    goto LABEL_32;
  }
  if ( (v8 & 0x11) == 1 )
  {
LABEL_28:
    v2 = -1073741811;
    goto LABEL_32;
  }
  if ( (v8 & 2) == 0 )
  {
    *((_DWORD *)CompartmentBlock + 10) = v8 | 2;
    if ( (unsigned int)Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage() )
      v3 = 1;
    else
      ndisNsiScheduleCompartmentBlockChangeNotification(v7);
  }
  if ( *(int *)(v7 + 48) > 0 )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        0x16u,
        0x11u,
        (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids,
        a1);
    v2 = -1073740024;
    goto LABEL_32;
  }
  v9 = *(_QWORD **)(v7 + 24);
  if ( v9 != (_QWORD *)(v7 + 24) )
  {
    while ( v9 - 2 == *(_QWORD **)(v7 + 56) )
    {
      v9 = (_QWORD *)*v9;
      if ( v9 == (_QWORD *)(v7 + 24) )
        goto LABEL_19;
    }
    goto LABEL_28;
  }
LABEL_19:
  v10 = *(_QWORD *)(v7 + 56);
  if ( v10 )
  {
    v11 = *(_QWORD **)(v10 + 56);
    if ( v11 != (_QWORD *)(v10 + 56) )
    {
      while ( v11 - 158 == *(_QWORD **)(v7 + 1704) )
      {
        v11 = (_QWORD *)*v11;
        if ( v11 == (_QWORD *)(v10 + 56) )
          goto LABEL_23;
      }
      goto LABEL_28;
    }
  }
LABEL_23:
  v12 = *(_DWORD *)(v7 + 40);
  if ( (v12 & 0x10) != 0 )
  {
    *(_DWORD *)(v7 + 40) = v12 & 0xFFFFFFEF;
    if ( !(unsigned int)Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage() )
      KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 1u);
  }
  else
  {
    *(_DWORD *)(v7 + 40) = v12 | 1;
    if ( v10 )
      *(_DWORD *)(v10 + 72) |= 2u;
    if ( (unsigned int)Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage() )
    {
      v3 = 1;
    }
    else
    {
      KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
      *(_QWORD *)(v7 + 1760) = &Event.Header.WaitListHead;
      ndisNsiScheduleCompartmentBlockChangeNotification(v7);
    }
  }
LABEL_32:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned int)Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage() && v3 )
    ndisNsiNotifyClientCompartmentChange(v7, 2LL);
  if ( v2 < 0 )
    goto LABEL_54;
  if ( !(unsigned int)Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage() )
    ndisWaitForEvent((struct _KEVENT *)&Event.Header.WaitListHead);
  v16 = *(_QWORD *)(v7 + 1704);
  if ( v16 )
  {
    v17 = *(_WORD *)(v16 + 524);
    v18 = (*(_QWORD *)(v16 + 1312) >> 24) & 0xFFFFFFLL;
    NdisIfDeregisterInterface(*(_DWORD *)(v16 + 4));
    v19 = NdisIfFreeNetLuidIndex(v17, v18);
    *(_QWORD *)(v7 + 1704) = 0LL;
    v2 = v19;
  }
  if ( *(_QWORD *)(v7 + 56) )
  {
    v32[0] = 0LL;
    v32[1] = 0LL;
    v32[2] = &NPI_MS_NDIS_MODULEID;
    v32[5] = v7 + 80;
    v32[3] = 6LL;
    v32[4] = 0x300000002LL;
    v32[6] = 16LL;
    memset(&v34[1], 0, 0x20CuLL);
    v34[0] = 34603436;
    v32[8] = 528LL;
    v32[7] = v34;
    v2 = NsiSetAllParametersEx(v32);
    if ( v2 >= 0 )
    {
      *(_QWORD *)(v7 + 56) = 0LL;
      goto LABEL_44;
    }
LABEL_53:
    v27 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    *(_DWORD *)(v7 + 40) |= 0x10u;
    KeReleaseSpinLock(&ndisIfListLock, v27);
    goto LABEL_54;
  }
  if ( v2 < 0 )
    goto LABEL_53;
LABEL_44:
  KeInitializeEvent(&v33, NotificationEvent, 0);
  v20 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  *(_QWORD *)(v7 + 1712) = &v33;
  v21 = *(_QWORD *)v7;
  if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 || (v22 = *(_QWORD **)(v7 + 8), *v22 != v7) )
LABEL_52:
    __fastfail(3u);
  *v22 = v21;
  *(_QWORD *)(v21 + 8) = v22;
  _InterlockedDecrement(&dword_1C00F5DF8);
  COMPARTMENTBLOCK_DECREMENT_REF((struct _NDIS_IF_COMPARTMENT_BLOCK *)v7);
  KeReleaseSpinLock(&ndisIfListLock, v20);
  ndisWaitForEvent(&v33);
  *(_QWORD *)(v7 + 1712) = 0LL;
  v23 = (void **)(v7 + 1728);
  while ( 1 )
  {
    v24 = (PVOID *)*v23;
    if ( *v23 == v23 )
      break;
    ObfDereferenceObject(v24[2]);
    v25 = *v24;
    if ( *((PVOID **)*v24 + 1) != v24 )
      goto LABEL_52;
    v26 = (void **)v24[1];
    if ( *v26 != v24 )
      goto LABEL_52;
    *v26 = v25;
    *((_QWORD *)v25 + 1) = v26;
    --*(_DWORD *)(v7 + 1720);
    ExFreePoolWithTag(v24, 0);
  }
  ExFreePoolWithTag((PVOID)v7, 0);
LABEL_54:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Ll(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v14, v15, v29, v2, a1);
  return (unsigned int)v2;
}
