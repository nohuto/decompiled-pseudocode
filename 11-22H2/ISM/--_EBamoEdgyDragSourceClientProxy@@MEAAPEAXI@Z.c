/*
 * XREFs of ??_EBamoEdgyDragSourceClientProxy@@MEAAPEAXI@Z @ 0x18012FC70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ @ 0x18012F79C (--1BamoEdgyDragSourceClientProxyImpl@BamoImpl@@UEAA@XZ.c)
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
