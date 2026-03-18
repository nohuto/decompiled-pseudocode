/*
 * XREFs of ?EmitUpdateCommands@CTextVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02255B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@Z @ 0x1C0009C88 (-Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0010FE0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CTextVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CResourceMarshalerArrayBase::Marshal(
         (_QWORD *)this + 48,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 114,
         2,
         668,
         669)
    && DirectComposition::CResourceMarshalerArrayBase::Marshal(
         (_QWORD *)this + 51,
         a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 114,
         4,
         670,
         671) )
  {
    return DirectComposition::CResourceMarshalerArrayBase::Marshal(
             (_QWORD *)this + 54,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 114,
             8,
             672,
             673);
  }
  return v4;
}
