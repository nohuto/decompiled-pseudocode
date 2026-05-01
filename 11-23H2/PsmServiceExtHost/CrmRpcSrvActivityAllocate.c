/*
 * XREFs of CrmRpcSrvActivityAllocate @ 0x18002C280
 * Callers:
 *     <none>
 * Callees:
 *     CrmActivityDereference @ 0x180004AA8 (CrmActivityDereference.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 *     CrmVerifyActivityId @ 0x18002C56C (CrmVerifyActivityId.c)
 *     CrmActivityInitialize @ 0x18002C64C (CrmActivityInitialize.c)
 *     CrmRegistrationAddActivity @ 0x18002C6E4 (CrmRegistrationAddActivity.c)
 *     CrmActivityCleanup @ 0x18002CF40 (CrmActivityCleanup.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     CrmVerifyPolicyConfiguration @ 0x18004BA3C (CrmVerifyPolicyConfiguration.c)
 *     _tlgCreate1Sz_wchar_t @ 0x18006D39C (_tlgCreate1Sz_wchar_t.c)
 */

__int64 __fastcall CrmRpcSrvActivityAllocate(__int64 *a1, __int64 a2, ULONG a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // rdi
  __int64 v7; // r13
  unsigned int v8; // ebx
  UUID *v12; // r8
  int v13; // esi
  PVOID Heap; // rax
  PVOID v15; // rdi
  _QWORD *v16; // rcx
  signed __int64 v17; // rax
  bool v18; // cc
  signed __int64 v19; // rax
  int v20; // eax
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v24; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v27; // [rsp+70h] [rbp-90h]
  __int64 v28; // [rsp+78h] [rbp-88h]
  _QWORD *v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-70h]
  int v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+9Ch] [rbp-64h]
  __int64 **v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  char v38[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+E0h] [rbp-20h] BYREF
  UUID *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]

  v6 = a5;
  v7 = -1LL;
  v8 = 0;
  v24 = a1;
  v22 = a5;
  v23 = a6;
  v12 = &Uuid;
  if ( (unsigned int)dword_1800DB250 > 5 && tlgKeywordOn((__int64)&dword_1800DB250, 1LL) )
  {
    v42 = v12;
    v43 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB250,
      (unsigned __int8 *)dword_1800BE138,
      0LL,
      0LL,
      3u,
      &v41);
  }
  v13 = CrmVerifyActivityId(*(unsigned int *)(a2 + 24), a3, v12);
  if ( v13 >= 0 )
  {
    v13 = CrmVerifyPolicyConfiguration(a3, a4);
    if ( v13 >= 0 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xF0uLL);
      v15 = Heap;
      if ( Heap )
      {
        CrmActivityInitialize(Heap, a2);
        v13 = CrmActivityStart((struct _WNF_STATE_NAME *)v15, a2, a3, a4, (void *)(a2 + 72));
        if ( v13 < 0 )
        {
          CrmActivityDereference((volatile signed __int64 *)v15);
        }
        else
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)v15 + 2) <= 1 )
            __fastfail(0xEu);
          CrmRegistrationAddActivity(a2, v15);
          v13 = 0;
          v7 = *((_QWORD *)v15 + 7);
          v16 = v23;
          *v24 = v7;
          *v16 = *((_QWORD *)v15 + 18);
          if ( v15 )
          {
            v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 2, 0xFFFFFFFFFFFFFFFFuLL);
            v18 = v17 <= 1;
            v19 = v17 - 1;
            if ( v18 )
            {
              if ( v19 )
                __fastfail(0xEu);
              CrmActivityCleanup(v15);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
            }
          }
        }
      }
      else
      {
        v13 = -1073741801;
      }
      v6 = v22;
    }
  }
  if ( (unsigned int)dword_1800DB250 > 5 && tlgKeywordOn((__int64)&dword_1800DB250, 1LL) )
  {
    v28 = 16LL;
    v27 = &Uuid;
    LODWORD(v23) = *(_DWORD *)(a2 + 24);
    v29 = &v23;
    v31 = a2 + 72;
    v20 = *(unsigned __int8 *)(a2 + 73);
    v30 = 4LL;
    v33 = 0;
    LODWORD(v24) = a3;
    v35 = 4LL;
    v32 = 4 * v20 + 8;
    v34 = &v24;
    v36 = &v25;
    v25 = v7;
    v37 = 8LL;
    tlgCreate1Sz_wchar_t(v38, v6);
    LODWORD(v22) = v13;
    v39 = &v22;
    v40 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB250,
      (unsigned __int8 *)dword_1800BE320,
      0LL,
      0LL,
      9u,
      &v26);
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  return v8;
}
