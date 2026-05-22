/*
 * XREFs of ??_GBamoInputSiteElementProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180125990
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ @ 0x1801257A0 (--1BamoInputSiteElementProxyImpl@BamoImpl@@UEAA@XZ.c)
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
