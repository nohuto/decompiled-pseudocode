/*
 * XREFs of ??4?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18050CEC4
 * Callers:
 *     ??4ViewOptions@@QEAAAEAU0@$$QEAU0@@Z @ 0x1802DCDCE (--4ViewOptions@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1805164C0 (-Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shel.c)
 * Callees:
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1802D2954 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 */

_QWORD *__fastcall std::vector<Windows::Foundation::Rect>::operator=(_QWORD *a1, _QWORD *a2)
{
  if ( a1 != a2 )
  {
    std::vector<Geometry::CRect>::_Tidy((__int64)a1);
    *a1 = *a2;
    a1[1] = a2[1];
    a1[2] = a2[2];
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
  }
  return a1;
}
