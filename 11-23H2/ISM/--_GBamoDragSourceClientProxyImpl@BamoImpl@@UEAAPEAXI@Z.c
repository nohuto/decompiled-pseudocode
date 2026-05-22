/*
 * XREFs of ??_GBamoDragSourceClientProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180121C40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x18012177C (--1BamoDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ.c)
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
