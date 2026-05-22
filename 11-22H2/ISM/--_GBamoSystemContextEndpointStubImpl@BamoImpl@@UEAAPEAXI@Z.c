/*
 * XREFs of ??_GBamoSystemContextEndpointStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1800B0CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ @ 0x1800B0AEC (--1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoSystemContextEndpointStubImpl *__fastcall BamoImpl::BamoSystemContextEndpointStubImpl::`scalar deleting destructor'(
        BamoImpl::BamoSystemContextEndpointStubImpl *this,
        char a2)
{
  BamoImpl::BamoSystemContextEndpointStubImpl::~BamoSystemContextEndpointStubImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
