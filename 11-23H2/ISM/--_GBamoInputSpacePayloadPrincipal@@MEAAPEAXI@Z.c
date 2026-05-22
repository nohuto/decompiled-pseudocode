/*
 * XREFs of ??_GBamoInputSpacePayloadPrincipal@@MEAAPEAXI@Z @ 0x18014C300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x18014C1D8 (--1BamoInputSpacePayloadPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 */

BamoInputSpacePayloadPrincipal *__fastcall BamoInputSpacePayloadPrincipal::`scalar deleting destructor'(
        BamoInputSpacePayloadPrincipal *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  char v5; // bl

  v5 = (char)a2;
  BamoImpl::BamoInputSpacePayloadPrincipalImpl::~BamoInputSpacePayloadPrincipalImpl(
    (BamoInputSpacePayloadPrincipal *)((char *)this + 16),
    a2,
    a3,
    a4);
  if ( (v5 & 1) != 0 )
    operator delete(this);
  return this;
}
