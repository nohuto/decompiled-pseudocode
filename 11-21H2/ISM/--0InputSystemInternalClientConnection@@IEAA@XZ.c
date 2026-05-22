/*
 * XREFs of ??0InputSystemInternalClientConnection@@IEAA@XZ @ 0x180120678
 * Callers:
 *     ??$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalClientConnection@@@Z @ 0x18012057C (--$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 * Callees:
 *     ??0BamoConnection@ISMBamos_AutoBamos@@IEAA@XZ @ 0x1801049EC (--0BamoConnection@ISMBamos_AutoBamos@@IEAA@XZ.c)
 */

InputSystemInternalClientConnection *__fastcall InputSystemInternalClientConnection::InputSystemInternalClientConnection(
        InputSystemInternalClientConnection *this)
{
  ISMBamos_AutoBamos::BamoConnection::BamoConnection(this);
  *(_QWORD *)this = &InputSystemInternalClientConnection::`vftable';
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  return this;
}
