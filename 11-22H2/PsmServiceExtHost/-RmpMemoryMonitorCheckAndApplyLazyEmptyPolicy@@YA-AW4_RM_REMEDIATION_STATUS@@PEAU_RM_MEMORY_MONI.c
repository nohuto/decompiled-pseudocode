/*
 * XREFs of ?RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18002D614
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180040AD0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180029950 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18002ACD4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18002B3D0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180056998 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 */

__int64 __fastcall RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbx
  __m128i v6; // xmm1
  __int128 v7; // xmm0
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // xmm1_8
  unsigned int v10; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-81h] BYREF
  unsigned __int64 v17[2]; // [rsp+40h] [rbp-79h] BYREF
  __int128 v18; // [rsp+50h] [rbp-69h]
  __int128 v19; // [rsp+60h] [rbp-59h]
  __m128i v20; // [rsp+70h] [rbp-49h]
  __int128 v21; // [rsp+80h] [rbp-39h]
  _OWORD v22[5]; // [rsp+90h] [rbp-29h] BYREF

  v2 = *a1;
  v5 = *(_QWORD *)(*a1 + 24);
  memset_0(a2, 0, 0x80uLL);
  RmpSystemMemoryMetricsQuery((struct _RM_PARTITION *)v2, (struct _RM_SYSTEM_MEMORY_METRICS *)v17);
  RmpPolicyComputeUsageLimits(
    (struct _RM_USAGE_LIMIT_SETTINGS *)(v5 + 400),
    (struct _RM_REMEDIATION_ACTIONS *)(v5 + 456),
    (struct _RM_SYSTEM_MEMORY_METRICS *)v17,
    v17[0],
    (struct _RM_RESOURCE_USAGE_LIMITS *)a2);
  v22[1] = v18;
  v6 = v20;
  v22[0] = *(_OWORD *)v17;
  v7 = v19;
  *(_WORD *)(v2 + 204) = 0;
  v8 = a2[13];
  v22[3] = v6;
  v9 = _mm_srli_si128(v6, 8).m128i_u64[0];
  v22[2] = v7;
  v22[4] = v21;
  if ( v9 > v8 )
  {
    memset_0(v17, 0, 0x50uLL);
    v20.m128i_i64[1] = v8;
    v10 = RmpMemoryMonitorEmptyWorkingSets(a1, v22, v17, 6LL);
    if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    {
      v16 = v9;
      v15 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v12,
        byte_1800C60B3,
        v13,
        v14,
        (__int64)&v15,
        (__int64)&v16);
    }
  }
  else
  {
    return 3;
  }
  return v10;
}
