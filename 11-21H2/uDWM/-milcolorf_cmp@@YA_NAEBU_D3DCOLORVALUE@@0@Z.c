/*
 * XREFs of ?milcolorf_cmp@@YA_NAEBU_D3DCOLORVALUE@@0@Z @ 0x1800E689C
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18002A510 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall milcolorf_cmp(const struct _D3DCOLORVALUE *a1, const struct _D3DCOLORVALUE *a2)
{
  return a1->a != a2->a || a1->r != a2->r || a1->g != a2->g || a1->b != a2->b;
}
