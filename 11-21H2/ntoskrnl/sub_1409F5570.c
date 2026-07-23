/*
 * XREFs of sub_1409F5570 @ 0x1409F5570
 * Callers:
 *     sub_1409F5378 @ 0x1409F5378 (sub_1409F5378.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_1402E10FC @ 0x1402E10FC (sub_1402E10FC.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140758DB8 @ 0x140758DB8 (sub_140758DB8.c)
 */

__int64 __fastcall sub_1409F5570(int *a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // r13
  _QWORD *i; // rsi
  struct _KTHREAD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 ProcessServerSilo; // rax
  __int64 v13; // rbx
  __int64 v14; // r9
  int v16; // [rsp+20h] [rbp-78h] BYREF
  _OWORD v17[3]; // [rsp+28h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16 = 0;
  --*((_WORD *)CurrentThread + 242);
  v7 = a2 + 408;
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  if ( sub_1402E10FC(a2, *a1, &v16) )
  {
    for ( i = *(_QWORD **)(a2 + 56); i != (_QWORD *)(a2 + 56); i = (_QWORD *)*i )
    {
      if ( a3 == 2 )
      {
        v9 = KeGetCurrentThread();
        v10 = (__int64)(i - 2);
        --*((_WORD *)v9 + 242);
        ExAcquirePushLockExclusiveEx(i[2] + 408LL, 0LL);
        *(_QWORD *)(i[2] + 416LL) = KeGetCurrentThread();
      }
      else
      {
        v10 = (__int64)i;
      }
      if ( (*(_BYTE *)(v10 + 98) & 1) != 0 )
      {
        sub_140758DB8((__int64)a1, 0, v10);
      }
      else if ( sub_140347810((struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v10 + 80) + 1112LL)) )
      {
        v11 = *(_QWORD *)(v10 + 80);
        memset(v17, 0, sizeof(v17));
        ProcessServerSilo = PsGetProcessServerSilo(v11);
        v13 = PsAttachSiloToCurrentThread(ProcessServerSilo);
        sub_14030D5C0(*(_QWORD *)(v10 + 80), 0LL, (__int64)v17, v14);
        sub_140758DB8((__int64)a1, 1, v10);
        sub_1402D0930((__int64)v17, 0LL);
        PsDetachSiloFromCurrentThread(v13);
        sub_1402AD030((struct _EX_RUNDOWN_REF *)(*(_QWORD *)(v10 + 80) + 1112LL));
      }
      if ( a3 == 2 )
      {
        *(_QWORD *)(*(_QWORD *)(v10 + 32) + 416LL) = 0LL;
        ExReleasePushLockEx(*(_QWORD *)(v10 + 32) + 408LL, 0LL);
        sub_1402F9540((__int64)KeGetCurrentThread());
      }
    }
  }
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx(v7, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return 0LL;
}
