/*
 * XREFs of ACPIBuildProcessDevicePhasePrw @ 0x1C000AC90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000A4C0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     ACPIGpeValidIndex @ 0x1C001D604 (ACPIGpeValidIndex.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C002A088 (ACPIBuildDevicePowerNodes.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C004B2C8 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIWriteEventLogEntry @ 0x1C00543C8 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrw(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // r13
  char v4; // si
  int v5; // r15d
  __int64 v6; // rax
  ULONG_PTR v7; // rdx
  __int64 v8; // rdx
  void *v9; // rax
  void *v10; // r8
  __int64 v12; // rbx
  __int16 v13; // ax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  unsigned __int8 v18; // cl
  unsigned int v19; // ebx
  int v20; // esi
  unsigned __int64 v21; // rdx
  __int64 v22; // rbx
  int v23; // r8d
  __int64 v24; // rdx
  void *v25; // rax
  void *v26; // r8
  unsigned __int8 v27; // r8
  _QWORD v28[15]; // [rsp+50h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 18;
  v4 = 0;
  v5 = 0;
  if ( *(_QWORD *)(v1 + 456) )
  {
    if ( *(_QWORD *)(a1 + 56) )
    {
      dword_1C0081AC8 = 0;
      byte_1C0081ACC = 0;
      FreeDataBuffs(a1 + 80, 1LL);
    }
  }
  else
  {
    v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1465074783LL);
    if ( v6 )
      *(_DWORD *)(v1 + 600) |= 0x40u;
    else
      v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1465077855LL);
    *(_QWORD *)(v1 + 456) = v6;
    v7 = *(_QWORD *)(a1 + 56);
    if ( !v7 )
    {
      if ( (*(_DWORD *)(v1 + 600) & 0x40) == 0 )
        goto LABEL_6;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x10000uLL);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1000), 0x400000000uLL);
      v7 = *(_QWORD *)(a1 + 56);
    }
    if ( v7 )
    {
      if ( (AcpiOverrideAttributes & 8) != 0 && !_bittest64((const signed __int64 *)(v1 + 8), 0x23u) )
        v4 = 1;
      if ( *(_WORD *)(v2 + 2) != 4 )
      {
        ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
        v7 = *(_QWORD *)(a1 + 56);
      }
      v5 = ACPIBuildDevicePowerNodes(v1, v7);
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      v12 = *(_QWORD *)(v2 + 32);
      v13 = *(_WORD *)(v12 + 10);
      if ( v13 != 1 )
      {
        if ( v13 != 4 )
          KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v12 + 10));
        v5 = ACPIBuildWakeEventDeviceContext(v1, v12 + 8);
        if ( v5 < 0 )
        {
          v24 = *(_QWORD *)(v1 + 8);
          v25 = &unk_1C006FB8B;
          v26 = &unk_1C006FB8B;
          if ( (v24 & 0x200000000000LL) != 0 )
          {
            v25 = *(void **)(v1 + 608);
            if ( (v24 & 0x400000000000LL) != 0 )
              v26 = *(void **)(v1 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v24,
              10,
              43,
              (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
              v5,
              v1,
              (__int64)v25,
              (__int64)v26);
          }
          KeBugCheckEx(0xA5u, 6uLL, v1, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v12 + 10));
        }
      }
      v14 = *(_QWORD *)(v2 + 32);
      if ( *(_WORD *)(v14 + 50) != 1 )
        KeBugCheckEx(0xA5u, 4uLL, v1, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v14 + 50));
      if ( !v4 )
      {
        *(_DWORD *)(v1 + 504) = *(_DWORD *)(v12 + 24);
        v15 = *(_QWORD *)(v14 + 64);
        if ( v15 >= 6 )
          v16 = 0;
        else
          v16 = SystemPowerStateTranslation[v15];
        *(_DWORD *)(v1 + 536) = v16;
        _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x10000uLL);
        if ( *((_BYTE *)AcpiInformation + 133) )
        {
          _InterlockedOr64((volatile signed __int64 *)(v1 + 1000), 0x100000000uLL);
        }
        else
        {
          v17 = *(_QWORD *)(v1 + 1000);
          if ( (v17 & 0x800000000LL) != 0 )
          {
            if ( (v17 & 0x100000000LL) == 0 )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 0LL, 0LL);
            if ( *(_QWORD *)(v12 + 24) != 0xFFFFFFFFLL )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v1, 1uLL, 0LL);
          }
        }
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      if ( !*((_BYTE *)AcpiInformation + 133)
        && !_bittest64((const signed __int64 *)(v1 + 1000), 0x20u)
        && (unsigned __int8)ACPIGpeValidIndex(*(unsigned int *)(v12 + 24)) )
      {
        v19 = v18;
        v20 = 1 << (v18 & 7);
        KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
        v21 = (unsigned __int64)v19 >> 3;
        if ( ((unsigned __int8)v20 & *((_BYTE *)GpeEnable + v21)) != 0 )
        {
          if ( _bittest64((const signed __int64 *)(v1 + 8), 0x23u) )
          {
            *((_BYTE *)GpeSpecialHandler + v21) |= v20;
            v27 = *((_BYTE *)GpeWakeHandler + v21);
            if ( (v27 & (unsigned __int8)v20) != 0 )
              *((_BYTE *)GpeWakeHandler + v21) = v27 & ~(_BYTE)v20;
          }
          else if ( ((unsigned __int8)v20 & *((_BYTE *)GpeSpecialHandler + v21)) == 0 )
          {
            *((_BYTE *)GpeWakeHandler + v21) |= v20;
          }
        }
        KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
      }
    }
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    FreeDataBuffs(v2, 1LL);
    v22 = *(_QWORD *)(v1 + 456);
    if ( v22 )
    {
      memset(v28, 0, sizeof(v28));
      v23 = *(_DWORD *)(v1 + 600) & 0x40;
      WORD1(v28[0]) = 1;
      v28[2] = 0LL;
      WORD1(v28[5]) = 1;
      v28[7] = 0LL;
      WORD1(v28[10]) = 1;
      v28[12] = 0LL;
      AMLIAsyncEvalObject(v22, 0, (v23 | 0x20u) >> 5, (unsigned int)v28, 0LL, 0LL);
    }
  }
LABEL_6:
  v8 = *(_QWORD *)(v1 + 8);
  v9 = &unk_1C006FB8B;
  v10 = &unk_1C006FB8B;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v9 = *(void **)(v1 + 608);
    if ( (v8 & 0x400000000000LL) != 0 )
      v10 = *(void **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      6,
      44,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      v5,
      v1,
      (__int64)v9,
      (__int64)v10);
  }
  ACPIBuildCompleteMustSucceed(0LL, v5, 0LL, a1);
  return (unsigned int)v5;
}
