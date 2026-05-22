/*
 * XREFs of ??_EBamoSystemContextEndpointProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18015FE90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAA@XZ @ 0x18015FE58 (--1BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoSystemContextEndpointProxyImpl *__fastcall BamoImpl::BamoSystemContextEndpointProxyImpl::`vector deleting destructor'(
        BamoImpl::BamoSystemContextEndpointProxyImpl *this,
        char a2)
{
  BamoImpl::BamoSystemContextEndpointProxyImpl::~BamoSystemContextEndpointProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
