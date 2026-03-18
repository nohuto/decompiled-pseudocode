/*
 * XREFs of ?EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x1800CF200
 * Callers:
 *     <none>
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800121BC (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ??8@YA_NAEBVCMilPoint2F@@0@Z @ 0x1800CF294 (--8@YA_NAEBVCMilPoint2F@@0@Z.c)
 *     ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800CF4E4 (-clear@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_p.c)
 */

void __fastcall CPolygonBuilder::EndFigure(CPolygonBuilder *this, enum D2D1_FIGURE_END a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  int *v4; // r8
  int v5; // xmm1_4
  int v6; // xmm0_4
  int v7; // xmm1_4
  __int64 v8; // r8
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]
  int v11; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+44h] [rbp+1Ch]

  v2 = *((_QWORD *)this + 3);
  v3 = (__int64 *)((char *)this + 16);
  v4 = (int *)*((_QWORD *)this + 2);
  v5 = v4[1];
  v9 = *v4;
  v6 = *(_DWORD *)(v2 - 8);
  v10 = v5;
  v7 = *(_DWORD *)(v2 - 4);
  v11 = v6;
  v12 = v7;
  if ( (unsigned __int8)operator==(&v11, &v9) )
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      v3,
      (v3[1] - 8 - v8) >> 3,
      1LL);
  if ( (unsigned __int64)((v3[1] - *v3) >> 3) < 3 )
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear(v3);
}
