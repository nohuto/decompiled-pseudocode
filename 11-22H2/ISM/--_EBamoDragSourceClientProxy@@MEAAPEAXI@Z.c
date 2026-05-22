/*
 * XREFs of ??_EBamoDragSourceClientProxy@@MEAAPEAXI@Z @ 0x18012FBE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x18012F76C (--1BamoDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoDragSourceClientProxy *__fastcall BamoDragSourceClientProxy::`vector deleting destructor'(
        BamoDragSourceClientProxy *this,
        void *a2)
{
  char v3; // bl

  v3 = (char)a2;
  BamoImpl::BamoDragSourceClientProxyImpl::~BamoDragSourceClientProxyImpl(
    (BamoDragSourceClientProxy *)((char *)this + 16),
    a2);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
