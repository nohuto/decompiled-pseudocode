/*
 * XREFs of ?IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z @ 0x1803CF518
 * Callers:
 *     ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1803CFFF0 (-ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HolographicApps::IsAppAllowedToBeResized(HolographicApps *this, const unsigned __int16 *a2)
{
  wchar_t **v3; // rbx

  v3 = &off_1807A94A8;
  while ( (unsigned int)_o__wcsicmp(this, *v3) )
  {
    if ( ++v3 == (wchar_t **)&tip::details::test_merged_data<XamlExplorerHostTipTests::_tip_RegisterMetadataTest>::c_details )
      return 0;
  }
  return 1;
}
