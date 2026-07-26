/*
 * XREFs of ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x1C01400BC
 * Callers:
 *     ?ClearKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W@Z @ 0x1C013F640 (-ClearKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W@Z.c)
 *     ?ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z @ 0x1C013F6D4 (-ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z.c)
 *     ?SetKnobStoreValue@KnobNamespace@@AEAAJPEB_W_K_N@Z @ 0x1C013FEC0 (-SetKnobStoreValue@KnobNamespace@@AEAAJPEB_W_K_N@Z.c)
 * Callees:
 *     ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x1C002B8D0 (-GetCurrentValue@KnobDescriptor@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ?CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z @ 0x1C0119FC0 (-CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z.c)
 *     ?ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C011A330 (-ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@.c)
 */

void __fastcall KnobNamespace::UpdateSingleKnob(
        KnobNamespace *this,
        struct KnobCollection *a2,
        struct KnobDescriptor *a3,
        struct KnobState *a4)
{
  __int64 CurrentValue; // rax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  char v9; // [rsp+40h] [rbp-18h]

  v9 = 0;
  v8 = 0LL;
  if ( (**(unsigned int (__fastcall ***)(struct KnobCollection *, __int64, __int128 *))a2)(a2, 1LL, &v8)
    || (unsigned int)KnobCollection::ReadKnobFromStore(a2, (struct KnobTransaction *)&v8, a3, a4) )
  {
    *(_QWORD *)a4 = a3->DefaultValue;
    *((_DWORD *)a4 + 4) = 1;
  }
  CurrentValue = KnobDescriptor::GetCurrentValue(a3);
  KnobCollection::CommitSingleKnob(a2, a3, a4, CurrentValue, 0);
  if ( *((_QWORD *)&v8 + 1) )
    ZwClose(*((HANDLE *)&v8 + 1));
  if ( (_QWORD)v8 )
    ZwClose((HANDLE)v8);
}
