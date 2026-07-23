/*
 * XREFs of MiMakeHyperPteDemandZero @ 0x140349844
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x140277940 (MiMakeHyperRangeAccessible.c)
 *     MiFillHyperPtes @ 0x1403496C0 (MiFillHyperPtes.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 */

void __fastcall MiMakeHyperPteDemandZero(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // rdx

  if ( *(_DWORD *)a3 )
  {
    v3 = MiSwizzleInvalidPte(128LL);
    *v4 = v3;
  }
  ++*(_QWORD *)(a3 + 8);
}
