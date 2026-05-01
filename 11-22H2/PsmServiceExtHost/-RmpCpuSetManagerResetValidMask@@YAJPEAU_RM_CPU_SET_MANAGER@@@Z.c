/*
 * XREFs of ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180045040
 * Callers:
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044EB0 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180048270 (-RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032530 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004529C (-RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z @ 0x1800452C4 (-RmpSystemSetProcessDefaultCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x18004534C (-RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z.c)
 *     ?RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z @ 0x1800453D4 (-RmpCpuSetManagerGetCpuSetInformation@@YAJPEAPEAU_SYSTEM_CPU_SET_INFORMATION@@PEAK@Z.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800462FC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x1800468A8 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x18004699C (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180049F44 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ??$Write@U?$_tlgWrapperArray@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperArray@$07@@@Z @ 0x180085EB4 (--$Write@U-$_tlgWrapperArray@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180087070 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180087DD8 (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
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
  __int64 v10; // r13
  signed __int64 v11; // rax
  char *v12; // r14
  __int64 *v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rdi
  HANDLE CurrentProcess; // rax
  HANDLE v17; // rax
  unsigned int SystemReserveTarget; // esi
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rcx
  struct _RM_CPU_SET_ALLOCATION *Next; // rax
  struct _RM_OBJECT_HEADER *v28; // rdi
  unsigned int v29; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  signed __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v32; // [rsp+48h] [rbp-B8h]
  _QWORD v33[32]; // [rsp+60h] [rbp-A0h] BYREF

  P = 0LL;
  CpuSetInformation = RmpCpuSetManagerGetCpuSetInformation((struct _SYSTEM_CPU_SET_INFORMATION **)&P, &v29);
  if ( CpuSetInformation < 0 )
  {
    v12 = (char *)a1 + 88;
  }
  else
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
    v10 = 0LL;
    v29 = v4;
    v11 = (char *)v33 - (char *)a1;
    v12 = (char *)a1 + 88;
    v31 = (char *)v33 - (char *)a1;
    v13 = (__int64 *)((char *)a1 + 88);
    do
    {
      v14 = *v13;
      v15 = *(__int64 *)((char *)v13 + v11 - 88) & ~v13[64];
      *(__int64 *)((char *)v13 + v11 - 88) = v15;
      if ( v15 != v14 )
      {
        v23 = v15 & ~v14;
        if ( v23 )
        {
          v24 = RtlNumberOfSetBitsUlongPtr(v23, v3, v5, i);
          *(_QWORD *)&v12[8 * v10] |= v23;
          *((_DWORD *)a1 + 349) += v24;
          *((_QWORD *)a1 + v10 + 43) |= v23;
          *((_DWORD *)a1 + 350) += v24;
          *((_DWORD *)a1 + 353) |= 1u;
          LOBYTE(v4) = v29;
        }
        v25 = *v13 & ~v15;
        if ( v25 )
        {
          LODWORD(v4) = (unsigned __int8)v4;
          if ( (~v13[32] & v25) != 0 )
            LODWORD(v4) = 1;
          *(_QWORD *)&v12[8 * v10] &= ~v25;
          v29 = v4;
          *((_DWORD *)a1 + 349) -= RtlNumberOfSetBitsUlongPtr(v25, v3, v5, i);
          v26 = v25 & *((_QWORD *)a1 + v10 + 43);
          if ( v26 )
          {
            *((_QWORD *)a1 + v10 + 43) &= ~v26;
            *((_DWORD *)a1 + 350) -= RtlNumberOfSetBitsUlongPtr(v26, v3, v5, i);
          }
          *((_DWORD *)a1 + 353) |= 1u;
        }
      }
      v11 = v31;
      LOBYTE(v4) = v29;
      v10 = (unsigned int)(v10 + 1);
      ++v13;
    }
    while ( (unsigned int)v10 < 0x20 );
    if ( !(unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent(v29) )
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
        (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v31);
      while ( 1 )
      {
        Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)&v31);
        v28 = Next;
        if ( !Next )
          break;
        RmpCpuSetManagerInvalidateAllocation(a1, Next);
        RmpObjectRelease(v28);
      }
      RtlReleaseSRWLockShared(v31 + 16);
      RmpCpuSetManagerApplyAllPolicyChanges(a1);
    }
    *((_DWORD *)a1 + 352) = SystemReserveTarget;
    *((_DWORD *)a1 + 351) = 1;
    RmpCpuSetManagerApplyAllPolicyChanges(a1);
    CpuSetInformation = 0;
  }
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v31 = (signed __int64)v12;
    v32 = 32;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperArray<8>>(
      v19,
      (unsigned int)&unk_1800C4AE7,
      v20,
      v21,
      (__int64)&v31);
  }
  return (unsigned int)CpuSetInformation;
}
