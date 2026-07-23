/*
 * XREFs of sub_1407A5B90 @ 0x1407A5B90
 * Callers:
 *     sub_1407A5B90 @ 0x1407A5B90 (sub_1407A5B90.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406BE584 @ 0x1406BE584 (sub_1406BE584.c)
 *     sub_1407A5B90 @ 0x1407A5B90 (sub_1407A5B90.c)
 *     sub_1407A5C98 @ 0x1407A5C98 (sub_1407A5C98.c)
 *     sub_1407A8280 @ 0x1407A8280 (sub_1407A8280.c)
 */

__int64 __fastcall sub_1407A5B90(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rcx
  _OWORD v7[27]; // [rsp+20h] [rbp-1C8h] BYREF

  memset(v7, 0, sizeof(v7));
  if ( !*(_DWORD *)(a2 + 4) && a1 != qword_140D06940 )
    sub_1407A5B90(qword_140D06940, a2);
  if ( a1[285] )
  {
    *(_QWORD *)(a2 + 8) = a1;
    *(_QWORD *)(a2 + 24) = v7;
    CurrentThread = KeGetCurrentThread();
    v5 = a1[285] + 432LL;
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockSharedEx(v5, 0LL);
    if ( a1 == qword_140D06940 )
      sub_1406BE584((__int64)a1, v7);
    else
      sub_1407A8280(a1, v7);
    sub_1407A5C98(a2);
    sub_1402935D0(a1[285] + 432LL);
    *(_QWORD *)(a2 + 8) = 0LL;
    ++*(_DWORD *)(a2 + 4);
  }
  return 0LL;
}
