/*
 * XREFs of ??_EBamoEdgyDragSourceClientProxy@@MEAAPEAXI@Z @ 0x180121C80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x1801217AC (--1BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoEdgyDragSourceClientProxy *__fastcall BamoEdgyDragSourceClientProxy::`vector deleting destructor'(
        BamoEdgyDragSourceClientProxy *this,
        void *a2)
{
  char v3; // bl

  v3 = (char)a2;
  BamoImpl::BamoEdgyDragSourceClientProxyImpl::~BamoEdgyDragSourceClientProxyImpl(
    (BamoEdgyDragSourceClientProxy *)((char *)this + 16),
    a2);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
