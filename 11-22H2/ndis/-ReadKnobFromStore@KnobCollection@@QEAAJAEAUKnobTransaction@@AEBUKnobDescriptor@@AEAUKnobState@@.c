/*
 * XREFs of ?ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C011A330
 * Callers:
 *     ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x1C011A3F0 (-PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z.c)
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x1C01400BC (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 * Callees:
 *     ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x1C002B8D0 (-GetCurrentValue@KnobDescriptor@@QEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KnobCollection::ReadKnobFromStore(
        KnobCollection *this,
        struct KnobTransaction *a2,
        struct KnobDescriptor *a3,
        struct KnobState *a4)
{
  char *v5; // rbp
  unsigned __int64 CurrentValue; // rax
  KnobDescriptor *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r10
  int v12; // eax
  __int64 result; // rax
  unsigned __int64 v14; // rax

  v5 = (char *)a2 + 8;
  CurrentValue = KnobDescriptor::GetCurrentValue(a3);
  if ( *(_QWORD *)v10 == CurrentValue )
  {
    v12 = *(_DWORD *)(v10 + 12);
  }
  else
  {
    v14 = KnobDescriptor::GetCurrentValue(v9);
    *(_QWORD *)v10 = v14;
    v12 = 0;
  }
  *(_DWORD *)(v10 + 16) = v12;
  result = (*(__int64 (__fastcall **)(KnobCollection *, __int64))(*(_QWORD *)this + 24LL))(this, v11);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result != -1073741275 )
      return result;
    result = (*(__int64 (__fastcall **)(KnobCollection *, char *, struct KnobDescriptor *, struct KnobState *))(*(_QWORD *)this + 24LL))(
               this,
               v5,
               a3,
               a4);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != -1073741275 )
        return result;
      *(_QWORD *)a4 = a3->DefaultValue;
      *((_DWORD *)a4 + 4) = 1;
    }
    else
    {
      *((_DWORD *)a4 + 4) = 2;
    }
  }
  else
  {
    *((_DWORD *)a4 + 4) = 3;
  }
  return 0LL;
}
