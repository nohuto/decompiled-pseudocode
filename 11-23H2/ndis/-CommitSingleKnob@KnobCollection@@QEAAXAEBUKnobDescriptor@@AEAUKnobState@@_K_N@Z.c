/*
 * XREFs of ?CommitSingleKnob@KnobCollection@@QEAAXAEBUKnobDescriptor@@AEAUKnobState@@_K_N@Z @ 0x1C0119F80
 * Callers:
 *     ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x1C011A458 (-CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z.c)
 *     ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x1C013FDC8 (-SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z.c)
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x1C014009C (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 * Callees:
 *     ?SetCurrentValue@KnobDescriptor@@QEBAX_K@Z @ 0x1C002BA38 (-SetCurrentValue@KnobDescriptor@@QEBAX_K@Z.c)
 *     WPP_RECORDER_SF_SiiD @ 0x1C002BA88 (WPP_RECORDER_SF_SiiD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_Sii @ 0x1C00BC114 (WPP_RECORDER_SF_Sii.c)
 *     WPP_RECORDER_SF_Siid @ 0x1C00BC29C (WPP_RECORDER_SF_Siid_ea_1C00BC29C.c)
 */

void __fastcall KnobCollection::CommitSingleKnob(
        KnobCollection *this,
        struct KnobDescriptor *a2,
        struct KnobState *a3,
        __int64 a4,
        bool a5)
{
  __int64 (__fastcall *v7)(_QWORD, struct KnobDescriptor *, _QWORD); // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // ecx
  int v13; // [rsp+20h] [rbp-38h]

  if ( (a2->Flags & 0x20) == 0 && !a5 )
  {
    *((_DWORD *)a3 + 2) = -1073741102;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Sii(*((_QWORD *)WPP_GLOBAL_Control + 8), 3u, (__int64)a3, 0x11u, v13, a2->Name);
    return;
  }
  v7 = (__int64 (__fastcall *)(_QWORD, struct KnobDescriptor *, _QWORD))*((_QWORD *)this + 5);
  if ( !v7 )
  {
    KnobDescriptor::SetCurrentValue(a2, *(_QWORD *)a3);
    *(_DWORD *)(v9 + 8) = 0;
    goto LABEL_5;
  }
  v11 = v7(*((_QWORD *)this + 6), a2, *(_QWORD *)a3);
  v12 = v11;
  if ( v11 == 255 )
    goto LABEL_15;
  if ( !v11 )
  {
    KnobDescriptor::SetCurrentValue(a2, *(_QWORD *)a3);
LABEL_15:
    v12 = 0;
  }
  *((_DWORD *)a3 + 2) = v12;
  if ( !v12 )
  {
LABEL_5:
    *((_DWORD *)a3 + 3) = *((_DWORD *)a3 + 4);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_SiiD(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v9, v10, v13, a2->Name);
    return;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Siid(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v9, v10, v13, a2->Name);
}
