/*
 * XREFs of CrmSrvActivityQueryWindowClosedReasons @ 0x180003D5C
 * Callers:
 *     CrmRpcSrvActivityQueryWindowClosedReasons @ 0x180003D40 (CrmRpcSrvActivityQueryWindowClosedReasons.c)
 *     CrmpInProcActivityQueryWindowClosedReasons @ 0x18004ADB0 (CrmpInProcActivityQueryWindowClosedReasons.c)
 * Callees:
 *     CrmRegistrationFindActivity @ 0x18000408C (CrmRegistrationFindActivity.c)
 *     CrmActivityDereference @ 0x180004AA8 (CrmActivityDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall CrmSrvActivityQueryWindowClosedReasons(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  __int64 v4; // r14
  __int64 v9; // r8
  __int64 Activity; // rbx
  SIZE_T v11; // r8
  PVOID ProcessHeap; // rcx
  _DWORD *Heap; // rdi
  unsigned int i; // r8d
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // r8
  int v19; // eax
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  int *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  __int64 v30; // [rsp+90h] [rbp-70h]
  int v31; // [rsp+98h] [rbp-68h]
  int v32; // [rsp+9Ch] [rbp-64h]
  int *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  unsigned int *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  int *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  __int64 v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v45; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+118h] [rbp+18h]
  int v47; // [rsp+11Ch] [rbp+1Ch]

  v4 = 0LL;
  v20 = 1303;
  if ( (unsigned int)dword_1800DB250 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1800DB250, 1LL) )
  {
    v47 = 0;
    v45 = v9;
    v46 = 16;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BE054, 0, 0, 3u, &v44);
  }
  RtlAcquireSRWLockShared(a2);
  Activity = CrmRegistrationFindActivity(a2, a1);
  if ( Activity )
  {
    RtlReleaseSRWLockShared(a2);
    v11 = 4LL * *(unsigned int *)(Activity + 96);
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    v20 = *(_DWORD *)(Activity + 64);
    Heap = RtlAllocateHeap(ProcessHeap, 0, v11);
    if ( Heap )
    {
      RtlAcquireSRWLockShared(Activity + 80);
      for ( i = 0; i < *(_DWORD *)(Activity + 108); ++i )
      {
        v15 = *(_QWORD *)(Activity + 112) + 56LL * i;
        if ( !*(_DWORD *)(v15 + 48) )
        {
          Heap[v4] = *(_DWORD *)(v15 + 32);
          v4 = (unsigned int)(v4 + 1);
        }
      }
      RtlReleaseSRWLockShared(Activity + 80);
      *a3 = (__int64)Heap;
      v16 = 0;
      *a4 = v4;
    }
    else
    {
      v16 = -1073741801;
    }
    CrmActivityDereference(Activity);
  }
  else
  {
    v16 = -1073741811;
    RtlReleaseSRWLockShared(a2);
  }
  v17 = *a3;
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 1) != 0 && (qword_1800DB268 & 1) == qword_1800DB268 )
  {
    v26 = &Uuid;
    v21 = *(_DWORD *)(a2 + 24);
    v28 = &v21;
    v30 = a2 + 72;
    v19 = *(unsigned __int8 *)(a2 + 73);
    v41 = v17;
    v27 = 16LL;
    v29 = 4LL;
    v32 = 0;
    v31 = 4 * v19 + 8;
    v22 = v20;
    v33 = &v22;
    v35 = &v24;
    v37 = &v23;
    LOWORD(v20) = v4;
    v39 = &v20;
    v42 = 4 * (unsigned __int16)v4;
    v34 = 4LL;
    v24 = a1;
    v36 = 8LL;
    v23 = v16;
    v38 = 4LL;
    v40 = 2LL;
    v43 = 0;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BE0BD, 0, 0, 0xAu, &v25);
  }
  return v16;
}
