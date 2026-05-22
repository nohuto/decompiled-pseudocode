/*
 * XREFs of ?Present@CSynchronizationContext11Driver@@UEAAJ_KU_LUID@@0PEAXAEAV?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@@Z @ 0x1801B1C90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAA_NXZ @ 0x18009B8C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil.c)
 *     ?DriverSanitizePresentBuffers@CSynchronizationContext11Driver@@AEAAXAEAV?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@@Z @ 0x1800A7EE8 (-DriverSanitizePresentBuffers@CSynchronizationContext11Driver@@AEAAXAEAV-$vector@PEAUIUnknown@@V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSynchronizationContext11Driver::Present(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char **a6)
{
  signed int v9; // eax
  unsigned int v10; // ebx
  signed int v11; // eax

  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 32LL))(*(_QWORD *)(a1 + 48), a3);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801EC470, 2u, v9, 0x35u, 0LL);
  }
  else
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CompositionTextures>::GetImpl'::`2'::impl) )
      CSynchronizationContext11Driver::DriverSanitizePresentBuffers(a1, a6);
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, char *, _DWORD))(**(_QWORD **)(a1 + 16) + 136LL))(
            *(_QWORD *)(a1 + 16),
            a5,
            a4,
            a2,
            *a6,
            (a6[1] - *a6) >> 3);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801EC470, 2u, v11, 0x44u, 0LL);
    }
    else if ( *(_BYTE *)(a1 + 64) )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 888LL))(*(_QWORD *)(a1 + 24));
    }
  }
  return v10;
}
