/*
 * XREFs of ??1?$CAutoPtr@VCAPONode@@@ATL@@QEAA@XZ @ 0x140068888
 * Callers:
 *     __lambda_89f25345d625e50d879fcb99a1803143_::operator()_::_1_::dtor$6 @ 0x140037F90 (__lambda_89f25345d625e50d879fcb99a1803143_--operator()_--_1_--dtor$6.c)
 * Callees:
 *     ??_ECAPONode@@UEAAPEAXI@Z @ 0x1400689F0 (--_ECAPONode@@UEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<CAPONode>::~CAutoPtr<CAPONode>(CAPONode **a1)
{
  CAPONode *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CAPONode::`vector deleting destructor'(v2, 1u);
  *a1 = 0LL;
  return result;
}
