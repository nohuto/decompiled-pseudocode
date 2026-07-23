/*
 * XREFs of sub_1407F7CC4 @ 0x1407F7CC4
 * Callers:
 *     sub_1407F5914 @ 0x1407F5914 (sub_1407F5914.c)
 *     sub_1407F7C68 @ 0x1407F7C68 (sub_1407F7C68.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_1407F7CC4(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2A0C0, 0LL);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  --dword_140C2A0C8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A0C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C2A0C0);
  return sub_1402AFC00((ULONG_PTR)&qword_140C2A0C0);
}
