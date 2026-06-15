/*
 * XREFs of ??$try_com_query_to@UIAPOWrapperSrv@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAPOWrapperSrv@@@Z @ 0x18002AF20
 * Callers:
 *     ?InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180029910 (-InitializeAPOs@CAudioStream@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800475B0 (-InitializeAPOs@CBaseStreamGroupProxy@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall wil::try_com_query_to<IAPOWrapperSrv,IAudioProcessingObject * &>(_QWORD *a1, __int64 a2)
{
  return (**(int (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_0421e7a2_5d3d_4d19_9886_e8bdafa5822c, a2) >= 0;
}
