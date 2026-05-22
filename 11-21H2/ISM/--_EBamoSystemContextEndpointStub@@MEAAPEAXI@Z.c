/*
 * XREFs of ??_EBamoSystemContextEndpointStub@@MEAAPEAXI@Z @ 0x1800875E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ @ 0x180087454 (--1BamoSystemContextEndpointStubImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoSystemContextEndpointStub *__fastcall BamoSystemContextEndpointStub::`vector deleting destructor'(
        BamoSystemContextEndpointStub *this,
        char a2)
{
  BamoImpl::BamoSystemContextEndpointStubImpl::~BamoSystemContextEndpointStubImpl((BamoSystemContextEndpointStub *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
