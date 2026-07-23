/*
 * XREFs of sub_140966A1C @ 0x140966A1C
 * Callers:
 *     sub_1406A61B0 @ 0x1406A61B0 (sub_1406A61B0.c)
 *     sub_1407AD040 @ 0x1407AD040 (sub_1407AD040.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140966C34 @ 0x140966C34 (sub_140966C34.c)
 */

__int64 __fastcall sub_140966A1C(__int64 a1)
{
  __int64 v2; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2A110, 0LL);
  v2 = sub_140966C34(*(unsigned int *)(a1 + 264));
  if ( v2 )
  {
    *(_DWORD *)(v2 + 44) = 0;
    *(_QWORD *)(v2 + 32) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C2A110);
  return sub_1402AFC00((ULONG_PTR)&qword_140C2A110);
}
