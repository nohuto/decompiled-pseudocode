/*
 * XREFs of sub_1403A4B40 @ 0x1403A4B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403A4B40(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 124);
  if ( v1 > 5 )
  {
    switch ( v1 )
    {
      case 8u:
        *(_BYTE *)(a1 + 138) = 1;
        break;
      case 9u:
        *(_BYTE *)(a1 + 139) = 1;
        *(_BYTE *)(a1 + 141) = 1;
        break;
      case 6u:
        *(_BYTE *)(a1 + 136) = 1;
        break;
      case 7u:
        *(_BYTE *)(a1 + 137) = 1;
        break;
      case 0xAu:
        *(_BYTE *)(a1 + 139) = 1;
        *(_BYTE *)(a1 + 141) = 0;
        break;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 140) = 1;
    *(_DWORD *)(a1 + 116) = v1;
  }
  return 0LL;
}
