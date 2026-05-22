/*
 * XREFs of ??_EBamoSystemContextEndpointProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801374D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAA@XZ @ 0x18013749C (--1BamoSystemContextEndpointProxyImpl@BamoImpl@@UEAA@XZ.c)
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
