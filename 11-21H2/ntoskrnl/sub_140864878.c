/*
 * XREFs of sub_140864878 @ 0x140864878
 * Callers:
 *     sub_1407669D4 @ 0x1407669D4 (sub_1407669D4.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140864878(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v4; // cl
  __int64 v5; // rdx
  __int64 v6; // rcx

  result = 3221225473LL;
  v4 = *(_BYTE *)(a1 + 16);
  if ( (v4 & 2) == 0 )
    return 0LL;
  if ( byte_140C44638 )
  {
    result = sub_14042A5E0(*(_QWORD *)(a1 + 8), a2);
    if ( (int)result >= 0 )
    {
      v6 = *(_QWORD *)(a1 + 32);
      if ( !v6 || (result = sub_14042A5E0(v6, v5), (int)result >= 0) )
        *(_BYTE *)(a1 + 16) &= ~2u;
    }
  }
  else if ( byte_140C450C8 )
  {
    *(_BYTE *)(a1 + 16) = v4 & 0xFD;
    result = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
