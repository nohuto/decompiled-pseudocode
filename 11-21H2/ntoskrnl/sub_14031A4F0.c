/*
 * XREFs of sub_14031A4F0 @ 0x14031A4F0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     sub_1403198A0 @ 0x1403198A0 (sub_1403198A0.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_14096A278 @ 0x14096A278 (sub_14096A278.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_140584030 @ 0x140584030 (sub_140584030.c)
 *     sub_14096A384 @ 0x14096A384 (sub_14096A384.c)
 */

__int64 __fastcall sub_14031A4F0(__int64 a1, int a2)
{
  unsigned __int64 v3; // rdx
  __int64 v5; // r8
  struct _MDL *v6; // rdi
  unsigned __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    sub_14020D8D0(*(_QWORD *)(a1 + 104), v3);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  sub_1402B0CE0(*(_QWORD *)(a1 + 104), *(_BYTE *)(a1 + 76));
  v6 = *(struct _MDL **)(a1 + 64);
  if ( (*(_BYTE *)(a1 + 72) & 0x40) == 0 && (dword_140D06994 & 1) != 0 )
    sub_140584030(*(_QWORD *)(a1 + 64));
  if ( a2 < 0 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 0x40) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( v8 > *(_QWORD *)a1 )
      {
        sub_14096A384(*(_QWORD *)a1, v8 - *(_QWORD *)a1, v5, *(unsigned int *)(a1 + 96));
        v8 = *(_QWORD *)(a1 + 8);
      }
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 1280LL),
        -(__int64)((*(_QWORD *)(a1 + 16) - v8) >> 12));
    }
    else
    {
      MmUnlockPages(v6);
    }
    ++dword_140C52A94;
  }
  return (unsigned int)a2;
}
