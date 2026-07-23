/*
 * XREFs of sub_140A8142C @ 0x140A8142C
 * Callers:
 *     sub_140A83C18 @ 0x140A83C18 (sub_140A83C18.c)
 *     sub_140AA44E0 @ 0x140AA44E0 (sub_140AA44E0.c)
 * Callees:
 *     sub_14025C930 @ 0x14025C930 (sub_14025C930.c)
 *     sub_1402B2E00 @ 0x1402B2E00 (sub_1402B2E00.c)
 *     sub_14045C6C8 @ 0x14045C6C8 (sub_14045C6C8.c)
 *     sub_14045C6DE @ 0x14045C6DE (sub_14045C6DE.c)
 */

__int64 __fastcall sub_140A8142C(_DWORD *a1)
{
  unsigned __int64 *v1; // r14
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rbx
  unsigned __int8 v5; // di
  int v6; // ebp

  v1 = (unsigned __int64 *)(a1 + 12);
  v2 = (((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12;
  while ( 1 )
  {
    v3 = *v1;
    if ( (unsigned int)sub_1402B2E00(*v1) )
    {
      v4 = 48 * v3 - 0x220000000000LL;
      v5 = dword_140C529CC == 2 ? 17 : sub_14045C6C8(v4);
      v6 = sub_14025C930(v4);
      if ( v5 != 17 )
        sub_14045C6DE(v4, v5);
      if ( !v6 )
        break;
    }
    ++v1;
    if ( !--v2 )
      return 1LL;
  }
  return 0LL;
}
