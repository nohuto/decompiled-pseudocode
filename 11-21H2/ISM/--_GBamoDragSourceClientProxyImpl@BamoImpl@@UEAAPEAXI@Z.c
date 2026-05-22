/*
 * XREFs of ??_GBamoDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x1801062D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x180105E1C (--1BamoDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoDragSourceClientProxyImpl *__fastcall BamoImpl::BamoDragSourceClientProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoDragSourceClientProxyImpl *this,
        void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  BamoImpl::BamoDragSourceClientProxyImpl::~BamoDragSourceClientProxyImpl(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
