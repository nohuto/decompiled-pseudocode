/*
 * XREFs of sub_14074DC30 @ 0x14074DC30
 * Callers:
 *     sub_140665B68 @ 0x140665B68 (sub_140665B68.c)
 *     sub_14074DB0C @ 0x14074DB0C (sub_14074DB0C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407A59D8 @ 0x1407A59D8 (sub_1407A59D8.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 */

__int64 __fastcall sub_14074DC30(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  _QWORD **v2; // rsi
  _QWORD *v3; // rax
  _QWORD *v5; // rcx
  ULONG_PTR v6; // rbp

  v1 = (volatile signed __int64 *)(a1 + 328);
  v2 = (_QWORD **)(a1 + 336);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v5 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v5;
    v6 = (ULONG_PTR)(v3 + 6);
    v5[1] = v2;
    v3[1] = v3;
    *v3 = v3;
    if ( sub_1407A7F84((ULONG_PTR)(v3 + 6)) )
    {
      if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1);
      sub_1402AFC00((ULONG_PTR)v1);
      if ( (unsigned __int8)sub_1407A59D8(v6) )
        sub_1407A5A54(v6);
      sub_1407A5A54(v6);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
    }
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  return sub_1402AFC00((ULONG_PTR)v1);
}
