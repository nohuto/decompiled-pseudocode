/*
 * XREFs of ??$QueryInterface@UIUnknown@@@IUnknown@@QEAAJPEAPEAU0@@Z @ 0x1800E94E4
 * Callers:
 *     ?AddBuffer@CPresentationManager@@QEAA_NPEAUIUnknown@@@Z @ 0x1800A733C (-AddBuffer@CPresentationManager@@QEAA_NPEAUIUnknown@@@Z.c)
 *     ?RemoveBuffer@CPresentationManager@@QEAAXPEAUIUnknown@@@Z @ 0x1800A75FC (-RemoveBuffer@CPresentationManager@@QEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IUnknown::QueryInterface<IUnknown>(__int64 (__fastcall ***a1)(_QWORD, GUID *, __int64), __int64 a2)
{
  return (**a1)(a1, &GUID_00000000_0000_0000_c000_000000000046, a2);
}
