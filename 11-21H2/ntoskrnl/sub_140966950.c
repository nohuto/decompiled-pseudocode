/*
 * XREFs of sub_140966950 @ 0x140966950
 * Callers:
 *     sub_1406666B4 @ 0x1406666B4 (sub_1406666B4.c)
 *     sub_1407A49B4 @ 0x1407A49B4 (sub_1407A49B4.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14096675C @ 0x14096675C (sub_14096675C.c)
 */

__int64 __fastcall sub_140966950(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rcx
  char *v4; // rdx
  char *v5; // rcx
  char **v6; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C2A110, 0LL);
  v2 = sub_14096675C();
  if ( v2 )
  {
    *(_QWORD *)(v2 + 32) = a1;
    *(_DWORD *)(v2 + 40) = *(_DWORD *)(a1 + 264);
    *(_DWORD *)(v2 + 44) = 1;
    v3 = (__int64 *)qword_140C2A128;
    if ( *(__int64 **)qword_140C2A128 != &qword_140C2A120
      || (*(_QWORD *)(v2 + 8) = qword_140C2A128,
          *(_QWORD *)v2 = &qword_140C2A120,
          v4 = (char *)(v2 + 16),
          *v3 = v2,
          qword_140C2A128 = v2,
          v5 = (char *)qword_140C2A150 + 16 * ((*(_DWORD *)(v2 + 40) >> 2) & 0x3FF),
          v6 = (char **)*((_QWORD *)v5 + 1),
          *v6 != v5) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v4 = v5;
    *((_QWORD *)v4 + 1) = v6;
    *v6 = v4;
    *((_QWORD *)v5 + 1) = v4;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C2A110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C2A110);
  return sub_1402AFC00((ULONG_PTR)&qword_140C2A110);
}
