/*
 * XREFs of CrmSrvActivityFree @ 0x18002CD38
 * Callers:
 *     CrmRpcSrvActivityFree @ 0x18002CD20 (CrmRpcSrvActivityFree.c)
 *     CrmpInProcActivityFree @ 0x18004AE20 (CrmpInProcActivityFree.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmActivityCleanup @ 0x18002CF70 (CrmActivityCleanup.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

char __fastcall CrmSrvActivityFree(__int64 a1, __int64 a2)
{
  int v4; // esi
  volatile signed __int64 *i; // rbx
  volatile signed __int64 v6; // rcx
  volatile signed __int64 **v7; // rax
  signed __int64 v8; // rax
  bool v9; // cc
  signed __int64 v10; // rax
  signed __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ebx
  int v14; // eax
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+58h] [rbp-B0h] BYREF
  UUID *v23; // [rsp+78h] [rbp-90h]
  __int64 v24; // [rsp+80h] [rbp-88h]
  int *v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  __int64 v27; // [rsp+98h] [rbp-70h]
  int v28; // [rsp+A0h] [rbp-68h]
  int v29; // [rsp+A4h] [rbp-64h]
  int *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  __int64 *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  int *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+D8h] [rbp-30h] BYREF
  UUID *v37; // [rsp+F8h] [rbp-10h]
  __int64 v38; // [rsp+100h] [rbp-8h]
  __int64 *v39; // [rsp+108h] [rbp+0h]
  __int64 v40; // [rsp+110h] [rbp+8h]
  int *v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+128h] [rbp+20h] BYREF
  UUID *v44; // [rsp+148h] [rbp+40h]
  __int64 v45; // [rsp+150h] [rbp+48h]

  v4 = 1303;
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 1) != 0 && (qword_1800DB268 & 1) == qword_1800DB268 )
  {
    v44 = &Uuid;
    v45 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB250,
      (unsigned __int8 *)dword_1800BE84A,
      0LL,
      0LL,
      3u,
      &v43);
  }
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  for ( i = *(volatile signed __int64 **)(a2 + 56); ; i = (volatile signed __int64 *)*i )
  {
    if ( i == (volatile signed __int64 *)(a2 + 56) )
      goto LABEL_31;
    if ( *((_QWORD *)i + 7) == a1 )
      break;
  }
  if ( _InterlockedIncrement64(i + 2) <= 1 )
    __fastfail(0xEu);
  if ( !i )
  {
LABEL_31:
    *(_DWORD *)(a2 + 8) = 0;
    v13 = -1073741811;
    LOBYTE(v12) = RtlReleaseSRWLockExclusive(a2);
    goto LABEL_17;
  }
  v6 = *i;
  v4 = *((_DWORD *)i + 16);
  if ( *(volatile signed __int64 **)(*i + 8) != i || (v7 = (volatile signed __int64 **)*((_QWORD *)i + 1), *v7 != i) )
    __fastfail(3u);
  *v7 = (volatile signed __int64 *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  *((_QWORD *)i + 1) = i;
  *i = (volatile signed __int64)i;
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 2) != 0 && (qword_1800DB268 & 2) == qword_1800DB268 )
  {
    v38 = 16LL;
    v37 = &Uuid;
    v20 = *(_QWORD *)(a2 + 16);
    v40 = 8LL;
    v39 = &v20;
    v16 = *((_DWORD *)i + 17);
    v41 = &v16;
    v42 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB250,
      (unsigned __int8 *)dword_1800BED1E,
      0LL,
      0LL,
      5u,
      &v36);
  }
  v8 = _InterlockedExchangeAdd64(i + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v9 = v8 <= 1;
  v10 = v8 - 1;
  if ( v9 )
  {
    if ( v10 )
      __fastfail(0xEu);
    CrmActivityCleanup(i);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)i);
  }
  *(_DWORD *)(a2 + 8) = 0;
  RtlReleaseSRWLockExclusive(a2);
  v11 = _InterlockedExchangeAdd64(i + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v9 = v11 <= 1;
  v12 = v11 - 1;
  if ( v9 )
  {
    if ( v12 )
      __fastfail(0xEu);
    CrmActivityCleanup(i);
    LOBYTE(v12) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)i);
  }
  v13 = 0;
LABEL_17:
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 1) != 0 )
  {
    v12 = qword_1800DB268 & 1;
    if ( v12 == qword_1800DB268 )
    {
      v24 = 16LL;
      v23 = &Uuid;
      v17 = *(_DWORD *)(a2 + 24);
      v33 = 8LL;
      v25 = &v17;
      v26 = 4LL;
      v27 = a2 + 72;
      v14 = *(unsigned __int8 *)(a2 + 73);
      v29 = 0;
      v18 = v4;
      v31 = 4LL;
      v21 = a1;
      v28 = 4 * v14 + 8;
      v30 = &v18;
      v32 = &v21;
      v34 = &v19;
      v19 = v13;
      v35 = 4LL;
      LOBYTE(v12) = tlgWriteTransfer_EventWriteTransfer(
                      (__int64)&dword_1800DB250,
                      (unsigned __int8 *)dword_1800BE3BD,
                      0LL,
                      0LL,
                      8u,
                      &v22);
    }
  }
  return v12;
}
