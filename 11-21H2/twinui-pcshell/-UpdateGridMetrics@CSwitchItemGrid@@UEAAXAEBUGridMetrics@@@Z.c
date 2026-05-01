/*
 * XREFs of ?UpdateGridMetrics@CSwitchItemGrid@@UEAAXAEBUGridMetrics@@@Z @ 0x1804BFC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwitchItemGrid::UpdateGridMetrics(CSwitchItemGrid *this, const struct GridMetrics *a2)
{
  __int64 v2; // r8
  _OWORD *v3; // rax
  __int128 v4; // xmm1

  v2 = 4LL;
  v3 = (_OWORD *)((char *)this + 48);
  do
  {
    *v3 = *(_OWORD *)a2;
    v3[1] = *((_OWORD *)a2 + 1);
    v3[2] = *((_OWORD *)a2 + 2);
    v3[3] = *((_OWORD *)a2 + 3);
    v3[4] = *((_OWORD *)a2 + 4);
    v3[5] = *((_OWORD *)a2 + 5);
    v3[6] = *((_OWORD *)a2 + 6);
    v3 += 8;
    v4 = *((_OWORD *)a2 + 7);
    a2 = (const struct GridMetrics *)((char *)a2 + 128);
    *(v3 - 1) = v4;
    --v2;
  }
  while ( v2 );
  CMultitaskingViewElementBase::_LayoutChildren((_QWORD *)this - 26, 0, 0LL);
}
