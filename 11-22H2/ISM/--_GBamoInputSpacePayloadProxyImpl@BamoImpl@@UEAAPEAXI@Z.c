/*
 * XREFs of ??_GBamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18012FDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAA@XZ @ 0x18012F7D8 (--1BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoInputSpacePayloadProxyImpl *__fastcall BamoImpl::BamoInputSpacePayloadProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoInputSpacePayloadProxyImpl *this,
        void *a2)
{
  char v2; // bl

  v2 = (char)a2;
  BamoImpl::BamoInputSpacePayloadProxyImpl::~BamoInputSpacePayloadProxyImpl(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
