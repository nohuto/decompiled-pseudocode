/*
 * XREFs of ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004AE94
 * Callers:
 *     ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180042B00 (-RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004ADB4 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004B0E4 (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18004B2D8 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18004B348 (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004B4B0 (-RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x18004B4D8 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x18004B560 (-RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x18004B698 (-RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18004ECE4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     ??$Write@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperArray@$07@@@Z @ 0x180088230 (--$Write@U-$_tlgWrapperArray@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x1800893E4 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18008A138 (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerResetValidMask(struct _RM_CPU_SET_MANAGER *a1)
{
  int CpuSetInformation; // edi
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // r8
  unsigned int v6; // r10d
  __int64 i; // r9
  int v8; // eax
  unsigned int v9; // eax
  char *v10; // r12
  __int64 v11; // r14
  __int64 *v12; // rsi
  signed __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdi
  HANDLE CurrentProcess; // rax
  HANDLE v17; // rax
  unsigned int SystemReserveTarget; // esi
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v23; // r15
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rcx
  struct _RM_CPU_SET_ALLOCATION *Next; // rax
  char *v28; // rdi
  unsigned int v29; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v31; // [rsp+40h] [rbp-C0h]
  _QWORD v32[5]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v33[32]; // [rsp+70h] [rbp-90h] BYREF

  P = 0LL;
  CpuSetInformation = RmpCpuSetManagerGetCpuSetInformation((struct _SYSTEM_CPU_SET_INFORMATION **)&P, &v29);
  if ( CpuSetInformation >= 0 )
  {
    memset_0(v33, 0, sizeof(v33));
    v6 = v29;
    for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(*v5 + i) )
    {
      v5 = (char *)P + (unsigned int)i;
      if ( !v5[1] )
      {
        v8 = v5[2];
        if ( v8 != *((_DWORD *)a1 + 348) )
        {
          v9 = v8 - 256;
          v3 = (unsigned __int64)v9 >> 16;
          v4 = v33[v3] | (1LL << v9);
          v33[v3] = v4;
        }
      }
    }
    LOBYTE(v4) = 0;
    v10 = (char *)a1 + 88;
    v11 = 0LL;
    v29 = v4;
    v12 = (__int64 *)((char *)a1 + 88);
    v13 = (char *)v33 - (char *)a1;
    do
    {
      v14 = *v12;
      v15 = *(__int64 *)((char *)v12 + v13 - 88) & ~v12[64];
      *(__int64 *)((char *)v12 + v13 - 88) = v15;
      if ( v15 != v14 )
      {
        v23 = v15 & ~v14;
        if ( v23 )
        {
          v24 = RtlNumberOfSetBitsUlongPtr(v15 & ~v14, v3, v5, i);
          *(_QWORD *)&v10[8 * v11] |= v23;
          *((_DWORD *)a1 + 349) += v24;
          *((_QWORD *)a1 + v11 + 43) |= v23;
          *((_DWORD *)a1 + 350) += v24;
          *((_DWORD *)a1 + 353) |= 1u;
          v14 = *v12;
          LOBYTE(v4) = v29;
        }
        v25 = v14 & ~v15;
        if ( v25 )
        {
          LODWORD(v4) = (unsigned __int8)v4;
          if ( (~v12[32] & v25) != 0 )
            LODWORD(v4) = 1;
          *(_QWORD *)&v10[8 * v11] &= ~v25;
          v29 = v4;
          *((_DWORD *)a1 + 349) -= RtlNumberOfSetBitsUlongPtr(v25, v3, v5, i);
          v26 = v25 & *((_QWORD *)a1 + v11 + 43);
          if ( v26 )
          {
            *((_QWORD *)a1 + v11 + 43) &= ~v26;
            *((_DWORD *)a1 + 350) -= RtlNumberOfSetBitsUlongPtr(v26, v3, v5, i);
          }
          *((_DWORD *)a1 + 353) |= 1u;
        }
      }
      LOBYTE(v4) = v29;
      v11 = (unsigned int)(v11 + 1);
      ++v12;
    }
    while ( (unsigned int)v11 < 0x20 );
    if ( !(unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent(v29, v3, v5, i) )
    {
      CurrentProcess = GetCurrentProcess();
      RmpSystemSetProcessAllowedCpuSets(CurrentProcess, (char *)a1 + 88);
      v17 = GetCurrentProcess();
      RmpSystemSetProcessDefaultCpuSets(v17, (char *)a1 + 88);
    }
    if ( (_BYTE)v29 )
      RmpCpuSetManagerSweepInvalidAllocations(a1);
    SystemReserveTarget = RmpCpuSetManagerGetSystemReserveTarget(a1);
    if ( SystemReserveTarget > *((_DWORD *)a1 + 350) )
    {
      RmpObjectTableEnumerationBegin(
        (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
        (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v32);
      while ( 1 )
      {
        Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v32);
        v28 = (char *)Next;
        if ( !Next )
          break;
        RmpCpuSetManagerInvalidateAllocation(a1, Next);
        RmpObjectRelease(v28);
      }
      RtlReleaseSRWLockShared(v32[0] + 16LL);
      RmpCpuSetManagerApplyAllPolicyChanges(a1);
    }
    *((_DWORD *)a1 + 352) = SystemReserveTarget;
    *((_DWORD *)a1 + 351) = 1;
    RmpCpuSetManagerApplyAllPolicyChanges(a1);
    CpuSetInformation = 0;
  }
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 1LL) )
  {
    v31 = 32;
    P = (char *)a1 + 88;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperArray<8>>(
      v19,
      (unsigned int)&unk_1800C4020,
      v20,
      v21,
      (__int64)&P);
  }
  return (unsigned int)CpuSetInformation;
}
