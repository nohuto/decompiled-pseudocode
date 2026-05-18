/*
 * XREFs of ?SetInnerOuterAngle@SpectreLightNode@@UEAAJPEBUD2D_VECTOR_2F@@@Z @ 0x180012950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpectreLightNode::SetInnerOuterAngle(SpectreLightNode *this, const struct D2D_VECTOR_2F *a2)
{
  *(FLOAT *)(*((_QWORD *)this + 4) + 112LL) = a2->y;
  return 0LL;
}
