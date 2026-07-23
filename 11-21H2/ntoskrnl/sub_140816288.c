/*
 * XREFs of sub_140816288 @ 0x140816288
 * Callers:
 *     sub_1403AE2A4 @ 0x1403AE2A4 (sub_1403AE2A4.c)
 *     sub_140816040 @ 0x140816040 (sub_140816040.c)
 *     sub_140816190 @ 0x140816190 (sub_140816190.c)
 *     sub_14083F84C @ 0x14083F84C (sub_14083F84C.c)
 *     sub_140840BE4 @ 0x140840BE4 (sub_140840BE4.c)
 *     sub_1409DB3FC @ 0x1409DB3FC (sub_1409DB3FC.c)
 * Callees:
 *     EtwEnableTrace @ 0x1408162E0 (EtwEnableTrace.c)
 */

__int64 __fastcall sub_140816288(unsigned __int16 a1, __int64 a2, char a3, __int64 a4, int a5, int a6)
{
  if ( a2 && a1 )
    return EtwEnableTrace(a2, 0, a1, a6, a3, a4, 0LL, a5);
  else
    return 3221225485LL;
}
