/*
 * XREFs of sub_1406AC404 @ 0x1406AC404
 * Callers:
 *     sub_1406A6448 @ 0x1406A6448 (sub_1406A6448.c)
 *     RtlDestroyAtomTable @ 0x1406AB410 (RtlDestroyAtomTable.c)
 *     sub_14070BCA4 @ 0x14070BCA4 (sub_14070BCA4.c)
 *     sub_140966C80 @ 0x140966C80 (sub_140966C80.c)
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall sub_1406AC404(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3CB18, 0LL);
  v3 = (_QWORD *)(a1 + 24);
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3CB18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D3CB18);
  sub_1402AFC00((ULONG_PTR)&qword_140D3CB18);
  result = sub_1402AC800((__int64)CurrentThread);
  v3[1] = v3;
  *v3 = v3;
  return result;
}
