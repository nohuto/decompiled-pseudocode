/*
 * XREFs of StorExtBuildScatterGatherList @ 0x1C00428A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall StorExtBuildScatterGatherList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        int a9)
{
  _DWORD *Adapter; // rax

  Adapter = RaidpPortGetAdapter(a1);
  return !Adapter
      || (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, __int64, __int64, char, __int64, int))(*(_QWORD *)(*((_QWORD *)Adapter + 94) + 8LL) + 112LL))(
           *((_QWORD *)Adapter + 94),
           *((_QWORD *)Adapter + 1),
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9) == -1073741789;
}
