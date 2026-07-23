/*
 * XREFs of MiStopPageAccessor @ 0x140368A8C
 * Callers:
 *     MiPageListCollision @ 0x140368A4C (MiPageListCollision.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403C5CC8 (MiInitializeNewUltraHugeContext.c)
 *     MiDecrementHugeContext @ 0x1403D6838 (MiDecrementHugeContext.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiLocatePageCollisionNodeByPfn @ 0x14064F8D4 (MiLocatePageCollisionNodeByPfn.c)
 */

__int64 __fastcall MiStopPageAccessor(ULONG_PTR a1, int a2)
{
  ULONG_PTR v3; // rdi
  __int64 PageCollisionNodeByPfn; // r8

  if ( a2 )
  {
    v3 = 0LL;
    PageCollisionNodeByPfn = MiLocatePageCollisionNodeByPfn(a1);
    *(_QWORD *)a1 &= ~0x800000000000000uLL;
  }
  else
  {
    v3 = a1;
    *(_BYTE *)(a1 + 34) &= ~8u;
    PageCollisionNodeByPfn = *(_QWORD *)(a1 + 16);
  }
  *(_QWORD *)(PageCollisionNodeByPfn + 24) = 0LL;
  *(_BYTE *)(PageCollisionNodeByPfn + 70) = 1;
  if ( v3 )
    *(_QWORD *)(v3 + 16) = MiSwizzleInvalidPte(128LL);
  return PageCollisionNodeByPfn;
}
