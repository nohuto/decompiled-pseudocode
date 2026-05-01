/*
 * XREFs of CrmSrvActivityAllocate @ 0x180038BBC
 * Callers:
 *     CrmpInProcActivityAllocate @ 0x18004AE10 (CrmpInProcActivityAllocate.c)
 * Callees:
 *     CrmActivityDereference @ 0x180004AA8 (CrmActivityDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     CrmVerifyActivityId @ 0x18002C648 (CrmVerifyActivityId.c)
 *     CrmRegistrationCreateActivity @ 0x1800438F0 (CrmRegistrationCreateActivity.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     CrmVerifyPolicyConfiguration @ 0x18004BACC (CrmVerifyPolicyConfiguration.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18006D5BC (_tlgCreate1Sz_wchar_t.c)
 */

__int64 __fastcall CrmSrvActivityAllocate(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // r14
  __int64 v11; // r8
  int v12; // ebx
  int Activity; // eax
  __int64 v14; // rcx
  int v15; // edx
  int v16; // eax
  int v17; // r10d
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h]
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v25; // [rsp+70h] [rbp-90h]
  int v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+7Ch] [rbp-84h]
  int *v28; // [rsp+80h] [rbp-80h]
  int v29; // [rsp+88h] [rbp-78h]
  int v30; // [rsp+8Ch] [rbp-74h]
  __int64 v31; // [rsp+90h] [rbp-70h]
  int v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+9Ch] [rbp-64h]
  unsigned int *v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A8h] [rbp-58h]
  int v36; // [rsp+ACh] [rbp-54h]
  __int64 *v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  int v39; // [rsp+BCh] [rbp-44h]
  char v40[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+10Ch] [rbp+Ch]

  v19 = 0LL;
  v6 = -1LL;
  v23 = a5;
  if ( (unsigned int)dword_1800DB250 > 5 && tlgKeywordOn((__int64)&dword_1800DB250, 1LL) )
  {
    v47 = 0;
    v45 = v11;
    v46 = 16;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB250,
      (unsigned __int8 *)dword_1800BE158,
      0LL,
      0LL,
      3u,
      &v44);
  }
  v12 = CrmVerifyActivityId(*(_DWORD *)(a2 + 24), a3);
  if ( v12 >= 0 )
  {
    v12 = CrmVerifyPolicyConfiguration(a3, a4);
    if ( v12 >= 0 )
    {
      Activity = CrmRegistrationCreateActivity(a2, a3, a4);
      v14 = v19;
      v12 = Activity;
      if ( Activity >= 0 )
      {
        v6 = *(_QWORD *)(v19 + 56);
        v12 = 0;
        *a1 = v6;
        *a6 = *(_QWORD *)(v14 + 144);
      }
    }
  }
  if ( (unsigned int)dword_1800DB250 > 5 && tlgKeywordOn((__int64)&dword_1800DB250, 1LL) )
  {
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v25 = &Uuid;
    v20 = *(_DWORD *)(a2 + 24);
    v28 = &v20;
    v31 = a2 + 72;
    v16 = *(unsigned __int8 *)(a2 + 73);
    v26 = 16;
    v29 = v15 + 3;
    v21 = a3;
    v35 = v15 + 3;
    v32 = 4 * v16 + 8;
    v34 = &v21;
    v37 = &v22;
    v22 = v6;
    v38 = 8;
    tlgCreate1Sz_wchar_t(v40, v23);
    v43 = 0;
    v41 = &v19;
    LODWORD(v19) = v12;
    v42 = v17;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB250,
      (unsigned __int8 *)dword_1800BE340,
      0LL,
      0LL,
      9u,
      &v24);
  }
  return (unsigned int)v12;
}
