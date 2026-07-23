/*
 * XREFs of ExRundownCompleted @ 0x1402095E0
 * Callers:
 *     sub_140208D94 @ 0x140208D94 (sub_140208D94.c)
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     sub_1403A78F0 @ 0x1403A78F0 (sub_1403A78F0.c)
 *     sub_1405254E0 @ 0x1405254E0 (sub_1405254E0.c)
 *     sub_14055161C @ 0x14055161C (sub_14055161C.c)
 *     PsUnregisterSyscallProvider @ 0x140659570 (PsUnregisterSyscallProvider.c)
 *     sub_140681FE4 @ 0x140681FE4 (sub_140681FE4.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x140910120 (CmUnregisterMachineHiveLoadedNotification.c)
 *     sub_14091CA34 @ 0x14091CA34 (sub_14091CA34.c)
 *     sub_14091CA5C @ 0x14091CA5C (sub_14091CA5C.c)
 *     sub_140922CE4 @ 0x140922CE4 (sub_140922CE4.c)
 *     sub_1409D82D4 @ 0x1409D82D4 (sub_1409D82D4.c)
 *     sub_1409F39DC @ 0x1409F39DC (sub_1409F39DC.c)
 *     sub_140B23A48 @ 0x140B23A48 (sub_140B23A48.c)
 *     sub_140B2FABC @ 0x140B2FABC (sub_140B2FABC.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
