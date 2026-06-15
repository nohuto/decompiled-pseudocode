/*
 * XREFs of ??1?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@QEAA@XZ @ 0x180152C30
 * Callers:
 *     _AtmosCheck::PerformLicenseCheckInternalLegacy_::_1_::dtor$3 @ 0x180071EC8 (_AtmosCheck--PerformLicenseCheckInternalLegacy_--_1_--dtor$3.c)
 *     _AtmosCheck::AddArrayToLicenseMap_::_1_::dtor$0 @ 0x180072018 (_AtmosCheck--AddArrayToLicenseMap_--_1_--dtor$0.c)
 *     _AtmosCheck::PerformLicenseCheckForEndpoint_::_1_::dtor$1 @ 0x1801557EE (_AtmosCheck--PerformLicenseCheckForEndpoint_--_1_--dtor$1.c)
 *     _AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype_::_1_::dtor$1 @ 0x180155947 (_AtmosCheck--PerformLicenseCheckForSpatialAudioSubtype_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 */

void __fastcall wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>::~unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    operator delete(v1);
}
