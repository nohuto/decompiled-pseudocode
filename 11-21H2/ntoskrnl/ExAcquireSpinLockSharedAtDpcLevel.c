/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0
 * Callers:
 *     sub_14020E6EC @ 0x14020E6EC (sub_14020E6EC.c)
 *     sub_1402165BC @ 0x1402165BC (sub_1402165BC.c)
 *     sub_140218310 @ 0x140218310 (sub_140218310.c)
 *     sub_1402189A0 @ 0x1402189A0 (sub_1402189A0.c)
 *     sub_140234504 @ 0x140234504 (sub_140234504.c)
 *     sub_1402358D4 @ 0x1402358D4 (sub_1402358D4.c)
 *     sub_1402395A0 @ 0x1402395A0 (sub_1402395A0.c)
 *     sub_140256EAC @ 0x140256EAC (sub_140256EAC.c)
 *     sub_140257BB4 @ 0x140257BB4 (sub_140257BB4.c)
 *     sub_140268998 @ 0x140268998 (sub_140268998.c)
 *     sub_14026EEA8 @ 0x14026EEA8 (sub_14026EEA8.c)
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_1402A1AEC @ 0x1402A1AEC (sub_1402A1AEC.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402D8304 @ 0x1402D8304 (sub_1402D8304.c)
 *     sub_1402DC098 @ 0x1402DC098 (sub_1402DC098.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1402EE104 @ 0x1402EE104 (sub_1402EE104.c)
 *     sub_1402F0604 @ 0x1402F0604 (sub_1402F0604.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_1403122F0 @ 0x1403122F0 (sub_1403122F0.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 *     sub_140339D70 @ 0x140339D70 (sub_140339D70.c)
 *     sub_14033AC90 @ 0x14033AC90 (sub_14033AC90.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     sub_14034F230 @ 0x14034F230 (sub_14034F230.c)
 *     sub_1403536F0 @ 0x1403536F0 (sub_1403536F0.c)
 *     sub_140369C50 @ 0x140369C50 (sub_140369C50.c)
 *     sub_140389E40 @ 0x140389E40 (sub_140389E40.c)
 *     sub_14045F804 @ 0x14045F804 (sub_14045F804.c)
 *     sub_140572490 @ 0x140572490 (sub_140572490.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     sub_14057D168 @ 0x14057D168 (sub_14057D168.c)
 *     sub_1405AF30C @ 0x1405AF30C (sub_1405AF30C.c)
 *     sub_1405B1568 @ 0x1405B1568 (sub_1405B1568.c)
 *     sub_1405B350C @ 0x1405B350C (sub_1405B350C.c)
 *     sub_1405B3654 @ 0x1405B3654 (sub_1405B3654.c)
 *     sub_1405E439C @ 0x1405E439C (sub_1405E439C.c)
 *     sub_1405E7B68 @ 0x1405E7B68 (sub_1405E7B68.c)
 *     sub_140601F88 @ 0x140601F88 (sub_140601F88.c)
 *     sub_14062A198 @ 0x14062A198 (sub_14062A198.c)
 *     sub_140A994C4 @ 0x140A994C4 (sub_140A994C4.c)
 * Callees:
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v4; // rcx
  signed __int32 v5; // ett
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax

  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    sub_140461B20(SpinLock, -1);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v4 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v4 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v7 = *(_DWORD *)(v4 + 24);
        *(_DWORD *)(v4 + 24) = v7 + 1;
        if ( v7 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)SpinLock);
    v5 = *SpinLock & 0x7FFFFFFF;
    if ( v5 != _InterlockedCompareExchange(SpinLock, v5 + 1, v5) )
    {
      v6 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v6 && *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v8 = *(_DWORD *)(v6 + 24) - 1;
        *(_DWORD *)(v6 + 24) = v8;
        if ( !v8 )
          sub_140418E4C(CurrentPrcb);
      }
      LOBYTE(v1) = -1;
      sub_140366A20(SpinLock, v1);
    }
  }
}
