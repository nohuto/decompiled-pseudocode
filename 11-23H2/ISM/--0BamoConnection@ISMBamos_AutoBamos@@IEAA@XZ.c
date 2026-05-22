/*
 * XREFs of ??0BamoConnection@ISMBamos_AutoBamos@@IEAA@XZ @ 0x1800329F0
 * Callers:
 *     ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x180032860 (--$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ??$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalServerConnection@@@Z @ 0x180032928 (--$CreateServer@VInputSystemInternalServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 *     ??0InputSystemInternalClientConnection@@IEAA@XZ @ 0x18013BFC4 (--0InputSystemInternalClientConnection@@IEAA@XZ.c)
 * Callees:
 *     ??0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180032A38 (--0BaseBamoConnectionImpl@BamoImpl@Microsoft@@IEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
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
