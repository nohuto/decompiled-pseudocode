/*
 * XREFs of sub_140366FB0 @ 0x140366FB0
 * Callers:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140366C48 @ 0x140366C48 (sub_140366C48.c)
 *     sub_140366DA8 @ 0x140366DA8 (sub_140366DA8.c)
 *     sub_140367008 @ 0x140367008 (sub_140367008.c)
 *     sub_140367A44 @ 0x140367A44 (sub_140367A44.c)
 *     sub_140367A64 @ 0x140367A64 (sub_140367A64.c)
 *     sub_140461DE4 @ 0x140461DE4 (sub_140461DE4.c)
 *     sub_1405A7258 @ 0x1405A7258 (sub_1405A7258.c)
 *     ExQueryPoolBlockSize @ 0x14063B220 (ExQueryPoolBlockSize.c)
 *     sub_140641F58 @ 0x140641F58 (sub_140641F58.c)
 *     sub_1406423A4 @ 0x1406423A4 (sub_1406423A4.c)
 *     sub_1406427C4 @ 0x1406427C4 (sub_1406427C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140366FB0(unsigned __int64 a1)
{
  char v1; // cl

  if ( a1 >= 0xFFFF800000000000uLL )
  {
    v1 = byte_140C53F50[((a1 >> 39) & 0x1FF) - 256];
    switch ( v1 )
    {
      case 1:
        return 33LL;
      case 5:
        return 0LL;
      case 6:
        return 1LL;
    }
  }
  return 32LL;
}
