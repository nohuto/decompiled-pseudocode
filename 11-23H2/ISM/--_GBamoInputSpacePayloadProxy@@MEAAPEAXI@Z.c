/*
 * XREFs of ??_GBamoInputSpacePayloadProxy@@MEAAPEAXI@Z @ 0x180121DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAA@XZ @ 0x1801217E8 (--1BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoInputSpacePayloadProxy *__fastcall BamoInputSpacePayloadProxy::`scalar deleting destructor'(
        BamoInputSpacePayloadProxy *this,
        void *a2)
{
  char v3; // bl

  v3 = (char)a2;
  BamoImpl::BamoInputSpacePayloadProxyImpl::~BamoInputSpacePayloadProxyImpl(
    (BamoInputSpacePayloadProxy *)((char *)this + 16),
    a2);
  if ( (v3 & 1) != 0 )
    operator delete(this);
  return this;
}
