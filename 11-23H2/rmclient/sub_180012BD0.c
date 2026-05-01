/*
 * XREFs of sub_180012BD0 @ 0x180012BD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001008 @ 0x180001008 (sub_180001008.c)
 *     sub_1800011A0 @ 0x1800011A0 (sub_1800011A0.c)
 *     sub_180012370 @ 0x180012370 (sub_180012370.c)
 *     sub_18001F1C4 @ 0x18001F1C4 (sub_18001F1C4.c)
 */

__int64 __fastcall sub_180012BD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  signed int v7; // ebx

  if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 2) != 0 && (qword_180032018 & 2) == qword_180032018 )
    sub_1800011A0((__int64)&dword_180032000, byte_18002A4C2);
  if ( a6 == 24 )
  {
    v7 = *(_DWORD *)(a5 + 4);
    sub_18001F1C4(a4 + 48);
    if ( ((*(_DWORD *)(a4 + 96) >> 3) & 7u) < v7 )
    {
      if ( v7 >= 2 )
        sub_180012370(a4);
    }
    else
    {
      *(_DWORD *)(a4 + 96) ^= (*(_DWORD *)(a4 + 96) ^ (8 * v7)) & 0x38;
    }
    *(_DWORD *)(a4 + 56) = 0;
    RtlReleaseSRWLockExclusive(a4 + 48);
  }
  else
  {
    LOBYTE(v7) = 5;
  }
  if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 3) != 0 && (qword_180032018 & 3) == qword_180032018 )
  {
    LOBYTE(a6) = v7;
    sub_180001008(a1, (int)&unk_18002A4EB, a3, a4, (__int64)&a6);
  }
  return 0LL;
}
