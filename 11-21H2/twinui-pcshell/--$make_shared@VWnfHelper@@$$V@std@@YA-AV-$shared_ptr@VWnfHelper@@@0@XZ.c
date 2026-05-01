/*
 * XREFs of ??$make_shared@VWnfHelper@@$$V@std@@YA?AV?$shared_ptr@VWnfHelper@@@0@XZ @ 0x1800CFC10
 * Callers:
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1800CF558 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<WnfHelper,>(_QWORD *a1)
{
  _QWORD *result; // rax
  _DWORD *v3; // [rsp+30h] [rbp+8h]

  v3 = operator new(0x20uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<WnfHelper>::`vftable';
  *((_QWORD *)v3 + 2) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  a1[1] = v3;
  result = a1;
  *a1 = v3 + 4;
  return result;
}
