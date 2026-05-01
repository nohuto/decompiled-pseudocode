/*
 * XREFs of ??$As@UILampArrayPrivate@Internal@Lights@Devices@Windows@@@?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UILampArrayPrivate@Internal@Lights@Devices@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180560C04
 * Callers:
 *     ?SetExclusiveLockState@AssistantLightBlock@Lighting@TwinUI@@UEAAX_N@Z @ 0x180560E00 (-SetExclusiveLockState@AssistantLightBlock@Lighting@TwinUI@@UEAAX_N@Z.c)
 *     ?SetExclusiveLockState@AssistantLightStrip@Lighting@TwinUI@@UEAAX_N@Z @ 0x180561730 (-SetExclusiveLockState@AssistantLightStrip@Lighting@TwinUI@@UEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray>::As<Windows::Devices::Lights::Internal::ILampArrayPrivate>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v4(v3, &GUID_4d1e80f9_fa8e_4203_8cb0_e91c0108713d, a2);
}
