/*
 * XREFs of ?make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z @ 0x180070694
 * Callers:
 *     ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x180037170 (-InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18015B36C (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 * Callees:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180010608 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 */

wil *__fastcall wil::make_cotaskmem_string_nothrow(wil *this, char *a2, unsigned __int64 a3, const char *a4)
{
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    this,
    a2,
    a3,
    a4);
  return this;
}
