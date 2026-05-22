/*
 * XREFs of ??_EBamoInputSystemInternalProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180121E90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoInputSystemInternalProxyImpl@BamoImpl@@UEAA@XZ @ 0x180121818 (--1BamoInputSystemInternalProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoInputSystemInternalProxyImpl *__fastcall BamoImpl::BamoInputSystemInternalProxyImpl::`vector deleting destructor'(
        BamoImpl::BamoInputSystemInternalProxyImpl *this,
        char a2)
{
  BamoImpl::BamoInputSystemInternalProxyImpl::~BamoInputSystemInternalProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
