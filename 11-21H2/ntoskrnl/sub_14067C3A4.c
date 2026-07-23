/*
 * XREFs of sub_14067C3A4 @ 0x14067C3A4
 * Callers:
 *     sub_14053EE38 @ 0x14053EE38 (sub_14053EE38.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_14067BE48 @ 0x14067BE48 (sub_14067BE48.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14067C3A4(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rax
  __int64 v4; // rbx

  if ( (*(_DWORD *)(a1 + 4112) & 2) != 0 )
  {
    ExAcquireFastMutex(&stru_140C49380);
    v2 = 0;
    if ( dword_140C4E89C )
    {
      v3 = (char *)qword_140C4E8A8 + 24;
      do
      {
        if ( *v3 == a1 )
          break;
        ++v2;
        v3 += 4;
      }
      while ( v2 < dword_140C4E89C );
    }
    v4 = 32LL * v2;
    ExFreePoolWithTag(*(PVOID *)((char *)qword_140C4E8A8 + v4 + 8), 0);
    memmove((char *)qword_140C4E8A8 + v4, (char *)qword_140C4E8A8 + 32 * v2 + 32, 32LL * (--dword_140C4E89C - v2));
    KeReleaseGuardedMutex(&stru_140C49380);
  }
}
