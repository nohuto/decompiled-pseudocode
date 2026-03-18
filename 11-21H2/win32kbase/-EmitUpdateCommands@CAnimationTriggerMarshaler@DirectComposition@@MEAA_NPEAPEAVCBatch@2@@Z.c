/*
 * XREFs of ?EmitUpdateCommands@CAnimationTriggerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02245C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@Z @ 0x1C0009C88 (-Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0010F54 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetConditionCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0220F14 (-EmitSetConditionCommand@CAnimationTriggerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CAnimationTriggerMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationTriggerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CAnimationTriggerMarshaler::EmitSetConditionCommand(
         this,
         (struct DirectComposition::CBatch ***)a2) )
  {
    return DirectComposition::CResourceMarshalerArrayBase::Marshal(
             (_QWORD *)this + 11,
             a2,
             *((_DWORD *)this + 8),
             (_DWORD *)this + 4,
             256,
             509,
             510);
  }
  return v4;
}
