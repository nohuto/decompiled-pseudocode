/*
 * XREFs of sub_14081F6E0 @ 0x14081F6E0
 * Callers:
 *     sub_14081F570 @ 0x14081F570 (sub_14081F570.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_140820308 @ 0x140820308 (sub_140820308.c)
 *     sub_14082052C @ 0x14082052C (sub_14082052C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14081F6E0(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  int v4; // ecx
  void *v5; // rcx

  sub_14082052C();
  ExAcquireFastMutex(&stru_140C461A0);
  v2 = *(void **)(a1 + 416);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 416) = 0LL;
  }
  v3 = *(void **)(a1 + 424);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  KeReleaseGuardedMutex(&stru_140C461A0);
  v4 = *(_DWORD *)(a1 + 396);
  if ( (v4 & 0x10001) == 1 )
  {
    if ( (v4 & 0x40) != 0 && *(_QWORD *)(a1 + 544) )
      sub_140820308(4LL, *(_QWORD *)(a1 + 32));
  }
  else
  {
    sub_14076FBEC(a1, 192);
    v5 = *(void **)(a1 + 544);
    if ( v5 )
    {
      ExFreePoolWithTag(v5, 0);
      *(_QWORD *)(a1 + 544) = 0LL;
    }
  }
}
