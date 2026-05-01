/*
 * XREFs of CrmActivityUpdate @ 0x180038DE4
 * Callers:
 *     CrmActivityListenerCallback @ 0x18002A220 (CrmActivityListenerCallback.c)
 * Callees:
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x180007154 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     CrmRegistrationReadyQueueRemove @ 0x1800138C0 (CrmRegistrationReadyQueueRemove.c)
 *     CrmRegistrationReadyQueueAdd @ 0x18002A040 (CrmRegistrationReadyQueueAdd.c)
 *     CrmLogActivityUpdate @ 0x18002A240 (CrmLogActivityUpdate.c)
 *     CrmActivityTimeSpentUpdate @ 0x18002A900 (CrmActivityTimeSpentUpdate.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

int __fastcall CrmActivityUpdate(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  int v8; // r15d
  int v9; // eax
  int v10; // ebp
  int v11; // r12d
  int v12; // r14d
  int v13; // ebx
  int v14; // r15d
  int v15; // r14d
  int v16; // r13d
  int v17; // ebp
  int v18; // esi
  int v19; // ebx
  int v21; // [rsp+80h] [rbp-68h]
  int v22; // [rsp+84h] [rbp-64h]
  __int64 v23; // [rsp+88h] [rbp-60h]
  __int64 v24; // [rsp+90h] [rbp-58h]
  __int64 v25; // [rsp+98h] [rbp-50h]
  __int64 v26; // [rsp+A0h] [rbp-48h]
  __int64 v27; // [rsp+A8h] [rbp-40h]
  int v28; // [rsp+F0h] [rbp+8h]
  int v29; // [rsp+F8h] [rbp+10h]

  v4 = a1 + 80;
  v27 = *(_QWORD *)(a1 + 56);
  v22 = *(_DWORD *)(a1 + 68);
  v23 = 0LL;
  v24 = 0LL;
  v25 = a1 + 80;
  v26 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
  RtlAcquireSRWLockExclusive(a1 + 80);
  *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
  v8 = *(_DWORD *)(a2 + 48);
  v21 = v8;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(a2 + 40))(0LL, a4);
  v29 = v9;
  v10 = v8 != 0;
  v28 = v10;
  v11 = v9 != 0;
  v12 = v8 == 1;
  v13 = v9 == 1;
  if ( v11 == v10 && v13 == v12 )
  {
    v14 = *(_DWORD *)(a1 + 100);
    v15 = 0;
    v16 = *(_DWORD *)(a1 + 104);
    v17 = v14;
    v18 = v16;
    goto LABEL_30;
  }
  *(_DWORD *)(a2 + 48) = v9;
  RtlAcquireSRWLockShared(*(_QWORD *)(a1 + 48));
  if ( v11 != v10 && (*(_DWORD *)(a1 + 152) || *(_DWORD *)(a1 + 156)) )
    CrmRegistrationNotifyWindowClosedReasonChange(*(_QWORD *)(a1 + 48), a1);
  RtlReleaseSRWLockShared(*(_QWORD *)(a1 + 48));
  v14 = *(_DWORD *)(a1 + 100);
  v17 = v14;
  v16 = *(_DWORD *)(a1 + 104);
  if ( v11 != v28 )
  {
    v17 = v14 + 1;
    if ( !v11 )
      v17 = v14 - 1;
    *(_DWORD *)(a1 + 100) = v17;
  }
  v18 = v16;
  if ( v13 != v12 )
  {
    v18 = v16 + 1;
    if ( !v13 )
      v18 = v16 - 1;
    *(_DWORD *)(a1 + 104) = v18;
  }
  v15 = 0;
  if ( v17 == *(_DWORD *)(a1 + 96) || v14 == *(_DWORD *)(a1 + 96) )
  {
    v24 = *(_QWORD *)(a1 + 136);
    v23 = MEMORY[0x7FFE0008];
    *(_QWORD *)(a1 + 136) = MEMORY[0x7FFE0008];
    if ( v17 != *(_DWORD *)(a1 + 96) )
    {
      *(_QWORD *)(a1 + 168) = -1LL;
      *(_QWORD *)(a1 + 176) = -1LL;
      v19 = *(_DWORD *)(a1 + 124);
      v15 = (v19 == 0) | (unsigned int)CrmRegistrationReadyQueueRemove(a1, 1, 1u, 0);
      goto LABEL_22;
    }
    if ( v18 )
    {
      v15 = CrmRegistrationReadyQueueRemove(a1, 0, 4u, 0);
LABEL_22:
      if ( v15 )
      {
        *(_QWORD *)(a1 + 168) = -1LL;
        *(_QWORD *)(a1 + 176) = -1LL;
        CrmActivityTimeSpentUpdate(a1, 1);
      }
      goto LABEL_30;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      RtlQueryUnbiasedInterruptTime(a1 + 168);
      *(_QWORD *)(a1 + 176) = MEMORY[0x7FFE0008];
      CrmActivityTimeSpentUpdate(a1, 0);
      if ( *(_DWORD *)(a1 + 120) )
      {
        if ( *(_DWORD *)(a1 + 144) || *(_DWORD *)(a1 + 148) )
          CrmRegistrationReadyQueueAdd(a1);
      }
      else
      {
        CrmRegistrationReadyQueueRemove(a1, 1, 0, 0);
      }
    }
  }
LABEL_30:
  *(_DWORD *)(v25 + 8) = 0;
  RtlReleaseSRWLockExclusive(v25);
  return CrmLogActivityUpdate(v27, v22, v26, a3, v21, v29, v28, v11, v14, v17, v16, v18, v15, v24, v23);
}
