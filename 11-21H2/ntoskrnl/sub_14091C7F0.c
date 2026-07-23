/*
 * XREFs of sub_14091C7F0 @ 0x14091C7F0
 * Callers:
 *     sub_14091C3F0 @ 0x14091C3F0 (sub_14091C3F0.c)
 * Callees:
 *     sub_1407181CC @ 0x1407181CC (sub_1407181CC.c)
 *     sub_14091C794 @ 0x14091C794 (sub_14091C794.c)
 *     sub_14091C8B4 @ 0x14091C8B4 (sub_14091C8B4.c)
 *     sub_14091C8FC @ 0x14091C8FC (sub_14091C8FC.c)
 *     sub_14091C964 @ 0x14091C964 (sub_14091C964.c)
 */

__int64 __fastcall sub_14091C7F0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v4; // edi
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax

  if ( a2 < 0x30 )
    return 3222863920LL;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 > a2 )
    return 3222863920LL;
  if ( v4 < 0x30 )
    return 3222863920LL;
  if ( *(_DWORD *)a1 != (unsigned int)sub_1407181CC(a1, v4) )
    return 3222863920LL;
  v5 = *(_DWORD *)(a1 + 12);
  if ( v5 >= 0xB )
    return 3222863920LL;
  if ( v5 > 7 )
  {
    v8 = v5 - 8;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( !v9 )
      {
        result = sub_14091C8B4(a1);
        goto LABEL_25;
      }
      if ( v9 != 1 )
        __fastfail(5u);
    }
    result = sub_14091C964(a1);
LABEL_25:
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  if ( v5 == 7 )
  {
LABEL_12:
    if ( v4 < 0x38 )
      return 3222863920LL;
    v6 = *(unsigned __int16 *)(a1 + 32);
    if ( (v6 & 1) != 0 )
      return 3222863920LL;
    v7 = v6 + 56;
    if ( v7 < 0x38 || v4 < v7 )
      return 3222863920LL;
    return 0LL;
  }
  if ( v5 )
  {
    if ( v5 <= 2 )
    {
      result = sub_14091C794(a1);
    }
    else
    {
      if ( v5 > 5 )
        goto LABEL_12;
      result = sub_14091C8FC(a1);
    }
    goto LABEL_25;
  }
  return 0LL;
}
