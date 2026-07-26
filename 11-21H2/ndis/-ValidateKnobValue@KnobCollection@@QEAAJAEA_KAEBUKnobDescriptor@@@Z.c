/*
 * XREFs of ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x1C0113A50
 * Callers:
 *     ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C01138B0 (-ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 *     ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x1C0134114 (-SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z.c)
 *     ?SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z @ 0x1C0134600 (-SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z.c)
 *     ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C0134860 (-ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_Si @ 0x1C005B820 (WPP_RECORDER_SF_Si.c)
 *     WPP_RECORDER_SF_Sii @ 0x1C00B7044 (WPP_RECORDER_SF_Sii.c)
 *     WPP_RECORDER_SF_Siii @ 0x1C00B7380 (WPP_RECORDER_SF_Siii.c)
 */

__int64 __fastcall KnobCollection::ValidateKnobValue(
        KnobCollection *this,
        unsigned __int64 *a2,
        const struct KnobDescriptor *a3)
{
  ConfigKnobFlag Flags; // eax
  unsigned __int64 MaximumValue; // rcx
  unsigned __int8 (__fastcall *v8)(_QWORD, const struct KnobDescriptor *, unsigned __int64 *); // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 MinimumValue; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // r8
  int v15; // [rsp+20h] [rbp-38h]

  Flags = a3->Flags;
  if ( (Flags & 2) != 0 )
  {
    v12 = *a2;
    if ( v12 < 2 )
      goto LABEL_4;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Si(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        3u,
        1u,
        0xBu,
        (struct _GUID *)&WPP_069cc08c20e532709d80f678bd350850_Traceguids,
        a3->Name,
        v12);
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
    v10 = *a2;
    MinimumValue = a3->MinimumValue;
    if ( *a2 < MinimumValue || v10 > MaximumValue )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Siii(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, MinimumValue, (__int64)this, v15, a3->Name);
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
  v8 = (unsigned __int8 (__fastcall *)(_QWORD, const struct KnobDescriptor *, unsigned __int64 *))*((_QWORD *)this + 4);
  if ( !v8 )
    return 0LL;
  v13 = *a2;
  if ( v8(*((_QWORD *)this + 6), a3, a2) )
  {
    if ( v13 != *a2 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Sii(*((_QWORD *)WPP_GLOBAL_Control + 8), 4u, v14, 0x10u, v15, a3->Name);
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
      v13);
  return 3221227787LL;
}
