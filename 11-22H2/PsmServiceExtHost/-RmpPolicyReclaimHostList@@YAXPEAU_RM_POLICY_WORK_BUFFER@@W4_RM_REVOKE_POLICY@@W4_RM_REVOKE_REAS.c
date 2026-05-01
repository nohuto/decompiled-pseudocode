/*
 * XREFs of ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800506C4
 * Callers:
 *     ?RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z @ 0x18008B088 (-RmpPolicyRevokeResourceSetsForAcquire@@YAXPEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@@Z.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18008D324 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180050380 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800558A0 (-RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATI.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x180085038 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 */

void __fastcall RmpPolicyReclaimHostList(__int64 a1, int a2, int a3, struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a4)
{
  __int64 i; // rbx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h]

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_QWORD *)(v9 + 24 * i + 8);
    if ( *(_DWORD *)(v9 + 24 * i + 16) == 1 )
    {
      v11 = *(_QWORD *)(v9 + 24 * i);
      v12 = *(_DWORD *)(v9 + 24 * i + 20) & 1;
      v14 = 0LL;
      if ( v12 )
        v11 = -1LL;
      v13 = v11;
      DWORD2(v14) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) & 0xFFFFFFF8 | (4 * v12) | (*(_DWORD *)(v10 + 1268) >> 4) & 1;
      RmpActivityHostDecommitOfferedMemory((struct _RM_ACTIVITY_HOST *)v10, (struct _RM_OFFERED_DECOMMIT_INFO *)&v13);
    }
    else
    {
      if ( a4 )
        RmpActivityHostAddToRemediationGroup(*(struct _RM_ACTIVITY_HOST **)(v9 + 24 * i + 8), a4);
      RmpActivityHostRevokeResourceSets(v10, a2, a3);
    }
  }
}
