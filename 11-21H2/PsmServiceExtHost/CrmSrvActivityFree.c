/*
 * XREFs of CrmSrvActivityFree @ 0x180035698
 * Callers:
 *     CrmRpcSrvActivityFree @ 0x180035680 (CrmRpcSrvActivityFree.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmActivityCleanup @ 0x180035860 (CrmActivityCleanup.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

char __fastcall CrmSrvActivityFree(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v4; // rdi
  _QWORD *i; // rbx
  volatile signed __int64 v6; // rax
  int v7; // r14d
  volatile signed __int64 *v8; // rcx
  signed __int64 v9; // rax
  bool v10; // cc
  signed __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  signed __int64 v14; // rax
  int v15; // eax
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+50h] [rbp-B0h] BYREF
  UUID *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  int *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ch] [rbp-64h]
  int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int64 *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  int *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+D0h] [rbp-30h] BYREF
  UUID *v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  __int64 *v40; // [rsp+100h] [rbp+0h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  int *v42; // [rsp+110h] [rbp+10h]
  __int64 v43; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+120h] [rbp+20h] BYREF
  UUID *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]

  if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 1) != 0 && (qword_1800DC268 & 1) == qword_1800DC268 )
  {
    v45 = &Uuid;
    v46 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC250,
      (unsigned __int8 *)dword_1800BD97A,
      0LL,
      0LL,
      3u,
      &v44);
  }
  RtlAcquireSRWLockExclusive(a2);
  *(_DWORD *)(a2 + 8) = GetCurrentThreadId();
  v4 = 0LL;
  for ( i = *(_QWORD **)(a2 + 56); i != (_QWORD *)(a2 + 56); i = (_QWORD *)*i )
  {
    if ( i[6] == a1 )
    {
      v4 = i;
      if ( _InterlockedIncrement64(i + 2) <= 1 )
        __fastfail(0xEu);
      if ( i )
      {
        v6 = *i;
        v7 = *((_DWORD *)i + 14);
        if ( *(_QWORD **)(*i + 8LL) != i || (v8 = (volatile signed __int64 *)i[1], *(_QWORD **)v8 != i) )
          __fastfail(3u);
        *v8 = v6;
        *(_QWORD *)(v6 + 8) = v8;
        i[1] = i;
        *i = i;
        if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 2) != 0 && (qword_1800DC268 & 2) == qword_1800DC268 )
        {
          v39 = 16LL;
          v38 = &Uuid;
          v21 = *(_QWORD *)(a2 + 16);
          v41 = 8LL;
          v40 = &v21;
          v17 = *((_DWORD *)i + 15);
          v42 = &v17;
          v43 = 4LL;
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_1800DC250,
            (unsigned __int8 *)dword_1800BDDEA,
            0LL,
            0LL,
            5u,
            &v37);
        }
        v9 = _InterlockedExchangeAdd64(i + 2, 0xFFFFFFFFFFFFFFFFuLL);
        v10 = v9 <= 1;
        v11 = v9 - 1;
        if ( v10 )
        {
          if ( v11 )
            __fastfail(0xEu);
          CrmActivityCleanup(i);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, i);
        }
        *(_DWORD *)(a2 + 8) = 0;
        RtlReleaseSRWLockExclusive(a2);
        v12 = 0;
        goto LABEL_15;
      }
      break;
    }
  }
  *(_DWORD *)(a2 + 8) = 0;
  LOBYTE(v13) = RtlReleaseSRWLockExclusive(a2);
  v12 = -1073741811;
  v7 = 1101;
  if ( !v4 )
    goto LABEL_18;
LABEL_15:
  v14 = _InterlockedExchangeAdd64(v4 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v10 = v14 <= 1;
  v13 = v14 - 1;
  if ( v10 )
  {
    if ( v13 )
      __fastfail(0xEu);
    CrmActivityCleanup(v4);
    LOBYTE(v13) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v4);
  }
LABEL_18:
  if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 1) != 0 )
  {
    v13 = qword_1800DC268 & 1;
    if ( v13 == qword_1800DC268 )
    {
      v25 = 16LL;
      v24 = &Uuid;
      v18 = *(_DWORD *)(a2 + 24);
      v34 = 8LL;
      v26 = &v18;
      v27 = 4LL;
      v28 = a2 + 72;
      v15 = *(unsigned __int8 *)(a2 + 73);
      v30 = 0;
      v19 = v7;
      v32 = 4LL;
      v22 = a1;
      v29 = 4 * v15 + 8;
      v31 = &v19;
      v33 = &v22;
      v35 = &v20;
      v20 = v12;
      v36 = 4LL;
      LOBYTE(v13) = tlgWriteTransfer_EventWriteTransfer(
                      (__int64)&dword_1800DC250,
                      (unsigned __int8 *)dword_1800BD4ED,
                      0LL,
                      0LL,
                      8u,
                      &v23);
    }
  }
  return v13;
}
