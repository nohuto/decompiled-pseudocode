/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x18008CF80
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180056998 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180050380 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800558A0 (-RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATI.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180056098 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x1800562BC (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180084DB8 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18008B20C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyActOnHosts(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  unsigned int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // r14
  char *v12; // rdi
  __int64 v13; // rbx
  char *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _BYTE *v18; // r11
  int v19; // eax
  int v20; // r10d
  __int64 v21; // rsi
  int v22; // eax
  int v23; // r8d
  _BYTE *v24; // r11
  int v25; // eax
  char v26; // r8
  int v27; // edx
  int v28; // r8d
  unsigned int v29; // r10d
  __int64 v30; // rax
  char v31; // [rsp+40h] [rbp-99h]
  char v32; // [rsp+41h] [rbp-98h] BYREF
  unsigned int v33; // [rsp+44h] [rbp-95h]
  __int64 v34; // [rsp+48h] [rbp-91h] BYREF
  __int64 v35; // [rsp+50h] [rbp-89h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v36; // [rsp+58h] [rbp-81h]
  __int64 v37; // [rsp+60h] [rbp-79h] BYREF
  unsigned __int8 *v38; // [rsp+68h] [rbp-71h]
  unsigned __int8 *v39; // [rsp+70h] [rbp-69h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+80h] [rbp-59h] BYREF
  __int64 *v41; // [rsp+A0h] [rbp-39h]
  int v42; // [rsp+A8h] [rbp-31h]
  int v43; // [rsp+ACh] [rbp-2Dh]
  __int64 *v44; // [rsp+B0h] [rbp-29h]
  int v45; // [rsp+B8h] [rbp-21h]
  int v46; // [rsp+BCh] [rbp-1Dh]
  char *v47; // [rsp+C0h] [rbp-19h]
  int v48; // [rsp+C8h] [rbp-11h]
  int v49; // [rsp+CCh] [rbp-Dh]

  v9 = 0;
  v36 = a6;
  v10 = *(_QWORD *)a1;
  v33 = a3;
  v38 = a7;
  v39 = a8;
  v11 = *(_QWORD *)(v10 + 24) + 400LL;
  *a7 = 0;
  *a8 = 0;
  v31 = 0;
  if ( a3 )
  {
    v12 = (char *)a2 + 24;
    do
    {
      v13 = *((_QWORD *)v12 + 3);
      v14 = v12 + 8;
      if ( *((__int16 *)v12 + 18) >= 0 )
      {
        if ( !RmpPolicyActivityHostIsValidEmptyTarget(*((struct _RM_ACTIVITY_HOST **)v12 + 3)) )
          return;
        if ( (a5 & 8) != 0 )
        {
          RmpPolicyComputeDesiredEmptyState(v11, v13, 2);
          if ( (a5 & 4) == 0 )
            *v18 = 1;
          v19 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v13 + 48) + 400LL, v13, 1);
          v21 = 0LL;
          if ( (v19 & *(_DWORD *)(v13 + 1268)) == v19 )
            v21 = 8LL;
          v14 = &v12[v21];
        }
        else
        {
          v22 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v13 + 48) + 400LL, v13, 1);
          if ( (v22 & *(_DWORD *)(v13 + 1268)) == v22 )
          {
            if ( v31 )
              return;
            v20 = RmpPolicyComputeDesiredEmptyState(v11, v13, 2);
            if ( (a5 & 4) == 0 )
              *v24 = 1;
          }
          else
          {
            v25 = RmpPolicyComputeDesiredEmptyState(v11, v13, v23);
            v31 = v26;
            v20 = v25;
            v14 = v12;
          }
        }
        *(_DWORD *)(v13 + 1460) |= v20;
        if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
        {
          v30 = *(_QWORD *)v14;
          v49 = 0;
          v46 = 0;
          v43 = 0;
          v35 = v30;
          v34 = *(_QWORD *)(v13 + 32);
          v47 = &v32;
          v44 = &v35;
          v41 = &v34;
          v48 = v27;
          v45 = v28;
          v42 = v28;
          v32 = v27 & (v29 >> 5);
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_1800DB1E0,
            (unsigned __int8 *)dword_1800C5AB7,
            0LL,
            0LL,
            5u,
            &v40);
        }
        RmpActivityHostAddToRemediationGroup((struct _RM_ACTIVITY_HOST *)v13, v36);
        RmpActivityHostCheckQueueWork(*((struct _RM_ACTIVITY_HOST **)v12 + 3));
      }
      else
      {
        if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
        {
          v37 = *((_QWORD *)v12 - 3);
          v34 = *(_QWORD *)v12;
          v35 = *(_QWORD *)(v13 + 32);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v15,
            byte_1800C5BB6,
            v16,
            v17,
            (__int64)&v35,
            (__int64)&v34,
            (__int64)&v37);
        }
        RmpActivityHostAddToRemediationGroup((struct _RM_ACTIVITY_HOST *)v13, v36);
        RmpActivityHostRevokeResourceSets(v13, 3, 4);
        v14 = v12;
      }
      *v38 = 1;
      if ( (a5 & 2) != 0 )
        break;
      if ( *(_QWORD *)v14 > a4 )
        break;
      a4 -= *(_QWORD *)v14;
      ++v9;
      v12 += 64;
    }
    while ( v9 < v33 );
  }
}
