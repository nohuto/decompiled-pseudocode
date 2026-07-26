/*
 * XREFs of ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x1C0120244
 * Callers:
 *     ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C01200A0 (-ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 *     ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x1C013FDE8 (-SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z.c)
 *     ?SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z @ 0x1C0140340 (-SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z.c)
 *     ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C01405D0 (-ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_Si @ 0x1C0060A70 (WPP_RECORDER_SF_Si.c)
 *     WPP_RECORDER_SF_Sii @ 0x1C00BC0F4 (WPP_RECORDER_SF_Sii.c)
 *     WPP_RECORDER_SF_Siii @ 0x1C00BC430 (WPP_RECORDER_SF_Siii.c)
 */

__int64 __fastcall KnobCollection::ValidateKnobValue(
        KnobCollection *this,
        unsigned __int64 *a2,
        const struct KnobDescriptor *a3)
{
  ConfigKnobFlag Flags; // eax
  unsigned __int64 MaximumValue; // rdx
  unsigned __int8 (__fastcall *v7)(_QWORD, const struct KnobDescriptor *, unsigned __int64 *); // rax
  unsigned __int64 MinimumValue; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-38h]

  Flags = a3->Flags;
  if ( (Flags & 2) != 0 )
  {
    v10 = *a2;
    if ( v10 < 2 )
      goto LABEL_4;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Si(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_069cc08c20e532709d80f678bd350850_Traceguids,
        a3->Name,
        v10);
    return 3221225621LL;
  }
  if ( (Flags & 4) == 0 && *a2 > 0xFFFFFFFF )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Si(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0xCu,
        (struct _GUID *)&WPP_069cc08c20e532709d80f678bd350850_Traceguids,
        a3->Name,
        *a2);
    return 3221225621LL;
  }
LABEL_4:
  MaximumValue = a3->MaximumValue;
  if ( *(_OWORD *)&a3->MinimumValue != 0LL )
  {
    MinimumValue = a3->MinimumValue;
    if ( *a2 < MinimumValue || *a2 > MaximumValue )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Siii(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          MaximumValue,
          MinimumValue,
          (__int64)this,
          v13,
          a3->Name);
      return 3221227787LL;
    }
  }
  if ( (Flags & 0x40) != 0 && (!*a2 || ((*a2 - 1) & *a2) != 0) )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Si(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0xEu,
        (struct _GUID *)&WPP_069cc08c20e532709d80f678bd350850_Traceguids,
        a3->Name,
        *a2);
    return 3221227787LL;
  }
  v7 = (unsigned __int8 (__fastcall *)(_QWORD, const struct KnobDescriptor *, unsigned __int64 *))*((_QWORD *)this + 4);
  if ( !v7 )
    return 0LL;
  v11 = *a2;
  if ( v7(*((_QWORD *)this + 6), a3, a2) )
  {
    if ( v11 != *a2 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Sii(*((_QWORD *)WPP_GLOBAL_Control + 8), 4u, v12, 0x10u, v13, a3->Name);
    return 0LL;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Si(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      3u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_069cc08c20e532709d80f678bd350850_Traceguids,
      a3->Name,
      v11);
  return 3221227787LL;
}
