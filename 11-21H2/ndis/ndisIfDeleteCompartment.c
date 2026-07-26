/*
 * XREFs of ndisIfDeleteCompartment @ 0x1C00B34A8
 * Callers:
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C00B3B78 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B4120 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0023120 (WPP_RECORDER_SF_dd_ea_1C0023120.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C002B1C8 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C002D458 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ @ 0x1C0035BDC (-Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ.c)
 *     ndisNsiScheduleCompartmentBlockChangeNotification @ 0x1C0035DA0 (ndisNsiScheduleCompartmentBlockChangeNotification.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     WPP_RECORDER_SF_Ll @ 0x1C00B4234 (WPP_RECORDER_SF_Ll_ea_1C00B4234.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C0104890 (NdisIfFreeNetLuidIndex.c)
 *     NdisIfDeregisterInterface @ 0x1C01049B0 (NdisIfDeregisterInterface.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C01123B0 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ?ndisWaitForEvent@@YAXPEAU_KEVENT@@@Z @ 0x1C011F818 (-ndisWaitForEvent@@YAXPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall ndisIfDeleteCompartment(unsigned int a1)
{
  NDIS_STATUS v2; // ebx
  char v3; // di
  KIRQL v4; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  __int64 v6; // rsi
  int IsEnabled; // eax
  int v8; // edx
  _QWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  _QWORD **v12; // rdx
  _QWORD *v13; // rcx
  _QWORD **v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rax
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  NET_IFTYPE v23; // bx
  __int64 v24; // rdi
  KIRQL v25; // di
  __int64 v26; // r8
  _QWORD *v27; // rdx
  void **v28; // r14
  PVOID *v29; // rdi
  PVOID v30; // rcx
  void **v31; // rax
  __int64 v32; // rax
  NET_IFTYPE v33; // bx
  __int64 v34; // rdi
  KIRQL v35; // di
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  void **v38; // r14
  PVOID *v39; // rdi
  PVOID v40; // rcx
  void **v41; // rax
  KIRQL v42; // al
  int v44; // [rsp+28h] [rbp-E0h]
  _QWORD v45[10]; // [rsp+48h] [rbp-C0h] BYREF
  struct _KEVENT v46; // [rsp+98h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v48[132]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = 0;
  memset(v45, 0, 0x48uLL);
  memset(v48, 0, sizeof(v48));
  memset(&v46, 0, sizeof(v46));
  v3 = 0;
  memset(&Event, 0, sizeof(Event));
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x10u,
      (struct _GUID *)&WPP_6eeb5a11cab83be2fdb1380eb0b7c4ac_Traceguids);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v6 = (__int64)CompartmentBlock;
  if ( !CompartmentBlock )
    goto LABEL_4;
  if ( *((_DWORD *)CompartmentBlock + 4) == 1 )
    goto LABEL_9;
  IsEnabled = Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled();
  v8 = *(_DWORD *)(v6 + 40);
  if ( IsEnabled )
  {
    if ( (v8 & 8) != 0 )
    {
LABEL_4:
      v2 = -1073741072;
      goto LABEL_38;
    }
    if ( (v8 & 0x11) == 1 )
    {
LABEL_9:
      v2 = -1073741811;
      goto LABEL_38;
    }
  }
  else if ( (v8 & 1) != 0 )
  {
    goto LABEL_9;
  }
  if ( (v8 & 2) == 0 )
  {
    *(_DWORD *)(v6 + 40) = v8 | 2;
    if ( (unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() )
      ndisNsiScheduleCompartmentBlockChangeNotification(v6);
    else
      v3 = 1;
  }
  if ( *(int *)(v6 + 48) <= 0 )
  {
    v9 = *(_QWORD **)(v6 + 24);
    if ( v9 != (_QWORD *)(v6 + 24) )
    {
      while ( v9 - 2 == *(_QWORD **)(v6 + 56) )
      {
        v9 = (_QWORD *)*v9;
        if ( v9 == (_QWORD *)(v6 + 24) )
          goto LABEL_22;
      }
      goto LABEL_9;
    }
LABEL_22:
    v10 = Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled();
    v11 = *(_QWORD *)(v6 + 56);
    if ( v10 )
    {
      if ( v11 )
      {
        v14 = (_QWORD **)(v11 + 56);
        v15 = *v14;
        if ( *v14 != v14 )
        {
          while ( v15 - 158 == *(_QWORD **)(v6 + 1704) )
          {
            v15 = (_QWORD *)*v15;
            if ( v15 == v14 )
              goto LABEL_31;
          }
          goto LABEL_9;
        }
      }
    }
    else
    {
      v12 = (_QWORD **)(v11 + 56);
      v13 = *v12;
      if ( *v12 != v12 )
      {
        while ( v13 - 158 == *(_QWORD **)(v6 + 1704) )
        {
          v13 = (_QWORD *)*v13;
          if ( v13 == v12 )
            goto LABEL_31;
        }
        goto LABEL_9;
      }
    }
LABEL_31:
    if ( (unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() )
    {
      v17 = *(_DWORD *)(v6 + 40);
      if ( (v17 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 40) = v17 & 0xFFFFFFEF;
        KeInitializeEvent(&Event, NotificationEvent, 1u);
      }
      else
      {
        *(_DWORD *)(v6 + 40) = v17 | 1;
        v18 = *(_QWORD *)(v6 + 56);
        if ( v18 )
          *(_DWORD *)(v18 + 72) |= 2u;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        *(_QWORD *)(v6 + 1760) = &Event;
        ndisNsiScheduleCompartmentBlockChangeNotification(v6);
      }
    }
    else
    {
      v16 = *(_QWORD *)(v6 + 56);
      *(_DWORD *)(v6 + 40) |= 1u;
      *(_DWORD *)(v16 + 72) |= 2u;
    }
  }
  else
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        0x16u,
        0x11u,
        (struct _GUID *)&WPP_6eeb5a11cab83be2fdb1380eb0b7c4ac_Traceguids,
        a1);
    v2 = -1073740024;
  }
LABEL_38:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( !(unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() && v3 )
    ndisNsiNotifyClientCompartmentChange(v6, 2LL);
  if ( v2 >= 0 )
  {
    if ( !(unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() )
    {
      v22 = *(_QWORD *)(v6 + 1704);
      v23 = *(_WORD *)(v22 + 524);
      v24 = (*(_QWORD *)(v22 + 1312) >> 24) & 0xFFFFFFLL;
      NdisIfDeregisterInterface(*(_DWORD *)(v22 + 4));
      NdisIfFreeNetLuidIndex(v23, v24);
      v45[1] = 0LL;
      v45[2] = &NPI_MS_NDIS_MODULEID;
      v45[3] = 6LL;
      v45[5] = v6 + 80;
      v45[6] = 16LL;
      v45[8] = 528LL;
      v45[0] = 0LL;
      v45[4] = 0x300000002LL;
      memset(&v48[1], 0, 0x20CuLL);
      v48[0] = 34603436;
      v45[7] = v48;
      v2 = NsiSetAllParametersEx(v45);
      if ( v2 < 0 )
        goto LABEL_67;
      KeInitializeEvent(&v46, NotificationEvent, 0);
      v25 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      *(_QWORD *)(v6 + 1712) = &v46;
      v26 = *(_QWORD *)v6;
      if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) == v6 )
      {
        v27 = *(_QWORD **)(v6 + 8);
        if ( *v27 == v6 )
        {
          *v27 = v26;
          *(_QWORD *)(v26 + 8) = v27;
          _InterlockedDecrement(&dword_1C00ECE08);
          COMPARTMENTBLOCK_DECREMENT_REF((struct _NDIS_IF_COMPARTMENT_BLOCK *)v6);
          KeReleaseSpinLock(&ndisIfListLock, v25);
          ndisWaitForEvent(&v46);
          *(_QWORD *)(v6 + 1712) = 0LL;
          v28 = (void **)(v6 + 1728);
          while ( 1 )
          {
            v29 = (PVOID *)*v28;
            if ( *v28 == v28 )
              break;
            ObfDereferenceObject(v29[2]);
            v30 = *v29;
            if ( *((PVOID **)*v29 + 1) != v29 )
              goto LABEL_65;
            v31 = (void **)v29[1];
            if ( *v31 != v29 )
              goto LABEL_65;
            *v31 = v30;
            *((_QWORD *)v30 + 1) = v31;
            --*(_DWORD *)(v6 + 1720);
            ExFreePoolWithTag(v29, 0);
          }
LABEL_51:
          ExFreePoolWithTag((PVOID)v6, 0);
          goto LABEL_67;
        }
      }
      goto LABEL_65;
    }
    ndisWaitForEvent(&Event);
    v32 = *(_QWORD *)(v6 + 1704);
    if ( v32 )
    {
      v33 = *(_WORD *)(v32 + 524);
      v34 = (*(_QWORD *)(v32 + 1312) >> 24) & 0xFFFFFFLL;
      NdisIfDeregisterInterface(*(_DWORD *)(v32 + 4));
      v2 = NdisIfFreeNetLuidIndex(v33, v34);
      *(_QWORD *)(v6 + 1704) = 0LL;
    }
    if ( *(_QWORD *)(v6 + 56) )
    {
      v45[1] = 0LL;
      v45[2] = &NPI_MS_NDIS_MODULEID;
      v45[3] = 6LL;
      v45[5] = v6 + 80;
      v45[6] = 16LL;
      v45[8] = 528LL;
      v45[0] = 0LL;
      v45[4] = 0x300000002LL;
      memset(&v48[1], 0, 0x20CuLL);
      v48[0] = 34603436;
      v45[7] = v48;
      v2 = NsiSetAllParametersEx(v45);
      if ( v2 >= 0 )
      {
        *(_QWORD *)(v6 + 56) = 0LL;
LABEL_58:
        KeInitializeEvent(&v46, NotificationEvent, 0);
        v35 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
        *(_QWORD *)(v6 + 1712) = &v46;
        v36 = *(_QWORD *)v6;
        if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) == v6 )
        {
          v37 = *(_QWORD **)(v6 + 8);
          if ( *v37 == v6 )
          {
            *v37 = v36;
            *(_QWORD *)(v36 + 8) = v37;
            _InterlockedDecrement(&dword_1C00ECE08);
            COMPARTMENTBLOCK_DECREMENT_REF((struct _NDIS_IF_COMPARTMENT_BLOCK *)v6);
            KeReleaseSpinLock(&ndisIfListLock, v35);
            ndisWaitForEvent(&v46);
            *(_QWORD *)(v6 + 1712) = 0LL;
            v38 = (void **)(v6 + 1728);
            while ( 1 )
            {
              v39 = (PVOID *)*v38;
              if ( *v38 == v38 )
                goto LABEL_51;
              ObfDereferenceObject(v39[2]);
              v40 = *v39;
              if ( *((PVOID **)*v39 + 1) != v39 )
                break;
              v41 = (void **)v39[1];
              if ( *v41 != v39 )
                break;
              *v41 = v40;
              *((_QWORD *)v40 + 1) = v41;
              --*(_DWORD *)(v6 + 1720);
              ExFreePoolWithTag(v39, 0);
            }
          }
        }
LABEL_65:
        __fastfail(3u);
      }
    }
    else if ( v2 >= 0 )
    {
      goto LABEL_58;
    }
    v42 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    *(_DWORD *)(v6 + 40) |= 0x10u;
    KeReleaseSpinLock(&ndisIfListLock, v42);
  }
LABEL_67:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Ll(*((_QWORD *)WPP_GLOBAL_Control + 8), v19, v20, v21, v44, v2, a1);
  return (unsigned int)v2;
}
