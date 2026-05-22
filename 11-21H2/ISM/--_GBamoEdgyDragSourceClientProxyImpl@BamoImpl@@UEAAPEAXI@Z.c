/*
 * XREFs of ??_GBamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180106360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180105E4C (--1BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoEdgyDragSourceClientProxyImpl *__fastcall BamoImpl::BamoEdgyDragSourceClientProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoEdgyDragSourceClientProxyImpl *this,
        void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  BamoImpl::BamoEdgyDragSourceClientProxyImpl::~BamoEdgyDragSourceClientProxyImpl(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
