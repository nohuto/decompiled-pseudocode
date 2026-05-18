/*
 * XREFs of ?SetColor@SpectreLightNode@@UEAAJPEBU_D3DCOLORVALUE@@@Z @ 0x180012910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpectreLightNode::SetColor(SpectreLightNode *this, const struct _D3DCOLORVALUE *a2)
{
  __int64 v2; // rcx
  float b; // xmm1_4
  float r; // eax

  if ( *((_DWORD *)this + 12) )
  {
    v2 = *((_QWORD *)this + 4);
    b = a2->b;
    r = a2->r;
    *(float *)(v2 + 92) = a2->g;
    *(float *)(v2 + 96) = b;
    *(float *)(v2 + 88) = r;
    *(_DWORD *)(v2 + 100) = 1065353216;
  }
  else
  {
    *(struct _D3DCOLORVALUE *)((char *)this + 52) = *a2;
  }
  return 0LL;
}
