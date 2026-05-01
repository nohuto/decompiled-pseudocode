/*
 * XREFs of ?get_apartment_type@impl@winrt@@YA?AU?$pair@HH@std@@XZ @ 0x1800DB6DC
 * Callers:
 *     ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1800DB58C (-resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800DB690 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 * Callees:
 *     WINRT_IMPL_CoGetApartmentType @ 0x1801C7C7E (WINRT_IMPL_CoGetApartmentType.c)
 */

APTTYPE *__fastcall winrt::impl::get_apartment_type(APTTYPE *a1)
{
  APTTYPEQUALIFIER v2; // eax
  APTTYPE pAptType; // [rsp+38h] [rbp+10h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+40h] [rbp+18h] BYREF

  if ( WINRT_IMPL_CoGetApartmentType(&pAptType, &pAptQualifier) )
  {
    v2 = APTTYPEQUALIFIER_IMPLICIT_MTA;
    *a1 = APTTYPE_MTA;
  }
  else
  {
    *a1 = pAptType;
    v2 = pAptQualifier;
  }
  *((_DWORD *)a1 + 1) = v2;
  return a1;
}
