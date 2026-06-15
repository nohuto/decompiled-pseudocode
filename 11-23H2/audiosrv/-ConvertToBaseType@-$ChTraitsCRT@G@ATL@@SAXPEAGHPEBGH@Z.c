/*
 * XREFs of ?ConvertToBaseType@?$ChTraitsCRT@G@ATL@@SAXPEAGHPEBGH@Z @ 0x1800DF470
 * Callers:
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800E1328 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 * Callees:
 *     _o_wmemcpy_s_0 @ 0x180067A34 (_o_wmemcpy_s_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

errno_t __fastcall ATL::ChTraitsCRT<unsigned short>::ConvertToBaseType(wchar_t *a1, int a2, const wchar_t *a3, int a4)
{
  int v4; // r10d
  __int64 v5; // rax
  errno_t result; // eax

  v4 = a4;
  v5 = -1LL;
  if ( a4 == -1 )
  {
    do
      ++v5;
    while ( a3[v5] );
    v4 = v5 + 1;
  }
  result = o_wmemcpy_s_0(a1, a2, a3, v4);
  if ( result )
  {
    if ( result == 12 )
      ATL::AtlThrowImpl(-2147024882);
    if ( result == 22 || result == 34 )
      ATL::AtlThrowImpl(-2147024809);
    if ( result != 80 )
      ATL::AtlThrowImpl(-2147467259);
  }
  return result;
}
