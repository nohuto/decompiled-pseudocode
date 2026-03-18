/*
 * XREFs of ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C001125C
 * Callers:
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C0010960 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01A85C4 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01B0B38 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C018A32C (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

void __fastcall ProtectableFromChange::OnModifyingActionCompletion(ProtectableFromChange *this, unsigned __int8 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rax

  v2 = a2;
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 10) )
    WdLogSingleEntry0(1LL);
  v4 = *((_QWORD *)this + 11);
  if ( *(_QWORD *)(v4 + 8 * v2) != 255LL )
  {
    if ( v2 >= *((_QWORD *)this + 10) )
    {
      WdLogSingleEntry0(1LL);
      v4 = *((_QWORD *)this + 11);
    }
    --*(_QWORD *)(v4 + 8 * v2);
  }
  if ( v2 >= *((_QWORD *)this + 10) )
    WdLogSingleEntry0(1LL);
  if ( !*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v2) )
    ProtectableFromChange::DisallowModifyingAction(this, v2);
}
