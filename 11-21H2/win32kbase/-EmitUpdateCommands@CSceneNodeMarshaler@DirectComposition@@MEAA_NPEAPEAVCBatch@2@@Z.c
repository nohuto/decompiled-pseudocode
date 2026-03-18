/*
 * XREFs of ?EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02251E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@Z @ 0x1C0009C88 (-Marshal@CResourceMarshalerArrayBase@DirectComposition@@IEAA_NPEAPEAVCBatch@2@IPEAKKW4MILCMD@@2@.c)
 *     ?EmitSetTransformCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C022444C (-EmitSetTransformCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSceneNodeMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneNodeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CResourceMarshalerArrayBase::Marshal(
         (_QWORD *)this + 8,
         (struct DirectComposition::CBatch **)a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         32,
         633,
         634)
    && DirectComposition::CResourceMarshalerArrayBase::Marshal(
         (_QWORD *)this + 11,
         (struct DirectComposition::CBatch **)a2,
         *((_DWORD *)this + 8),
         (_DWORD *)this + 4,
         64,
         635,
         636) )
  {
    return DirectComposition::CSceneNodeMarshaler::EmitSetTransformCommand(this, a2) != 0;
  }
  return v4;
}
