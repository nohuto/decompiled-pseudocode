/*
 * XREFs of sub_1407A2E10 @ 0x1407A2E10
 * Callers:
 *     sub_1407A2CB0 @ 0x1407A2CB0 (sub_1407A2CB0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402F3584 @ 0x1402F3584 (sub_1402F3584.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     KeRaiseUserException @ 0x14056E010 (KeRaiseUserException.c)
 *     sub_1407A2B78 @ 0x1407A2B78 (sub_1407A2B78.c)
 *     sub_1407A2FA0 @ 0x1407A2FA0 (sub_1407A2FA0.c)
 *     SeCloseObjectAuditAlarm @ 0x1409CAD20 (SeCloseObjectAuditAlarm.c)
 *     sub_1409E3B48 @ 0x1409E3B48 (sub_1409E3B48.c)
 */

__int64 __fastcall sub_1407A2E10(
        __int64 a1,
        volatile signed __int64 *a2,
        struct _KPROCESS *a3,
        ULONG_PTR a4,
        char a5,
        char a6)
{
  unsigned __int64 v7; // r14
  unsigned __int64 v11; // r8
  char v12; // r13
  __int64 v13; // r9
  __int64 v14; // r15
  int v15; // eax
  int v16; // ebx
  __int64 v17; // r8
  __int64 v19; // rdx
  signed __int32 v20[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-88h]
  _OWORD v22[3]; // [rsp+38h] [rbp-80h] BYREF

  v7 = (*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  memset(v22, 0, sizeof(v22));
  v11 = v7 + 48;
  v12 = 0;
  v13 = qword_140D07490[(unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(v7 + 24) ^ (unsigned __int64)BYTE1(v7)];
  v21 = v13;
  if ( *(_QWORD *)(v13 + 168) )
  {
    if ( *((struct _KPROCESS **)KeGetCurrentThread() + 23) != a3 )
    {
      sub_14030D5C0((ULONG_PTR)a3, 0LL, (__int64)v22, v13);
      v12 = 1;
    }
    if ( !(unsigned __int8)sub_14042A5E0(a3, v7 + 48) )
    {
      _InterlockedExchangeAdd64(a2, 1uLL);
      _InterlockedOr(v20, 0);
      if ( *(_QWORD *)(a1 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v12 )
        sub_1402D0930((__int64)v22, 0LL);
      return 3221226037LL;
    }
    v13 = v21;
    v11 = v7 + 48;
  }
  v14 = *(__int64 *)a2 >> 17;
  if ( (v14 & 1) != 0 && !a6 )
  {
    if ( !a5 )
      KeBugCheckEx(0x93u, a4, 0LL, 0LL, 0LL);
    _InterlockedExchangeAdd64(a2, 1uLL);
    _InterlockedOr(v20, 0);
    if ( *(_QWORD *)(a1 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
    KeLeaveCriticalRegion();
    if ( v12 )
      sub_1402D0930((__int64)v22, 0LL);
    if ( *((_BYTE *)KeGetCurrentThread() + 586) != 1
      && ((NtGlobalFlag & 0x400000) != 0
       || *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1400LL)
       || *(_QWORD *)(a1 + 96)) )
    {
      return KeRaiseUserException(0xC0000235);
    }
    return 3221226037LL;
  }
  if ( (xmmword_140D06910 & 0x40) != 0 )
  {
    v19 = a4;
    if ( a3 == PsInitialSystemProcess )
      v19 = a4 | 0x80000000;
    sub_1409E3B48(4385LL, v19, v11, v13);
  }
  if ( a6 )
    v15 = sub_1402F3584(a1, a2);
  else
    v15 = sub_1407A2B78(a1, a4, a2);
  v16 = v15;
  KeLeaveCriticalRegion();
  if ( (v14 & 4) != 0 )
  {
    LOBYTE(v17) = 1;
    SeCloseObjectAuditAlarm(v7 + 48, a4 & 0xFFFFFFFFFFFFFFFCuLL, v17);
  }
  sub_1407A2FA0((ULONG_PTR)a3);
  if ( v12 )
    sub_1402D0930((__int64)v22, 0LL);
  if ( v16 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)v7, -v16);
  ObfDereferenceObjectWithTag((PVOID)(v7 + 48), 0x6E48624Fu);
  return 0LL;
}
