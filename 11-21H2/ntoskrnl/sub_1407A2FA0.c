/*
 * XREFs of sub_1407A2FA0 @ 0x1407A2FA0
 * Callers:
 *     sub_14066915C @ 0x14066915C (sub_14066915C.c)
 *     sub_14066B204 @ 0x14066B204 (sub_14066B204.c)
 *     sub_1406C2CA0 @ 0x1406C2CA0 (sub_1406C2CA0.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     sub_1407A2E10 @ 0x1407A2E10 (sub_1407A2E10.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407A3190 @ 0x1407A3190 (sub_1407A3190.c)
 *     sub_1407A33E8 @ 0x1407A33E8 (sub_1407A33E8.c)
 */

void __fastcall sub_1407A2FA0(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rbp
  signed __int64 v6; // rdi
  char v7; // r12
  __int64 v8; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 ProcessServerSilo; // rax
  __int64 v11; // r9
  int v12; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v13[3]; // [rsp+38h] [rbp-70h] BYREF

  v12 = 0;
  v4 = (unsigned __int8)dword_140D06C0C ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2);
  memset(v13, 0, sizeof(v13));
  v5 = qword_140D07490[v4];
  if ( (*(_BYTE *)(v5 + 66) & 0x10) != 0 || (*(_BYTE *)(a2 + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(a2 + 16, 0LL);
    v6 = *(_QWORD *)(a2 + 8);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) && (*(_BYTE *)(a2 + 27) & 8) != 0 )
      *(_QWORD *)(a2 - byte_140C25440[*(_BYTE *)(a2 + 26) & 0x1F]) = 0LL;
    if ( (*(_BYTE *)(v5 + 66) & 0x10) != 0 )
      sub_1407A33E8(a2, BugCheckParameter1, &v12);
    ExReleasePushLockEx(a2 + 16, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  if ( *(_QWORD *)(v5 + 128) )
  {
    v7 = 0;
    v8 = 0LL;
    if ( *((_QWORD *)KeGetCurrentThread() + 23) != BugCheckParameter1 )
    {
      v7 = 1;
      ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
      v8 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v13, v11);
    }
    sub_14042A5E0(BugCheckParameter1, a2 + 48);
    if ( v7 )
    {
      sub_1402D0930((__int64)v13, 0LL);
      PsDetachSiloFromCurrentThread(v8);
    }
  }
  if ( v6 == 1 )
    sub_1407A3190(a2);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 48), 0xFFFFFFFF);
}
