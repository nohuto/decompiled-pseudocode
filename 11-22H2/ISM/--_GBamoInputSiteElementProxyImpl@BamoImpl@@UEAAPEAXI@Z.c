/*
 * XREFs of ??_GBamoInputSiteElementProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18014E180
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ @ 0x1800326A0 (--1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

BamoImpl::BamoInputSiteElementProxyImpl *__fastcall BamoImpl::BamoInputSiteElementProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoInputSiteElementProxyImpl *this,
        char a2)
{
  BamoImpl::BamoInputSiteElementProxyImpl::~BamoInputSiteElementProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
