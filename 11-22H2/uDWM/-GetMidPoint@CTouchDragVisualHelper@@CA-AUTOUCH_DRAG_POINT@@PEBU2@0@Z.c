/*
 * XREFs of ?GetMidPoint@CTouchDragVisualHelper@@CA?AUTOUCH_DRAG_POINT@@PEBU2@0@Z @ 0x1800E7FB4
 * Callers:
 *     ?SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z @ 0x18006E6D8 (-SmoothTouchDragPath@CTouchDragVisualHelper@@SAXPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEAV2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTouchDragVisualHelper::GetMidPoint(__int64 a1, __int64 a2, __int64 a3)
{
  float v3; // xmm3_4
  float v4; // xmm2_4

  v3 = *(float *)(a2 + 8) + *(float *)(a3 + 8);
  v4 = *(float *)(a2 + 12) + *(float *)(a3 + 12);
  *(float *)(a1 + 4) = *(float *)(a2 + 4) + *(float *)(a3 + 4);
  *(float *)(a1 + 8) = v3;
  *(float *)(a1 + 12) = v4;
  *(float *)(a1 + 4) = *(float *)(a1 + 4) * 0.5;
  *(float *)(a1 + 8) = v3 * 0.5;
  *(float *)(a1 + 12) = v4 * 0.5;
  *(_DWORD *)a1 = (unsigned int)(*(_DWORD *)a3 + *(_DWORD *)a2) >> 1;
  return a1;
}
