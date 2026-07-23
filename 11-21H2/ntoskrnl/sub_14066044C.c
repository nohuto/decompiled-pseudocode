/*
 * XREFs of sub_14066044C @ 0x14066044C
 * Callers:
 *     sub_1406602DC @ 0x1406602DC (sub_1406602DC.c)
 *     sub_140660388 @ 0x140660388 (sub_140660388.c)
 *     sub_1406617B0 @ 0x1406617B0 (sub_1406617B0.c)
 *     sub_1406EAC14 @ 0x1406EAC14 (sub_1406EAC14.c)
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_14094F860 @ 0x14094F860 (sub_14094F860.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     sub_14074A08C @ 0x14074A08C (sub_14074A08C.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_14077572C @ 0x14077572C (sub_14077572C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14066044C(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  void *v4; // rcx

  sub_14077572C(4LL);
  if ( (*(_DWORD *)(a1 + 396) & 0x10) != 0 )
  {
    sub_14074A08C(a1, 5LL);
    sub_14076FBEC(a1, 1081344LL);
    *(_DWORD *)(a1 + 704) &= 0xFFFE3C03;
    v2 = 0;
    v3 = *(_DWORD *)(a1 + 300);
    *(_DWORD *)(a1 + 296) = 0;
    *(_DWORD *)(a1 + 120) = 0;
    *(_DWORD *)(a1 + 124) = 0;
    if ( (unsigned int)(v3 - 769) > 1 )
    {
      sub_14076FBEC(a1, 2082475264LL);
      if ( *(_WORD *)(a1 + 56) )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
        *(_DWORD *)(a1 + 56) = 0;
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      ExAcquireFastMutex(&stru_140C461A0);
      v4 = *(void **)(a1 + 440);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        *(_QWORD *)(a1 + 440) = 0LL;
        sub_14076FBEC(a1, 512LL);
      }
      KeReleaseGuardedMutex(&stru_140C461A0);
    }
    *(_DWORD *)(a1 + 660) = -1;
    sub_1402DE844(a1, 769);
  }
  else
  {
    v2 = -1073741823;
  }
  sub_140775698(4LL);
  return v2;
}
