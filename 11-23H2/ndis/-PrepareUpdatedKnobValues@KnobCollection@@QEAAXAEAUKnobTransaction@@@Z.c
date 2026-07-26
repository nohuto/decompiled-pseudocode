/*
 * XREFs of ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x1C011A3B0
 * Callers:
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1C011A02C (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 *     ?UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z @ 0x1C013FF84 (-UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x1C002BA60 (-GetCurrentValue@KnobDescriptor@@QEBA_KXZ.c)
 *     ?ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C011A2F0 (-ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@.c)
 */

void __fastcall KnobCollection::PrepareUpdatedKnobValues(KnobCollection *this, struct KnobTransaction *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v5; // rsi
  _DWORD *v6; // rbx
  KnobDescriptor *v7; // r14
  int KnobFromStore; // eax

  v2 = 0LL;
  if ( *((_QWORD *)this + 7) )
  {
    v5 = 0LL;
    v6 = (_DWORD *)((char *)this + 80);
    do
    {
      v7 = (KnobDescriptor *)(v5 + *((_QWORD *)this + 8));
      if ( v6[1] == 4 )
      {
        *v6 = 0;
      }
      else
      {
        KnobFromStore = KnobCollection::ReadKnobFromStore(
                          this,
                          a2,
                          (struct KnobDescriptor *)(v5 + *((_QWORD *)this + 8)),
                          (struct KnobState *)(v6 - 2));
        *v6 = KnobFromStore;
        if ( !KnobFromStore && *((_QWORD *)v6 - 1) != KnobDescriptor::GetCurrentValue(v7) )
          *v6 = 259;
      }
      ++v2;
      v6 += 6;
      v5 += 48LL;
    }
    while ( v2 < *((_QWORD *)this + 7) );
  }
}
