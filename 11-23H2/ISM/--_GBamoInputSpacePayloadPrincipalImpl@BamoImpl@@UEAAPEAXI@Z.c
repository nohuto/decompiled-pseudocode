/*
 * XREFs of ??_GBamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18014C350
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18014C1D8 (--1BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoImpl::BamoInputSpacePayloadPrincipalImpl *__fastcall BamoImpl::BamoInputSpacePayloadPrincipalImpl::`scalar deleting destructor'(
        BamoImpl::BamoInputSpacePayloadPrincipalImpl *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = (char)a2;
  BamoImpl::BamoInputSpacePayloadPrincipalImpl::~BamoInputSpacePayloadPrincipalImpl(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}
