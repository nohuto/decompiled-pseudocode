/*
 * XREFs of ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x1C0113E50
 * Callers:
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1C0113CB4 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 *     ?UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z @ 0x1C01342D0 (-UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x1C00310D4 (-GetCurrentValue@KnobDescriptor@@QEBA_KXZ.c)
 *     ?ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C0113EFC (-ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@.c)
 */

void __fastcall KnobCollection::PrepareUpdatedKnobValues(KnobCollection *this, struct KnobTransaction *a2)
{
  unsigned __int64 v2; // rsi
  __int64 v5; // r14
  int *v6; // rbx
  KnobDescriptor *v7; // rbp
  int KnobFromStore; // eax

  v2 = 0LL;
  if ( *((_QWORD *)this + 7) )
  {
    v5 = 0LL;
    v6 = (int *)((char *)this + 80);
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
                          (const struct KnobDescriptor *)(v5 + *((_QWORD *)this + 8)),
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
