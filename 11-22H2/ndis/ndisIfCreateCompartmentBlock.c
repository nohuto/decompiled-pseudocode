/*
 * XREFs of ndisIfCreateCompartmentBlock @ 0x1C0033B78
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1C00336A4 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B823C (ndisIfCreateCompartment.c)
 * Callees:
 *     WPP_RECORDER_SF_LqL @ 0x1C000F8E0 (WPP_RECORDER_SF_LqL.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C00217BC (WPP_RECORDER_SF_Lq.c)
 *     ?ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z @ 0x1C0037E08 (-ndisIfFindAvailableCompartmentId_old@@YAIPEBU_GUID@@@Z.c)
 *     Feature_Servicing_CompartmentIdReuse__private_IsEnabledDeviceUsage @ 0x1C0037EF0 (Feature_Servicing_CompartmentIdReuse__private_IsEnabledDeviceUsage.c)
 *     Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage @ 0x1C0037F44 (Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     ?ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z @ 0x1C00B8C54 (-ndisIfFindAvailableCompartmentId@@YAIPEBU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfCreateCompartmentBlock(unsigned int a1, struct _GUID *a2, _WORD *Src, _QWORD *a4)
{
  int v5; // edi
  unsigned int v8; // ebp
  __int64 Pool2; // rax
  int v10; // edx
  int v11; // r8d
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  size_t v14; // r8
  NTSTATUS v15; // eax
  KIRQL v16; // si
  unsigned int AvailableCompartmentId; // eax
  struct _GUID v18; // xmm0
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rax
  __int64 *v21; // rcx
  __int64 v22; // rax

  v5 = 0;
  v8 = a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids,
      a1,
      Src);
  *a4 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 1768LL, 1718174798);
  v12 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v5 = -1073741670;
    goto LABEL_24;
  }
  *(_DWORD *)(Pool2 + 16) = v8;
  v13 = (_QWORD *)(Pool2 + 24);
  v13[1] = v13;
  *v13 = v13;
  v12[217] = v12 + 216;
  v12[216] = v12 + 216;
  if ( !(unsigned int)Feature_Servicing_CompartmentNotificationRaceCondition__private_IsEnabledDeviceUsage() )
  {
    v12[219] = v12 + 218;
    v12[218] = v12 + 218;
  }
  *(_QWORD *)((char *)v12 + 44) = 1LL;
  *((_DWORD *)v12 + 10) = 8;
  if ( Src )
  {
    v14 = 1640LL;
    if ( Src[1] < 0x668u )
      v14 = (unsigned __int16)Src[1];
    memmove(v12 + 8, Src, v14);
  }
  else
  {
    v15 = ExUuidCreate((UUID *)v12 + 5);
    v5 = v15;
    if ( v15 < 0 )
    {
LABEL_23:
      ExFreePoolWithTag(v12, 0);
      LOBYTE(v12) = 0;
      goto LABEL_24;
    }
    if ( v15 == 1073872982 )
      v5 = 0;
  }
  v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( a2 )
  {
    if ( (unsigned int)Feature_Servicing_CompartmentIdReuse__private_IsEnabledDeviceUsage() )
      AvailableCompartmentId = ndisIfFindAvailableCompartmentId(a2);
    else
      AvailableCompartmentId = ndisIfFindAvailableCompartmentId_old(a2);
    if ( !AvailableCompartmentId )
    {
      v5 = -1073741270;
      goto LABEL_22;
    }
    v18 = *a2;
    v8 = AvailableCompartmentId;
    *((_DWORD *)v12 + 4) = AvailableCompartmentId;
    *(struct _GUID *)(v12 + 143) = v18;
  }
  if ( !v5 )
  {
    for ( i = qword_1C00F5DA0;
          i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0;
          i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
    {
      if ( *((_DWORD *)i + 4) == v8 )
      {
        v5 = -1073741270;
        KeReleaseSpinLock(&ndisIfListLock, v16);
        goto LABEL_23;
      }
      if ( *((_DWORD *)i + 4) > v8 )
        break;
    }
    _InterlockedIncrement((volatile signed __int32 *)v12 + 11);
    v21 = (__int64 *)*((_QWORD *)i + 1);
    v22 = *v21;
    if ( *(__int64 **)(*v21 + 8) != v21 )
      __fastfail(3u);
    *v12 = v22;
    v12[1] = v21;
    *(_QWORD *)(v22 + 8) = v12;
    *v21 = (__int64)v12;
    _InterlockedIncrement(&dword_1C00F5DF8);
    KeReleaseSpinLock(&ndisIfListLock, v16);
    goto LABEL_36;
  }
LABEL_22:
  KeReleaseSpinLock(&ndisIfListLock, v16);
  if ( v5 < 0 )
    goto LABEL_23;
LABEL_36:
  *a4 = v12;
LABEL_24:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      v11,
      0xBu,
      (struct _GUID *)&WPP_44cacc4423dd306c9dbb65f5b8fbc273_Traceguids,
      v8,
      (char)v12,
      v5);
  return (unsigned int)v5;
}
