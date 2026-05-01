/*
 * XREFs of ?get_apartment_type@impl@winrt@@YA?AU?$pair@HH@std@@XZ @ 0x180101A10
 * Callers:
 *     ?resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@@Z @ 0x1800296A4 (-resume_apartment@impl@winrt@@YAXAEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 *     ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x180064220 (--0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvid.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180101988 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 * Callees:
 *     WINRT_IMPL_CoGetApartmentType @ 0x180189C5E (WINRT_IMPL_CoGetApartmentType.c)
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
