/*
 * XREFs of ??_EBamoInputSystemProxy@@MEAAPEAXI@Z @ 0x180121ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ @ 0x180121848 (--1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoInputSystemProxy *__fastcall BamoInputSystemProxy::`vector deleting destructor'(
        BamoInputSystemProxy *this,
        char a2)
{
  BamoImpl::BamoInputSystemProxyImpl::~BamoInputSystemProxyImpl((BamoInputSystemProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
