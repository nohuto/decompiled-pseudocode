/*
 * XREFs of ??8@YA_NAEBVCMilPoint2F@@0@Z @ 0x1800CF294
 * Callers:
 *     ?EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x1800CF200 (-EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 *     _lambda_130f3fd38fafab82521855fb46aefe92_::operator() @ 0x180191350 (_lambda_130f3fd38fafab82521855fb46aefe92_--operator().c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(float *a1, float *a2)
{
  return *a1 == *a2 && a1[1] == a2[1];
}
