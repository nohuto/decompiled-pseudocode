/*
 * XREFs of sub_140A59724 @ 0x140A59724
 * Callers:
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     sub_140A59810 @ 0x140A59810 (sub_140A59810.c)
 *     sub_140A69A2C @ 0x140A69A2C (sub_140A69A2C.c)
 */

__int64 sub_140A59724()
{
  KPCR *Pcr; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  char v2; // al
  __int64 result; // rax
  unsigned int v4; // esi
  char *v5; // r8
  int v6; // r10d
  unsigned __int8 v7; // r9

  Pcr = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = *((_BYTE *)CurrentPrcb + 141);
  if ( v2 == 1 )
  {
    result = sub_140A69A2C();
  }
  else
  {
    if ( (unsigned __int8)(v2 - 2) > 1u )
      KeBugCheck(0x5Du);
    result = sub_140A59810();
  }
  v4 = 0;
  v5 = (char *)CurrentPrcb + 34392;
  Pcr->SecondLevelCacheSize = 0;
  v6 = 0;
  if ( *((_DWORD *)CurrentPrcb + 8613) )
  {
    while ( (unsigned __int8)*v5 < 2u || (*((_DWORD *)v5 + 2) & 0xFFFFFFFD) != 0 )
    {
LABEL_15:
      v5 += 12;
      if ( (unsigned int)++v6 >= *((_DWORD *)CurrentPrcb + 8613) )
        return result;
    }
    v7 = v5[1];
    if ( v7 == 0xFF )
    {
      v7 = 16;
    }
    else if ( !v7 )
    {
LABEL_11:
      if ( *((unsigned __int16 *)v5 + 1) > (unsigned int)dword_140D050F0 )
        dword_140D050F0 = *((unsigned __int16 *)v5 + 1);
      result = *((unsigned int *)v5 + 1);
      if ( (unsigned int)result > dword_140D05180 )
        dword_140D05180 = *((_DWORD *)v5 + 1);
      goto LABEL_15;
    }
    if ( *((_DWORD *)v5 + 1) / (unsigned int)v7 > v4 )
    {
      v4 = *((_DWORD *)v5 + 1) / (unsigned int)v7;
      Pcr->SecondLevelCacheSize = *((_DWORD *)v5 + 1);
      Pcr->SecondLevelCacheAssociativity = v7;
    }
    goto LABEL_11;
  }
  return result;
}
