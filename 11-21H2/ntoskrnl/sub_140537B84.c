/*
 * XREFs of sub_140537B84 @ 0x140537B84
 * Callers:
 *     sub_1405361F0 @ 0x1405361F0 (sub_1405361F0.c)
 * Callees:
 *     sub_140537C28 @ 0x140537C28 (sub_140537C28.c)
 *     sub_140537D4C @ 0x140537D4C (sub_140537D4C.c)
 *     sub_140537E78 @ 0x140537E78 (sub_140537E78.c)
 *     sub_140537F60 @ 0x140537F60 (sub_140537F60.c)
 */

char __fastcall sub_140537B84(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // edx
  unsigned int v3; // edx
  unsigned int v4; // edx
  bool v5; // zf
  char v6; // al

  if ( byte_140C54B60 && *(_BYTE *)(a1 + 25) == 0xB1 )
  {
    v1 = *(unsigned __int8 *)(a1 + 24);
    if ( v1 > 0xA )
    {
      if ( v1 <= 0xD )
      {
        sub_140537F60();
        return 1;
      }
      if ( v1 == 14 )
        goto LABEL_10;
      v5 = v1 == 15;
    }
    else
    {
      if ( v1 >= 8 )
      {
        sub_140537E78();
        return 1;
      }
      v2 = v1 - 1;
      if ( !v2 )
      {
        v6 = byte_140C54B6D;
        *(_DWORD *)(a1 + 16) &= ~1u;
        *(_BYTE *)(a1 + 28) = v6;
        *(_DWORD *)(a1 + 32) = 541672272;
        *(_WORD *)(a1 + 24) = 0;
        *(_WORD *)(a1 + 36) = 528;
        return 1;
      }
      v3 = v2 - 1;
      if ( !v3 )
      {
        sub_140537D4C();
        return 1;
      }
      v4 = v3 - 1;
      if ( !v4 )
      {
        sub_140537C28();
        return 1;
      }
      v5 = v4 == 3;
    }
    if ( v5 )
    {
LABEL_10:
      *(_DWORD *)(a1 + 16) |= 1u;
      *(_BYTE *)(a1 + 25) = -127;
      return 1;
    }
  }
  return 0;
}
