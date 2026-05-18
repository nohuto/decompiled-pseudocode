/*
 * XREFs of sub_180024958 @ 0x180024958
 * Callers:
 *     sub_180023190 @ 0x180023190 (sub_180023190.c)
 *     sub_1800232D0 @ 0x1800232D0 (sub_1800232D0.c)
 *     sub_180023410 @ 0x180023410 (sub_180023410.c)
 *     sub_180023630 @ 0x180023630 (sub_180023630.c)
 *     sub_180023900 @ 0x180023900 (sub_180023900.c)
 *     sub_180023B10 @ 0x180023B10 (sub_180023B10.c)
 *     sub_180023DE0 @ 0x180023DE0 (sub_180023DE0.c)
 *     sub_1800241F0 @ 0x1800241F0 (sub_1800241F0.c)
 *     sub_180024400 @ 0x180024400 (sub_180024400.c)
 *     sub_1800246C0 @ 0x1800246C0 (sub_1800246C0.c)
 *     sub_180024A10 @ 0x180024A10 (sub_180024A10.c)
 *     sub_180024B70 @ 0x180024B70 (sub_180024B70.c)
 *     sub_180024E00 @ 0x180024E00 (sub_180024E00.c)
 *     sub_180024FB0 @ 0x180024FB0 (sub_180024FB0.c)
 *     sub_1800253C0 @ 0x1800253C0 (sub_1800253C0.c)
 *     sub_180025520 @ 0x180025520 (sub_180025520.c)
 *     sub_1800257C0 @ 0x1800257C0 (sub_1800257C0.c)
 *     sub_180025D00 @ 0x180025D00 (sub_180025D00.c)
 *     sub_180025EC0 @ 0x180025EC0 (sub_180025EC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180024958(volatile signed __int64 *Src)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rax

  do
  {
    v2 = _InterlockedExchangeAdd64(Src + 18, 0LL);
    if ( (unsigned int)v2 == 0x7FFFFFFFLL )
      break;
    v1 = HIDWORD(v2);
    if ( (unsigned int)v2 == 9LL
      || (unsigned int)v2 == 99LL
      || (unsigned int)v2 == 999LL
      || (unsigned int)v2 == 9999LL
      || (unsigned int)v2 == 99999LL
      || (unsigned int)v2 == 999999LL
      || (unsigned int)v2 == 9999999LL
      || (unsigned int)v2 == 99999999LL
      || (unsigned int)v2 == 999999999LL )
    {
      ++v1;
    }
  }
  while ( v1 <= *((_QWORD *)Src + 19)
       && v2 != _InterlockedCompareExchange64(Src + 18, ((unsigned int)v2 + 1LL) | (v1 << 32), v2) );
  return sub_180025C4C((void *)Src);
}
