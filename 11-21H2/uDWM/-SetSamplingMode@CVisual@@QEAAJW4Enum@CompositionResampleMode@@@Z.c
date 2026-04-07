/*
 * XREFs of ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18005C44C
 * Callers:
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18005C384 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x1800BC934 (-OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetSamplingMode(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 16LL)
                                                         + 1040LL))(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 24LL),
         a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x200u);
  return v3;
}
