/*
 * XREFs of sub_14026A718 @ 0x14026A718
 * Callers:
 *     sub_140284A20 @ 0x140284A20 (sub_140284A20.c)
 *     sub_1403523C0 @ 0x1403523C0 (sub_1403523C0.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 * Callees:
 *     sub_14026A784 @ 0x14026A784 (sub_14026A784.c)
 */

__int64 __fastcall sub_14026A718(unsigned __int64 a1, int a2)
{
  volatile signed __int64 *v4; // rax

  if ( !qword_140C593D8 )
    return 1LL;
  if ( (int)sub_14026A784(&StartContext, a1, 0LL, 2LL) >= 0 )
  {
    v4 = &qword_140C53518;
    if ( a2 )
      v4 = &qword_140C53520;
    _InterlockedExchangeAdd64(v4, a1);
    return 1LL;
  }
  return 0LL;
}
