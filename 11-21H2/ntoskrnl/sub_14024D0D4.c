/*
 * XREFs of sub_14024D0D4 @ 0x14024D0D4
 * Callers:
 *     sub_14035225C @ 0x14035225C (sub_14035225C.c)
 *     sub_14059A86C @ 0x14059A86C (sub_14059A86C.c)
 * Callees:
 *     sub_14024D180 @ 0x14024D180 (sub_14024D180.c)
 *     sub_14026B32C @ 0x14026B32C (sub_14026B32C.c)
 *     sub_14026B354 @ 0x14026B354 (sub_14026B354.c)
 *     sub_140599050 @ 0x140599050 (sub_140599050.c)
 */

__int64 __fastcall sub_14024D0D4(unsigned __int64 a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rdx

  v4 = a3 >> 21;
  if ( a3 >> 21 < 0x100000000LL )
  {
    switch ( a2 )
    {
      case 5:
        return sub_14026B354(qword_140C506E0 + 120LL * a4, (unsigned int)v4);
      case 6:
        return sub_14026B32C((unsigned int)v4);
      case 1:
        v6 = sub_14024D180((unsigned int)v4);
        if ( v6 )
          _InterlockedExchangeAdd(
            (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 796LL),
            v4);
        return v6;
      case 15:
        return a1 & -(__int64)((unsigned int)sub_140599050(
                                               15,
                                               ((unsigned int)(a1 >> 18) & 0x3FFFFFF8) + 0x40000000,
                                               ((a1 >> 18) & 0x3FFFFFF8) + 0x40000000 + 8 * v4,
                                               1,
                                               1) != 0);
    }
  }
  return 0LL;
}
