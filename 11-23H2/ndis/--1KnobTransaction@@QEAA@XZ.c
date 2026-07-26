/*
 * XREFs of ??1KnobTransaction@@QEAA@XZ @ 0x1C00BC0D4
 * Callers:
 *     ?ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z @ 0x1C013F6B4 (-ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z.c)
 *     ?UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z @ 0x1C013FF84 (-UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z.c)
 *     ?ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z @ 0x1C0140280 (-ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z.c)
 *     ?SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z @ 0x1C0140320 (-SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KnobTransaction::~KnobTransaction(KnobTransaction *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    ZwClose(v2);
  if ( *(_QWORD *)this )
    ZwClose(*(HANDLE *)this);
}
