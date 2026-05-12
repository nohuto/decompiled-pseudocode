/*
 * XREFs of StorExtBuildScatterGatherList @ 0x1C0045480
 * Callers:
 *     <none>
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StorExtBuildScatterGatherList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        int a9)
{
  _DWORD *Adapter; // rax
  int v12; // r9d
  unsigned int v13; // ebx

  Adapter = RaidpPortGetAdapter(a1);
  v13 = 0;
  if ( !Adapter )
    return 1LL;
  LOBYTE(v13) = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int, __int64, __int64, char, __int64, int))(*(_QWORD *)(*((_QWORD *)Adapter + 95) + 8LL) + 112LL))(
                  *((_QWORD *)Adapter + 95),
                  *((_QWORD *)Adapter + 1),
                  a2,
                  a3,
                  v12,
                  a5,
                  a6,
                  a7,
                  a8,
                  a9) == -1073741789;
  return v13;
}
