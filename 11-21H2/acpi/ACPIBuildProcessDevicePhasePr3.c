/*
 * XREFs of ACPIBuildProcessDevicePhasePr3 @ 0x1C000A1F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000A4C0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C002A088 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C002AC6C (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIWriteEventLogEntry @ 0x1C00543C8 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePr3(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rsi
  unsigned int v3; // ebp
  __int64 v5; // rax
  ULONG_PTR v6; // rdx
  unsigned int v7; // edx
  ULONG_PTR v8; // rcx
  int v9; // eax
  void *v10; // rax
  __int64 v11; // rdx
  void *v12; // rcx
  __int64 v14; // rcx
  unsigned int v15; // eax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  v3 = 0;
  if ( *(_QWORD *)(v1 + 488) || *(_QWORD *)(v1 + 440) )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_6;
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    goto LABEL_28;
  }
  v5 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 861098079LL);
  *(_QWORD *)(v1 + 488) = v5;
  if ( !v5 )
    *(_QWORD *)(v1 + 488) = *(_QWORD *)(v1 + 480);
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    if ( *(_WORD *)(v2 + 2) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_6;
    }
    v15 = ACPIBuildDevicePowerNodes(v1, v6);
    dword_1C0081AC8 = 0;
    v3 = v15;
    byte_1C0081ACC = 0;
LABEL_28:
    FreeDataBuffs(v2, 1LL);
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 28) = 5;
    return ACPIBuildDelayedDependencyRequest(a1, &AcpiBuildDeviceList);
  }
  if ( (*(_DWORD *)(v1 + 1000) & 0x400040) == 0 )
  {
    v7 = 0;
    v8 = v1 + 408;
    while ( !*(_QWORD *)v8 || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) + 96LL) )
    {
      ++v7;
      v8 += 8LL;
      if ( v7 > 4 )
        goto LABEL_11;
    }
    _InterlockedOr64((volatile signed __int64 *)(v1 + 1000), 0x400000uLL);
    *(_DWORD *)(a1 + 20) |= 0x20u;
    return ACPIBuildDelayedDependencyRequest(a1, &AcpiBuildDeviceList);
  }
LABEL_11:
  if ( (*(_BYTE *)(v1 + 8) & 2) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 56);
    if ( v14 )
      AMLIDereferenceHandleEx(v14);
    *(_QWORD *)(a1 + 56) = 0LL;
    v9 = 31;
  }
  else
  {
    v9 = 30;
  }
  *(_DWORD *)(a1 + 32) = v9;
  v10 = &unk_1C006FB8B;
  v11 = *(_QWORD *)(v1 + 8);
  v12 = &unk_1C006FB8B;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v10 = *(void **)(v1 + 608);
    if ( (v11 & 0x400000000000LL) != 0 )
      v12 = *(void **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      6,
      42,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      v3,
      v1,
      (__int64)v10,
      (__int64)v12);
  }
  ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}
