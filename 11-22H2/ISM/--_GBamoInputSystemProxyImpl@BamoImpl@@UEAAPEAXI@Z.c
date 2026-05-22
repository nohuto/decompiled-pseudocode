/*
 * XREFs of ??_GBamoInputSystemProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18012FF10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ @ 0x18012F838 (--1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoInputSystemProxyImpl *__fastcall BamoImpl::BamoInputSystemProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoInputSystemProxyImpl *this,
        char a2)
{
  BamoImpl::BamoInputSystemProxyImpl::~BamoInputSystemProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
