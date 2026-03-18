/*
 * XREFs of MiIsPdeOrAboveAccessible @ 0x14023A0E4
 * Callers:
 *     MiGetNextPageTablePte @ 0x14031B510 (MiGetNextPageTablePte.c)
 *     MiResolvePageTablePage @ 0x14031D740 (MiResolvePageTablePage.c)
 *     MiReplacePageTablePage @ 0x14036CF60 (MiReplacePageTablePage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiIsPdeOrAboveAccessible(__int64 a1)
{
  unsigned __int64 v1; // rax
  _BOOL8 result; // rax
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rdx

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  result = 1;
  if ( (v1 & 1) == 0 && v1 && (v1 & 0x400) == 0 )
  {
    if ( (v1 & 0x800) != 0 )
    {
      v3 = ((v1 >> 5) & 0x1F) == 24;
    }
    else
    {
      v4 = MiSwizzleInvalidPte(512LL, v1);
      v3 = v5 == v4;
    }
    if ( v3 )
      return 0;
  }
  return result;
}
