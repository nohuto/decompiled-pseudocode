/*
 * XREFs of sub_18006532C @ 0x18006532C
 * Callers:
 *     sub_180065C7C @ 0x180065C7C (sub_180065C7C.c)
 *     sub_180077414 @ 0x180077414 (sub_180077414.c)
 * Callees:
 *     sub_18006560C @ 0x18006560C (sub_18006560C.c)
 */

__int64 __fastcall sub_18006532C(__int64 a1, float a2)
{
  __int64 result; // rax

  if ( a2 != *(float *)(a1 + 332) )
  {
    *(float *)(a1 + 332) = a2;
    return sub_18006560C(a1, 2LL);
  }
  return result;
}
