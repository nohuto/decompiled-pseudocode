/*
 * XREFs of sub_140643344 @ 0x140643344
 * Callers:
 *     WheaConfigureErrorSource @ 0x140A55520 (WheaConfigureErrorSource.c)
 * Callees:
 *     sub_1403C08BC @ 0x1403C08BC (sub_1403C08BC.c)
 *     sub_140825964 @ 0x140825964 (sub_140825964.c)
 */

__int64 __fastcall sub_140643344(int a1)
{
  int v1; // edi
  __int64 i; // rbx

  v1 = 0;
  for ( i = qword_140CE1AA8; v1 < dword_140CE1A9C; ++v1 )
  {
    if ( *(_DWORD *)(i + 104) == a1 && *(_BYTE *)(i + 88) && *(_DWORD *)(i + 108) == 1 && (int)sub_140825964(i) >= 0 )
    {
      *(_DWORD *)(i + 108) = 2;
      if ( (int)sub_1403C08BC(i, 1u) >= 0 )
        *(_BYTE *)(i + 88) = 0;
      else
        *(_DWORD *)(i + 108) = 1;
    }
    i = *(_QWORD *)i;
  }
  return 0LL;
}
