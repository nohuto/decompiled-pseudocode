/*
 * XREFs of sub_14068D2B8 @ 0x14068D2B8
 * Callers:
 *     sub_14068C544 @ 0x14068C544 (sub_14068C544.c)
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_14083D244 @ 0x14083D244 (sub_14083D244.c)
 *     sub_14091A928 @ 0x14091A928 (sub_14091A928.c)
 *     sub_14091AB6C @ 0x14091AB6C (sub_14091AB6C.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140924648 @ 0x140924648 (sub_140924648.c)
 */

__int64 __fastcall sub_14068D2B8(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    return (unsigned int)sub_140924648(a1, a2, a5);
  }
  else
  {
    v5 = 0;
    v6 = (unsigned int)a2;
    LOBYTE(a2) = a3 == 0;
    v7 = sub_14042A5E0(v6, a2);
    if ( v7 )
      *a5 = v7;
    else
      return (unsigned int)-1073741670;
  }
  return v5;
}
