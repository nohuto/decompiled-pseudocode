/*
 * XREFs of ndisIfCreateCompartmentBlock @ 0x1C002CBC0
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1C002C6F8 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1C00B300C (ndisIfCreateCompartment.c)
 * Callees:
 *     WPP_RECORDER_SF_LqL @ 0x1C0010180 (WPP_RECORDER_SF_LqL.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C00200E8 (WPP_RECORDER_SF_Lq.c)
 *     ?Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ @ 0x1C0035BDC (-Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled@@YAHXZ.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ndisIfFindAvailableCompartmentId @ 0x1C00B3C80 (ndisIfFindAvailableCompartmentId.c)
 */

__int64 __fastcall ndisIfCreateCompartmentBlock(unsigned int a1, __int128 *a2, unsigned __int16 *a3, _QWORD *a4)
{
  int v5; // edi
  unsigned int v8; // r14d
  __int64 Pool2; // rax
  int v10; // edx
  int v11; // r8d
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  size_t v14; // r8
  NTSTATUS v15; // eax
  KIRQL v16; // bp
  unsigned int AvailableCompartmentId; // eax
  __int128 v18; // xmm0
  struct _NDIS_IF_COMPARTMENT_BLOCK *i; // rsi
  __int64 *v21; // rax
  __int64 v22; // rcx

  v5 = 0;
  v8 = a1;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xAu,
      (struct _GUID *)&WPP_6eeb5a11cab83be2fdb1380eb0b7c4ac_Traceguids,
      a1,
      a3);
  *a4 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 1768LL, 1718174798);
  v12 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v5 = -1073741670;
    goto LABEL_23;
  }
  *(_DWORD *)(Pool2 + 16) = v8;
  v13 = (_QWORD *)(Pool2 + 24);
  v13[1] = v13;
  *v13 = v13;
  v12[217] = v12 + 216;
  v12[216] = v12 + 216;
  if ( (unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() )
  {
    v12[219] = v12 + 218;
    v12[218] = v12 + 218;
  }
  *(_QWORD *)((char *)v12 + 44) = 1LL;
  if ( (unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() )
    *((_DWORD *)v12 + 10) = 8;
  if ( a3 )
  {
    v14 = 1640LL;
    if ( a3[1] < 0x668u )
      v14 = a3[1];
    memmove(v12 + 8, a3, v14);
  }
  else
  {
    v15 = ExUuidCreate((UUID *)v12 + 5);
    v5 = v15;
    if ( v15 < 0 )
    {
LABEL_22:
      ExFreePoolWithTag(v12, 0);
      LOBYTE(v12) = 0;
      goto LABEL_23;
    }
    if ( v15 == 1073872982 )
      v5 = 0;
  }
  v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( a2 )
  {
    AvailableCompartmentId = ndisIfFindAvailableCompartmentId(a2);
    if ( !AvailableCompartmentId )
    {
      v5 = -1073741270;
      goto LABEL_21;
    }
    v18 = *a2;
    v8 = AvailableCompartmentId;
    *((_DWORD *)v12 + 4) = AvailableCompartmentId;
    *(_OWORD *)(v12 + 143) = v18;
  }
  if ( !v5 )
  {
    for ( i = qword_1C00ECDC0;
          i != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0;
          i = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)i )
    {
      if ( *((_DWORD *)i + 4) == v8 )
      {
        v5 = -1073741270;
        KeReleaseSpinLock(&ndisIfListLock, v16);
        goto LABEL_22;
      }
      if ( *((_DWORD *)i + 4) > v8 )
        break;
    }
    if ( (unsigned int)Feature_Servicing_CompartmentMemoryLeak__private_IsEnabled() )
      _InterlockedIncrement((volatile signed __int32 *)v12 + 11);
    v21 = (__int64 *)*((_QWORD *)i + 1);
    v22 = *v21;
    if ( *(__int64 **)(*v21 + 8) != v21 )
      __fastfail(3u);
    *v12 = v22;
    v12[1] = v21;
    *(_QWORD *)(v22 + 8) = v12;
    *v21 = (__int64)v12;
    _InterlockedIncrement(&dword_1C00ECE08);
    KeReleaseSpinLock(&ndisIfListLock, v16);
    goto LABEL_37;
  }
LABEL_21:
  KeReleaseSpinLock(&ndisIfListLock, v16);
  if ( v5 < 0 )
    goto LABEL_22;
LABEL_37:
  *a4 = v12;
LABEL_23:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      v11,
      0xBu,
      (struct _GUID *)&WPP_6eeb5a11cab83be2fdb1380eb0b7c4ac_Traceguids,
      v8,
      (char)v12,
      v5);
  return (unsigned int)v5;
}
