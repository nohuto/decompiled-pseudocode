/*
 * XREFs of sub_14098BC1C @ 0x14098BC1C
 * Callers:
 *     sub_140845880 @ 0x140845880 (sub_140845880.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     sub_1405DD674 @ 0x1405DD674 (sub_1405DD674.c)
 *     sub_14098C2AC @ 0x14098C2AC (sub_14098C2AC.c)
 *     sub_14098C45C @ 0x14098C45C (sub_14098C45C.c)
 */

__int64 __fastcall sub_14098BC1C(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  char v3; // bp
  int v4; // r14d
  __int64 v5; // rcx

  v1 = (volatile signed __int64 *)(a1 + 136);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  v3 = *(_BYTE *)(a1 + 145);
  v4 = *(_DWORD *)(a1 + 148);
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  sub_1402AFC00((ULONG_PTR)v1);
  if ( *(_BYTE *)(a1 + 144) != v3 )
  {
    sub_1405DD674(v5, v3);
    if ( v3 )
      sub_14098C45C(a1);
    else
      sub_14098C2AC(a1, 0LL);
  }
  *(_BYTE *)(a1 + 144) = v3;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
  if ( *(_DWORD *)(a1 + 148) == v4 )
  {
    *(_BYTE *)(a1 + 152) = 1;
    sub_14036AAC4(a1 + 160, DelayedWorkQueue);
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  sub_1402AFC00((ULONG_PTR)v1);
  return sub_1402D6004(8u);
}
