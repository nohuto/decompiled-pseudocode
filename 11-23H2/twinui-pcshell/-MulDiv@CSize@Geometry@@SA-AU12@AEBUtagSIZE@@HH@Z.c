/*
 * XREFs of ?MulDiv@CSize@Geometry@@SA?AU12@AEBUtagSIZE@@HH@Z @ 0x1803D083C
 * Callers:
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1805F0A80 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 * Callees:
 *     <none>
 */

int *__fastcall Geometry::CSize::MulDiv(int *a1, int *a2, int a3, int a4)
{
  int v8; // ebx
  int *result; // rax

  v8 = MulDiv(a2[1], a3, a4);
  *a1 = MulDiv(*a2, a3, a4);
  result = a1;
  a1[1] = v8;
  return result;
}
