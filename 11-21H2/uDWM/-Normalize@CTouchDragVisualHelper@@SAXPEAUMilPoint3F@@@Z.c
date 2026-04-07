/*
 * XREFs of ?Normalize@CTouchDragVisualHelper@@SAXPEAUMilPoint3F@@@Z @ 0x1800E74D4
 * Callers:
 *     ?NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18006A362 (-NotifyTouchDrag@CTouchDragVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18006A81A (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 * Callees:
 *     _o_sqrtf_0 @ 0x180060F04 (_o_sqrtf_0.c)
 */

void __fastcall CTouchDragVisualHelper::Normalize(struct MilPoint3F *a1)
{
  float v2; // xmm6_4
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm2_4
  float v6; // xmm6_4

  v2 = *(float *)a1;
  v3 = *((float *)a1 + 1);
  v4 = *((float *)a1 + 2);
  v5 = o_sqrtf_0((float)((float)(v2 * v2) + (float)(v3 * v3)) + (float)(v4 * v4));
  if ( v5 >= 0.00000011920929 )
  {
    *((float *)a1 + 1) = v3 * (float)(1.0 / v5);
    v6 = v2 * (float)(1.0 / v5);
    *((float *)a1 + 2) = v4 * (float)(1.0 / v5);
  }
  else
  {
    v6 = FLOAT_1_0;
  }
  *(float *)a1 = v6;
}
