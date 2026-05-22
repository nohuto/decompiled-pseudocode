/*
 * XREFs of ??0BamoConnection@ISMBamos_AutoBamos@@IEAA@XZ @ 0x1801049EC
 * Callers:
 *     ??0InputSystemInternalClientConnection@@IEAA@XZ @ 0x180120678 (--0InputSystemInternalClientConnection@@IEAA@XZ.c)
 * Callees:
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18002CE64 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

ISMBamos_AutoBamos::BamoConnection *__fastcall ISMBamos_AutoBamos::BamoConnection::BamoConnection(
        ISMBamos_AutoBamos::BamoConnection *this)
{
  *(_QWORD *)this = &ISMBamos_AutoBamos::BamoConnection::`vftable';
  Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl(
    (ISMBamos_AutoBamos::BamoConnection *)((char *)this + 8),
    this);
  *((_QWORD *)this + 1) = &BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::`vftable';
  return this;
}
