/*
 * XREFs of ??_GBamoInputSystemInternalProxy@@MEAAPEAXI@Z @ 0x18012FE30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoInputSystemInternalProxyImpl@BamoImpl@@UEAA@XZ @ 0x18012F808 (--1BamoInputSystemInternalProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoInputSystemInternalProxy *__fastcall BamoInputSystemInternalProxy::`scalar deleting destructor'(
        BamoInputSystemInternalProxy *this,
        char a2)
{
  BamoImpl::BamoInputSystemInternalProxyImpl::~BamoInputSystemInternalProxyImpl((BamoInputSystemInternalProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
