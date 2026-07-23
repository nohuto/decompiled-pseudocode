/*
 * XREFs of sub_1406A6378 @ 0x1406A6378
 * Callers:
 *     sub_1406A629C @ 0x1406A629C (sub_1406A629C.c)
 *     sub_1406A6448 @ 0x1406A6448 (sub_1406A6448.c)
 *     sub_1406A6520 @ 0x1406A6520 (sub_1406A6520.c)
 *     sub_14085C5A8 @ 0x14085C5A8 (sub_14085C5A8.c)
 *     sub_140966C80 @ 0x140966C80 (sub_140966C80.c)
 *     sub_140AFD7A4 @ 0x140AFD7A4 (sub_140AFD7A4.c)
 *     sub_140AFE184 @ 0x140AFE184 (sub_140AFE184.c)
 *     sub_140B2E74C @ 0x140B2E74C (sub_140B2E74C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406A6AF8 @ 0x1406A6AF8 (sub_1406A6AF8.c)
 */

__int64 __fastcall sub_1406A6378(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v3; // esi
  __int64 result; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  char v8; // si

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  LOBYTE(a2) = 1;
  result = sub_1406A6AF8(a1, a2);
  v5 = result;
  if ( result )
  {
    v6 = (_QWORD *)(result + 24);
    if ( v3 )
    {
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3CB18, 0LL);
      v7 = (_QWORD *)qword_140D3CEB0;
      if ( *(__int64 **)qword_140D3CEB0 != &qword_140D3CEA8 )
        __fastfail(3u);
      *v6 = &qword_140D3CEA8;
      v6[1] = v7;
      *v7 = v6;
      qword_140D3CEB0 = (__int64)v6;
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D3CB18, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v8 & 2) != 0 && (v8 & 4) == 0 )
        ExfTryToWakePushLock(&qword_140D3CB18);
      sub_1402AFC00((ULONG_PTR)&qword_140D3CB18);
      sub_1402F9540((__int64)CurrentThread);
      return v5;
    }
    else
    {
      *(_QWORD *)(result + 32) = result + 24;
      *v6 = v6;
    }
  }
  return result;
}
