/*
 * XREFs of sub_14037E8DC @ 0x14037E8DC
 * Callers:
 *     sub_14037FDA0 @ 0x14037FDA0 (sub_14037FDA0.c)
 * Callees:
 *     sub_1403815D4 @ 0x1403815D4 (sub_1403815D4.c)
 */

__int64 __fastcall sub_14037E8DC(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // r9d

  v2 = sub_1403815D4(a1 + 192);
  v3 = 0;
  *(_QWORD *)(a1 + 760) = v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(a1 + 768) = (*(_DWORD *)((*(_QWORD *)(a1 + 760) & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456))
                          + ((unsigned int)*(_QWORD *)(a1 + 760)
                           - *(_DWORD *)(a1 + 472)
                           - (*(_QWORD *)(a1 + 760) & 0xFFFFF000))
                          / *(_DWORD *)(a1 + 464);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
