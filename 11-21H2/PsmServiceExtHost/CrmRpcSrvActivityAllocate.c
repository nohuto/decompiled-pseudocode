/*
 * XREFs of CrmRpcSrvActivityAllocate @ 0x1800308F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmActivityPolicyTableEntryGet @ 0x1800307A4 (CrmActivityPolicyTableEntryGet.c)
 *     CrmActivityInitialize @ 0x18003085C (CrmActivityInitialize.c)
 *     CrmRegistrationAddActivity @ 0x180030A9C (CrmRegistrationAddActivity.c)
 *     CrmActivityStart @ 0x180030D90 (CrmActivityStart.c)
 *     CrmActivityCleanup @ 0x180035860 (CrmActivityCleanup.c)
 *     CrmActivityDereference @ 0x18003B650 (CrmActivityDereference.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18006D9FC (_tlgCreate1Sz_wchar_t.c)
 */

__int64 __fastcall CrmRpcSrvActivityAllocate(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  __int64 v6; // r12
  __int64 v8; // rsi
  int v11; // ebx
  PVOID Heap; // rax
  PVOID v13; // rsi
  int v14; // ebx
  _QWORD *v15; // rcx
  signed __int64 v16; // rax
  bool v17; // cc
  signed __int64 v18; // rax
  int v20; // eax
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+60h] [rbp-A0h] BYREF
  UUID *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  int *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  __int64 v30; // [rsp+A0h] [rbp-60h]
  int v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+ACh] [rbp-54h]
  __int64 *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  _QWORD *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  _BYTE v37[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+F0h] [rbp-10h] BYREF
  UUID *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]

  v5 = 0;
  v6 = -1LL;
  v21 = a4;
  v8 = a4;
  v23 = a5;
  if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 1) != 0 && (qword_1800DC268 & 1) == qword_1800DC268 )
  {
    v41 = &Uuid;
    v42 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC250,
      (unsigned __int8 *)dword_1800BD288,
      0LL,
      0LL,
      3u,
      &v40);
  }
  v11 = *(_DWORD *)(a2 + 24);
  if ( v11 < 305
    && a3 <= 0x44C
    && (int)CrmActivityPolicyTableEntryGet(v11, a3, (__int64)v24) >= 0
    && LODWORD(v24[0]) == v11 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xD8uLL);
    v13 = Heap;
    if ( Heap )
    {
      CrmActivityInitialize((__int64)Heap, a2);
      v14 = CrmActivityStart(v13, a2, a3, a2 + 72);
      if ( v14 < 0 )
      {
        CrmActivityDereference(v13);
      }
      else
      {
        CrmRegistrationAddActivity(a2, v13);
        if ( _InterlockedIncrement64((volatile signed __int64 *)v13 + 2) <= 1 )
          __fastfail(0xEu);
        v6 = *((_QWORD *)v13 + 6);
        v14 = 0;
        v15 = (_QWORD *)v23;
        *a1 = v6;
        *v15 = *((_QWORD *)v13 + 15);
        if ( v13 )
        {
          v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 2, 0xFFFFFFFFFFFFFFFFuLL);
          v17 = v16 <= 1;
          v18 = v16 - 1;
          if ( v17 )
          {
            if ( v18 )
              __fastfail(0xEu);
            CrmActivityCleanup(v13);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
          }
        }
      }
    }
    else
    {
      v14 = -1073741801;
    }
    v8 = v21;
  }
  else
  {
    v14 = -1073741811;
  }
  if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 1) != 0 && (qword_1800DC268 & 1) == qword_1800DC268 )
  {
    v27 = 16LL;
    v26 = &Uuid;
    v22 = *(_DWORD *)(a2 + 24);
    v28 = &v22;
    v30 = a2 + 72;
    v20 = *(unsigned __int8 *)(a2 + 73);
    v29 = 4LL;
    v32 = 0;
    LODWORD(v23) = a3;
    v34 = 4LL;
    v31 = 4 * v20 + 8;
    v33 = &v23;
    v35 = v24;
    v24[0] = v6;
    v36 = 8LL;
    tlgCreate1Sz_wchar_t(v37, v8);
    LODWORD(v21) = v14;
    v38 = &v21;
    v39 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC250,
      (unsigned __int8 *)dword_1800BD470,
      0LL,
      0LL,
      9u,
      &v25);
  }
  if ( v14 < 0 )
    return (unsigned int)v14;
  return v5;
}
