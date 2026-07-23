/*
 * XREFs of sub_1402FE1C4 @ 0x1402FE1C4
 * Callers:
 *     sub_1402FDFE0 @ 0x1402FDFE0 (sub_1402FDFE0.c)
 *     sub_1402FF310 @ 0x1402FF310 (sub_1402FF310.c)
 *     sub_1403AFE88 @ 0x1403AFE88 (sub_1403AFE88.c)
 *     sub_1405781D0 @ 0x1405781D0 (sub_1405781D0.c)
 *     sub_140578414 @ 0x140578414 (sub_140578414.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402FE230 (KeFindFirstSetRightGroupAffinity.c)
 */

__int64 __fastcall sub_1402FE1C4(__int128 *a1)
{
  unsigned int v1; // edx
  __int64 v2; // r11
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( byte_140C2AE98 )
  {
    if ( !*((_WORD *)a1 + 4) )
    {
      v4 = 0LL;
      if ( *(_BYTE *)(qword_140C2AEA0 + 2) )
      {
        v2 = *(_QWORD *)a1;
        while ( (v2 & *(_QWORD *)(qword_140C2AEA0 + 16 * (v1 + 1LL))) == 0 )
        {
          if ( ++v1 >= *(unsigned __int8 *)(qword_140C2AEA0 + 2) )
            return KeFindFirstSetRightGroupAffinity(a1);
        }
        *(_QWORD *)&v4 = v2 & *(_QWORD *)(qword_140C2AEA0 + 16 * (v1 + 1LL));
        a1 = &v4;
      }
    }
  }
  return KeFindFirstSetRightGroupAffinity(a1);
}
