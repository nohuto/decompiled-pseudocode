/*
 * XREFs of sub_140AA7018 @ 0x140AA7018
 * Callers:
 *     sub_140A7F070 @ 0x140A7F070 (sub_140A7F070.c)
 *     sub_140A7F0E0 @ 0x140A7F0E0 (sub_140A7F0E0.c)
 * Callees:
 *     sub_140367A44 @ 0x140367A44 (sub_140367A44.c)
 *     sub_140642384 @ 0x140642384 (sub_140642384.c)
 *     sub_1406549F4 @ 0x1406549F4 (sub_1406549F4.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 */

__int64 __fastcall sub_140AA7018(ULONG_PTR a1)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  unsigned int *v4; // rsi
  char v5; // al
  ULONG_PTR v6; // rdx

  result = sub_1406549F4();
  if ( !(_DWORD)result )
  {
    if ( a1 <= 0x7FFFFFFEFFFFLL )
      sub_140A8C924(0xC4u, 0x10uLL, a1, 0LL, 0LL);
    if ( !dword_140C11770 || (result = sub_140642384(a1), !(_DWORD)result) )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (a1 & 0xFFF) == 0 )
      {
        result = sub_140367A44(a1);
        if ( (result & 1) != 0 )
        {
          if ( CurrentIrql > 1u )
            return sub_140A8C924(0xC4u, 0x11uLL, CurrentIrql, (int)result, a1);
        }
        else if ( CurrentIrql > 2u )
        {
          return sub_140A8C924(0xC4u, 0x12uLL, CurrentIrql, (int)result, a1);
        }
        return result;
      }
      if ( (a1 & 0xF) != 0 )
        sub_140A8C924(0xC4u, 0x16uLL, 0x1F5EuLL, a1, 0LL);
      v4 = (unsigned int *)(a1 - 16);
      v5 = *(_BYTE *)(a1 - 16 + 3);
      if ( (v5 & 3) == 0 )
      {
        sub_140A8C924(0xC4u, 0x13uLL, 0x1F68uLL, a1 - 16, *v4);
        v5 = *((_BYTE *)v4 + 3);
      }
      result = v5 & 3;
      if ( (result & 1) != 0 )
      {
        if ( CurrentIrql <= 1u )
          goto LABEL_22;
        v6 = 17LL;
      }
      else
      {
        if ( CurrentIrql <= 2u )
          goto LABEL_22;
        v6 = 18LL;
      }
      result = sub_140A8C924(0xC4u, v6, CurrentIrql, (unsigned int)result, a1);
LABEL_22:
      if ( (*((_BYTE *)v4 + 3) & 2) == 0 )
        return sub_140A8C924(0xC4u, 0x14uLL, 0x1F85uLL, a1 - 16, 0LL);
    }
  }
  return result;
}
