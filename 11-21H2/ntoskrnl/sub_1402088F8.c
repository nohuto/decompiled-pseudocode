/*
 * XREFs of sub_1402088F8 @ 0x1402088F8
 * Callers:
 *     sub_140679ADC @ 0x140679ADC (sub_140679ADC.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool __fastcall sub_1402088F8(_QWORD *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  void **v5; // rax

  v4 = 0LL;
  if ( (_QWORD *)*a1 != a1 )
  {
    v4 = (_QWORD *)a1[1];
    if ( (_QWORD *)*v4 != a1 || (v5 = (void **)v4[1], *v5 != v4) )
      __fastfail(3u);
    a1[1] = v5;
    *v5 = a1;
    *a2 = v4[2];
    *a3 = v4[3];
    *a4 = *((_DWORD *)v4 + 8);
    ExFreePoolWithTag(v4, 0);
  }
  return v4 != 0LL;
}
