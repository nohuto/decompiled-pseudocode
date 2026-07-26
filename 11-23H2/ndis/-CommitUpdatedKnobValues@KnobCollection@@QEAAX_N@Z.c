/*
 * XREFs of ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x1C011A458
 * Callers:
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1C011A02C (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 *     ?UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z @ 0x1C013FF84 (-UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x1C002BA60 (-GetCurrentValue@KnobDescriptor@@QEBA_KXZ.c)
 *     ?CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z @ 0x1C0119F80 (-CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z.c)
 */

void __fastcall KnobCollection::CommitUpdatedKnobValues(KnobCollection *this, bool a2)
{
  unsigned __int64 v2; // rsi
  __int64 v5; // r14
  _DWORD *v6; // rbx
  __int64 CurrentValue; // rax
  struct KnobDescriptor *v8; // r10

  v2 = 0LL;
  if ( *((_QWORD *)this + 7) )
  {
    v5 = 0LL;
    v6 = (_DWORD *)((char *)this + 80);
    do
    {
      CurrentValue = KnobDescriptor::GetCurrentValue((KnobDescriptor *)(v5 + *((_QWORD *)this + 8)));
      if ( *v6 )
      {
        if ( *((_QWORD *)v6 - 1) == CurrentValue )
        {
          *v6 = 0;
        }
        else if ( *v6 == 259 )
        {
          KnobCollection::CommitSingleKnob(this, v8, (struct KnobState *)(v6 - 2), CurrentValue, a2);
        }
      }
      else
      {
        v6[1] = v6[2];
      }
      ++v2;
      v6 += 6;
      v5 += 48LL;
    }
    while ( v2 < *((_QWORD *)this + 7) );
  }
}
