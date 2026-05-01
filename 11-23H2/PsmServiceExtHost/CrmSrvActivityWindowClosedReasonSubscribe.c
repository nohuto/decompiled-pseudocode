/*
 * XREFs of CrmSrvActivityWindowClosedReasonSubscribe @ 0x180003BDC
 * Callers:
 *     CrmRpcSrvActivityWindowClosedReasonSubscribe @ 0x180003BC0 (CrmRpcSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmpInProcActivityWindowClosedReasonSubscribe @ 0x18004ADF0 (CrmpInProcActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     CrmRegistrationFindActivity @ 0x18000408C (CrmRegistrationFindActivity.c)
 *     CrmActivityDereference @ 0x180004AA8 (CrmActivityDereference.c)
 *     RmpWnfCreateStateNameForClient @ 0x180005AA8 (RmpWnfCreateStateNameForClient.c)
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x180007154 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityWindowClosedReasonSubscribe(__int64 a1, __int64 a2, struct _WNF_STATE_NAME *a3)
{
  int v6; // r12d
  struct _WNF_STATE_NAME *Activity; // rax
  struct _WNF_STATE_NAME *v8; // rdi
  struct _WNF_STATE_NAME *v9; // r14
  int StateNameForClient; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+7Ch] [rbp-84h]
  int *v22; // [rsp+80h] [rbp-80h]
  int v23; // [rsp+88h] [rbp-78h]
  int v24; // [rsp+8Ch] [rbp-74h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+9Ch] [rbp-64h]
  int *v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+ACh] [rbp-54h]
  __int64 *v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+BCh] [rbp-44h]
  int *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+D0h] [rbp-30h] BYREF
  UUID *v38; // [rsp+F0h] [rbp-10h]
  int v39; // [rsp+F8h] [rbp-8h]
  int v40; // [rsp+FCh] [rbp-4h]

  v6 = 1303;
  if ( (unsigned int)dword_1800DB250 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800DB250, 1LL) )
  {
    v40 = 0;
    v38 = &Uuid;
    v39 = 16;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BE470, 0, 0, 3u, &v37);
  }
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  Activity = (struct _WNF_STATE_NAME *)CrmRegistrationFindActivity(a2, a1);
  v8 = Activity;
  if ( Activity )
  {
    v6 = Activity[8].Data[0];
    v9 = Activity + 19;
    if ( Activity[19].Data[0] || Activity[19].Data[1] )
    {
      StateNameForClient = -1073741811;
    }
    else
    {
      StateNameForClient = RmpWnfCreateStateNameForClient((PSID)(a2 + 72), 0, 0, Activity + 19);
      if ( StateNameForClient >= 0 )
      {
        CrmRegistrationNotifyWindowClosedReasonChange(a2, v8);
        *a3 = *v9;
      }
    }
  }
  else
  {
    StateNameForClient = -1073741811;
  }
  *(_DWORD *)(a2 + 8) = 0;
  RtlReleaseSRWLockExclusive(a2);
  if ( v8 )
    CrmActivityDereference(v8);
  if ( (unsigned int)dword_1800DB250 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800DB250, 1LL) )
  {
    v12 = *(_DWORD *)(a2 + 24);
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v14 = v12;
    v22 = &v14;
    v25 = a2 + 72;
    v13 = *(unsigned __int8 *)(a2 + 73);
    v23 = 4;
    v29 = 4;
    v32 = 8;
    v35 = 4;
    v26 = 4 * v13 + 8;
    v19 = &Uuid;
    v28 = &v15;
    v31 = &v17;
    v34 = &v16;
    v20 = 16;
    v15 = v6;
    v17 = a1;
    v16 = StateNameForClient;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BE3FB, 0, 0, 8u, &v18);
  }
  return (unsigned int)StateNameForClient;
}
