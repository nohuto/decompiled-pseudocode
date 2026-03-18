/*
 * XREFs of ??A?$span@$$CBUMilPoint2F@@$0?0@gsl@@QEBAAEBUMilPoint2F@@_K@Z @ 0x18026FA08
 * Callers:
 *     ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x18026F928 (--$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@R.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801B1AE0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<MilPoint2F const,-1>::operator[](gsl::details *a1, unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x18026FA24LL);
  }
  return *((_QWORD *)a1 + 1) + 8 * a2;
}
