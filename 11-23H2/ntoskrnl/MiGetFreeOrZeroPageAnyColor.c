/*
 * XREFs of MiGetFreeOrZeroPageAnyColor @ 0x1402E8364
 * Callers:
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 * Callees:
 *     MiDemoteLocalLargePage @ 0x1402E8440 (MiDemoteLocalLargePage.c)
 *     MiRemovePageAnyColor @ 0x1402EBA04 (MiRemovePageAnyColor.c)
 *     MiGetPageSlist @ 0x1403D73B0 (MiGetPageSlist.c)
 */

__int64 __fastcall MiGetFreeOrZeroPageAnyColor(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  unsigned __int64 v6; // r9
  __int64 result; // rax
  unsigned int v8; // edi
  __int64 v9; // r8

  v3 = a3;
  v4 = a2;
  if ( (a3 & 1) != 0 )
    goto LABEL_6;
  v6 = *(int *)(a1 + 16512);
  if ( v6 >= 0x10 )
    v6 = 16LL;
  result = MiDemoteLocalLargePage(a1, a2, a3, (unsigned int)dword_140C65AF8 * v6);
  if ( !result )
  {
LABEL_6:
    result = MiRemovePageAnyColor(a1, v4, v3);
    if ( result == 1 )
      return 1LL;
    if ( result )
      return result;
    if ( (v3 & 0xC00) == 0 )
    {
      result = MiGetPageSlist(a1, v4, v3);
      if ( result )
        return result;
    }
    v8 = v3 & 0xFFFFBFFF;
    if ( (v3 & 0x4000) == 0 )
      v8 = v3;
    v9 = v8;
    LODWORD(v9) = v8 | 0x40000;
    result = MiRemovePageAnyColor(a1, v4, v9);
    if ( result == 1 )
      return 1LL;
    if ( !result )
    {
      if ( (v8 & 0x4000) == 0 )
        return 0LL;
      if ( (v8 & 0xC00) != 0 )
        return 0LL;
      result = MiGetPageSlist(a1, v4, v8);
      if ( !result )
        return 0LL;
    }
  }
  return result;
}
