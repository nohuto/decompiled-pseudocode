/*
 * XREFs of ??_GBamoSystemContextEndpointStubImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180087630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ @ 0x180087454 (--1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ.c)
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
